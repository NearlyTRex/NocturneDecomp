// Name: core_skeledit.cpp_FUN_0058a1b0
// Address: 0058a1b0
// Address Range: [[0058a1b0, 0058a25c]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058a1b0()
// Globals:
//   TerminatedCString s_n_0064a213
//   TerminatedCString s_n_0064a22f
//   TerminatedCString s_d_d_0064a242
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_sscanf_FUN_0060013c

#include "nocturne.h"

undefined4 core_skeledit_cpp_FUN_0058a1b0(void)

{
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_0000000c;
  char *in_stack_00000010;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x58a1ba;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x2c);
  puStack_8 = (undefined4 *)0xffffffff;
  crt_stdio_c_sscanf_FUN_0060013c
            (in_stack_00000010,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"%n",in_stack_0000000c,in_stack_0000000c + 0x100,
             in_stack_0000000c + 0x200,&puStack_8);
  puStack_8 = (undefined4 *)&stack0xfffffffc;
  if (unaff_EDI < 0) {
    crt_stdio_c_sscanf_FUN_0060013c
              (in_stack_00000010,"\"%[^\"]\", \"%[^\"]\"%n",in_stack_0000000c,in_stack_0000000c + 0x100);
    if (unaff_ESI < 0) {
      return 0;
    }
    *(undefined1 *)(in_stack_0000000c + 0x200) = 0;
  }
  puStack_8 = (undefined4 *)(in_stack_0000000c + 0x300);
  *puStack_8 = 0;
  *(undefined4 *)(in_stack_0000000c + 0x304) = 0;
  crt_stdio_c_sscanf_FUN_0060013c(in_stack_00000010 + unaff_ESI," , %d , %d");
  return 1;
}


// Assembly code:
// 0058a1b0: PUSH 0x2c
//   Label: core_skeledit.cpp_FUN_0058a1b0
// 0058a1b5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058a1ba: PUSH EBX
// 0058a1bb: PUSH ESI
// 0058a1bc: PUSH EDI
// 0058a1bd: SUB ESP,0x4
// 0058a1c0: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058a1c4: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058a1c8: MOV EAX,ESP
// 0058a1ca: PUSH EAX
// 0058a1cb: LEA EAX,[EBX + 0x200]
// 0058a1d1: PUSH EAX
// 0058a1d2: LEA ESI,[EBX + 0x100]
// 0058a1d8: PUSH ESI
// 0058a1d9: PUSH EBX
// 0058a1da: PUSH 0x64a213
//   XREF to: 0064a213 (DATA)
// 0058a1df: MOV EDX,0xffffffff
// 0058a1e4: PUSH EDI
// 0058a1e5: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0058a1e9: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0058a1ee: ADD ESP,0x18
// 0058a1f1: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x10] (DATA)
// 0058a1f5: JL 0x0058a232
//   XREF to: 0058a232 (CONDITIONAL_JUMP)
// 0058a1f7: LEA EAX,[EBX + 0x304]
//   Label: LAB_0058a1f7
// 0058a1fd: ADD EBX,0x300
// 0058a203: MOV dword ptr [EBX],0x0
// 0058a209: PUSH EAX
// 0058a20a: MOV dword ptr [EBX + 0x4],0x0
// 0058a211: PUSH EBX
// 0058a212: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0058a216: PUSH 0x64a242
//   XREF to: 0064a242 (DATA)
// 0058a21b: ADD EAX,EDI
// 0058a21d: PUSH EAX
// 0058a21e: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0058a223: MOV EAX,0x1
// 0058a228: ADD ESP,0x10
// 0058a22b: ADD ESP,0x4
// 0058a22e: POP EDI
// 0058a22f: POP ESI
// 0058a230: POP EBX
// 0058a231: RET
// 0058a232: MOV EAX,ESP
//   Label: LAB_0058a232
// 0058a234: PUSH EAX
// 0058a235: PUSH ESI
// 0058a236: PUSH EBX
// 0058a237: PUSH 0x64a22f
//   XREF to: 0064a22f (DATA)
// 0058a23c: PUSH EDI
// 0058a23d: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0058a242: ADD ESP,0x14
// 0058a245: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x10] (DATA)
// 0058a249: JL 0x0058a254
//   XREF to: 0058a254 (CONDITIONAL_JUMP)
// 0058a24b: MOV byte ptr [EBX + 0x200],0x0
// 0058a252: JMP 0x0058a1f7
//   XREF to: 0058a1f7 (UNCONDITIONAL_JUMP)
// 0058a254: XOR EAX,EAX
//   Label: LAB_0058a254
// 0058a256: ADD ESP,0x4
// 0058a259: POP EDI
// 0058a25a: POP ESI
// 0058a25b: POP EBX
// 0058a25c: RET
