// Name: core_gargoyle.cpp_CGargoyle_ctor_FUN_004e44e0
// Address: 004e44e0
// Address Range: [[004e44e0, 004e45d1]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004e44e0(CGargoyle *this_ptr)

#include "nocturne.h"

CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004e44e0(CGargoyle *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CGargoyle *pCVar4;
  
  pCVar4 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CGargoyleVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"gargoyle.dfm");
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x344] = -0x66;
  (pCVar1->base).cloth_data[0x345] = -0x67;
  (pCVar1->base).cloth_data[0x346] = '\x19';
  (pCVar1->base).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x348] = -0x66;
  (pCVar1->base).cloth_data[0x349] = -0x67;
  (pCVar1->base).cloth_data[0x34a] = '\x19';
  (pCVar1->base).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).unk2[0x70] = '\x02';
  (pCVar1->base).unk2[0x71] = '\0';
  (pCVar1->base).unk2[0x72] = '\0';
  (pCVar1->base).unk2[0x73] = '\0';
  (pCVar4->base).base.hit_points = 30.0;
  (pCVar4->base).base.base.scale.x = 0xffff;
  (pCVar4->base).base.base.scale.y = 0xffff;
  (pCVar4->base).base.base.scale.z = 0xffff;
  pCVar4->unk2[8] = -1;
  pCVar4->unk2[9] = -1;
  pCVar4->unk2[10] = '\0';
  pCVar4->unk2[0xb] = '\0';
  pCVar4->unk2[0xc] = -1;
  pCVar4->unk2[0xd] = -1;
  pCVar4->unk2[0xe] = '\0';
  pCVar4->unk2[0xf] = '\0';
  pCVar4->unk2[0x10] = -1;
  pCVar4->unk2[0x11] = -1;
  pCVar4->unk2[0x12] = '\0';
  pCVar4->unk2[0x13] = '\0';
  pCVar4->stone_red = 0x80;
  pCVar4->stone_green = 0x80;
  pCVar4->stone_blue = 0x80;
  pCVar4->home_base = (CDemonActor *)0x0;
  fVar2 = 50.0f;
  pCVar4->unk2[0x14] = '\0';
  fVar3 = 100.0f;
  pCVar4->unk2[0x15] = '\0';
  pCVar4->unk2[0x16] = '\0';
  pCVar4->unk2[0x17] = '\0';
  pCVar4->unk2[0x18] = '\0';
  pCVar4->unk2[0x19] = '\0';
  pCVar4->unk2[0x1a] = '\0';
  pCVar4->unk2[0x1b] = '\0';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).unk3[4] = '\0';
  (pCVar1->base).unk3[5] = '\0';
  (pCVar1->base).unk3[6] = '\0';
  (pCVar1->base).unk3[7] = '\0';
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
