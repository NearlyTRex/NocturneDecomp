// Name: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004b98f0
// Address: 004b98f0
// Address Range: [[004b98f0, 004b99aa]]
// Convention: unknown
// Signature: undefined4 core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004b98f0(int param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004b98f0(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_28,_DAT_01cae1e0);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_1c,_DAT_01cae204);
  if (param_2 + 1 != pCVar1) {
    param_2[1].x = pCVar1->x;
    param_2[1].y = pCVar1->y;
    param_2[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_34,_DAT_01cae20c);
  if (param_2 + 2 == pCVar1) {
    return 3;
  }
  param_2[2].x = pCVar1->x;
  param_2[2].y = pCVar1->y;
  param_2[2].z = pCVar1->z;
  return 3;
}
