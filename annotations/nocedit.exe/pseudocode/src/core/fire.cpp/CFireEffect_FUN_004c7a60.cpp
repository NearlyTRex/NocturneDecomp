// Name: core_fire.cpp_CFireEffect_FUN_004c7a60
// Address: 004c7a60
// Address Range: [[004c7a60, 004c7aa9]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7a60(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7a60(CFireEffect *this_ptr)

{
  g_SparkActiveCount = g_SparkActiveCount + 1;
  if (0x13 < g_SparkActiveCount) {
    g_SparkActiveCount = 0;
  }
  core_fire_cpp_FUN_004c1940();
  return;
}
