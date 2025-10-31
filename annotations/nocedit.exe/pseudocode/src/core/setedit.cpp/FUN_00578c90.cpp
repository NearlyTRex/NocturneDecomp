// Name: core_setedit.cpp_FUN_00578c90
// Address: 00578c90
// Address Range: [[00578c90, 00578d71]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00578c90()
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00578d98 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_c_00646bc0
//   TerminatedCString s_ESC_00646bca
//   TerminatedCString s_Y_00646bce
//   TerminatedCString s_N_00646bd0
//   TerminatedCString s_s_s_00646bd2
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_00578c90(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 core_setedit_cpp_FUN_00578c90(void)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  char acStack_2bc [384];
  char local_13c [4];
  char acStack_138 [8];
  undefined1 auStack_130 [288];
  
  if (in_stack_0000000c == 0) {
    bVar1 = 0x4e;
  }
  else {
    bVar1 = 0x59;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_13c,"%s? [%c] ",in_stack_00000008,(uint)bVar1);
  engine_2d_c_drawText_FUN_00401fd0(acStack_138,0,in_stack_00000008);
  while( true ) {
    uVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar2 == 0x1b) {
      pcVar3 = "ESC";
      uVar4 = 0xffffffff;
      goto LAB_00578d14;
    }
    if (uVar2 == 0xd) {
      uVar2 = (uint)bVar1;
    }
    if (uVar2 == 0x59) break;
    if (uVar2 == 0x4e) {
      pcVar3 = "N";
      uVar4 = 0;
LAB_00578d14:
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffd40,"%s %s",auStack_130,pcVar3);
      engine_2d_c_drawText_FUN_00401fd0(acStack_2bc,0,in_stack_00000014);
      return uVar4;
    }
  }
  pcVar3 = "Y";
  uVar4 = 1;
  goto LAB_00578d14;
}


// Assembly code:
// 00578c90: PUSH EBX
//   Label: core_setedit.cpp_FUN_00578c90
// 00578c91: PUSH ESI
// 00578c92: PUSH EDI
// 00578c93: PUSH EBP
// 00578c94: SUB ESP,0x2bc
// 00578c9a: CMP dword ptr [ESP + 0x2d8],0x0
//   XREF to: Stack[0xc] (READ)
// 00578ca2: JZ 0x00578d53
//   XREF to: 00578d53 (CONDITIONAL_JUMP)
// 00578ca8: MOV AL,0x59
// 00578caa: XOR EBX,EBX
//   Label: LAB_00578caa
// 00578cac: MOV BL,AL
// 00578cae: PUSH EBX
// 00578caf: MOV ECX,dword ptr [ESP + 0x2d8]
//   XREF to: Stack[0x8] (READ)
// 00578cb6: PUSH ECX
// 00578cb7: PUSH 0x646bc0
//   XREF to: 00646bc0 (DATA)
// 00578cbc: LEA EAX,[ESP + 0x19c]
//   XREF to: Stack[-0x13c] (DATA)
// 00578cc3: PUSH EAX
// 00578cc4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00578cc9: ADD ESP,0x10
// 00578ccc: MOV ESI,dword ptr [ESP + 0x2d0]
//   XREF to: Stack[0x4] (READ)
// 00578cd3: PUSH ESI
// 00578cd4: PUSH 0x0
// 00578cd6: LEA EAX,[ESP + 0x198]
//   XREF to: Stack[-0x13c] (DATA)
// 00578cdd: PUSH EAX
// 00578cde: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00578ce3: ADD ESP,0xc
// 00578ce6: MOV EDI,dword ptr [0x0067cf44]
//   Label: LAB_00578ce6
//   XREF to: 0067cf44 (READ)
// 00578cec: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 00578ced: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 00578cf2: ADD ESP,0x4
// 00578cf5: MOV EDX,EAX
// 00578cf7: CMP EAX,0x1b
// 00578cfa: JZ 0x00578d5a
//   XREF to: 00578d5a (CONDITIONAL_JUMP)
// 00578cfc: CMP EAX,0xd
// 00578cff: JNZ 0x00578d03
//   XREF to: 00578d03 (CONDITIONAL_JUMP)
// 00578d01: MOV EDX,EBX
// 00578d03: CMP EDX,0x59
//   Label: LAB_00578d03
// 00578d06: JZ 0x00578d66
//   XREF to: 00578d66 (CONDITIONAL_JUMP)
// 00578d08: CMP EDX,0x4e
// 00578d0b: JNZ 0x00578ce6
//   XREF to: 00578ce6 (CONDITIONAL_JUMP)
// 00578d0d: MOV EAX,0x646bd0
//   XREF to: 00646bd0 (DATA)
// 00578d12: XOR EBX,EBX
// 00578d14: PUSH EAX
//   Label: LAB_00578d14
//   XREF to: 00646bca (DATA)
//   XREF to: 00646bce (DATA)
//   XREF to: 00646bd0 (DATA)
// 00578d15: LEA EAX,[ESP + 0x194]
//   XREF to: Stack[-0x13c] (DATA)
// 00578d1c: PUSH EAX
// 00578d1d: PUSH 0x646bd2
//   XREF to: 00646bd2 (DATA)
// 00578d22: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2cc] (DATA)
// 00578d26: PUSH EAX
// 00578d27: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00578d2c: ADD ESP,0x10
// 00578d2f: MOV EBP,dword ptr [ESP + 0x2d0]
//   XREF to: Stack[0x4] (READ)
// 00578d36: PUSH EBP
// 00578d37: PUSH 0x0
// 00578d39: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2cc] (DATA)
// 00578d3d: PUSH EAX
// 00578d3e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00578d43: ADD ESP,0xc
// 00578d46: MOV EAX,EBX
// 00578d48: ADD ESP,0x2bc
// 00578d4e: POP EBP
// 00578d4f: POP EDI
// 00578d50: POP ESI
// 00578d51: POP EBX
// 00578d52: RET
// 00578d53: MOV AL,0x4e
//   Label: LAB_00578d53
// 00578d55: JMP 0x00578caa
//   XREF to: 00578caa (UNCONDITIONAL_JUMP)
// 00578d5a: MOV EAX,0x646bca
//   Label: LAB_00578d5a
//   XREF to: 00646bca (DATA)
// 00578d5f: MOV EBX,0xffffffff
// 00578d64: JMP 0x00578d14
//   XREF to: 00578d14 (UNCONDITIONAL_JUMP)
// 00578d66: MOV EAX,0x646bce
//   Label: LAB_00578d66
//   XREF to: 00646bce (DATA)
// 00578d6b: MOV EBX,0x1
// 00578d70: JMP 0x00578d14
//   XREF to: 00578d14 (UNCONDITIONAL_JUMP)
