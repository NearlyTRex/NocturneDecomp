// Name: core_game.cpp_CGame_copyPixx_FUN_004e4460
// Address: 004e4460
// Address Range: [[004e4460, 004e446e]]
// Convention: __cdecl
// Signature: CGame * core_game.cpp_CGame_copyPixx_FUN_004e4460(CGame * this_ptr, CGame * other)

#include "nocturne.h"

CGame * __cdecl core_game_cpp_CGame_copyPixx_FUN_004e4460(CGame *this_ptr,CGame *other)

{
  this_ptr->game_pixx = other->game_pixx;
  return this_ptr;
}


// Assembly code:
// 004e4460: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_game.cpp_CGame_copyPixx_FUN_004e4460
//   XREF to: Stack[0x4] (READ)
// 004e4464: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004e4468: MOV EAX,dword ptr [EAX]
// 004e446a: MOV dword ptr [EDX],EAX
// 004e446c: MOV EAX,EDX
// 004e446e: RET
