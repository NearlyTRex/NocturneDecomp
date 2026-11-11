// Name: core_gargoyle.cpp_CGargoyle_ctor_FUN_004c4de0
// Address: 004c4de0
// Address Range: [[004c4de0, 004c4ed1]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004c4de0(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004c4de0(CGargoyle *this_ptr)

{
  float fVar1;
  float fVar2;
  CGargoyle *pCVar3;
  
  pCVar3 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CGargoyleVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"gargoyle.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 0.6;
  (pCVar3->base).base.blood_type = BLOOD_TYPE_NONE;
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
  fVar1 = _DAT_005e0770;
  pCVar3->returning_home = 0;
  fVar2 = _DAT_005e0774;
  pCVar3->petrify_timer = 0.0;
  (pCVar3->base).base.gun_flame_ignitable = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
