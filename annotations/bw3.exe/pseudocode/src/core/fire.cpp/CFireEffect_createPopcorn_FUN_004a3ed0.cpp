// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_004a3ed0
// Address: 004a3ed0
// Address Range: [[004a3ed0, 004a3f17]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004a3ed0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004a3ed0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(g_PopcornPool[g_INT_01d03b88].base.vtable)->setup)
            (&g_PopcornPool[g_INT_01d03b88].base,position,velocity);
  g_INT_01d03b88 = g_INT_01d03b88 + 1;
  if (g_INT_01d03b88 < 0x100) {
    return;
  }
  g_INT_01d03b88 = 0;
  return;
}
