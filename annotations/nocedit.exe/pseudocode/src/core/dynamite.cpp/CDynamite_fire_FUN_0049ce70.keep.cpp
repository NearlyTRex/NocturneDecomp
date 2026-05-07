// Name: core_dynamite.cpp_CDynamite_fire_FUN_0049ce70
// Address: 0049ce70
// MANUAL RECONSTRUCTION
// Address Range: [[0049ce70, 0049cedd]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0049ce70(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0049ce70(CDynamite *this_ptr)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  core_fire_cpp_CFireEffect_createToss_FUN_004c8dd0
            (g_CFireEffectPtr,&(this_ptr->base).base.location.position,&(this_ptr->base).base.orient
             ,&this_ptr->toss_velocity,this_ptr->fuse_timer,this_ptr->sfx_handle);
  this_ptr->sfx_handle = 0;
  this_ptr->fuse_timer = -1.0;
  (this_ptr->toss_velocity).x = 0.0f;
  (this_ptr->toss_velocity).y = 0.0f;
  (this_ptr->toss_velocity).z = 0.0f;
  return 1;
}
