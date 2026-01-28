// Name: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0
// Address: 0052a3f0
// Address Range: [[0052a3f0, 0052a409]]
// Convention: __cdecl
// Signature: int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(CMoon *this_ptr)

#include "nocturne.h"

int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(CMoon *this_ptr)

{
  if ((float)30 <= g_MoonAnimationTimer) {
    return 0;
  }
  return 1;
}
