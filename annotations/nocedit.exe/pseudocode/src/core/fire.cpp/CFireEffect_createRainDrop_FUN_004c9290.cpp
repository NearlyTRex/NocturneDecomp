// Name: core_fire.cpp_CFireEffect_createRainDrop_FUN_004c9290
// Address: 004c9290
// Address Range: [[004c9290, 004c92f1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_004c9290(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_004c9290(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  int iVar1;
  
  (*(g_RainDropPool[g_RainDropAllocIndex].base.vtable)->setup)
            (&g_RainDropPool[g_RainDropAllocIndex].base,position,velocity);
  iVar1 = g_RainDropAllocIndex + 1;
  g_RainDropPool[g_RainDropAllocIndex].base.lifetime_remaining = 0.25;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  g_RainDropAllocIndex = iVar1;
  return;
}
