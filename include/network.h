/**
 * @file network.h
 * @brief
 * @author Nathan Zhou
 * @date 2018-12-15
 * @bug No known bugs.
 */

#ifndef ABC_PLUS_NETWORK_H
#define ABC_PLUS_NETWORK_H

#include <abc_api.h>
#include <string>
#include <vector>

namespace abc_plus {
    //---------------------------------------------------------------------------
    // Type Alias
    //---------------------------------------------------------------------------
    using NtkPtr = abc::Abc_Ntk_t *;
    using ObjPtr = abc::Abc_Obj_t *;

    //---------------------------------------------------------------------------
    // Network Functions
    //---------------------------------------------------------------------------
    NtkPtr ReadBlif(const std::string &i_file);

    NtkPtr WriteBlif(const std::string &o_file);

    NtkPtr Duplicate(NtkPtr ntk);

    NtkPtr DuplicateDFS(NtkPtr ntk);

    std::vector<ObjPtr> GetObjs(NtkPtr ntk);

    std::vector<ObjPtr> GetPIs(NtkPtr ntk);

    std::vector<ObjPtr> GetPOs(NtkPtr ntk);

    ObjPtr GetObjbyID(NtkPtr ntk, int id);

    ObjPtr GetPIbyName(NtkPtr ntk, std::string name);

    ObjPtr GetNodebyName(NtkPtr ntk, std::string name);

    //---------------------------------------------------------------------------
    // Object Functions
    //---------------------------------------------------------------------------
    bool IsPI(ObjPtr obj);

    bool IsPO(ObjPtr obj);

    bool IsPONode(ObjPtr obj);

    unsigned int GetID(ObjPtr obj);

    NtkPtr GetHostNetwork(ObjPtr obj);

    ObjPtr GetFanin0(ObjPtr obj);

    ObjPtr GetFanin1(ObjPtr obj);

    std::vector<ObjPtr> GetFanins(ObjPtr obj);

    std::vector<ObjPtr> GetFanouts(ObjPtr obj);

    void ReplaceObj(ObjPtr obj_old, ObjPtr obj_new);

    void RecoverObj(ObjPtr obj, ObjPtr obj_bak);

    ObjPtr CreateInv(ObjPtr fan_in);

    void DeleteObj(ObjPtr obj);
}

#endif
