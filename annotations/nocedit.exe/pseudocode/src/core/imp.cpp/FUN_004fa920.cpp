// Name: core_imp.cpp_FUN_004fa920
// Address: 004fa920
// Address Range: [[004fa920, 004faaef]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004fa920()
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004fa920(undefined4 param_1, undefined4 param_2)
    */

void core_imp_cpp_FUN_004fa920(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  byte bVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_ffffff44;
  undefined4 auStack_b8 [10];
  undefined1 local_90 [48];
  CVector3f local_60 [2];
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24ac);
  if (in_stack_00000008 == 1) {
    local_60[0].y = -0.505;
    local_60[0].z = 0.389;
    local_60[0].x = 0.206;
    if (&local_18 != local_60) {
      local_18.x = 0.206;
      local_18.y = -0.505;
      local_18.z = 0.389;
    }
    local_30.x = -0.683;
    local_30.z = 0.993;
    local_30.y = 0.439;
    if (&local_3c != &local_30) {
      local_3c.y = 0.439;
      local_3c.z = 0.993;
      local_3c.x = -0.683;
    }
  }
  else {
    local_24.y = -0.53;
    local_24.z = 0.41;
    local_24.x = -0.417;
    if (&local_18 != &local_24) {
      local_18.y = -0.53;
      local_18.z = 0.41;
      local_18.x = -0.417;
    }
    local_48.z = 0.993;
    local_48.y = 0.439;
    local_48.x = -0.683;
    if (&local_3c != &local_48) {
      local_3c.z = 0.993;
      local_3c.x = -0.683;
      local_3c.y = 0.439;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)local_90,&local_18,&local_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(local_90 + 4),(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000008 + 0xfd8)
             ,in_stack_ffffff44);
  puVar2 = auStack_b8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 004fa920: PUSH EBX
