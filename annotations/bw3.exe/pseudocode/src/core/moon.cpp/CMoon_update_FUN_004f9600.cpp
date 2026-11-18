// Name: core_moon.cpp_CMoon_update_FUN_004f9600
// Address: 004f9600
// Address Range: [[004f9600, 004f9667]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_004f9600(CMoon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_update_FUN_004f9600(CMoon *this_ptr,float delta_time)

{
  g_MoonAnimationTimer = delta_time * (float)12 + g_MoonAnimationTimer;
  if ((float)30 <= g_MoonAnimationTimer) {
    g_MoonAnimationTimer = g_MoonAnimationTimer + -30.0f;
  }
  g_INT_01d8863c = g_INT_01d8863c + g_GlobalDeltaTimeInt * 0x20;
  g_INT_01d88640 = g_INT_01d88640 + g_GlobalDeltaTimeInt * 0x10;
  return;
}
