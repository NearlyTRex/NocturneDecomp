// Name: core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710
// Address: 0048c710
// Address Range: [[0048c710, 0048c75e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity)

{
  (*(g_CPopcorn_ARRAY_01c69614[_DAT_01c69610].base.vtable)->setup)
            (&g_CPopcorn_ARRAY_01c69614[_DAT_01c69610].base,position,velocity);
  _DAT_01c69610 = _DAT_01c69610 + 1;
  if (_DAT_01c69610 < 0x100) {
    return;
  }
  _DAT_01c69610 = 0;
  return;
}
