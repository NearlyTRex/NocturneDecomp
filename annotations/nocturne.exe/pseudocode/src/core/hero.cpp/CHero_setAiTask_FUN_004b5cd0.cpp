// Name: core_hero.cpp_CHero_setAiTask_FUN_004b5cd0
// Address: 004b5cd0
// Address Range: [[004b5cd0, 004b5cf0]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004b5cd0(CHero *this_ptr,int ai_task)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004b5cd0(CHero *this_ptr,int ai_task)

{
  this_ptr->ai_task = ai_task;
  memset(&this_ptr->player_input,0,0x2c);
  return;
}
