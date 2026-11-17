// Name: core_moon.cpp_CMoon_update_FUN_004f9600
// Address: 004f9600
// Address Range: [[004f9600, 004f9667]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_004f9600(CMoon *this_ptr,float param_2)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_update_FUN_004f9600(CMoon *this_ptr,float param_2)

{
  g_FLOAT_01d88644 = param_2 * (float)12 + g_FLOAT_01d88644;
  if ((float)30 <= g_FLOAT_01d88644) {
    g_FLOAT_01d88644 = g_FLOAT_01d88644 + -30.0f;
  }
  g_INT_01d8863c = g_INT_01d8863c + g_INT_01c5fad0 * 0x20;
  g_INT_01d88640 = g_INT_01d88640 + g_INT_01c5fad0 * 0x10;
  return;
}
