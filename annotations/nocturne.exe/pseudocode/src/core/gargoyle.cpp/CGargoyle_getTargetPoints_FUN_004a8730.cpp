// Name: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004a8730
// Address: 004a8730
// Address Range: [[004a8730, 004a88ce]]
// Convention: unknown
// Signature: int core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004a8730(int param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004a8730(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar3 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_4c,_DAT_01c78b18);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd24) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_40,_DAT_01c78b2c);
    if (param_2 + 1 != pCVar1) {
      param_2[1].x = pCVar1->x;
      param_2[1].y = pCVar1->y;
      param_2[1].z = pCVar1->z;
    }
    iVar3 = 2;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd2c) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_34,_DAT_01c78b30);
    pCVar2 = param_2 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd44) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_1c,_DAT_01c78b3c);
    pCVar2 = param_2 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd48) * 4) == 0) {
    return iVar3;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_28,_DAT_01c78b44);
  param_2 = param_2 + iVar3;
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return iVar3 + 1;
}
