// Name: core_hero.cpp_CHero_FUN_004f2870
// Address: 004f2870
// Address Range: [[004f2870, 004f2879]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f2870(CHero * this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2870(CHero *this_ptr)

{
  return (int)(this_ptr->field3_0xbe2c + 0x2c);
}


// Assembly code:
// 004f2870: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_hero.cpp_CHero_FUN_004f2870
//   XREF to: Stack[0x4] (READ)
// 004f2874: ADD EAX,0xbe58
// 004f2879: RET
