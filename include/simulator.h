/**
 * @file simulator.h
 * @brief
 * @author Nathan Zhou
 * @date 2018-12-16
 * @bug No known bugs.
 */

#ifndef ABC_PLUS_SIMULATOR_H
#define ABC_PLUS_SIMULATOR_H

#include <abc_api.h>
#include <network.h>
#include <utils.h>

namespace abc_plus {
    double SimER(NtkPtr origin, NtkPtr approx, bool show_progress_bar = false, int sim_time = 100000);
}


#endif
