// Name: core_flamegun.cpp_CFlameThrower_fire_FUN_0048ea60
// Address: 0048ea60
// Address Range: [[0048ea60, 0048eb21]]
// Convention: __cdecl
// Signature: int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_0048ea60(CFlameThrower *this_ptr)

#include "nocturne.h"

int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_0048ea60(CFlameThrower *this_ptr)

{
  int *piVar1;
  float fVar2;
  CVector3f *input_local_point;
  CHero *pCVar3;
  CVector3f CStack_14;
  
  if ((this_ptr->base).ammo_count < 1) {
    return 0;
  }
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&CStack_14,input_local_point);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0
            (g_CFireEffect_PTR_005b80f0,&CStack_14,&(this_ptr->base).base.orient.vec,3,1);
  if (this_ptr->was_firing_prev_frame == 0) {
    fVar2 = 1.0 / 4.0f;
    piVar1 = &(this_ptr->base).ammo_count;
    *piVar1 = *piVar1 + -1;
    this_ptr->fire_rate_timer = fVar2;
  }
  pCVar3 = (CHero *)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  if (pCVar3 == g_HeroActors[g_LocalHeroIndex]) {
    engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
  }
  this_ptr->is_firing = 1;
  return 1;
}
