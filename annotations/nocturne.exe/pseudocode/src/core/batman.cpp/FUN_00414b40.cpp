// Name: core_batman.cpp_FUN_00414b40
// Address: 00414b40
// Address Range: [[00414b40, 00414c38]]
// Convention: unknown
// Signature: int core_batman_cpp_FUN_00414b40(int param_1,CVector3f *param_2)

#include "nocturne.h"

int core_batman_cpp_FUN_00414b40(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  int iVar2;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar2 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_1c,DAT_00764608);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbda0) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_28,DAT_0076462c);
    if (param_2 + 1 != pCVar1) {
      param_2[1].x = pCVar1->x;
      param_2[1].y = pCVar1->y;
      param_2[1].z = pCVar1->z;
    }
    iVar2 = 2;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd8c) * 4) == 0) {
    return iVar2;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_34,DAT_00764634);
  param_2 = param_2 + iVar2;
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return iVar2 + 1;
}
