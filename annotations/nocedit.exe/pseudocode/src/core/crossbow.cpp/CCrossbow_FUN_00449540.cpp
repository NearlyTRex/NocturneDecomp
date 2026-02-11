// Name: core_crossbow.cpp_CCrossbow_FUN_00449540
// Address: 00449540
// Address Range: [[00449540, 00449568]]
// Convention: __cdecl
// Signature: float __cdecl core_crossbow_cpp_CCrossbow_FUN_00449540(CCrossbow *this_ptr)

#include "nocturne.h"

float __cdecl core_crossbow_cpp_CCrossbow_FUN_00449540(CCrossbow *this_ptr)

{
  return ((float)0.66600000000000004 - (this_ptr->base).fire_cooldown_timer) * (float)1.5015015015015001 *
         (float)11;
}
