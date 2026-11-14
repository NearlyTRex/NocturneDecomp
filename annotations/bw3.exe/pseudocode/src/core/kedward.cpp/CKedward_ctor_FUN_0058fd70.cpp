// Name: core_kedward.cpp_CKedward_ctor_FUN_0058fd70
// Address: 0058fd70
// Address Range: [[0058fd70, 0058fe6b]]
// Convention: __cdecl
// Signature: CKedward * __cdecl core_kedward_cpp_CKedward_ctor_FUN_0058fd70(CKedward *this_ptr)

#include "nocturne.h"

CKedward * __cdecl core_kedward_cpp_CKedward_ctor_FUN_0058fd70(CKedward *this_ptr)

{
  CKedward *pCVar1;
  CKedward *pCVar2;
  CKedward *pCVar3;
  
  pCVar1 = (CKedward *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CKedwardVTable._ub;
  (pCVar1->base).base.collision_cylinder_height = 0.5;
  (pCVar1->base).base.collision_cylinder_radius = 1.0;
  pCVar1->countdown_timer = 0.0;
  (pCVar1->base).allow_pathfind_to_new_targets = 0;
  (pCVar1->base).base.turn_rate = 1.5707964;
  (pCVar1->base).base.base.is_transparent = 1;
  (pCVar1->base).base.base.is_renderable = 0;
  pCVar1->fading_in = 1;
  pCVar1->max_fade_time = 2.0;
  pCVar1->fade_out_opacity = 0x4b;
  pCVar1->fade_state = 1;
  pCVar1->vanished = 0;
  pCVar1->vanish_timer = 0.0;
  pCVar1->speed_boosted = 0;
  pCVar1->speed_boost_latched = 0;
  pCVar1->unknown_0xd090 = 0;
  pCVar1->attack_cooldown = 0.0;
  pCVar1->fade_timer = pCVar1->max_fade_time;
  pCVar1->render_alpha = 0x10000;
  pCVar1->cini_flag = 0;
  pCVar2 = pCVar1;
  do {
    pCVar3 = (CKedward *)((pCVar2->base).base.base.actor_name + 4);
    pCVar2->sfx_handles[0] = 0;
    pCVar2 = pCVar3;
  } while (pCVar3 != (CKedward *)((int)&(pCVar1->base).base.base.orient + 4));
  return pCVar1;
}
