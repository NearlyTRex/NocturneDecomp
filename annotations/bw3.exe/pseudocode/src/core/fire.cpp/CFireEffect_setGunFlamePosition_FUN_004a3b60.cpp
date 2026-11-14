// Name: core_fire.cpp_CFireEffect_setGunFlamePosition_FUN_004a3b60
// Address: 004a3b60
// Address Range: [[004a3b60, 004a3b9f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_setGunFlamePosition_FUN_004a3b60(CFireEffect *this_ptr,int flame_index,CVector3f *position)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_setGunFlamePosition_FUN_004a3b60(CFireEffect *this_ptr,int flame_index,CVector3f *position)

{
  int iVar1;
  
  if ((-1 < flame_index) && (flame_index < 500)) {
    iVar1 = flame_index * 0x2c;
    if ((CVector3f *)(iVar1 + 0x1cfb8bc) != position) {
      ((CVector3f *)(iVar1 + 0x1cfb8bc))->x = position->x;
      *(float *)(iVar1 + 0x1cfb8c0) = position->y;
      *(float *)(iVar1 + 0x1cfb8c4) = position->z;
      return;
    }
  }
  return;
}
