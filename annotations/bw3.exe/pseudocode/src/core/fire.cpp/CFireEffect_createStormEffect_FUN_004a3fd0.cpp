// Name: core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0
// Address: 004a3fd0
// Address Range: [[004a3fd0, 004a4023]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStormEffect_FUN_004a3fd0(CFireEffect *this_ptr,CVector3f position)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createStormEffect_FUN_004a3fd0(CFireEffect *this_ptr,CVector3f position)

{
  core_fire_cpp_CStormEffect_activate_FUN_004a0480
            (&g_CStormEffect_01d0ce80 + g_INT_01d0ce7c,position);
  g_INT_01d0ce7c = g_INT_01d0ce7c + 1;
  if (g_INT_01d0ce7c < 4) {
    return;
  }
  g_INT_01d0ce7c = 0;
  return;
}
