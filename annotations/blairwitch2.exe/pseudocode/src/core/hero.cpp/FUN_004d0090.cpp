// Name: core_hero.cpp_FUN_004d0090
// Address: 004d0090
// Address Range: [[004d0090, 004d00b0]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004d0090(CHero *this_ptr,int ai_task)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004d0090(CHero *this_ptr,int ai_task)

{
  *(int *)(this_ptr + 0x25638) = ai_task;
  memset(this_ptr + 0x10a68,0,0x34);
  return;
}
