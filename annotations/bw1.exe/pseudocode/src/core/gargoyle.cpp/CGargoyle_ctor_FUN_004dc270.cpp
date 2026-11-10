// Name: core_gargoyle.cpp_CGargoyle_ctor_FUN_004dc270
// Address: 004dc270
// Address Range: [[004dc270, 004dc361]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004dc270(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004dc270(CGargoyle *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGargoyle *pCVar3;
  
  pCVar3 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CGargoyleVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"gargoyle.dfm");
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f19999a;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x3f19999a;
  *(uint *)&(pCVar3->base).base.field_0x27a0 = 2;
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
  uVar1 = _DAT_00601000;
  pCVar3->returning_home = 0;
  uVar2 = _DAT_00601004;
  pCVar3->petrify_timer = 0.0;
  (pCVar3->base).base.gun_flame_ignitable = 0;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}
