// Name: FUN_0043c6a0
// Address: 0043c6a0
// Address Range: [[0043c6a0, 0043c6ee]]
// Convention: unknown
// Signature: undefined4 FUN_0043c6a0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_0043c6a0(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_10 [12];
  
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_10,*(uint *)(param_1 + 0xbd24));
  if (param_2 == puVar1) {
    return 1;
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return 1;
}
