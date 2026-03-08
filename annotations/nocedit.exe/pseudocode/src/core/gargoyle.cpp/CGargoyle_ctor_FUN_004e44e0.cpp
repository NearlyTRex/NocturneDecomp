// Name: core_gargoyle.cpp_CGargoyle_ctor_FUN_004e44e0
// Address: 004e44e0
// Address Range: [[004e44e0, 004e45d1]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004e44e0(CGargoyle *this_ptr)

#include "nocturne.h"

CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004e44e0(CGargoyle *this_ptr)

{
  float fVar1;
  float fVar2;
  CGargoyle *pCVar3;
  
  pCVar3 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CGargoyleVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"gargoyle.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 0.6;
  (pCVar3->base).base.blood_type = 2;
  (pCVar3->base).base.hit_points = 30.0;
  (pCVar3->base).base.base.scale.x = 0xffff;
  (pCVar3->base).base.base.scale.y = 0xffff;
  (pCVar3->base).base.base.scale.z = 0xffff;
  (pCVar3->target_scale).x = 0xffff;
  (pCVar3->target_scale).y = 0xffff;
  (pCVar3->target_scale).z = 0xffff;
  pCVar3->stone_red = 0x80;
  pCVar3->stone_green = 0x80;
  pCVar3->stone_blue = 0x80;
  pCVar3->home_base = (CDemonActor *)0x0;
  fVar1 = 50.0f;
  pCVar3->returning_home = 0;
  fVar2 = 100.0f;
  pCVar3->petrify_timer = 0.0;
  (pCVar3->base).base.show_in_editor = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
