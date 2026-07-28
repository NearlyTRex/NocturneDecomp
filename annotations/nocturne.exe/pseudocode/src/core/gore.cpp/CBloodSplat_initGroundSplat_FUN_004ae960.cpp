// Name: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004ae960
// Address: 004ae960
// Address Range: [[004ae960, 004ae9fe]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ae960(CBloodSplat *this_ptr,CVector3f *position,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ae960(CBloodSplat *this_ptr,CVector3f *position,int blood_type)

{
  int iVar1;
  
  this_ptr->is_wall_splat = 0;
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040de00(0,3);
  this_ptr->texture_variant = iVar1;
  this_ptr->age = 0.0;
  (this_ptr->position_fixed).x = (int)ROUND(position->x * 256.0f);
  (this_ptr->position_fixed).y = (int)ROUND(position->y * 256.0f);
  (this_ptr->position_fixed).z = (int)ROUND(position->z * 256.0f);
  (this_ptr->normal_fixed).x = 0;
  (this_ptr->normal_fixed).y = 0xffff;
  (this_ptr->normal_fixed).z = 0;
  this_ptr->expired = 0;
  (this_ptr->rotation).z = 0.0;
  this_ptr->blood_type = blood_type;
  (this_ptr->rotation).y = (this_ptr->rotation).z;
  (this_ptr->rotation).x = (this_ptr->rotation).y;
  return;
}
