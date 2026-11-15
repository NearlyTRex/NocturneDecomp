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
  CVector3f *unaff_ESI;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_1020 [953];
  uint *puVar7;
  CMatrix3x4f local_128;
  float local_f8 [12];
  CMatrix3x4f local_c8;
  CMatrix3x4f local_98;
  CMatrix3x4f local_68;
  float local_38;
  float afStack_34 [2];
  CVector3f local_2c;
  uint local_20;
  uint auStack_1c [5];
  
  bVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x25698);
  if (((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x2620))) &&
     (iVar1 != *(int *)(param_1 + 0x2698))) {
    core_doc_cpp_FUN_004568e0(param_1,iVar1,param_2 == 0);
    pfVar3 = local_f8;
    pCVar4 = &local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar6 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_98,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c8,&local_98,&local_68);
    pCVar4 = &local_68;
    pCVar5 = &local_128;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    iVar2 = *(int *)(iVar1 + 0x2b0);
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_128,unaff_ESI);
    auStack_1c[2] = local_20;
    auStack_1c[(uint)bVar6 * -2 + 3] = auStack_1c[(uint)bVar6 * -2];
    auStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         auStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    puVar7 = auStack_1c + 2;
    core_xform_cpp_getTranslation_FUN_00592720(&local_128,&local_2c);
    local_38 = local_2c.x;
    afStack_34[(uint)bVar6 * -2] = *(float *)((int)&local_2c + (uint)bVar6 * -8 + 4);
    afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    (**(code **)(iVar2 + 0x70))(iVar1,&local_38,puVar7);
  }
  return;
}
