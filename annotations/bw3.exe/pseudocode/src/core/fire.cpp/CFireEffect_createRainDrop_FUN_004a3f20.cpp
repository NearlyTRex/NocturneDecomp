// Name: core_fire.cpp_CFireEffect_createRainDrop_FUN_004a3f20
// Address: 004a3f20
// Address Range: [[004a3f20, 004a3f6f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_004a3f20(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  int iVar1;
  
  (*(g_RainDropPool[g_INT_01d07b8c].base.vtable)->setup)
            (&g_RainDropPool[g_INT_01d07b8c].base,position,velocity);
  iVar1 = g_INT_01d07b8c + 1;
  g_RainDropPool[g_INT_01d07b8c].base.lifetime_remaining = 0.25;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  g_INT_01d07b8c = iVar1;
  return;
}
