// Name: core_fire.cpp_CFireEffect_createRainDrop_FUN_0048c760
// Address: 0048c760
// Address Range: [[0048c760, 0048c7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  int iVar1;
  
  (*(g_CRainDrop_ARRAY_01c6ce18[_DAT_01c6ce14].base.vtable)->setup)
            (&g_CRainDrop_ARRAY_01c6ce18[_DAT_01c6ce14].base,position,velocity);
  iVar1 = _DAT_01c6ce14 + 1;
  g_CRainDrop_ARRAY_01c6ce18[_DAT_01c6ce14].base.lifetime_remaining = 0.25;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  _DAT_01c6ce14 = iVar1;
  return;
}
