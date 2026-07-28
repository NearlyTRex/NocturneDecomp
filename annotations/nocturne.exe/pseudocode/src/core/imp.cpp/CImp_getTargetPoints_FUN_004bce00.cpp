// Name: core_imp.cpp_CImp_getTargetPoints_FUN_004bce00
// Address: 004bce00
// Address Range: [[004bce00, 004bcfa9]]
// Convention: unknown
// Signature: int core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(int param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd58) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_30,_DAT_01cae30c);
    if (param_2 != pCVar1) {
      param_2->x = pCVar1->x;
      param_2->y = pCVar1->y;
      param_2->z = pCVar1->z;
    }
    iVar3 = 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd30) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_3c,_DAT_01cae320);
    pCVar2 = param_2 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd38) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_18,_DAT_01cae324);
    pCVar2 = param_2 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd50) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       ((CDeformableModelInstance *)(param_1 + 0x150),&local_48,_DAT_01cae330);
    pCVar2 = param_2 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) == 0) {
    return iVar3;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_24,_DAT_01cae338);
  param_2 = param_2 + iVar3;
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return iVar3 + 1;
}
