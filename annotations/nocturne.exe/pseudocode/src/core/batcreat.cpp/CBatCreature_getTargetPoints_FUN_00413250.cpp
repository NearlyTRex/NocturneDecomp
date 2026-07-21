// Name: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00413250
// Address: 00413250
// Address Range: [[00413250, 0041329f]]
// Convention: unknown
// Signature: undefined4 core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00413250(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00413250(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_14 [12];
  
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_14,DAT_0076459c);
  if (param_2 == puVar1) {
    return 1;
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return 1;
}
