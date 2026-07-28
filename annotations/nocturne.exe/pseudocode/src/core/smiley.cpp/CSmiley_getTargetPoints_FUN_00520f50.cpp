// Name: core_smiley.cpp_CSmiley_getTargetPoints_FUN_00520f50
// Address: 00520f50
// Address Range: [[00520f50, 005210ad]]
// Convention: unknown
// Signature: undefined4 core_smiley_cpp_CSmiley_getTargetPoints_FUN_00520f50(int param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_smiley_cpp_CSmiley_getTargetPoints_FUN_00520f50(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (*(int *)(param_1 + 0xbd64) == 3) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_30,_DAT_02da8a74);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_24,_DAT_02da8a88);
  if (param_2 + 1 != pCVar1) {
    param_2[1].x = pCVar1->x;
    param_2[1].y = pCVar1->y;
    param_2[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_48,_DAT_02da8a8c);
  if (param_2 + 2 != pCVar1) {
    param_2[2].x = pCVar1->x;
    param_2[2].y = pCVar1->y;
    param_2[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_3c,_DAT_02da8a98);
  if (param_2 + 3 != pCVar1) {
    param_2[3].x = pCVar1->x;
    param_2[3].y = pCVar1->y;
    param_2[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_18,_DAT_02da8aa0);
  if (param_2 + 4 != pCVar1) {
    param_2[4].x = pCVar1->x;
    param_2[4].y = pCVar1->y;
    param_2[4].z = pCVar1->z;
  }
  return 5;
}
