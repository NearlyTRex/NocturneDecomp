// Name: core_batman.cpp_CBatman_ctor_FUN_00416450
// Address: 00416450
// MANUAL RECONSTRUCTION
// Address Range: [[00416450, 00416500]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman *this_ptr)

#include "nocturne.h"

CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman *this_ptr)

{
  CBatman *pCVar4;

  pCVar4 = (CBatman *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CBatmanVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"batman.dfm");
  (pCVar4->base).base.collision_cylinder_height = 0.6;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  (pCVar4->base).base.ai_detection_range_min = 50.0f;
  (pCVar4->base).base.ai_detection_range_max = 100.0f;
  strcpy(pCVar4->fall_event,"none");
  pCVar4->mist_state = 0;
  pCVar4->vanish_timer = 0.0;
  (pCVar4->new_pos).x = 0.0;
  (pCVar4->new_pos).y = 0.0;
  (pCVar4->new_pos).z = 0.0;
  return pCVar4;
}
