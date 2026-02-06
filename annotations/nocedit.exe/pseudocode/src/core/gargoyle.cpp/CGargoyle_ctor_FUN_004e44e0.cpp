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
  (pCVar3->base).base.field54_0x2ddc = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 0.6;
  (pCVar3->base).base.field39_0x2610 = 2;
  (pCVar3->base).base.hit_points = 30.0;
  (pCVar3->base).base.base.scale.x = 0xffff;
  (pCVar3->base).base.base.scale.y = 0xffff;
  (pCVar3->base).base.base.scale.z = 0xffff;
  pCVar3->unk2[8] = -1;
  pCVar3->unk2[9] = -1;
  pCVar3->unk2[10] = '\0';
  pCVar3->unk2[0xb] = '\0';
  pCVar3->unk2[0xc] = -1;
  pCVar3->unk2[0xd] = -1;
  pCVar3->unk2[0xe] = '\0';
  pCVar3->unk2[0xf] = '\0';
  pCVar3->unk2[0x10] = -1;
  pCVar3->unk2[0x11] = -1;
  pCVar3->unk2[0x12] = '\0';
  pCVar3->unk2[0x13] = '\0';
  pCVar3->stone_red = 0x80;
  pCVar3->stone_green = 0x80;
  pCVar3->stone_blue = 0x80;
  pCVar3->home_base = (CDemonActor *)0x0;
  fVar1 = 50.0f;
  pCVar3->unk2[0x14] = '\0';
  fVar2 = 100.0f;
  pCVar3->unk2[0x15] = '\0';
  pCVar3->unk2[0x16] = '\0';
  pCVar3->unk2[0x17] = '\0';
  pCVar3->unk2[0x18] = '\0';
  pCVar3->unk2[0x19] = '\0';
  pCVar3->unk2[0x1a] = '\0';
  pCVar3->unk2[0x1b] = '\0';
  (pCVar3->base).base.field44_0x2624 = 0;
  (pCVar3->base).base.field56_0x2de4 = fVar1;
  (pCVar3->base).base.field57_0x2de8 = fVar2;
  return pCVar3;
}
