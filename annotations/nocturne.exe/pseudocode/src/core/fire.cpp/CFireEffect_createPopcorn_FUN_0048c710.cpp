// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710
// Address: 0048c710
// Address Range: [[0048c710, 0048c75e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(g_PopcornPool[g_INT_01c69610].base.vtable)->setup)
            (&g_PopcornPool[g_INT_01c69610].base,position,velocity);
  g_INT_01c69610 = g_INT_01c69610 + 1;
  if (g_INT_01c69610 < 0x100) {
    return;
  }
  g_INT_01c69610 = 0;
  return;
}
