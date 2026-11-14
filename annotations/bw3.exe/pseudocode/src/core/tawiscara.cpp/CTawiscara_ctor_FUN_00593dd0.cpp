// Name: core_tawiscara.cpp_CTawiscara_ctor_FUN_00593dd0
// Address: 00593dd0
// Address Range: [[00593dd0, 00593e7d]]
// Convention: __cdecl
// Signature: CTawiscara * __cdecl core_tawiscara_cpp_CTawiscara_ctor_FUN_00593dd0(CTawiscara *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTawiscara * __cdecl core_tawiscara_cpp_CTawiscara_ctor_FUN_00593dd0(CTawiscara *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CTawiscara *pCVar4;
  
  pCVar4 = (CTawiscara *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CTawiscaraVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar4->base).base.model,(char *)0x5d9254);
  (pCVar4->base).base.collision_cylinder_height = 1.0;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  pCVar4->type = WEREWOLF_TYPE_TRAIN;
  pCVar4->light_up_eyes = 1;
  pCVar4->chain_anchor = (CDemonActor *)0x0;
  fVar1 = _DAT_005e7520;
  pCVar4->chain_length = 5.0;
  fVar2 = _DAT_005e7524;
  pCVar4->alpha1 = (CDemonActor *)0x0;
  fVar3 = 0x41200000;
  pCVar4->alpha2 = (CDemonActor *)0x0;
  pCVar4->phase = 0;
  (pCVar4->base).base.ai_detection_range_min = fVar1;
  (pCVar4->base).base.ai_detection_range_max = fVar2;
  pCVar4->phase_timer = fVar3;
  return pCVar4;
}
