// Name: core_fire.cpp_CFireEffect_createRing_FUN_004a3f70
// Address: 004a3f70
// Address Range: [[004a3f70, 004a3fc6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(CFireEffect *this_ptr,CVector3f *position,int ring_type,CCharacter *owner)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(CFireEffect *this_ptr,CVector3f *position,int ring_type,CCharacter *owner)

{
  core_fire_cpp_CRing_activate_FUN_0049fce0
            ((CRing *)(_DAT_01d0bb90 * 0x1e4 + 0x1d0bb94),position,ring_type,owner);
  _DAT_01d0bb90 = _DAT_01d0bb90 + 1;
  if (_DAT_01d0bb90 < 10) {
    return;
  }
  _DAT_01d0bb90 = 0;
  return;
}
