// Name: core_larva.cpp_CLarva_ctor_FUN_004fd950
// Address: 004fd950
// Address Range: [[004fd950, 004fd9dd]]
// Convention: unknown
// Signature: CLarva * core_larva_cpp_CLarva_ctor_FUN_004fd950(CLarva *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLarva * core_larva_cpp_CLarva_ctor_FUN_004fd950(CLarva *this_ptr)

{
  float fVar1;
  float fVar2;
  CLarva *pCVar3;
  
  pCVar3 = (CLarva *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CLarvaVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"worm.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.25;
  (pCVar3->base).base.collision_cylinder_radius = 0.5;
  (pCVar3->base).base.blood_type = BLOOD_TYPE_ICHOR;
  (pCVar3->base).base.hit_points = 15.0;
  fVar1 = _DAT_00602d20;
  pCVar3->sfx_handles[0] = 0;
  fVar2 = _DAT_00602d24;
  pCVar3->sfx_handles[1] = 0;
  (pCVar3->base).base.turn_rate = 0.7853982;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
