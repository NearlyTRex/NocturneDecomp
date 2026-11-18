// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710
// Address: 0048c710
// Address Range: [[0048c710, 0048c75e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

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
