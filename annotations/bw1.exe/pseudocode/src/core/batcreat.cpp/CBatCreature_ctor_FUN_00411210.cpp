// Name: core_batcreat.cpp_CBatCreature_ctor_FUN_00411210
// Address: 00411210
// Address Range: [[00411210, 00411275]]
// Convention: unknown
// Signature: CBatCreature * core_batcreat_cpp_CBatCreature_ctor_FUN_00411210(CBatCreature *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBatCreature * core_batcreat_cpp_CBatCreature_ctor_FUN_00411210(CBatCreature *this_ptr)

{
  float fVar1;
  float fVar2;
  CBatCreature *pCVar3;
  
  pCVar3 = (CBatCreature *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CBatCreatureVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"batcreat.dfm");
  fVar1 = _DAT_005fbfd0;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  fVar2 = _DAT_005fbfd4;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  pCVar3->dismember_death_timer = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
