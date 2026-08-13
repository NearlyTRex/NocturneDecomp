// Name: core_dynamite.cpp_CDynamite_fire_FUN_0046ec80
// Address: 0046ec80
// Address Range: [[0046ec80, 0046eced]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0046ec80(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0046ec80(CDynamite *this_ptr)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_00554600(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0
            (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient,&this_ptr->toss_velocity,this_ptr->fuse_timer,
             this_ptr->sfx_handle);
  this_ptr->sfx_handle = 0;
  this_ptr->fuse_timer = -1.0;
  (this_ptr->toss_velocity).z = 0.0;
  (this_ptr->toss_velocity).y = (this_ptr->toss_velocity).z;
  (this_ptr->toss_velocity).x = (this_ptr->toss_velocity).y;
  return 1;
}
