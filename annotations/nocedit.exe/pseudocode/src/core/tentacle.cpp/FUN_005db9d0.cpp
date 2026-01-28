// Name: core_tentacle.cpp_FUN_005db9d0
// Address: 005db9d0
// Address Range: [[005db9d0, 005dbb29]]
// Convention: unknown
// Signature: undefined4 core_tentacle_cpp_FUN_005db9d0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_tentacle.cpp_FUN_005db9d0(uint param_1, uint
   param_2) */

uint core_tentacle_cpp_FUN_005db9d0(void)

{
  CVector3f *pCVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f local_1cc;
  CMatrix3x4f local_19c;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  float local_4c [12];
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar7 = 0;
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0xbe3c)) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)(in_stack_00000004 + 0xbecc),(CMatrix3x4f *)(in_stack_00000004 + 0xbefc)
             ,*(float *)(in_stack_00000004 + 0xbec8),&local_1cc);
  pCVar5 = &local_1cc;
  pCVar4 = &local_16c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_13c,(CVector3f *)(in_stack_00000004 + 0x20),
             (CVector3f *)(in_stack_00000004 + 0x30));
  pCVar5 = &local_13c;
  core_tentacle_cpp_FUN_005dbb70();
  pfVar3 = local_4c;
  pCVar4 = &local_dc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_16c,&local_dc,&local_7c);
  pCVar4 = &local_7c;
  pCVar6 = &local_19c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,pCVar5,&local_ac);
  pCVar5 = &local_ac;
  pCVar4 = &local_10c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  pCVar1 = core_xform_cpp_getTranslation_FUN_005f6110(&local_10c,&local_10);
  iVar2 = *(int *)(in_stack_00000004 + 0xbe3c);
  *(float *)(iVar2 + 0x20) = pCVar1->x;
  *(float *)(iVar2 + 0x24) = pCVar1->y;
  *(float *)(iVar2 + 0x28) = pCVar1->z;
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_10c,&local_1c);
  core_charactr_cpp_CCharacter_FUN_0042ded0(*(CCharacter **)(in_stack_00000004 + 0xbe3c));
  return 1;
}
