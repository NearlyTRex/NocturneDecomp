// Name: core_stranger.cpp_CStranger_FUN_005c6910
// Address: 005c6910
// Address Range: [[005c6910, 005c6922]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005c6910(CStranger * this_ptr)
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3fa0

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6910(CStranger *this_ptr)

{
  core_hero_cpp_CHero_FUN_004f3fa0(&this_ptr->base_hero);
  return;
}


// Assembly code:
// 005c6910: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_stranger.cpp_CStranger_FUN_005c6910
//   XREF to: Stack[0x8] (READ)
// 005c6914: PUSH EDX
// 005c6915: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c6919: PUSH ECX
// 005c691a: CALL core_hero.cpp_CHero_FUN_004f3fa0
//   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
// 005c691f: ADD ESP,0x8
// 005c6922: RET
