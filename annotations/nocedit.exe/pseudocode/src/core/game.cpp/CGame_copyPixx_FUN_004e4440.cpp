// Name: core_game.cpp_CGame_copyPixx_FUN_004e4440
// Address: 004e4440
// Address Range: [[004e4440, 004e444e]]
// Convention: __cdecl
// Signature: CGame * core_game.cpp_CGame_copyPixx_FUN_004e4440(CGame * this_ptr, CGame * other)

#include "nocturne.h"

CGame * __cdecl core_game_cpp_CGame_copyPixx_FUN_004e4440(CGame *this_ptr,CGame *other)

{
  this_ptr->game_pixx = other->game_pixx;
  return this_ptr;
}