//   Label: core_imp.cpp_FUN_004fa920
// 004fa921: PUSH EDI
// 004fa922: PUSH EBP
// 004fa923: SUB ESP,0xb4
// 004fa929: MOV ECX,dword ptr [ESP + 0xc8]
// 004fa930: MOV EBX,ESI
// 004fa932: MOV EAX,ECX
// 004fa934: SHL EAX,0x4
// 004fa937: ADD EAX,ECX
// 004fa939: MOV EDX,dword ptr [ESP + 0xc4]
// 004fa940: SHL EAX,0x2
// 004fa943: ADD EAX,EDX
// 004fa945: MOV ESI,dword ptr [EAX + 0x24ac]
// 004fa94b: CMP ECX,0x1
// 004fa94e: JNZ 0x004faa55
//   XREF to: 004faa55 (CONDITIONAL_JUMP)
// 004fa954: MOV EAX,0xbf0147ae
// 004fa959: MOV EDX,0x3ec72b02
// 004fa95e: MOV EBP,0x3e52f1aa
// 004fa963: MOV dword ptr [ESP + 0x64],EAX
// 004fa967: MOV dword ptr [ESP + 0x68],EDX
// 004fa96b: LEA EDX,[ESP + 0x60]
// 004fa96f: LEA EAX,[ESP + 0xa8]
// 004fa976: MOV dword ptr [ESP + 0x60],EBP
// 004fa97a: CMP EAX,EDX
// 004fa97c: JZ 0x004fa99d
//   XREF to: 004fa99d (CONDITIONAL_JUMP)
// 004fa97e: MOV EDI,0xbf0147ae
// 004fa983: MOV dword ptr [ESP + 0xa8],EBP
// 004fa98a: MOV EBP,0x3ec72b02
// 004fa98f: MOV dword ptr [ESP + 0xac],EDI
// 004fa996: MOV dword ptr [ESP + 0xb0],EBP
// 004fa99d: MOV EAX,0xbf2ed917
//   Label: LAB_004fa99d
// 004fa9a2: MOV EDX,0x3f7e353f
// 004fa9a7: MOV ECX,0x3ee0c49c
// 004fa9ac: MOV dword ptr [ESP + 0x90],EAX
// 004fa9b3: MOV dword ptr [ESP + 0x98],EDX
// 004fa9ba: LEA EAX,[ESP + 0x90]
// 004fa9c1: LEA EDX,[ESP + 0x84]
// 004fa9c8: MOV dword ptr [ESP + 0x94],ECX
// 004fa9cf: CMP EDX,EAX
// 004fa9d1: JZ 0x004fa9f2
//   XREF to: 004fa9f2 (CONDITIONAL_JUMP)
// 004fa9d3: MOV EAX,0x3f7e353f
// 004fa9d8: MOV EDI,0xbf2ed917
// 004fa9dd: MOV dword ptr [ESP + 0x88],ECX
// 004fa9e4: MOV dword ptr [ESP + 0x8c],EAX
// 004fa9eb: MOV dword ptr [ESP + 0x84],EDI
// 004fa9f2: LEA EAX,[ESP + 0x84]
//   Label: LAB_004fa9f2
// 004fa9f9: PUSH EAX
// 004fa9fa: LEA EAX,[ESP + 0xac]
// 004faa01: PUSH EAX
// 004faa02: LEA EAX,[ESP + 0x38]
// 004faa06: PUSH EAX
// 004faa07: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004faa0c: LEA EAX,[ESI*0x4 + 0x0]
// 004faa13: ADD ESP,0xc
// 004faa16: SUB EAX,ESI
// 004faa18: MOV EDX,dword ptr [ESP + 0xc4]
// 004faa1f: SHL EAX,0x4
// 004faa22: ADD EDX,0xfd8
// 004faa28: ADD EAX,EDX
// 004faa2a: PUSH EAX
// 004faa2b: LEA EAX,[ESP + 0x34]
// 004faa2f: PUSH EAX
// 004faa30: LEA ESI,[ESP + 0x8]
// 004faa34: MOV EDI,EBX
// 004faa36: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004faa3b: MOV ECX,0xc
// 004faa40: LEA ESI,[ESP + 0x8]
// 004faa44: ADD ESP,0x8
// 004faa47: MOVSD.REP ES:EDI,ESI
// 004faa49: MOV EAX,EBX
// 004faa4b: ADD ESP,0xb4
// 004faa51: POP EBP
// 004faa52: POP EDI
// 004faa53: POP EBX
// 004faa54: RET
// 004faa55: MOV EDI,0xbf07ae14
//   Label: LAB_004faa55
// 004faa5a: MOV EBP,0x3ed1eb85
// 004faa5f: MOV ECX,0xbed58106
// 004faa64: LEA EAX,[ESP + 0x9c]
// 004faa6b: LEA EDX,[ESP + 0xa8]
// 004faa72: MOV dword ptr [ESP + 0xa0],EDI
// 004faa79: MOV dword ptr [ESP + 0xa4],EBP
// 004faa80: MOV dword ptr [ESP + 0x9c],ECX
// 004faa87: CMP EDX,EAX
// 004faa89: JZ 0x004faaa0
//   XREF to: 004faaa0 (CONDITIONAL_JUMP)
// 004faa8b: MOV dword ptr [ESP + 0xac],EDI
// 004faa92: MOV dword ptr [ESP + 0xb0],EBP
// 004faa99: MOV dword ptr [ESP + 0xa8],ECX
// 004faaa0: MOV EBP,0x3f7e353f
//   Label: LAB_004faaa0
// 004faaa5: MOV EAX,0x3ee0c49c
// 004faaaa: MOV EDI,0xbf2ed917
// 004faaaf: LEA EDX,[ESP + 0x84]
// 004faab6: MOV dword ptr [ESP + 0x80],EBP
// 004faabd: MOV dword ptr [ESP + 0x7c],EAX
// 004faac1: LEA EAX,[ESP + 0x78]
// 004faac5: MOV dword ptr [ESP + 0x78],EDI
// 004faac9: CMP EDX,EAX
// 004faacb: JZ 0x004fa9f2
//   XREF to: 004fa9f2 (CONDITIONAL_JUMP)
// 004faad1: MOV ECX,0x3ee0c49c
// 004faad6: MOV dword ptr [ESP + 0x8c],EBP
// 004faadd: MOV dword ptr [ESP + 0x84],EDI
// 004faae4: MOV dword ptr [ESP + 0x88],ECX
// 004faaeb: JMP 0x004fa9f2
//   XREF to: 004fa9f2 (UNCONDITIONAL_JUMP)
