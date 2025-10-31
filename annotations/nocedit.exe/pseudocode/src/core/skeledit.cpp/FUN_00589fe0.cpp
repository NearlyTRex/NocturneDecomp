// Name: core_skeledit.cpp_FUN_00589fe0
// Address: 00589fe0
// Address Range: [[00589fe0, 0058a0e5]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589fe0()
// Cross-references:
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589db8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_0064a15e
//   TerminatedCString s_d_0064a166
//   TerminatedCString s_anon_0064a16a
//   TerminatedCString s_anon_0064a172
//   TerminatedCString s_anon_0064a17a
//   TerminatedCString s_anon_0064a17d
//   TerminatedCString s_anon_0064a185
//   TerminatedCString s_anon_0064a18d
//   TerminatedCString s_anon_0064a190
//   TerminatedCString s_anon_0064a198
//   TerminatedCString s_anon_0064a1a0
//   TerminatedCString s_anon_0064a1a3
//   TerminatedCString s_d_0064a1ab
// Function calls:
//   core_skeledit.cpp_FUN_00589fc0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589fe0(void)

{
  undefined1 *in_stack_0000000c;
  FILE *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  core_skeledit_cpp_FUN_00589fc0();
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  *in_stack_0000000c = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010," \"%[^\"]");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  in_stack_0000000c[0x100] = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010," \"%[^\"]");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  in_stack_0000000c[0x200] = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010," \"%[^\"]");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"\"\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  return;
}


// Assembly code:
// 00589fe0: PUSH 0x1c
//   Label: core_skeledit.cpp_FUN_00589fe0
// 00589fe5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00589fea: PUSH EBX
// 00589feb: PUSH ESI
// 00589fec: SUB ESP,0x4
// 00589fef: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00589ff3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00589ff7: PUSH ESI
// 00589ff8: CALL core_skeledit.cpp_FUN_00589fc0
//   XREF to: 00589fc0 (UNCONDITIONAL_CALL)
// 00589ffd: ADD ESP,0x4
// 0058a000: PUSH 0x64a15e
//   XREF to: 0064a15e (DATA)
// 0058a005: PUSH EBX
// 0058a006: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a00b: ADD ESP,0x8
// 0058a00e: MOV EAX,ESP
// 0058a010: PUSH EAX
// 0058a011: PUSH 0x64a166
//   XREF to: 0064a166 (DATA)
// 0058a016: PUSH EBX
// 0058a017: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a01c: ADD ESP,0xc
// 0058a01f: PUSH 0x64a16a
//   XREF to: 0064a16a (DATA)
// 0058a024: PUSH EBX
// 0058a025: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a02a: ADD ESP,0x8
// 0058a02d: PUSH ESI
// 0058a02e: PUSH 0x64a172
//   XREF to: 0064a172 (DATA)
// 0058a033: PUSH EBX
// 0058a034: MOV byte ptr [ESI],0x0
// 0058a037: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a03c: ADD ESP,0xc
// 0058a03f: PUSH 0x64a17a
//   XREF to: 0064a17a (DATA)
// 0058a044: PUSH EBX
// 0058a045: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a04a: ADD ESP,0x8
// 0058a04d: PUSH 0x64a17d
//   XREF to: 0064a17d (DATA)
// 0058a052: PUSH EBX
// 0058a053: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a058: ADD ESP,0x8
// 0058a05b: LEA EAX,[ESI + 0x100]
// 0058a061: PUSH EAX
// 0058a062: PUSH 0x64a185
//   XREF to: 0064a185 (DATA)
// 0058a067: PUSH EBX
// 0058a068: MOV byte ptr [ESI + 0x100],0x0
// 0058a06f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a074: ADD ESP,0xc
// 0058a077: PUSH 0x64a18d
//   XREF to: 0064a18d (DATA)
// 0058a07c: PUSH EBX
// 0058a07d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a082: ADD ESP,0x8
// 0058a085: PUSH 0x64a190
//   XREF to: 0064a190 (DATA)
// 0058a08a: PUSH EBX
// 0058a08b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a090: ADD ESP,0x8
// 0058a093: LEA EAX,[ESI + 0x200]
// 0058a099: PUSH EAX
// 0058a09a: PUSH 0x64a198
//   XREF to: 0064a198 (DATA)
// 0058a09f: PUSH EBX
// 0058a0a0: MOV byte ptr [ESI + 0x200],0x0
// 0058a0a7: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a0ac: ADD ESP,0xc
// 0058a0af: PUSH 0x64a1a0
//   XREF to: 0064a1a0 (DATA)
// 0058a0b4: PUSH EBX
// 0058a0b5: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a0ba: ADD ESP,0x8
// 0058a0bd: PUSH 0x64a1a3
//   XREF to: 0064a1a3 (DATA)
// 0058a0c2: PUSH EBX
// 0058a0c3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a0c8: ADD ESP,0x8
// 0058a0cb: ADD ESI,0x30c
// 0058a0d1: PUSH ESI
// 0058a0d2: PUSH 0x64a1ab
//   XREF to: 0064a1ab (DATA)
// 0058a0d7: PUSH EBX
// 0058a0d8: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a0dd: ADD ESP,0xc
// 0058a0e0: ADD ESP,0x4
// 0058a0e3: POP ESI
// 0058a0e4: POP EBX
// 0058a0e5: RET
