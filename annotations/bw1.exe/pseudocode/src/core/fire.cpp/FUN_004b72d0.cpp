// Name: core_fire.cpp_FUN_004b72d0
// Address: 004b72d0
// Address Range: [[004b72d0, 004b7317]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b72d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004b72d0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(code *)**(uint **)&g_PopcornPool[_DAT_01cbc108].field_0x3c)
            (g_PopcornPool + _DAT_01cbc108,position,velocity);
  _DAT_01cbc108 = _DAT_01cbc108 + 1;
  if (_DAT_01cbc108 < 0x100) {
    return;
  }
  _DAT_01cbc108 = 0;
  return;
}
