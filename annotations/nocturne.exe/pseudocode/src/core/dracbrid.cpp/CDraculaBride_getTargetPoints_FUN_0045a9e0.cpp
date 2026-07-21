// Name: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0
// Address: 0045a9e0
// Address Range: [[0045a9e0, 0045aaa1]]
// Convention: unknown
// Signature: undefined4 core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_30 [12];
  byte local_24 [12];
  byte local_18 [12];
  
  if (*(int *)(param_1 + 0xbdb0) != 0) {
    return 0;
  }
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_24,_DAT_01b4d260);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_18,_DAT_01b4d274);
  if (param_2 + 3 != puVar1) {
    param_2[3] = *puVar1;
    param_2[4] = puVar1[1];
    param_2[5] = puVar1[2];
  }
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_30,_DAT_01b4d27c);
  if (param_2 + 6 != puVar1) {
    param_2[6] = *puVar1;
    param_2[7] = puVar1[1];
    param_2[8] = puVar1[2];
  }
  return 3;
}
