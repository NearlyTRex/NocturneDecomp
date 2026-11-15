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
  CVector3f *unaff_ESI;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_1020 [953];
  uint *puVar7;
  CMatrix3x4f local_f8;
  CMatrix3x4f local_c8;
  CMatrix3x4f local_98;
  CMatrix3x4f local_68;
  uint local_38;
  uint auStack_34 [5];
  float local_20 [3];
  CVector3f local_14;
  
  bVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x20004);
  if (((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 0x25b0))) &&
     (iVar2 != *(int *)(param_1 + 0x2628))) {
    core_doc_cpp_FUN_0046f740(param_1,*(uint *)(param_1 + 0x20004),param_2 == 0);
    pfVar3 = (float *)&stack0xfffffed8;
    pCVar4 = &local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar6 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
              (&local_98,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_c8,&local_98,&local_68);
    pCVar4 = &local_68;
    pCVar5 = &local_f8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    iVar2 = *(int *)(param_1 + 0x20004);
    iVar1 = *(int *)(iVar2 + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&local_f8,unaff_ESI);
    auStack_34[2] = local_38;
    auStack_34[(uint)bVar6 * -2 + 3] = auStack_34[(uint)bVar6 * -2];
    auStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         auStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    puVar7 = auStack_34 + 2;
    core_xform_cpp_getTranslation_FUN_005b6270(&local_f8,&local_14);
    local_20[0] = local_14.x;
    auStack_34[(uint)bVar6 * -2 + 6] = *(uint *)((int)&local_14 + (uint)bVar6 * -8 + 4);
    auStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         *(uint *)((int)&local_14 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    (**(code **)(iVar1 + 0x68))(iVar2,auStack_34 + 5,puVar7);
  }
  return;
}
