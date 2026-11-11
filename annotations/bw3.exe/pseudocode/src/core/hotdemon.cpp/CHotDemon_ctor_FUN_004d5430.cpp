// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430
// Address: 004d5430
// Address Range: [[004d5430, 004d548b]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(CHotDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(CHotDemon *this_ptr)

{
  float fVar1;
  float fVar2;
  CHotDemon *pCVar3;
  
  pCVar3 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CHotDemonVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"hotdemon.dfm");
  fVar2 = _DAT_005e1904;
  fVar1 = _DAT_005e1900;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 0.9;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
