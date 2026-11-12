// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_004a3ed0
// Address: 004a3ed0
// Address Range: [[004a3ed0, 004a3f17]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004a3ed0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_004a3ed0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(g_PopcornPool[_DAT_01d03b88].base.vtable)->setup)
            (&g_PopcornPool[_DAT_01d03b88].base,position,velocity);
  _DAT_01d03b88 = _DAT_01d03b88 + 1;
  if (_DAT_01d03b88 < 0x100) {
    return;
  }
  _DAT_01d03b88 = 0;
  return;
}
