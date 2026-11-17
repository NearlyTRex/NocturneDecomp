// Name: core_moon.cpp_CMoon_update_FUN_00521dd0
// Address: 00521dd0
// Address Range: [[00521dd0, 00521e37]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_00521dd0(CMoon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_update_FUN_00521dd0(CMoon *this_ptr,float delta_time)

{
  g_MoonAnimationTimer = delta_time * (float)12 + g_MoonAnimationTimer;
  if ((float)30 <= g_MoonAnimationTimer) {
    g_MoonAnimationTimer = g_MoonAnimationTimer + -30.0f;
  }
  g_INT_01d33f64 = g_INT_01d33f64 + g_GlobalDeltaTimeInt * 0x20;
  g_INT_01d33f68 = g_INT_01d33f68 + g_GlobalDeltaTimeInt * 0x10;
  return;
}
