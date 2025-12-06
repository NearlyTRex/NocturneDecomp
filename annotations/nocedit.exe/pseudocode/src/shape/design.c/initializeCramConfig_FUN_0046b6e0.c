// Name: shape_design.c_initializeCramConfig_FUN_0046b6e0
// Address: 0046b6e0
// Address Range: [[0046b6e0, 0046b760]]
// Convention: __cdecl
// Signature: void shape_design.c_initializeCramConfig_FUN_0046b6e0(SCramConfig * cram_config)

#include "nocturne.h"

void __cdecl shape_design_c_initializeCramConfig_FUN_0046b6e0(SCramConfig *cram_config)

{
  crt_memory_c_memset_FUN_005fde40(cram_config,0,0x74);
  cram_config->filename[0] = '\0';
  cram_config->initial_value = 0;
  cram_config->algorithm_mode = 2;
  cram_config->coverage_threshold = 0x5f;
  cram_config->enable_optimization = 1;
  cram_config->enable_gap_filling = 1;
  cram_config->enable_rotation = 1;
  cram_config->enable_flipping = 1;
  cram_config->enable_scaling = 1;
  cram_config->final_mode = 0;
  return;
}
