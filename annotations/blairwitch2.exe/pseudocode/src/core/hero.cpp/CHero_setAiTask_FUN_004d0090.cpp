// Name: core_hero.cpp_CHero_setAiTask_FUN_004d0090
// Address: 004d0090
// Address Range: [[004d0090, 004d00b0]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004d0090(CHero *this_ptr,int ai_task)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004d0090(CHero *this_ptr,int ai_task)

{
  this_ptr->ai_task = ai_task;
  memset(&this_ptr->player_input,0,0x34);
  return;
}
