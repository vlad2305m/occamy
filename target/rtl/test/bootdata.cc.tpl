// Copyright 2021 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

#include <tb_lib.hh>

namespace sim {

const BootData BOOTDATA = {.boot_addr = ${hex(cfg['clusters'][0]['boot_addr'])},
                           .core_count = ${cfg['clusters'][0]['nr_cores']},
                           .hartid_base = ${cfg['clusters'][0]['cluster_base_hartid']},
                           .tcdm_start = ${hex(cfg['clusters'][0]['cluster_base_addr'])},
                           .tcdm_size = ${hex(cfg['clusters'][0]['tcdm']['size'] * 1024)},
                           .tcdm_offset = ${hex(cfg['clusters'][0]['cluster_base_offset'])},
                           .global_mem_start = ${hex(cfg['dram']['address'])},
                           .global_mem_end = ${hex(cfg['dram']['address'] + cfg['dram']['length'])},
                           .cluster_count = ${cfg['s1_quadrant']['nr_clusters']},
                           .s1_quadrant_count = ${cfg['nr_s1_quadrant']},
                           .clint_base = ${hex(cfg['peripherals']['clint']['address'])}};

}  // namespace sim