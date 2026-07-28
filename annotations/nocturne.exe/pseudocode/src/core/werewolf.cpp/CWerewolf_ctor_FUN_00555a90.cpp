// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90
// Address: 00555a90
// Address Range: [[00555a90, 00555b3d]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(CWerewolf *this_ptr)

#include "nocturne.h"

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(CWerewolf *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CWerewolf *pCVar4;
  
  pCVar4 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_werewolf_cpp_CWerewolf_setup_FUN_00555b40_005a4314;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar4->base).base.model,"wolfbrn.dfm");
  (pCVar4->base).base.collision_cylinder_height = 1.0;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  pCVar4->type = WEREWOLF_TYPE_TRAIN;
  pCVar4->light_up_eyes = 1;
  pCVar4->chain_anchor = (CDemonActor *)0x0;
  fVar1 = 50.0f;
  pCVar4->chain_length = 5.0;
  fVar2 = 100.0f;
  pCVar4->alpha1 = (CDemonActor *)0x0;
  fVar3 = 10.0f;
  pCVar4->alpha2 = (CDemonActor *)0x0;
  pCVar4->phase = 0;
  (pCVar4->base).base.ai_detection_range_min = fVar1;
  (pCVar4->base).base.ai_detection_range_max = fVar2;
  pCVar4->phase_timer = fVar3;
  return pCVar4;
}
