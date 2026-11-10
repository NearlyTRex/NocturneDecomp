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
  char *pcVar3;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
  if (iVar1 == 0) {
    pcVar3 = "ghoul-dig-?.wav";
  }
  else {
    pcVar3 = "ghoul-eat-?.wav";
  }
  uVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,pcVar3);
  *(uint *)&this_ptr->field_0xc354 = uVar2;
  return;
}
