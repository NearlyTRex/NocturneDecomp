// Name: core_charactr.cpp_CCharacter_FUN_0042bf90
// Address: 0042bf90
// Address Range: [[0042bf90, 0042c00a]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042bf90(CCharacter * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c6850 (005c6850) at 005c686d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_charactr_cpp_0061715e
//   TerminatedCString s_core_charactr_cpp_00617173
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042bf90(CCharacter *this_ptr)

{
  SCarryHand *pSVar1;
  CDemonActor *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (in_stack_00000008,"..\\core\\charactr.cpp",0x954);
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (&this_ptr->base_actor,"..\\core\\charactr.cpp",0x955);
  pSVar1 = this_ptr->carry_hands;
  do {
    while (in_stack_00000008 == pSVar1->carry_actor) {
      (*((pSVar1->carry_actor->metadata).vtable)->onDropped)(in_stack_00000008,in_stack_0000000c);
      pSVar1->carry_actor = (CDemonActor *)0x0;
      pSVar1 = pSVar1 + 1;
      if (pSVar1 == (SCarryHand *)this_ptr->talk_to_me_event) {
        return;
      }
    }
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != (SCarryHand *)this_ptr->talk_to_me_event);
  return;
}


// Assembly code:
// 0042bf90: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042bf90
// 0042bf91: PUSH ESI
// 0042bf92: PUSH EDI
// 0042bf93: PUSH EBP
// 0042bf94: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042bf98: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042bf9c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042bfa0: PUSH 0x954
// 0042bfa5: PUSH 0x61715e
//   XREF to: 0061715e (DATA)
// 0042bfaa: PUSH EDI
// 0042bfab: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0042bfb0: ADD ESP,0xc
// 0042bfb3: PUSH 0x955
// 0042bfb8: PUSH 0x617173
//   XREF to: 00617173 (DATA)
// 0042bfbd: PUSH ESI
// 0042bfbe: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0042bfc3: ADD ESI,0x24ac
// 0042bfc9: ADD ESP,0xc
// 0042bfcc: MOV EBX,ESI
// 0042bfce: ADD ESI,0x88
// 0042bfd4: MOV EDX,dword ptr [EBX + 0x8]
//   Label: LAB_0042bfd4
// 0042bfd7: CMP EDI,EDX
// 0042bfd9: JZ 0x0042bfe7
//   XREF to: 0042bfe7 (CONDITIONAL_JUMP)
// 0042bfdb: ADD EBX,0x44
// 0042bfde: CMP EBX,ESI
// 0042bfe0: JNZ 0x0042bfd4
//   XREF to: 0042bfd4 (CONDITIONAL_JUMP)
// 0042bfe2: POP EBP
// 0042bfe3: POP EDI
// 0042bfe4: POP ESI
// 0042bfe5: POP EBX
// 0042bfe6: RET
// 0042bfe7: PUSH EBP
//   Label: LAB_0042bfe7
// 0042bfe8: MOV EDX,dword ptr [EDX + 0x154]
// 0042bfee: PUSH EDI
// 0042bfef: CALL dword ptr [EDX + 0x84]
// 0042bff5: ADD ESP,0x8
// 0042bff8: MOV dword ptr [EBX + 0x8],0x0
// 0042bfff: ADD EBX,0x44
// 0042c002: CMP EBX,ESI
// 0042c004: JNZ 0x0042bfd4
//   XREF to: 0042bfd4 (CONDITIONAL_JUMP)
// 0042c006: POP EBP
// 0042c007: POP EDI
// 0042c008: POP ESI
// 0042c009: POP EBX
// 0042c00a: RET
