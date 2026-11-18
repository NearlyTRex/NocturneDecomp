// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_004a3ed0
// Address: 004a3ed0
// Address Range: [[004a3ed0, 004a3f17]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004a3ed0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004a3ed0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(g_PopcornPool[g_RainDropAllocIndex].base.vtable)->setup)
            (&g_PopcornPool[g_RainDropAllocIndex].base,position,velocity);
  g_RainDropAllocIndex = g_RainDropAllocIndex + 1;
  if (g_RainDropAllocIndex < 0x100) {
    return;
  }
  g_RainDropAllocIndex = 0;
  return;
}
