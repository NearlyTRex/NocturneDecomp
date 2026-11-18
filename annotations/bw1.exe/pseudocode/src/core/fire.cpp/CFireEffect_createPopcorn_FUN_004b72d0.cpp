// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_004b72d0
// Address: 004b72d0
// Address Range: [[004b72d0, 004b7317]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004b72d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(g_PopcornPool[g_PopcornAllocIndex].base.vtable)->setup)
            (&g_PopcornPool[g_PopcornAllocIndex].base,position,velocity);
  g_PopcornAllocIndex = g_PopcornAllocIndex + 1;
  if (g_PopcornAllocIndex < 0x100) {
    return;
  }
  g_PopcornAllocIndex = 0;
  return;
}
