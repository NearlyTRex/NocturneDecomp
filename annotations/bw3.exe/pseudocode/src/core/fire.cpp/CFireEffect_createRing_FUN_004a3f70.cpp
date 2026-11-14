// Name: core_fire.cpp_CFireEffect_createRing_FUN_004a3f70
// Address: 004a3f70
// Address Range: [[004a3f70, 004a3fc6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(CFireEffect *this_ptr,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createRing_FUN_004a3f70(CFireEffect *this_ptr,uint *param_2,uint param_3,uint param_4)

{
  core_fire_cpp_CRing_activate_FUN_0049fce0
            ((CRing *)(_DAT_01d0bb90 * 0x1e4 + 0x1d0bb94),param_2,param_3,param_4);
  _DAT_01d0bb90 = _DAT_01d0bb90 + 1;
  if (_DAT_01d0bb90 < 10) {
    return;
  }
  _DAT_01d0bb90 = 0;
  return;
}
