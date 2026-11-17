// Name: core_moon.cpp_CMoon_update_FUN_005024a0
// Address: 005024a0
// Address Range: [[005024a0, 00502507]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_005024a0(CMoon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_update_FUN_005024a0(CMoon *this_ptr,float delta_time)

{
  g_FLOAT_01d1cdc4 = delta_time * (float)12 + g_FLOAT_01d1cdc4;
  if ((float)74 <= g_FLOAT_01d1cdc4) {
    g_FLOAT_01d1cdc4 = g_FLOAT_01d1cdc4 + -74.0f;
  }
  g_INT_01d1cdbc = g_INT_01d1cdbc + g_GlobalDeltaTimeInt * 0x20;
  g_INT_01d1cdc0 = g_INT_01d1cdc0 + g_GlobalDeltaTimeInt * 0x10;
  return;
}
