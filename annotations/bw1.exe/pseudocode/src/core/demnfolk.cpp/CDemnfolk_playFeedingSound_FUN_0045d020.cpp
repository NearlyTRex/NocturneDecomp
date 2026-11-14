// Name: core_demnfolk.cpp_CDemnfolk_playFeedingSound_FUN_0045d020
// Address: 0045d020
// Address Range: [[0045d020, 0045d056]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_playFeedingSound_FUN_0045d020(CDemnfolk *this_ptr)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_CDemnfolk_playFeedingSound_FUN_0045d020(CDemnfolk *this_ptr)

{
  int iVar1;
  uint uVar2;
  char *sound_name;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
  if (iVar1 == 0) {
    sound_name = "ghoul-dig-?.wav";
  }
  else {
    sound_name = "ghoul-eat-?.wav";
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
  this_ptr->sfx_handles[2] = uVar2;
  return;
}
