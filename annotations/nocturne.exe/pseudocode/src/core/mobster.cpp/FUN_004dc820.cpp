// Name: core_mobster.cpp_FUN_004dc820
// Address: 004dc820
// Address Range: [[004dc820, 004dc918]]
// Convention: unknown
// Signature: int core_mobster_cpp_FUN_004dc820(int param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_mobster_cpp_FUN_004dc820(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  int iVar2;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar2 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_1c,_DAT_01ccdba8);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde8) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_28,_DAT_01ccdbcc);
    if (param_2 + 1 != pCVar1) {
      param_2[1].x = pCVar1->x;
      param_2[1].y = pCVar1->y;
      param_2[1].z = pCVar1->z;
    }
    iVar2 = 2;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdec) * 4) == 0) {
    return iVar2;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_34,_DAT_01ccdbd4);
  param_2 = param_2 + iVar2;
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return iVar2 + 1;
}
