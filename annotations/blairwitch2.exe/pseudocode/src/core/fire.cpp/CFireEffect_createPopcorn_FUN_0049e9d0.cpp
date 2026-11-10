// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0
// Address: 0049e9d0
// Address Range: [[0049e9d0, 0049ea17]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(code *)**(uint **)&g_PopcornPool[_DAT_01ca367c].field_0x3c)
            (g_PopcornPool + _DAT_01ca367c,position,velocity);
  _DAT_01ca367c = _DAT_01ca367c + 1;
  if (_DAT_01ca367c < 0x100) {
    return;
  }
  _DAT_01ca367c = 0;
  return;
}
