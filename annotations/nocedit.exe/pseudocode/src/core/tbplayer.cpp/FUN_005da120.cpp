// Name: core_tbplayer.cpp_FUN_005da120
// Address: 005da120
// Address Range: [[005da120, 005da238]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da120()
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da120(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  byte bVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_ffffff5c;
  undefined4 auStack_a0 [10];
  undefined1 local_78 [60];
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24ac);
  if (in_stack_00000008 == 0) {
    local_18.y = -1.866;
    local_18.z = -4.108;
    local_18.x = 2.104;
    if (&local_3c != &local_18) {
      local_3c.y = -1.866;
      local_3c.z = -4.108;
      local_3c.x = 2.104;
    }
    local_30.z = 0.101;
    local_30.y = -0.486;
    local_30.x = 1.371;
    if (&local_24 != &local_30) {
      local_24.z = 0.101;
      local_24.x = 1.371;
      local_24.y = -0.486;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(local_78 + 4),(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000008 + 0xfd8)
             ,in_stack_ffffff5c);
  puVar2 = auStack_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005da120: PUSH EBX
//   Label: core_tbplayer.cpp_FUN_005da120
// 005da121: PUSH EDI
// 005da122: PUSH EBP
// 005da123: SUB ESP,0x9c
// 005da129: MOV ECX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 005da130: MOV EBX,ESI
// 005da132: MOV EAX,ECX
// 005da134: SHL EAX,0x4
// 005da137: ADD EAX,ECX
// 005da139: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 005da140: SHL EAX,0x2
// 005da143: ADD EAX,EDX
// 005da145: MOV ESI,dword ptr [EAX + 0x24ac]
// 005da14b: TEST ECX,ECX
// 005da14d: JNZ 0x005da1d9
//   XREF to: 005da1d9 (CONDITIONAL_JUMP)
// 005da153: MOV EDI,0xbfeed917
// 005da158: MOV EBP,0xc08374bc
// 005da15d: MOV ECX,0x4006a7f0
// 005da162: LEA EDX,[ESP + 0x90]
//   XREF to: Stack[-0x18] (DATA)
// 005da169: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x3c] (DATA)
// 005da16d: MOV dword ptr [ESP + 0x94],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005da174: MOV dword ptr [ESP + 0x98],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 005da17b: MOV dword ptr [ESP + 0x90],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005da182: CMP EAX,EDX
// 005da184: JZ 0x005da192
//   XREF to: 005da192 (CONDITIONAL_JUMP)
// 005da186: MOV dword ptr [ESP + 0x70],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 005da18a: MOV dword ptr [ESP + 0x74],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 005da18e: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 005da192: MOV EBP,0x3dced917
//   Label: LAB_005da192
// 005da197: MOV EAX,0xbef8d4fe
// 005da19c: MOV EDI,0x3faf7cee
// 005da1a1: LEA EDX,[ESP + 0x78]
//   XREF to: Stack[-0x30] (DATA)
// 005da1a5: MOV dword ptr [ESP + 0x80],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 005da1ac: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005da1b0: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x24] (DATA)
// 005da1b7: MOV dword ptr [ESP + 0x78],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005da1bb: CMP EAX,EDX
// 005da1bd: JZ 0x005da1d9
//   XREF to: 005da1d9 (CONDITIONAL_JUMP)
// 005da1bf: MOV ECX,0xbef8d4fe
// 005da1c4: MOV dword ptr [ESP + 0x8c],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 005da1cb: MOV dword ptr [ESP + 0x84],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005da1d2: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005da1d9: LEA EAX,[ESP + 0x84]
//   Label: LAB_005da1d9
//   XREF to: Stack[-0x24] (DATA)
// 005da1e0: PUSH EAX
// 005da1e1: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x3c] (DATA)
// 005da1e5: PUSH EAX
// 005da1e6: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x78] (DATA)
// 005da1ea: PUSH EAX
// 005da1eb: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005da1f0: LEA EAX,[ESI*0x4 + 0x0]
// 005da1f7: ADD ESP,0xc
// 005da1fa: SUB EAX,ESI
// 005da1fc: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 005da203: SHL EAX,0x4
// 005da206: ADD EDX,0xfd8
// 005da20c: ADD EAX,EDX
// 005da20e: PUSH EAX
// 005da20f: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x78] (DATA)
// 005da213: PUSH EAX
// 005da214: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xa8] (DATA)
// 005da218: MOV EDI,EBX
// 005da21a: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005da21f: MOV ECX,0xc
// 005da224: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xa8] (DATA)
// 005da228: ADD ESP,0x8
// 005da22b: MOVSD.REP ES:EDI,ESI
// 005da22d: MOV EAX,EBX
// 005da22f: ADD ESP,0x9c
// 005da235: POP EBP
// 005da236: POP EDI
// 005da237: POP EBX
// 005da238: RET
