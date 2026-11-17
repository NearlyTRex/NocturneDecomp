// Name: core_fire.cpp_CFireEffect_setGunFlamePosition_FUN_004a3b60
// Address: 004a3b60
// Address Range: [[004a3b60, 004a3b9f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_setGunFlamePosition_FUN_004a3b60(CFireEffect *this_ptr,int flame_index,CVector3f *position)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_setGunFlamePosition_FUN_004a3b60(CFireEffect *this_ptr,int flame_index,CVector3f *position)

{
  if ((-1 < flame_index) && (flame_index < 500)) {
    if (g_CGunFlame_ARRAY_01cfb8bc + flame_index != (CGunFlame *)position) {
      g_CGunFlame_ARRAY_01cfb8bc[flame_index].position.x = position->x;
      g_CGunFlame_ARRAY_01cfb8bc[flame_index].position.y = position->y;
      g_CGunFlame_ARRAY_01cfb8bc[flame_index].position.z = position->z;
      return;
    }
  }
  return;
}
