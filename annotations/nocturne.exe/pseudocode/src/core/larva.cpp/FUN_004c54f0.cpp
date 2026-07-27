// Name: core_larva.cpp_FUN_004c54f0
// Address: 004c54f0
// Address Range: [[004c54f0, 004c5538]]
// Convention: unknown
// Signature: undefined4 core_larva_cpp_FUN_004c54f0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_larva_cpp_FUN_004c54f0(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_10 [12];
  
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_10,0);
  if (param_2 == puVar1) {
    return 1;
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return 1;
}
