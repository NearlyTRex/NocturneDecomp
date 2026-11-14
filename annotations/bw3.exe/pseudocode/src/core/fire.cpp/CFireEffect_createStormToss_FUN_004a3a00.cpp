// Name: core_fire.cpp_CFireEffect_createStormToss_FUN_004a3a00
// Address: 004a3a00
// Address Range: [[004a3a00, 004a3a27]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createStormToss_FUN_004a3a00(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createStormToss_FUN_004a3a00(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity)

{
  core_fire_cpp_CFireEffect_allocateToss_FUN_004a3a30(this_ptr,3,position,orientation,velocity,2.0);
  return;
}
