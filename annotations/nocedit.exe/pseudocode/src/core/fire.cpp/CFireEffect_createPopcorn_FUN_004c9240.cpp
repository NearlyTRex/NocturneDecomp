// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240
// Address: 004c9240
// Address Range: [[004c9240, 004c928e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004c9240(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004c9240(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

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
