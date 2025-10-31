// Name: core_actor.cpp_CActorPropertyList_FUN_0040e500
// Address: 0040e500
// Address Range: [[0040e500, 0040e591]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e500(void)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f753 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_d_00614465
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e500(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CActorPropertyList *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  char local_d8 [200];
  
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = 10;
  }
  if (*in_stack_0000000c <= in_stack_00000010) {
    in_stack_00000010 = *in_stack_0000000c + 1;
  }
  if (10 < in_stack_00000010) {
    in_stack_00000010 = 10;
  }
  iVar2 = 0;
  if (0 < in_stack_00000010) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_d8,"%s %d");
      local_d8[0] = '\0';
      local_d8[1] = '\0';
      local_d8[2] = '\0';
      local_d8[3] = '\0';
      iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(in_stack_00000008);
      *(int *)(iVar1 + 0x5c) = iVar2;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + 0x58) = 1;
    } while (iVar2 < in_stack_00000010);
  }
  return;
}


// Assembly code:
// 0040e500: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e500
// 0040e501: PUSH ESI
// 0040e502: PUSH EDI
// 0040e503: PUSH EBP
// 0040e504: SUB ESP,0xc8
// 0040e50a: MOV EBP,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x8] (READ)
// 0040e511: MOV EDI,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 0040e518: MOV ESI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 0040e51f: TEST ESI,ESI
// 0040e521: JL 0x0040e58b
//   XREF to: 0040e58b (CONDITIONAL_JUMP)
// 0040e527: MOV EDX,dword ptr [EDI]
//   Label: LAB_0040e527
// 0040e529: CMP ESI,EDX
// 0040e52b: JL 0x0040e530
//   XREF to: 0040e530 (CONDITIONAL_JUMP)
// 0040e52d: LEA ESI,[EDX + 0x1]
// 0040e530: CMP ESI,0xa
//   Label: LAB_0040e530
// 0040e533: JLE 0x0040e53a
//   XREF to: 0040e53a (CONDITIONAL_JUMP)
// 0040e535: MOV ESI,0xa
// 0040e53a: XOR EBX,EBX
//   Label: LAB_0040e53a
// 0040e53c: TEST ESI,ESI
// 0040e53e: JLE 0x0040e580
//   XREF to: 0040e580 (CONDITIONAL_JUMP)
// 0040e540: LEA EAX,[EBX + 0x1]
//   Label: LAB_0040e540
// 0040e543: PUSH EAX
// 0040e544: PUSH EBP
// 0040e545: PUSH 0x614465
//   XREF to: 00614465 (DATA)
// 0040e54a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xd8] (DATA)
// 0040e54e: PUSH EAX
// 0040e54f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040e554: ADD ESP,0x10
// 0040e557: PUSH 0x0
// 0040e559: PUSH EDI
// 0040e55a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xd8] (DATA)
// 0040e55e: PUSH EAX
// 0040e55f: PUSH 0xe
// 0040e561: MOV ECX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x4] (READ)
// 0040e568: PUSH ECX
// 0040e569: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e56e: ADD ESP,0x14
// 0040e571: MOV dword ptr [EAX + 0x5c],EBX
// 0040e574: INC EBX
// 0040e575: MOV dword ptr [EAX + 0x58],0x1
// 0040e57c: CMP EBX,ESI
// 0040e57e: JL 0x0040e540
//   XREF to: 0040e540 (CONDITIONAL_JUMP)
// 0040e580: ADD ESP,0xc8
//   Label: LAB_0040e580
// 0040e586: POP EBP
// 0040e587: POP EDI
// 0040e588: POP ESI
// 0040e589: POP EBX
// 0040e58a: RET
// 0040e58b: MOV ESI,0xa
//   Label: LAB_0040e58b
// 0040e590: JMP 0x0040e527
//   XREF to: 0040e527 (UNCONDITIONAL_JUMP)
