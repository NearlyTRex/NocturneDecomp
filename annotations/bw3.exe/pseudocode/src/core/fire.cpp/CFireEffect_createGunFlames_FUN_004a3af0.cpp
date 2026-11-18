// Name: core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0
// Address: 004a3af0
// Address Range: [[004a3af0, 004a3b50]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type,int flame_style)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type,int flame_style)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (; 0 < flame_count; flame_count = flame_count + -1) {
    core_fire_cpp_CGunFlame_activate_FUN_0049e1a0
              (g_CGunFlame_ARRAY_01cfb8bc + g_LightningBoltAllocIndex,position,euler_angles,
               flame_type,flame_style);
    iVar2 = g_LightningBoltAllocIndex + 1;
    if (499 < iVar2) {
      iVar2 = 0;
    }
    iVar1 = g_LightningBoltAllocIndex;
    g_LightningBoltAllocIndex = iVar2;
  }
  return iVar1;
}
