// Name: core_actor.cpp_CActorPropertyList_FUN_0040e5a0
// Address: 0040e5a0
// Address Range: [[0040e5a0, 0040e631]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorPropertyList_FUN_0040e5a0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 004813ee [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 00505333 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_d_0061446b
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e5a0(CActorPropertyList *this_ptr)

{
  int in_EAX;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CActorPropertyList *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  char local_d8 [200];
  
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = 5;
  }
  if (*in_stack_0000000c <= in_stack_00000010) {
    in_stack_00000010 = *in_stack_0000000c + 1;
  }
  if (5 < in_stack_00000010) {
    in_stack_00000010 = 5;
  }
  iVar1 = 0;
  if (0 < in_stack_00000010) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_d8,"%s %d");
      local_d8[0] = '\0';
      local_d8[1] = '\0';
      local_d8[2] = '\0';
      local_d8[3] = '\0';
      in_EAX = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(in_stack_00000008);
      *(int *)(in_EAX + 0x5c) = iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000010);
  }
  return in_EAX;
}


// Assembly code:
// 0040e5a0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e5a0
// 0040e5a1: PUSH ESI
// 0040e5a2: PUSH EDI
// 0040e5a3: PUSH EBP
// 0040e5a4: SUB ESP,0xc8
// 0040e5aa: MOV EBP,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x8] (READ)
// 0040e5b1: MOV EDI,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0xc] (READ)
// 0040e5b8: MOV ESI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x10] (READ)
// 0040e5bf: TEST ESI,ESI
// 0040e5c1: JL 0x0040e62b
//   XREF to: 0040e62b (CONDITIONAL_JUMP)
// 0040e5c3: MOV EDX,dword ptr [EDI]
//   Label: LAB_0040e5c3
// 0040e5c5: CMP ESI,EDX
// 0040e5c7: JL 0x0040e5cc
//   XREF to: 0040e5cc (CONDITIONAL_JUMP)
// 0040e5c9: LEA ESI,[EDX + 0x1]
// 0040e5cc: CMP ESI,0x5
//   Label: LAB_0040e5cc
// 0040e5cf: JLE 0x0040e5d6
//   XREF to: 0040e5d6 (CONDITIONAL_JUMP)
// 0040e5d1: MOV ESI,0x5
// 0040e5d6: XOR EBX,EBX
//   Label: LAB_0040e5d6
// 0040e5d8: TEST ESI,ESI
// 0040e5da: JLE 0x0040e620
//   XREF to: 0040e620 (CONDITIONAL_JUMP)
// 0040e5dc: LEA EAX,[EBX + 0x1]
//   Label: LAB_0040e5dc
// 0040e5df: PUSH EAX
// 0040e5e0: PUSH EBP
// 0040e5e1: PUSH 0x61446b
//   XREF to: 0061446b (DATA)
// 0040e5e6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xd8] (DATA)
// 0040e5ea: PUSH EAX
// 0040e5eb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040e5f0: ADD ESP,0x10
// 0040e5f3: PUSH 0x0
// 0040e5f5: PUSH EDI
// 0040e5f6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xd8] (DATA)
// 0040e5fa: PUSH EAX
// 0040e5fb: PUSH 0x10
// 0040e5fd: MOV ECX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x4] (READ)
// 0040e604: PUSH ECX
// 0040e605: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e60a: MOV dword ptr [EAX + 0x5c],EBX
// 0040e60d: INC EBX
// 0040e60e: ADD ESP,0x14
// 0040e611: CMP EBX,ESI
// 0040e613: JL 0x0040e5dc
//   XREF to: 0040e5dc (CONDITIONAL_JUMP)
// 0040e615: LEA EAX,[EAX]
// 0040e61b: LEA EDX,[EDX]
// 0040e61e: MOV EBX,EBX
// 0040e620: ADD ESP,0xc8
//   Label: LAB_0040e620
// 0040e626: POP EBP
// 0040e627: POP EDI
// 0040e628: POP ESI
// 0040e629: POP EBX
// 0040e62a: RET
// 0040e62b: MOV ESI,0x5
//   Label: LAB_0040e62b
// 0040e630: JMP 0x0040e5c3
//   XREF to: 0040e5c3 (UNCONDITIONAL_JUMP)
