// Name: core_stranger.cpp_CStranger_FUN_005c6850
// Address: 005c6850
// Address Range: [[005c6850, 005c6895]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005c6850(CStranger * this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6850(CStranger *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  int in_stack_00000008;
  
  if (in_stack_00000008 == *(int *)(this_ptr->field2_0x1fbd8 + 0x54)) {
    pCVar1 = (this_ptr->base_hero).base_character.base_actor.vtable;
    this_ptr->field2_0x1fbd8[0x54] = '\0';
    this_ptr->field2_0x1fbd8[0x55] = '\0';
    this_ptr->field2_0x1fbd8[0x56] = '\0';
    this_ptr->field2_0x1fbd8[0x57] = '\0';
    (*pCVar1[1].getAllowedMeleeAttackTypes)((CDemonActor *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_0042bf90((CCharacter *)this_ptr);
  return;
}
