// Name: core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0
// Address: 0048c3c0
// Address Range: [[0048c3c0, 0048c418]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

{
  for (; 0 < flame_count; flame_count = flame_count + -1) {
    core_fire_cpp_CGunFlame_activate_FUN_00488280
              ((CGunFlame *)(&DAT_01c62ebc + _DAT_01c62eb8 * 0x24),position,euler_angles,flame_type)
    ;
    _DAT_01c62eb8 = _DAT_01c62eb8 + 1;
    if (499 < _DAT_01c62eb8) {
      _DAT_01c62eb8 = 0;
    }
  }
  return;
}
