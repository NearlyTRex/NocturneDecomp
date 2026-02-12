// Name: core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
// Address: 004150f0
// Address Range: [[004150f0, 0041514b]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature *this_ptr)

#include "nocturne.h"

CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature *this_ptr)

{
  float fVar1;
  float fVar2;
  CBatCreature *pCVar3;
  
  pCVar3 = (CBatCreature *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CBatCreatureVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"batcreat.dfm");
  fVar2 = 100.0f;
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
