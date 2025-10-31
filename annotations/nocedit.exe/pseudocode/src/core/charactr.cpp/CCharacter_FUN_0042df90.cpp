// Name: core_charactr.cpp_CCharacter_FUN_0042df90
// Address: 0042df90
// Address Range: [[0042df90, 0042dfb0]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042df90(CCharacter * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042df90(CCharacter *this_ptr)

{
  int in_stack_00000008;
  float in_stack_0000000c;
  
  if (*(int *)(this_ptr->cloth_data + 0x478) != 0) {
    return;
  }
  core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70
            (&this_ptr->base_actor,in_stack_00000008,in_stack_0000000c);
  return;
}


// Assembly code:
// 0042df90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042df90
//   XREF to: Stack[0x4] (READ)
// 0042df94: CMP dword ptr [EAX + 0x2f10],0x0
// 0042df9b: JZ 0x0042df9e
//   XREF to: 0042df9e (CONDITIONAL_JUMP)
// 0042df9d: RET
// 0042df9e: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_0042df9e
//   XREF to: Stack[0x8] (READ)
// 0042dfa2: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0042dfa6: PUSH ECX
// 0042dfa7: PUSH EAX
// 0042dfa8: CALL core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
//   XREF to: 00409e70 (UNCONDITIONAL_CALL)
// 0042dfad: ADD ESP,0xc
// 0042dfb0: RET
