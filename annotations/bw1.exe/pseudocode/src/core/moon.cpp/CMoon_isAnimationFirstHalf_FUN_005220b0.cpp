// Name: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_005220b0
// Address: 005220b0
// Address Range: [[005220b0, 005220c9]]
// Convention: __cdecl
// Signature: int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_005220b0(CMoon *this_ptr)

#include "nocturne.h"

int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_005220b0(CMoon *this_ptr)

{
  if ((float)30 <= g_MoonAnimationTimer) {
    return 0;
  }
  return 1;
}
