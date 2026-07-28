// Name: core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_00419fc0
// Address: 00419fc0
// Address Range: [[00419fc0, 0041a0e3]]
// Convention: unknown
// Signature: undefined4 core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_00419fc0(int param_1,CVector3f *param_2)

#include "nocturne.h"

uint core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_00419fc0(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (*(int *)(param_1 + 0xc344) != 0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_30,DAT_00764794);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_24,DAT_007647a8);
  if (param_2 + 1 != pCVar1) {
    param_2[1].x = pCVar1->x;
    param_2[1].y = pCVar1->y;
    param_2[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_18,DAT_007647ac);
  if (param_2 + 2 != pCVar1) {
    param_2[2].x = pCVar1->x;
    param_2[2].y = pCVar1->y;
    param_2[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_3c,DAT_007647b8);
  if (param_2 + 3 != pCVar1) {
    param_2[3].x = pCVar1->x;
    param_2[3].y = pCVar1->y;
    param_2[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_48,DAT_007647bc);
  if (param_2 + 4 != pCVar1) {
    param_2[4].x = pCVar1->x;
    param_2[4].y = pCVar1->y;
    param_2[4].z = pCVar1->z;
  }
  return 5;
}
