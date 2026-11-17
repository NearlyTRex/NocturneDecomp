// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0
// Address: 0049e9d0
// Address Range: [[0049e9d0, 0049ea17]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(g_PopcornPool[g_INT_01ca367c].base.vtable)->setup)
            (&g_PopcornPool[g_INT_01ca367c].base,position,velocity);
  g_INT_01ca367c = g_INT_01ca367c + 1;
  if (g_INT_01ca367c < 0x100) {
    return;
  }
  g_INT_01ca367c = 0;
  return;
}
