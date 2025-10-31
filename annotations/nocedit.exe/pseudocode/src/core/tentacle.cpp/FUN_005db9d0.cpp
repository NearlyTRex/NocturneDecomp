// Name: core_tentacle.cpp_FUN_005db9d0
// Address: 005db9d0
// Address Range: [[005db9d0, 005dbb29]]
// Convention: unknown
// Signature: undefined core_tentacle.cpp_FUN_005db9d0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042ded0
//   core_tentacle.cpp_FUN_005dbb70
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_tentacle.cpp_FUN_005db9d0(undefined4 param_1, undefined4
   param_2) */

undefined4 core_tentacle_cpp_FUN_005db9d0(void)

{
  float fVar1;
  undefined4 *extraout_EAX;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  float in_stack_00000004;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffe34;
  CMatrix3x4f *in_stack_fffffe38;
  CMatrix3x4f *in_stack_fffffe3c;
  undefined4 uStack_190;
  undefined1 auStack_18c [84];
  CMatrix3x4f CStack_138;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [36];
  undefined4 uStack_d4;
  CMatrix3x4f CStack_d0;
  undefined4 auStack_98 [11];
  undefined4 auStack_6c [11];
  undefined4 auStack_40 [15];
  
  fVar1 = in_stack_00000004;
  bVar5 = 0;
  if (in_stack_00000008 != *(float *)((int)in_stack_00000004 + 0xbe3c)) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)((int)in_stack_00000004 + 0xbecc),
             (CMatrix3x4f *)((int)in_stack_00000004 + 0xbefc),
             *(float *)((int)in_stack_00000004 + 0xbec8));
  puVar3 = (undefined4 *)&stack0xfffffe38;
  puVar4 = (undefined4 *)(auStack_18c + 0x24);
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
  *(undefined4 *)(iVar2 + 0x20) = *extraout_EAX;
  *(undefined4 *)(iVar2 + 0x24) = extraout_EAX[1];
  *(undefined4 *)(iVar2 + 0x28) = extraout_EAX[2];
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690
            ((CVector3f *)(auStack_f8 + 4),(CMatrix3x3f *)&stack0xfffffffc);
  core_charactr_cpp_CCharacter_FUN_0042ded0(*(CCharacter **)((int)fVar1 + 0xbe3c));
  return 1;
}


