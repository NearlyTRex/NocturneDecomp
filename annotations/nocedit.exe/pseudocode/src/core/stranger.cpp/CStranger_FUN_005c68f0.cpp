// Name: core_stranger.cpp_CStranger_FUN_005c68f0
// Address: 005c68f0
// Address Range: [[005c68f0, 005c6902]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005c68f0(CStranger * this_ptr)
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3f20

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c68f0(CStranger *this_ptr)

{
  core_hero_cpp_CHero_FUN_004f3f20(&this_ptr->base_hero);
  return;
}


// Assembly code:
// 005c68f0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_stranger.cpp_CStranger_FUN_005c68f0
//   XREF to: Stack[0x8] (READ)
// 005c68f4: PUSH EDX
// 005c68f5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c68f9: PUSH ECX
// 005c68fa: CALL core_hero.cpp_CHero_FUN_004f3f20
//   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
// 005c68ff: ADD ESP,0x8
// 005c6902: RET
