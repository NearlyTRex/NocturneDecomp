// Name: core_hero.cpp_CHero_setAiTask_FUN_004ec320
// Address: 004ec320
// Address Range: [[004ec320, 004ec340]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004ec320(CHero *this_ptr,int ai_task)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004ec320(CHero *this_ptr,int ai_task)

{
  this_ptr->ai_task = ai_task;
  memset(&this_ptr->player_input,0,0x30);
  return;
}
