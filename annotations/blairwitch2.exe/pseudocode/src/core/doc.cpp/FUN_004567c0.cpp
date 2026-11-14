// Name: core_doc.cpp_FUN_004567c0
// Address: 004567c0
// Address Range: [[004567c0, 004568de]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004567c0(int param_1,int param_2)

#include "nocturne.h"

void core_doc_cpp_FUN_004567c0(int param_1,int param_2)

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
  uint local_20;
  uint local_14 [3];
  
  bVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x25698);
  if (((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x2620))) &&
     (iVar1 != *(int *)(param_1 + 0x2698))) {
    core_doc_cpp_FUN_004568e0(param_1,iVar1,param_2 == 0);
    pfVar3 = (float *)&stack0xffffff08;
    pCVar4 = &local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_FUN_00591c10(&local_98,param_1 + 0x20,param_1 + 0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c8,&local_98,&local_68);
    pCVar4 = &local_68;
    pfVar3 = (float *)&stack0xfffffed8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = *(int *)(iVar1 + 0x2b0);
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&stack0xfffffed8);
    local_14[0] = local_20;
    auStack_34[(uint)bVar5 * -2 + 9] = auStack_34[(uint)bVar5 * -2 + 6];
    auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    core_xform_cpp_FUN_00592720(&stack0xfffffed8,auStack_34 + 8);
    local_38 = auStack_34[2];
    auStack_34[(uint)bVar5 * -2] = auStack_34[(uint)bVar5 * -2 + 3];
    auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    (**(code **)(iVar2 + 0x70))(iVar1,&local_38);
  }
  return;
}
