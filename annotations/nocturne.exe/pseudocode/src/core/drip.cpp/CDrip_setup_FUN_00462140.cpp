// Name: core_drip.cpp_CDrip_setup_FUN_00462140
// Address: 00462140
// Address Range: [[00462140, 004621c9]]
// Convention: unknown
// Signature: void core_drip_cpp_CDrip_setup_FUN_00462140(int param_1)

#include "nocturne.h"

void core_drip_cpp_CDrip_setup_FUN_00462140(int param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  *(uint *)(param_1 + 0x2e4) = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x2f0);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2f4);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x2f8);
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (*(uint *)(param_1 + 0x2d8),*(uint *)(param_1 + 0x2dc));
  *(uint *)(param_1 + 0x2d4) = uVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (0x1b7b330,"stalrock.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(0x1b7b330);
  *(uint *)(param_1 + 0x330) = 0;
  return;
}
