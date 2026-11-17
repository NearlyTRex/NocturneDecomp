// Name: core_moon.cpp_CMoon_update_FUN_00521dd0
// Address: 00521dd0
// Address Range: [[00521dd0, 00521e37]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_00521dd0(CMoon *this_ptr,float param_2)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_update_FUN_00521dd0(CMoon *this_ptr,float param_2)

{
  g_FLOAT_01d33f6c = param_2 * (float)12 + g_FLOAT_01d33f6c;
  if ((float)30 <= g_FLOAT_01d33f6c) {
    g_FLOAT_01d33f6c = g_FLOAT_01d33f6c + -30.0f;
  }
  g_INT_01d33f64 = g_INT_01d33f64 + g_INT_01c43530 * 0x20;
  g_INT_01d33f68 = g_INT_01d33f68 + g_INT_01c43530 * 0x10;
  return;
}
