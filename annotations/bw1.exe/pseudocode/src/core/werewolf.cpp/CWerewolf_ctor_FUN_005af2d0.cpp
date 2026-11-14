// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_005af2d0
// Address: 005af2d0
// Address Range: [[005af2d0, 005af37d]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005af2d0(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005af2d0(CWerewolf *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CWerewolf *pCVar4;
  
  pCVar4 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CWerewolfVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar4->base).base.model,(char *)0x5f99d4);
  (pCVar4->base).base.collision_cylinder_height = 1.0;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  pCVar4->type = WEREWOLF_TYPE_TRAIN;
  pCVar4->light_up_eyes = 1;
  pCVar4->chain_anchor = (CDemonActor *)0x0;
  fVar1 = _DAT_00607fd0;
  pCVar4->chain_length = 5.0;
  fVar2 = _DAT_00607fd4;
  pCVar4->alpha1 = (CDemonActor *)0x0;
  fVar3 = 0x41200000;
  pCVar4->alpha2 = (CDemonActor *)0x0;
  pCVar4->phase = 0;
  (pCVar4->base).base.ai_detection_range_min = fVar1;
  (pCVar4->base).base.ai_detection_range_max = fVar2;
  pCVar4->phase_timer = fVar3;
  return pCVar4;
}
