// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0
// Address: 004b72d0
// Address Range: [[004b72d0, 004b7317]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(g_PopcornPool[g_INT_01cbc108].base.vtable)->setup)
            (&g_PopcornPool[g_INT_01cbc108].base,position,velocity);
  g_INT_01cbc108 = g_INT_01cbc108 + 1;
  if (g_INT_01cbc108 < 0x100) {
    return;
  }
  g_INT_01cbc108 = 0;
  return;
}
