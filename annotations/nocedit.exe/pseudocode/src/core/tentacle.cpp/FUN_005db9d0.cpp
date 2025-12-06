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
  float fVar1;
  uint *extraout_EAX;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float in_stack_00000004;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffe34;
  CMatrix3x4f *in_stack_fffffe38;
  CMatrix3x4f *in_stack_fffffe3c;
  uint uStack_190;
  byte auStack_18c [84];
  CMatrix3x4f CStack_138;
  uint uStack_fc;
  byte auStack_f8 [36];
  uint uStack_d4;
  CMatrix3x4f CStack_d0;
  uint auStack_98 [11];
  uint auStack_6c [11];
  uint auStack_40 [15];
  
  fVar1 = in_stack_00000004;
  bVar5 = 0;
  if (in_stack_00000008 != *(float *)((int)in_stack_00000004 + 0xbe3c)) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)((int)in_stack_00000004 + 0xbecc),
             (CMatrix3x4f *)((int)in_stack_00000004 + 0xbefc),
             *(float *)((int)in_stack_00000004 + 0xbec8));
  puVar3 = (uint *)&stack0xfffffe38;
  puVar4 = (uint *)(auStack_18c + 0x24);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&CStack_138,(CVector3f *)((int)fVar1 + 0x20),(CVector3f *)((int)fVar1 + 0x30));
  core_tentacle_cpp_FUN_005dbb70();
  puVar3 = auStack_40;
  puVar4 = &uStack_d4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_18c + 0x2c),&CStack_d0,in_stack_fffffe34);
  puVar3 = auStack_6c;
  puVar4 = &uStack_190;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_18c,in_stack_fffffe38,in_stack_fffffe3c);
  puVar3 = auStack_98;
  puVar4 = &uStack_fc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_getTranslation_FUN_005f6110
            ((CVector3f *)auStack_f8,(CMatrix3x4f *)&stack0x00000004);
  iVar2 = *(int *)((int)fVar1 + 0xbe3c);
  *(uint *)(iVar2 + 0x20) = *extraout_EAX;
  *(uint *)(iVar2 + 0x24) = extraout_EAX[1];
  *(uint *)(iVar2 + 0x28) = extraout_EAX[2];
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690
            ((CVector3f *)(auStack_f8 + 4),(CMatrix3x3f *)&stack0xfffffffc);
  core_charactr_cpp_CCharacter_FUN_0042ded0(*(CCharacter **)((int)fVar1 + 0xbe3c));
  return 1;
}
