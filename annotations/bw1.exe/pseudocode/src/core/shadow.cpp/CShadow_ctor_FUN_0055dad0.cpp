// Name: core_shadow.cpp_CShadow_ctor_FUN_0055dad0
// Address: 0055dad0
// Address Range: [[0055dad0, 0055dbe1]]
// Convention: __cdecl
// Signature: CShadow * __cdecl core_shadow_cpp_CShadow_ctor_FUN_0055dad0(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CShadow * __cdecl core_shadow_cpp_CShadow_ctor_FUN_0055dad0(CShadow *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CShadow *pCVar4;
  
  pCVar4 = (CShadow *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CShadowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar4->base).base.model,"shadowbeast.dfm");
  (pCVar4->base).base.collision_cylinder_height = 1.0;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  pCVar4->scared_by_light = 1;
  pCVar4->type = 0;
  pCVar4->light_up_eyes = 1;
  pCVar4->chain_anchor = (CDemonActor *)0x0;
  pCVar4->chain_length = 5.0;
  pCVar4->alpha1 = (CDemonActor *)0x0;
  pCVar4->alpha2 = (CDemonActor *)0x0;
  pCVar4->phase = 0;
  pCVar4->fade_scale = 1.0;
  pCVar4->eye_glow_phase = 0.0;
  pCVar4->walk_timeout = 0.0;
  pCVar4->walk_target = 0;
  pCVar4->walk_status = 0;
  fVar1 = _DAT_00605194;
  pCVar4->attack_loop_count = 0;
  fVar2 = _DAT_00605198;
  pCVar4->periodic_timer = 10.0;
  fVar3 = _DAT_0060519c;
  pCVar4->fade_alpha = 0;
  pCVar4->corona_added = 0;
  (pCVar4->base).base.ai_detection_range_min = fVar1;
  (pCVar4->base).base.ai_detection_range_max = fVar2;
  pCVar4->phase_timer = fVar3;
  return pCVar4;
}
