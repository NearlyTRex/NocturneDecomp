// Name: core_bride.cpp_CBride_getTargetPoints_FUN_00420e20
// Address: 00420e20
// Address Range: [[00420e20, 00420eae]]
// Convention: unknown
// Signature: undefined4 core_bride_cpp_CBride_getTargetPoints_FUN_00420e20(int param_1,CVector3f *param_2)

#include "nocturne.h"

uint core_bride_cpp_CBride_getTargetPoints_FUN_00420e20(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (*(int *)(param_1 + *(int *)(param_1 + 0xbd44) * 4 + 0x2290) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_10,DAT_00764b2c);
    if (param_2 != pCVar1) {
      param_2->x = pCVar1->x;
      param_2->y = pCVar1->y;
      param_2->z = pCVar1->z;
    }
    return 1;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_1c,DAT_00764b50);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return 1;
}
