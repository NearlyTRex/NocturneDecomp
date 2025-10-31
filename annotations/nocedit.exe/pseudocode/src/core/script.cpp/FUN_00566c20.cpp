// Name: core_script.cpp_FUN_00566c20
// Address: 00566c20
// Address Range: [[00566c20, 00566cb3]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566c20()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 005656eb [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566bc0 (00566bc0) at 00566be1 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310fcd8
//   undefined4 DAT_0310fd0c
//   undefined4 DAT_031141e0
//   undefined4 DAT_031141e4
//   undefined4 DAT_031141e8
//   undefined4 DAT_031141ec
//   undefined4 DAT_03114204
//   undefined4 DAT_03114208

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566c20(undefined1 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

undefined4 core_script_cpp_FUN_00566c20(void)

{
  int iVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int *in_stack_00000014;
  
  iVar1 = DAT_031141e4;
  if ((((DAT_031141e0 <= in_stack_00000008) && (DAT_031141e4 <= in_stack_0000000c)) &&
      (in_stack_00000008 < DAT_031141e8)) && (in_stack_0000000c < DAT_031141ec)) {
    *in_stack_00000010 =
         ((in_stack_00000008 - DAT_031141e0) + DAT_03114204 / 2) / DAT_03114204 + DAT_0310fd0c;
    *in_stack_00000014 = (in_stack_0000000c - iVar1) / DAT_03114208 + DAT_0310fcd8;
    return 1;
  }
  return 0;
}


// Assembly code:
// 00566c20: PUSH EBX
//   Label: core_script.cpp_FUN_00566c20
// 00566c21: PUSH ESI
// 00566c22: PUSH EDI
// 00566c23: MOV ECX,dword ptr [0x03114204]
//   XREF to: 03114204 (READ)
// 00566c29: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00566c2d: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00566c31: MOV EDX,dword ptr [0x031141e0]
//   XREF to: 031141e0 (READ)
// 00566c37: CMP ESI,EDX
// 00566c39: JL 0x00566c55
//   XREF to: 00566c55 (CONDITIONAL_JUMP)
// 00566c3b: MOV EDI,dword ptr [0x031141e4]
//   XREF to: 031141e4 (READ)
// 00566c41: CMP EBX,EDI
// 00566c43: JL 0x00566c55
//   XREF to: 00566c55 (CONDITIONAL_JUMP)
// 00566c45: CMP ESI,dword ptr [0x031141e8]
//   XREF to: 031141e8 (READ)
// 00566c4b: JGE 0x00566c55
//   XREF to: 00566c55 (CONDITIONAL_JUMP)
// 00566c4d: CMP EBX,dword ptr [0x031141ec]
//   XREF to: 031141ec (READ)
// 00566c53: JL 0x00566c61
//   XREF to: 00566c61 (CONDITIONAL_JUMP)
// 00566c55: XOR EAX,EAX
//   Label: LAB_00566c55
// 00566c57: MOV dword ptr [0x03114204],ECX
//   XREF to: 03114204 (WRITE)
// 00566c5d: POP EDI
// 00566c5e: POP ESI
// 00566c5f: POP EBX
// 00566c60: RET
// 00566c61: SUB ESI,EDX
//   Label: LAB_00566c61
// 00566c63: MOV EDX,ECX
// 00566c65: MOV EAX,ECX
// 00566c67: SAR EDX,0x1f
// 00566c6a: SUB EAX,EDX
// 00566c6c: SAR EAX,0x1
// 00566c6e: LEA EDX,[ESI + EAX*0x1]
// 00566c71: MOV EAX,EDX
// 00566c73: SAR EDX,0x1f
// 00566c76: IDIV ECX
// 00566c78: MOV EDX,dword ptr [0x0310fd0c]
//   XREF to: 0310fd0c (READ)
// 00566c7e: ADD EAX,EDX
// 00566c80: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00566c84: MOV dword ptr [EDX],EAX
// 00566c86: MOV EDX,EBX
// 00566c88: SUB EDX,EDI
// 00566c8a: MOV EDI,dword ptr [0x03114208]
//   XREF to: 03114208 (READ)
// 00566c90: MOV EAX,EDX
// 00566c92: SAR EDX,0x1f
// 00566c95: IDIV EDI
// 00566c97: MOV EDX,dword ptr [0x0310fcd8]
//   XREF to: 0310fcd8 (READ)
// 00566c9d: ADD EAX,EDX
// 00566c9f: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 00566ca3: MOV dword ptr [EDX],EAX
// 00566ca5: MOV EAX,0x1
// 00566caa: MOV dword ptr [0x03114204],ECX
//   XREF to: 03114204 (WRITE)
// 00566cb0: POP EDI
// 00566cb1: POP ESI
// 00566cb2: POP EBX
// 00566cb3: RET
