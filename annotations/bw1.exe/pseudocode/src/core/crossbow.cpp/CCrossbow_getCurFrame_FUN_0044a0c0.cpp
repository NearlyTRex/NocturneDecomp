// Name: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0044a0c0
// Address: 0044a0c0
// Address Range: [[0044a0c0, 0044a0e8]]
// Convention: __cdecl
// Signature: float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0044a0c0(CCrossbow *this_ptr)

#include "nocturne.h"

float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0044a0c0(CCrossbow *this_ptr)

{
  return ((float)0.66600000000000004 - (this_ptr->base).fire_cooldown_timer) *
         (float)1.5015015015015001 * (float)11;
}
