// Name: core_imp.cpp_CImp_getTargetPoints_FUN_004bce00
// Address: 004bce00
// Address Range: [[004bce00, 004bcfa9]]
// Convention: unknown
// Signature: int core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte local_48 [12];
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [12];
  byte local_18 [12];
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd58) * 4) != 0) {
    puVar1 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (param_1 + 0x150,local_30,_DAT_01cae30c);
    if (param_2 != puVar1) {
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      param_2[2] = puVar1[2];
    }
    iVar3 = 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd30) * 4) != 0) {
    puVar1 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (param_1 + 0x150,local_3c,_DAT_01cae320);
    puVar2 = param_2 + iVar3 * 3;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd38) * 4) != 0) {
    puVar1 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (param_1 + 0x150,local_18,_DAT_01cae324);
    puVar2 = param_2 + iVar3 * 3;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd50) * 4) != 0) {
    puVar1 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (param_1 + 0x150,local_48,_DAT_01cae330);
    puVar2 = param_2 + iVar3 * 3;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) == 0) {
    return iVar3;
  }
  puVar1 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (param_1 + 0x150,local_24,_DAT_01cae338);
  param_2 = param_2 + iVar3 * 3;
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  return iVar3 + 1;
}
