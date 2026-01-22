// Name: core_tentacle.cpp_FUN_005db9d0
// Address: 005db9d0
// Address Range: [[005db9d0, 005dbb29]]
// Convention: unknown
// Signature: undefined core_tentacle.cpp_FUN_005db9d0()

#include "nocturne.h"

/* Signature: byte actors_enemy_tentacle.cpp_FUN_005db9d0(uint param_1, uint
   param_2) */

uint core_tentacle_cpp_FUN_005db9d0(void)

{
  uint *extraout_EAX;
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  CVector3f *pCVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f local_1cc;
  CMatrix3x4f local_19c;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CVector3f local_10c [4];
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  float local_4c [18];
  
  bVar7 = 0;
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0xbe3c)) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)(in_stack_00000004 + 0xbecc),(CMatrix3x4f *)(in_stack_00000004 + 0xbefc)
             ,*(float *)(in_stack_00000004 + 0xbec8),&local_1cc);
  pCVar4 = &local_1cc;
  pCVar3 = &local_16c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_13c,(CVector3f *)(in_stack_00000004 + 0x20),
             (CVector3f *)(in_stack_00000004 + 0x30));
  pCVar4 = &local_13c;
  core_tentacle_cpp_FUN_005dbb70();
  pfVar2 = local_4c;
  pCVar3 = &local_dc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar7 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_16c,&local_dc,&local_7c);
  pCVar3 = &local_7c;
  pCVar5 = &local_19c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,pCVar4,&local_ac);
  pCVar4 = &local_ac;
  pCVar6 = local_10c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar6->x = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CVector3f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_005f6110(local_10c,(CMatrix3x4f *)(local_4c + 0xf));
  iVar1 = *(int *)(in_stack_00000004 + 0xbe3c);
  *(uint *)(iVar1 + 0x20) = *extraout_EAX;
  *(uint *)(iVar1 + 0x24) = extraout_EAX[1];
  *(uint *)(iVar1 + 0x28) = extraout_EAX[2];
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_10c,(CMatrix3x3f *)(local_4c + 0xc));
  core_charactr_cpp_CCharacter_FUN_0042ded0(*(CCharacter **)(in_stack_00000004 + 0xbe3c));
  return 1;
}
