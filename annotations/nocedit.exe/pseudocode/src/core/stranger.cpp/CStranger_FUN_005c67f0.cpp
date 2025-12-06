// Name: core_stranger.cpp_CStranger_FUN_005c67f0
// Address: 005c67f0
// Address Range: [[005c67f0, 005c6843]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005c67f0(CStranger * this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c67f0(CStranger *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  int in_stack_00000008;
  
  if ((this_ptr->base_hero).base_character.carry_hands[in_stack_00000008].carry_actor ==
      *(CDemonActor **)(this_ptr->field2_0x1fbd8 + 0x54)) {
    pCVar1 = (this_ptr->base_hero).base_character.base_actor.vtable;
    this_ptr->field2_0x1fbd8[0x54] = '\0';
    this_ptr->field2_0x1fbd8[0x55] = '\0';
    this_ptr->field2_0x1fbd8[0x56] = '\0';
    this_ptr->field2_0x1fbd8[0x57] = '\0';
    (*pCVar1[1].getAllowedMeleeAttackTypes)((CDemonActor *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_0042cfe0((CCharacter *)this_ptr);
  return;
}
