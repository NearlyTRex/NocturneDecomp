// Name: core_hero.cpp_FUN_004ec320
// Address: 004ec320
// Address Range: [[004ec320, 004ec340]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004ec320(CHero *this_ptr,int ai_task)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004ec320(CHero *this_ptr,int ai_task)

{
  *(int *)(this_ptr + 0x1ffa8) = ai_task;
  memset(this_ptr + 0xc1d8,0,0x30);
  return;
}
