// Name: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004e4790
// Address: 004e4790
// Address Range: [[004e4790, 004e482e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004e4790(CBloodSplat *this_ptr,CVector3f *position,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004e4790(CBloodSplat *this_ptr,CVector3f *position,EBloodType blood_type)

{
  int iVar1;
  
  this_ptr->is_wall_splat = 0;
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
  this_ptr->texture_variant = iVar1;
  this_ptr->age = 0.0;
  (this_ptr->position_fixed).x = (int)ROUND(position->x * _DAT_006016a8);
  (this_ptr->position_fixed).y = (int)ROUND(position->y * _DAT_006016a8);
  (this_ptr->position_fixed).z = (int)ROUND(position->z * _DAT_006016a8);
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
