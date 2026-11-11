// Name: core_shadow.cpp_CShadow_ctor_FUN_00543500
// Address: 00543500
// Address Range: [[00543500, 0054366b]]
// Convention: unknown
// Signature: CShadow * core_shadow_cpp_CShadow_ctor_FUN_00543500(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadow * core_shadow_cpp_CShadow_ctor_FUN_00543500(CShadow *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CEventList *this_ptr_00;
  CShadow *pCVar4;
  int iVar5;
  
  pCVar4 = (CShadow *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CShadowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
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
  fVar1 = _DAT_005e3d54;
  pCVar4->attack_loop_count = 0;
  fVar2 = _DAT_005e3d58;
  pCVar4->periodic_timer = 10.0;
  fVar3 = _DAT_005e3d5c;
  pCVar4->fade_alpha = 0;
  this_ptr_00 = 0x01C6E360;
  pCVar4->corona_added = 0;
  (pCVar4->base).base.ai_detection_range_min = fVar1;
  (pCVar4->base).base.ai_detection_range_max = fVar2;
  pCVar4->phase_timer = fVar3;
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar5 == 0) {
    pCVar4->difficulty_speed_scale = 0.75;
  }
  else {
    pCVar4->difficulty_speed_scale = 1.0;
  }
  (pCVar4->base).base.hit_points = 40.0;
  (pCVar4->base).attack_damage = 15.0;
  (pCVar4->base).pain_threshold = 20.0;
  pCVar4->shadow_variant = 0;
  return pCVar4;
}
