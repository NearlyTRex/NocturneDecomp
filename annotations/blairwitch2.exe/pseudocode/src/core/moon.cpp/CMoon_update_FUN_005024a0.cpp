// Name: core_moon.cpp_CMoon_update_FUN_005024a0
// Address: 005024a0
// Address Range: [[005024a0, 00502507]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_005024a0(CMoon *this_ptr,float param_2)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_update_FUN_005024a0(CMoon *this_ptr,float param_2)

{
  g_FLOAT_01d1cdc4 = param_2 * (float)12 + g_FLOAT_01d1cdc4;
  if ((float)74 <= g_FLOAT_01d1cdc4) {
    g_FLOAT_01d1cdc4 = g_FLOAT_01d1cdc4 + -74.0f;
  }
  g_INT_01d1cdbc = g_INT_01d1cdbc + g_INT_01c2a370 * 0x20;
  g_INT_01d1cdc0 = g_INT_01d1cdc0 + g_INT_01c2a370 * 0x10;
  return;
}
