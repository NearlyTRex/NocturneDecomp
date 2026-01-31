// Name: core_stranger.cpp_CStranger_FUN_005c68a0
// Address: 005c68a0
// Address Range: [[005c68a0, 005c68ea]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c68a0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c68a0(CStranger *this_ptr)

{
  CDemonActor *in_stack_00000008;
  
  core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0((CCharacter *)this_ptr,in_stack_00000008)
  ;
  if (in_stack_00000008 == *(CDemonActor **)(this_ptr->unk1 + 0x28)) {
    this_ptr->unk1[0x28] = '\0';
    this_ptr->unk1[0x29] = '\0';
    this_ptr->unk1[0x2a] = '\0';
    this_ptr->unk1[0x2b] = '\0';
    if (in_stack_00000008 != *(CDemonActor **)(this_ptr->unk1 + 0x48)) {
      return;
    }
  }
  else if (in_stack_00000008 != *(CDemonActor **)(this_ptr->unk1 + 0x48)) {
    return;
  }
  this_ptr->unk1[0x48] = '\0';
  this_ptr->unk1[0x49] = '\0';
  this_ptr->unk1[0x4a] = '\0';
  this_ptr->unk1[0x4b] = '\0';
  return;
}
