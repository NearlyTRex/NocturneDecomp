// Name: core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0
// Address: 004a3fd0
// Address Range: [[004a3fd0, 004a4023]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStormEffect_FUN_004a3fd0(CFireEffect *this_ptr,CVector3f position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createStormEffect_FUN_004a3fd0(CFireEffect *this_ptr,CVector3f position)

{
  core_fire_cpp_CStormEffect_activate_FUN_004a0480
            ((CStormEffect *)(_DAT_01d0ce7c * 0xc + 0x1d0ce80),position);
  _DAT_01d0ce7c = _DAT_01d0ce7c + 1;
  if (_DAT_01d0ce7c < 4) {
    return;
  }
  _DAT_01d0ce7c = 0;
  return;
}
