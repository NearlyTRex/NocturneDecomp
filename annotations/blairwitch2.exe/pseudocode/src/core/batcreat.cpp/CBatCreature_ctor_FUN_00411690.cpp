// Name: core_batcreat.cpp_CBatCreature_ctor_FUN_00411690
// Address: 00411690
// Address Range: [[00411690, 004116eb]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_00411690(CBatCreature *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_00411690(CBatCreature *this_ptr)

{
  float fVar1;
  float fVar2;
  CBatCreature *pCVar3;
  
  pCVar3 = (CBatCreature *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CBatCreatureVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar3->base).base.model,"batcreat.dfm");
  fVar2 = _DAT_005f2ee4;
  fVar1 = _DAT_005f2ee0;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
