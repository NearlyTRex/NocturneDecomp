// Name: core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0
// Address: 004a3af0
// Address Range: [[004a3af0, 004a3b50]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type,int flame_style)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type,int flame_style)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (; 0 < flame_count; flame_count = flame_count + -1) {
    core_fire_cpp_CGunFlame_activate_FUN_0049e1a0
              ((CGunFlame *)(_DAT_01cfb8b8 * 0x2c + 0x1cfb8bc),position,euler_angles,flame_type,
               flame_style);
    iVar2 = _DAT_01cfb8b8 + 1;
    if (499 < iVar2) {
      iVar2 = 0;
    }
    iVar1 = _DAT_01cfb8b8;
    _DAT_01cfb8b8 = iVar2;
  }
  return iVar1;
}