// Assembly code:
// 005db9d0: PUSH EBX
//   Label: core_tentacle.cpp_FUN_005db9d0
// 005db9d1: SUB ESP,0x1c8
// 005db9d7: MOV EBX,dword ptr [ESP + 0x1d0]
//   XREF to: Stack[0x4] (READ)
// 005db9de: MOV EAX,dword ptr [ESP + 0x1d4]
//   XREF to: Stack[0x8] (READ)
// 005db9e5: CMP EAX,dword ptr [EBX + 0xbe3c]
// 005db9eb: JZ 0x005db9f7
//   XREF to: 005db9f7 (CONDITIONAL_JUMP)
// 005db9ed: XOR EAX,EAX
// 005db9ef: ADD ESP,0x1c8
// 005db9f5: POP EBX
// 005db9f6: RET
// 005db9f7: PUSH EDI
//   Label: LAB_005db9f7
// 005db9f8: PUSH ESI
// 005db9f9: LEA EAX,[EBX + 0xbefc]
// 005db9ff: PUSH dword ptr [EBX + 0xbec8]
// 005dba05: PUSH EAX
// 005dba06: LEA EAX,[EBX + 0xbecc]
// 005dba0c: PUSH EAX
// 005dba0d: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x1cc] (DATA)
// 005dba11: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005dba16: ADD ESP,0xc
// 005dba19: LEA EAX,[EBX + 0x30]
// 005dba1c: LEA EDI,[ESP + 0x68]
//   XREF to: Stack[-0x16c] (DATA)
// 005dba20: PUSH EAX
// 005dba21: LEA EAX,[EBX + 0x20]
// 005dba24: MOV ECX,0xc
// 005dba29: PUSH EAX
// 005dba2a: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x13c] (DATA)
// 005dba31: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x1cc] (DATA)
// 005dba35: PUSH EAX
// 005dba36: MOVSD.REP ES:EDI,ESI
// 005dba38: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005dba3d: ADD ESP,0xc
// 005dba40: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x13c] (DATA)
// 005dba47: PUSH EAX
// 005dba48: PUSH EBX
// 005dba49: LEA ESI,[ESP + 0x190]
//   XREF to: Stack[-0x4c] (DATA)
// 005dba50: LEA EDI,[ESP + 0x100]
//   XREF to: Stack[-0xdc] (DATA)
// 005dba57: CALL core_tentacle.cpp_FUN_005dbb70
//   XREF to: 005dbb70 (UNCONDITIONAL_CALL)
// 005dba5c: MOV ECX,0xc
// 005dba61: ADD ESP,0x4
// 005dba64: LEA EAX,[ESP + 0xfc]
//   XREF to: Stack[-0xdc] (DATA)
// 005dba6b: LEA ESI,[ESP + 0x18c]
//   XREF to: Stack[-0x4c] (DATA)
// 005dba72: PUSH EAX
// 005dba73: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x16c] (DATA)
// 005dba77: MOVSD.REP ES:EDI,ESI
// 005dba79: PUSH EAX
// 005dba7a: LEA ESI,[ESP + 0x164]
//   XREF to: Stack[-0x7c] (DATA)
// 005dba81: LEA EDI,[ESP + 0x44]
//   XREF to: Stack[-0x19c] (DATA)
// 005dba85: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005dba8a: MOV ECX,0xc
// 005dba8f: LEA ESI,[ESP + 0x164]
//   XREF to: Stack[-0x7c] (DATA)
// 005dba96: ADD ESP,0x8
// 005dba99: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x19c] (DATA)
// 005dba9d: MOVSD.REP ES:EDI,ESI
// 005dba9f: PUSH EAX
// 005dbaa0: LEA ESI,[ESP + 0x130]
//   XREF to: Stack[-0xac] (DATA)
// 005dbaa7: LEA EDI,[ESP + 0xd0]
//   XREF to: Stack[-0x10c] (DATA)
// 005dbaae: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005dbab3: ADD ESP,0x8
// 005dbab6: LEA EAX,[ESP + 0x1c4]
//   XREF to: Stack[-0x10] (DATA)
// 005dbabd: MOV ECX,0xc
// 005dbac2: PUSH EAX
// 005dbac3: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x10c] (DATA)
// 005dbaca: LEA ESI,[ESP + 0x12c]
//   XREF to: Stack[-0xac] (DATA)
// 005dbad1: PUSH EAX
// 005dbad2: MOVSD.REP ES:EDI,ESI
// 005dbad4: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005dbad9: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005dbadf: FLD float ptr [EAX]
// 005dbae1: ADD ESP,0x8
// 005dbae4: FSTP float ptr [EDX + 0x20]
// 005dbae7: MOV ECX,dword ptr [EAX + 0x4]
// 005dbaea: MOV dword ptr [EDX + 0x24],ECX
// 005dbaed: FLD float ptr [EAX + 0x8]
// 005dbaf0: LEA EAX,[ESP + 0x1b8]
//   XREF to: Stack[-0x1c] (DATA)
// 005dbaf7: PUSH EAX
// 005dbaf8: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x10c] (DATA)
// 005dbaff: PUSH EAX
// 005dbb00: FSTP float ptr [EDX + 0x28]
// 005dbb03: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005dbb08: ADD ESP,0x8
// 005dbb0b: PUSH EAX
// 005dbb0c: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005dbb12: PUSH ECX
// 005dbb13: CALL core_charactr.cpp_CCharacter_FUN_0042ded0
//   XREF to: 0042ded0 (UNCONDITIONAL_CALL)
// 005dbb18: MOV EAX,0x1
// 005dbb1d: ADD ESP,0x8
// 005dbb20: POP ESI
// 005dbb21: POP EDI
// 005dbb22: ADD ESP,0x1c8
// 005dbb28: POP EBX
// 005dbb29: RET
