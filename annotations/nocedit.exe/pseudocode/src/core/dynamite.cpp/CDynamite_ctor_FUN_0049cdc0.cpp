// Name: core_dynamite.cpp_CDynamite_ctor_FUN_0049cdc0
// Address: 0049cdc0
// Address Range: [[0049cdc0, 0049ce69]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_0049cdc0(CDynamite *this_ptr)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_0049cdc0(CDynamite *this_ptr)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CDynamiteVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(pCVar1->base).model,"dynamitestick.kfm");
  (pCVar1->base).weight = 1.0;
  (pCVar1->toss_velocity).z = 0.0;
  (pCVar1->toss_velocity).y = (pCVar1->toss_velocity).z;
  (pCVar1->toss_velocity).x = (pCVar1->toss_velocity).y;
  pCVar1->fuse_timer = -1.0;
  (pCVar1->base).is_spread_weapon = 0;
  (pCVar1->base).fire_mode = 0;
  (pCVar1->base).weapon_type = 3;
  (pCVar1->base).can_penetrate = 0;
  (pCVar1->base).bolt_velocity = 200.0;
  (pCVar1->base).fire_cooldown = 0.0;
  (pCVar1->base).can_attach_light = 0;
  pCVar1->sfx_handle = 0;
  return pCVar1;
}
