// Name: core_beast.cpp_FUN_004151e0
// Address: 004151e0
// Address Range: [[004151e0, 00415228]]
// Convention: unknown
// Signature: undefined4 core_beast_cpp_FUN_004151e0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_beast_cpp_FUN_004151e0(int param_1,uint *param_2)

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
