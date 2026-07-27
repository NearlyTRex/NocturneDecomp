// Name: core_batman.cpp_FUN_00414b40
// Address: 00414b40
// Address Range: [[00414b40, 00414c38]]
// Convention: unknown
// Signature: int core_batman_cpp_FUN_00414b40(int param_1,undefined4 *param_2)

#include "nocturne.h"

int core_batman_cpp_FUN_00414b40(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  byte local_34 [12];
  byte local_28 [12];
  byte local_1c [12];
  
  iVar2 = 1;
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_1c,DAT_00764608);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbda0) * 4) != 0) {
    puVar1 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (param_1 + 0x150,local_28,DAT_0076462c);
    if (param_2 + 3 != puVar1) {
      param_2[3] = *puVar1;
      param_2[4] = puVar1[1];
      param_2[5] = puVar1[2];
    }
    iVar2 = 2;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd8c) * 4) == 0) {
    return iVar2;
  }
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_34,DAT_00764634);
  param_2 = param_2 + iVar2 * 3;
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  return iVar2 + 1;
}
