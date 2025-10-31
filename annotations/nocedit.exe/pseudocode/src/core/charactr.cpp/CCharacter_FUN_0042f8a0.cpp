// Name: core_charactr.cpp_CCharacter_FUN_0042f8a0
// Address: 0042f8a0
// Address Range: [[0042f8a0, 0042f8e1]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00413ff0 (00413ff0) at 00413ffa [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_004405f0 (004405f0) at 004405fa [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d75e0 (004d75e0) at 004d75eb [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1cb0 (004f1cb0) at 004f1cba [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f9780 (004f9780) at 004f978a [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520da0 (00520da0) at 00520dbc [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00559100 (00559100) at 0055910a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c68a0 (005c68a0) at 005c68ac [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9ef0 (005d9ef0) at 005d9efa [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042f8a0(CCharacter *this_ptr)

{
  char *pcVar1;
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000(&this_ptr->base_actor,in_stack_00000008);
  pcVar1 = (this_ptr->base_actor).create_event + 0x10;
  do {
    while (in_stack_00000008 == this_ptr->carry_hands[0].carry_actor) {
      this_ptr->carry_hands[0].carry_actor = (CDemonActor *)0x0;
      this_ptr = (CCharacter *)&(this_ptr->base_actor).orient_matrix.m[0].z;
      if (this_ptr == (CCharacter *)pcVar1) {
        return;
      }
    }
    this_ptr = (CCharacter *)&(this_ptr->base_actor).orient_matrix.m[0].z;
  } while (this_ptr != (CCharacter *)pcVar1);
  return;
}


// Assembly code:
// 0042f8a0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042f8a0
// 0042f8a1: PUSH ESI
// 0042f8a2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042f8a6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042f8aa: PUSH EBX
// 0042f8ab: PUSH ESI
// 0042f8ac: CALL core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
//   XREF to: 0040d000 (UNCONDITIONAL_CALL)
// 0042f8b1: ADD ESP,0x8
// 0042f8b4: MOV EAX,ESI
// 0042f8b6: LEA EDX,[ESI + 0x88]
// 0042f8bc: CMP EBX,dword ptr [EAX + 0x24b4]
//   Label: LAB_0042f8bc
// 0042f8c2: JZ 0x0042f8ce
//   XREF to: 0042f8ce (CONDITIONAL_JUMP)
// 0042f8c4: ADD EAX,0x44
// 0042f8c7: CMP EAX,EDX
// 0042f8c9: JNZ 0x0042f8bc
//   XREF to: 0042f8bc (CONDITIONAL_JUMP)
// 0042f8cb: POP ESI
// 0042f8cc: POP EBX
// 0042f8cd: RET
// 0042f8ce: MOV dword ptr [EAX + 0x24b4],0x0
//   Label: LAB_0042f8ce
// 0042f8d8: ADD EAX,0x44
// 0042f8db: CMP EAX,EDX
// 0042f8dd: JNZ 0x0042f8bc
//   XREF to: 0042f8bc (CONDITIONAL_JUMP)
// 0042f8df: POP ESI
// 0042f8e0: POP EBX
// 0042f8e1: RET
