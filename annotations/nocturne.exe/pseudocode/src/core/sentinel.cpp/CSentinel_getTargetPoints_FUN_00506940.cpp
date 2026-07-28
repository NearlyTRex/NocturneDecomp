// Name: core_sentinel.cpp_CSentinel_getTargetPoints_FUN_00506940
// Address: 00506940
// Address Range: [[00506940, 00506a5d]]
// Convention: unknown
// Signature: undefined4 core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00506940(int param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00506940(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_34,_DAT_01e57218);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_28,_DAT_01e5722c);
  if (param_2 + 1 != pCVar1) {
    param_2[1].x = pCVar1->x;
    param_2[1].y = pCVar1->y;
    param_2[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_1c,_DAT_01e57230);
  if (param_2 + 2 != pCVar1) {
    param_2[2].x = pCVar1->x;
    param_2[2].y = pCVar1->y;
    param_2[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_40,_DAT_01e5723c);
  if (param_2 + 3 != pCVar1) {
    param_2[3].x = pCVar1->x;
    param_2[3].y = pCVar1->y;
    param_2[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_4c,_DAT_01e57244);
  if (param_2 + 4 == pCVar1) {
    return 5;
  }
  param_2[4].x = pCVar1->x;
  param_2[4].y = pCVar1->y;
  param_2[4].z = pCVar1->z;
  return 5;
}
