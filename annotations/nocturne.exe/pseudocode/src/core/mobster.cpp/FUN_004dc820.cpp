// Name: core_mobster.cpp_FUN_004dc820
// Address: 004dc820
// Address Range: [[004dc820, 004dc918]]
// Convention: unknown
// Signature: int core_mobster_cpp_FUN_004dc820(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_mobster_cpp_FUN_004dc820(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  byte local_34 [12];
  byte local_28 [12];
  byte local_1c [12];
  
  iVar2 = 1;
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_1c,_DAT_01ccdba8);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde8) * 4) != 0) {
    puVar1 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (param_1 + 0x150,local_28,_DAT_01ccdbcc);
    if (param_2 + 3 != puVar1) {
      param_2[3] = *puVar1;
      param_2[4] = puVar1[1];
      param_2[5] = puVar1[2];
    }
    iVar2 = 2;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdec) * 4) == 0) {
    return iVar2;
  }
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_34,_DAT_01ccdbd4);
  param_2 = param_2 + iVar2 * 3;
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  return iVar2 + 1;
}
