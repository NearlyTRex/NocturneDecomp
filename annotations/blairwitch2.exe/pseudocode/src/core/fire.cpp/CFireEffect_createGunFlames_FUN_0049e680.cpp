// Name: core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680
// Address: 0049e680
// Address Range: [[0049e680, 0049e6d8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

{
  for (; 0 < flame_count; flame_count = flame_count + -1) {
    core_fire_cpp_CGunFlame_activate_FUN_0049a1b0
              ((CGunFlame *)(&DAT_01c9cd98 + _DAT_01c9cd94 * 0x24),position,euler_angles,flame_type)
    ;
    _DAT_01c9cd94 = _DAT_01c9cd94 + 1;
    if (499 < _DAT_01c9cd94) {
      _DAT_01c9cd94 = 0;
    }
  }
  return;
}
