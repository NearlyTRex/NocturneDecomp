// Name: core_armour.cpp_CArmour_ctor_FUN_004121a0
// Address: 004121a0
// MANUAL RECONSTRUCTION
// Address Range: [[004121a0, 00412232]]
// Convention: __cdecl
// Signature: CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour *this_ptr)

#include "nocturne.h"

CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour *this_ptr)

{
  CArmour *pCVar4;

  pCVar4 = (CArmour *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CArmourVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"armour.dfm");
  (pCVar4->base).base.collision_cylinder_height = 0.6;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  (pCVar4->base).base.ai_detection_range_min = 50.0f;
  (pCVar4->base).base.ai_detection_range_max = 100.0f;
  strcpy(pCVar4->fall_apart_event,"none");
  (pCVar4->base).base.blood_type = 2;
  return pCVar4;
}
