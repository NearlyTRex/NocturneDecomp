// Name: core_charactr.cpp_getGameDeltaTime_FUN_00434b00
// Address: 00434b00
// Address Range: [[00434b00, 00434b0a]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_getGameDeltaTime_FUN_00434b00(CGame *game_ptr)

#include "nocturne.h"

float __cdecl core_charactr_cpp_getGameDeltaTime_FUN_00434b00(CGame *game_ptr)

{
  return game_ptr->delta_time_float;
}
