// Name: core_charactr.cpp_CCharacter_FUN_0042df90
// Address: 0042df90
// Address Range: [[0042df90, 0042dfb0]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042df90(CCharacter * this_ptr)

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
