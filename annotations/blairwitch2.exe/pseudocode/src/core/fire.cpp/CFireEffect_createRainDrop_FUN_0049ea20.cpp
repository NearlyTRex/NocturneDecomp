// Name: core_fire.cpp_CFireEffect_createRainDrop_FUN_0049ea20
// Address: 0049ea20
// Address Range: [[0049ea20, 0049ea70]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0049ea20(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0049ea20(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  int iVar1;
  
  (*(g_RainDropPool[_DAT_01ca7680].base.vtable)->setup)
            (&g_RainDropPool[_DAT_01ca7680].base,position,velocity);
  iVar1 = _DAT_01ca7680 + 1;
  g_RainDropPool[_DAT_01ca7680].base.lifetime_remaining = 0.25;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  _DAT_01ca7680 = iVar1;
  return;
}
