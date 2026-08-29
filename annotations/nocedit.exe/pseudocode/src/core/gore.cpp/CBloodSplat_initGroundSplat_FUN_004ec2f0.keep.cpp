// Name: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004ec2f0
// Address: 004ec2f0
// MANUAL RECONSTRUCTION
// Address Range: [[004ec2f0, 004ec38e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ec2f0(CBloodSplat *this_ptr,CVector3f *position,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ec2f0(CBloodSplat *this_ptr,CVector3f *position,int blood_type)

{
  int iVar1;

  this_ptr->is_wall_splat = 0;
  if (&this_ptr->position != position) {
    this_ptr->position = *position;
  }
#if NOCTURNE_AUTHENTIC_RNG
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
#else
  iVar1 = nocturne_rng_fx_int(0,3);
#endif
  this_ptr->texture_variant = iVar1;
  this_ptr->age = 0.0;
  (this_ptr->position_fixed).x = (int)ROUND(position->x * 256.0f);
  (this_ptr->position_fixed).y = (int)ROUND(position->y * 256.0f);
  (this_ptr->position_fixed).z = (int)ROUND(position->z * 256.0f);
  (this_ptr->normal_fixed).x = 0;
  (this_ptr->normal_fixed).y = 0xffff;
  (this_ptr->normal_fixed).z = 0;
  this_ptr->expired = 0;
  (this_ptr->rotation).x = 0.0f;
  (this_ptr->rotation).y = 0.0f;
  (this_ptr->rotation).z = 0.0f;
  this_ptr->blood_type = blood_type;
  return;
}
