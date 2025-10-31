// Name: core_tbplayer.cpp_FUN_005da370
// Address: 005da370
// Address Range: [[005da370, 005da502]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da370()
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da370(void)

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
  if (in_stack_00000008 == 0) {
    local_60[0].y = -0.111;
    local_60[0].z = -0.174;
    local_60[0].x = 0.635;
    if (&local_18 != local_60) {
      local_18.x = 0.635;
      local_18.y = -0.111;
      local_18.z = -0.174;
    }
    local_30.z = 0.0;
    local_30.y = 0.0;
    local_30.x = 0.0;
    if (&local_3c == &local_30) goto LAB_005da42c;
  }
  else {
    local_24.y = -0.111;
    local_24.z = -0.174;
    local_24.x = -0.635;
    if (&local_18 != &local_24) {
      local_18.y = -0.111;
      local_18.z = -0.174;
      local_18.x = -0.635;
    }
    local_48.z = 0.0;
    local_48.y = 0.0;
    local_48.x = 0.0;
    if (&local_3c == &local_48) goto LAB_005da42c;
  }
  local_3c.y = 0.0;
  local_3c.z = 0.0;
  local_3c.x = 0.0;
LAB_005da42c:
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
// 005da370: PUSH EBX
//   Label: core_tbplayer.cpp_FUN_005da370
// 005da371: PUSH EDI
// 005da372: PUSH EBP
// 005da373: SUB ESP,0xb4
// 005da379: MOV ECX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[0x8] (READ)
// 005da380: MOV EBX,ESI
// 005da382: MOV EAX,ECX
// 005da384: SHL EAX,0x4
// 005da387: ADD EAX,ECX
// 005da389: MOV EDX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[0x4] (READ)
// 005da390: SHL EAX,0x2
// 005da393: ADD EAX,EDX
// 005da395: MOV ESI,dword ptr [EAX + 0x24ac]
// 005da39b: TEST ECX,ECX
// 005da39d: JNZ 0x005da48f
//   XREF to: 005da48f (CONDITIONAL_JUMP)
// 005da3a3: MOV EAX,0xbde353f8
// 005da3a8: MOV EDX,0xbe322d0e
// 005da3ad: MOV EBP,0x3f228f5c
// 005da3b2: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005da3b6: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 005da3ba: LEA EDX,[ESP + 0x60]
//   XREF to: Stack[-0x60] (DATA)
// 005da3be: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x18] (DATA)
// 005da3c5: MOV dword ptr [ESP + 0x60],EBP
//   XREF to: Stack[-0x60] (WRITE)
// 005da3c9: CMP EAX,EDX
// 005da3cb: JZ 0x005da3ec
//   XREF to: 005da3ec (CONDITIONAL_JUMP)
// 005da3cd: MOV EDI,0xbde353f8
// 005da3d2: MOV dword ptr [ESP + 0xa8],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 005da3d9: MOV EBP,0xbe322d0e
// 005da3de: MOV dword ptr [ESP + 0xac],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005da3e5: MOV dword ptr [ESP + 0xb0],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 005da3ec: XOR EAX,EAX
//   Label: LAB_005da3ec
// 005da3ee: LEA EDX,[ESP + 0x84]
//   XREF to: Stack[-0x3c] (DATA)
// 005da3f5: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005da3fc: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005da403: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005da40a: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x30] (DATA)
// 005da411: CMP EDX,EAX
// 005da413: JZ 0x005da42c
//   XREF to: 005da42c (CONDITIONAL_JUMP)
// 005da415: XOR EDI,EDI
// 005da417: MOV dword ptr [ESP + 0x88],EDI
//   Label: LAB_005da417
//   XREF to: Stack[-0x38] (WRITE)
// 005da41e: MOV dword ptr [ESP + 0x8c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005da425: MOV dword ptr [ESP + 0x84],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 005da42c: LEA EAX,[ESP + 0x84]
//   Label: LAB_005da42c
//   XREF to: Stack[-0x3c] (DATA)
// 005da433: PUSH EAX
// 005da434: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x18] (DATA)
// 005da43b: PUSH EAX
// 005da43c: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x90] (DATA)
// 005da440: PUSH EAX
// 005da441: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005da446: LEA EAX,[ESI*0x4 + 0x0]
// 005da44d: ADD ESP,0xc
// 005da450: SUB EAX,ESI
// 005da452: MOV EDX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[0x4] (READ)
// 005da459: SHL EAX,0x4
// 005da45c: ADD EDX,0xfd8
// 005da462: ADD EAX,EDX
// 005da464: PUSH EAX
// 005da465: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x90] (DATA)
// 005da469: PUSH EAX
// 005da46a: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xc0] (DATA)
// 005da46e: MOV EDI,EBX
// 005da470: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005da475: MOV ECX,0xc
// 005da47a: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xc0] (DATA)
// 005da47e: ADD ESP,0x8
// 005da481: MOVSD.REP ES:EDI,ESI
// 005da483: MOV EAX,EBX
// 005da485: ADD ESP,0xb4
// 005da48b: POP EBP
// 005da48c: POP EDI
// 005da48d: POP EBX
// 005da48e: RET
// 005da48f: MOV EDI,0xbde353f8
//   Label: LAB_005da48f
// 005da494: MOV EBP,0xbe322d0e
// 005da499: MOV ECX,0xbf228f5c
// 005da49e: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x24] (DATA)
// 005da4a5: LEA EDX,[ESP + 0xa8]
//   XREF to: Stack[-0x18] (DATA)
// 005da4ac: MOV dword ptr [ESP + 0xa0],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005da4b3: MOV dword ptr [ESP + 0xa4],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 005da4ba: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005da4c1: CMP EDX,EAX
// 005da4c3: JZ 0x005da4da
//   XREF to: 005da4da (CONDITIONAL_JUMP)
// 005da4c5: MOV dword ptr [ESP + 0xac],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005da4cc: MOV dword ptr [ESP + 0xb0],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 005da4d3: MOV dword ptr [ESP + 0xa8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005da4da: LEA EAX,[ESP + 0x78]
//   Label: LAB_005da4da
//   XREF to: Stack[-0x48] (DATA)
// 005da4de: XOR EDI,EDI
// 005da4e0: LEA EDX,[ESP + 0x84]
//   XREF to: Stack[-0x3c] (DATA)
// 005da4e7: MOV dword ptr [ESP + 0x80],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 005da4ee: MOV dword ptr [ESP + 0x7c],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 005da4f2: MOV dword ptr [ESP + 0x78],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 005da4f6: CMP EDX,EAX
// 005da4f8: JZ 0x005da42c
//   XREF to: 005da42c (CONDITIONAL_JUMP)
// 005da4fe: JMP 0x005da417
//   XREF to: 005da417 (UNCONDITIONAL_JUMP)
