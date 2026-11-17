// Name: core_fire.cpp_CFireEffect_createRainDrop_FUN_0048c760
// Address: 0048c760
// Address Range: [[0048c760, 0048c7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  int iVar1;
  
  (*(g_RainDropPool[g_INT_01c6ce14].base.vtable)->setup)
            (&g_RainDropPool[g_INT_01c6ce14].base,position,velocity);
  iVar1 = g_INT_01c6ce14 + 1;
  g_RainDropPool[g_INT_01c6ce14].base.lifetime_remaining = 0.25;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  g_INT_01c6ce14 = iVar1;
  return;
}
