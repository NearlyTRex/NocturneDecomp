// Name: core_doc.cpp_FUN_0046f610
// Address: 0046f610
// Address Range: [[0046f610, 0046f73a]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046f610(int param_1,int param_2)

#include "nocturne.h"

void core_doc_cpp_FUN_0046f610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float afStackY_1020 [953];
  CMatrix3x4f local_c8;
  CMatrix3x4f local_98;
  CMatrix3x4f local_68;
  uint local_38;
  uint auStack_34 [5];
  uint local_20 [3];
  uint local_14;
  
  bVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x20004);
  if (((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 0x25b0))) &&
     (iVar2 != *(int *)(param_1 + 0x2628))) {
    core_doc_cpp_FUN_0046f740(param_1,*(uint *)(param_1 + 0x20004),param_2 == 0);
    pfVar3 = (float *)&stack0xfffffed8;
    pCVar4 = &local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_FUN_005b5760
              (&local_98,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_c8,&local_98,&local_68);
    pCVar4 = &local_68;
    pfVar3 = (float *)&stack0xffffff08;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = *(int *)(param_1 + 0x20004);
    iVar1 = *(int *)(iVar2 + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xffffff08);
    auStack_34[2] = local_38;
    auStack_34[(uint)bVar5 * -2 + 3] = auStack_34[(uint)bVar5 * -2];
    auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_005b6270(&stack0xffffff08,auStack_34 + 2);
    local_20[0] = local_14;
    auStack_34[(uint)bVar5 * -2 + 6] = auStack_34[(uint)bVar5 * -2 + 9];
    auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    (**(code **)(iVar1 + 0x68))(iVar2,auStack_34 + 5);
  }
  return;
}
