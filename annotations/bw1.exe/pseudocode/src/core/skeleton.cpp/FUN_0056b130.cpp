// Name: core_skeleton.cpp_FUN_0056b130
// Address: 0056b130
// Address Range: [[0056b130, 0056b35d]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0056b130(float *param_1,CDeformableModelInstance *param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_0056b130(float *param_1,CDeformableModelInstance *param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1030 [1016];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CSkeleton *pCStack_30;
  byte *puStack_2c;
  CSkeleton *pCStack_28;
  CQuaternion4f *pCStack_24;
  int iStack_20;
  int iStack_1c;
  CMatrix3x4f *pCStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar4 = 0;
  pCStack_30 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(param_2);
  iStack_1c = 0;
  if (0 < *(int *)&pCStack_30->field_0x1de78) {
    iStack_20 = 0;
    pCStack_18 = (CMatrix3x4f *)(param_1 + 0x1f7);
    pCStack_24 = (CQuaternion4f *)(param_1 + 3);
    puStack_2c = &param_2->field_0x58;
    pfVar2 = param_1;
    pfVar3 = param_1;
    pCStack_28 = pCStack_30;
    pCStack_14 = pCStack_18;
    do {
      iVar1 = iStack_1c;
      core_xform_cpp_FUN_005b7410(pCStack_14,pCStack_24);
      if (pfVar2[0x193] != 1.0) {
        param_1[iVar1 * 0xc + 0x1f7] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1f7];
        param_1[iVar1 * 0xc + 0x1f8] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1f8];
        param_1[iVar1 * 0xc + 0x1f9] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1f9];
        param_1[iVar1 * 0xc + 0x1fb] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1fb];
        param_1[iVar1 * 0xc + 0x1fc] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1fc];
        param_1[iVar1 * 0xc + 0x1fd] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1fd];
        param_1[iVar1 * 0xc + 0x1ff] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x1ff];
        param_1[iVar1 * 0xc + 0x200] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x200];
        param_1[iVar1 * 0xc + 0x201] = pfVar2[0x193] * param_1[iVar1 * 0xc + 0x201];
      }
      if (*(int *)&pCStack_28->field_0x1de9c < 0) {
        pfVar3[0x1fa] = *(float *)(&param_2->field_0x58 + iStack_20) + *param_1;
        pfVar3[0x1fe] = *(float *)(&param_2->field_0x5c + iStack_20) + param_1[1];
        pfVar3[0x202] = *(float *)(&param_2->field_0x60 + iStack_20) + param_1[2];
      }
      else {
        core_xform_cpp_FUN_005b5080
                  (puStack_2c + iStack_20,pCStack_18 + *(int *)&pCStack_28->field_0x1de9c * 0x30);
        fStack_48 = fStack_3c;
        *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        pfVar3[0x1fa] = fStack_48;
        pfVar3[0x1fe] = fStack_44;
        pfVar3[0x202] = fStack_40;
      }
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 0xc;
      pCStack_14 = pCStack_14 + 0x30;
      pCStack_24 = pCStack_24 + 0x10;
      iStack_20 = iStack_20 + 0xc;
      pCStack_28 = (CSkeleton *)&pCStack_28->field_0x24;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < *(int *)&pCStack_30->field_0x1de78);
  }
  return;
}
