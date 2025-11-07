// Name: core_skeledit.cpp_FUN_00592520
// Address: 00592520
// Address Range: [[00592520, 005925bc]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00592520()
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059371b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_0064bff2
//   TerminatedCString s_anon_0064bff4
//   TerminatedCString s_patch_0064bff6
//   TerminatedCString s_d_0064bffc
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

undefined4 core_skeledit_cpp_FUN_00592520(void)

{
  int iVar1;
  char *in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_0000000c,"(");
  if (iVar1 == 0) {
    *in_stack_00000010 = 0;
  }
  else {
    iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_0000000c,")");
    if (iVar1 == 0) {
      *in_stack_00000010 = in_stack_0000001c + -1;
      return 1;
    }
    if (in_stack_00000020 != 0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,"patch");
      if (iVar1 == 0) {
        *in_stack_00000010 = -1;
        return 1;
      }
    }
    iVar1 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_0000000c,"%d");
    if (((iVar1 != 1) || (*in_stack_00000010 < 0)) || (in_stack_00000024 <= *in_stack_00000010)) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 00592520: PUSH 0x18
//   Label: core_skeledit.cpp_FUN_00592520
// 00592525: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0059252a: PUSH EBX
// 0059252b: PUSH ESI
// 0059252c: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00592530: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00592534: PUSH 0x64bff2
//   XREF to: 0064bff2 (DATA)
// 00592539: PUSH ESI
// 0059253a: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0059253f: ADD ESP,0x8
// 00592542: TEST EAX,EAX
// 00592544: JNZ 0x00592550
//   XREF to: 00592550 (CONDITIONAL_JUMP)
// 00592546: MOV dword ptr [EBX],EAX
// 00592548: MOV EAX,0x1
// 0059254d: POP ESI
//   Label: LAB_0059254d
// 0059254e: POP EBX
// 0059254f: RET
// 00592550: PUSH 0x64bff4
//   Label: LAB_00592550
//   XREF to: 0064bff4 (DATA)
// 00592555: PUSH ESI
// 00592556: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0059255b: ADD ESP,0x8
// 0059255e: TEST EAX,EAX
// 00592560: JZ 0x005925a0
//   XREF to: 005925a0 (CONDITIONAL_JUMP)
// 00592562: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[0x10] (READ)
// 00592567: JZ 0x0059257b
//   XREF to: 0059257b (CONDITIONAL_JUMP)
// 00592569: PUSH 0x64bff6
//   XREF to: 0064bff6 (DATA)
// 0059256e: PUSH ESI
// 0059256f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00592574: ADD ESP,0x8
// 00592577: TEST EAX,EAX
// 00592579: JZ 0x005925af
//   XREF to: 005925af (CONDITIONAL_JUMP)
// 0059257b: PUSH EBX
//   Label: LAB_0059257b
// 0059257c: PUSH 0x64bffc
//   XREF to: 0064bffc (DATA)
// 00592581: PUSH ESI
// 00592582: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00592587: ADD ESP,0xc
// 0059258a: CMP EAX,0x1
// 0059258d: JNZ 0x0059259b
//   XREF to: 0059259b (CONDITIONAL_JUMP)
// 0059258f: MOV ECX,dword ptr [EBX]
// 00592591: TEST ECX,ECX
// 00592593: JL 0x0059259b
//   XREF to: 0059259b (CONDITIONAL_JUMP)
// 00592595: CMP ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00592599: JL 0x0059254d
//   XREF to: 0059254d (CONDITIONAL_JUMP)
// 0059259b: XOR EAX,EAX
//   Label: LAB_0059259b
// 0059259d: POP ESI
// 0059259e: POP EBX
// 0059259f: RET
// 005925a0: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005925a0
//   XREF to: Stack[0xc] (READ)
// 005925a4: DEC EAX
// 005925a5: MOV dword ptr [EBX],EAX
// 005925a7: MOV EAX,0x1
// 005925ac: POP ESI
// 005925ad: POP EBX
// 005925ae: RET
// 005925af: MOV EAX,0x1
//   Label: LAB_005925af
// 005925b4: MOV dword ptr [EBX],0xffffffff
// 005925ba: POP ESI
// 005925bb: POP EBX
// 005925bc: RET
