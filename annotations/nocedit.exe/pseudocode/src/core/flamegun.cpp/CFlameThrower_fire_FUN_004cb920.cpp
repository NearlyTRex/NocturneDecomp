// Name: core_flamegun.cpp_CFlameThrower_fire_FUN_004cb920
// Address: 004cb920
// Address Range: [[004cb920, 004cb9ad]]
// Convention: __cdecl
// Signature: int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_004cb920(CFlameThrower *this_ptr)

#include "nocturne.h"

int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_004cb920(CFlameThrower *this_ptr)

{
  CVector3f *input_local_point;
  CVector3f local_1c;
  CVector3f CStack_10;
  int *piVar1;
  float fVar2;
  
  if ((this_ptr->base).ammo_count < 1) {
    return 0;
  }
  input_local_point =
       (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_1c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_10,input_local_point);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_004c8ef0
            (g_CFireEffectPtr,&CStack_10,&(this_ptr->base).base.orient.vec,3,1);
  if (this_ptr->was_firing_prev_frame == 0) {
    fVar2 = 1.0 / 4.0f;
    piVar1 = &(this_ptr->base).ammo_count;
    *piVar1 = *piVar1 + -1;
    this_ptr->fire_rate_timer = fVar2;
  }
  this_ptr->is_firing = 1;
  return 1;
}
