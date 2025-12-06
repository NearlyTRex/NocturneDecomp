// Name: core_gargoyle.cpp_FUN_004e44e0
// Address: 004e44e0
// Address Range: [[004e44e0, 004e45d1]]
// Convention: __cdecl
// Signature: CGargoyle * core_gargoyle.cpp_FUN_004e44e0(CGargoyle * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGargoyle * __cdecl core_gargoyle_cpp_FUN_004e44e0(CGargoyle *this_ptr)

{
  CEnemy *pCVar1;
  uint uVar2;
  uint uVar3;
  CGargoyle *pCVar4;
  
  pCVar4 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable =
       &PTR_core_gargoyle_cpp_CGargoyle_FUN_0065ea44;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"gargoyle.dfm");
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = -0x66;
  (pCVar1->base_character).cloth_data[0x349] = -0x67;
  (pCVar1->base_character).cloth_data[0x34a] = '\x19';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).field11_0x25a0[0x70] = '\x02';
  (pCVar1->base_character).field11_0x25a0[0x71] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x72] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x73] = '\0';
  (pCVar4->base_enemy).base_character.hit_points = 30.0;
  (pCVar4->base_enemy).base_character.base_actor.scale.x = 0xffff;
  (pCVar4->base_enemy).base_character.base_actor.scale.y = 0xffff;
  (pCVar4->base_enemy).base_character.base_actor.scale.z = 0xffff;
  pCVar4->field5_0xbef8[0xc] = -1;
  pCVar4->field5_0xbef8[0xd] = -1;
  pCVar4->field5_0xbef8[0xe] = '\0';
  pCVar4->field5_0xbef8[0xf] = '\0';
  pCVar4->field5_0xbef8[0x10] = -1;
  pCVar4->field5_0xbef8[0x11] = -1;
  pCVar4->field5_0xbef8[0x12] = '\0';
  pCVar4->field5_0xbef8[0x13] = '\0';
  pCVar4->field5_0xbef8[0x14] = -1;
  pCVar4->field5_0xbef8[0x15] = -1;
  pCVar4->field5_0xbef8[0x16] = '\0';
  pCVar4->field5_0xbef8[0x17] = '\0';
  pCVar4->stone_red = 0x80;
  pCVar4->stone_green = 0x80;
  pCVar4->stone_blue = 0x80;
  pCVar4->field5_0xbef8[0] = '\0';
  uVar2 = _DAT_0065ea30;
  pCVar4->field5_0xbef8[1] = '\0';
  pCVar4->field5_0xbef8[2] = '\0';
  pCVar4->field5_0xbef8[3] = '\0';
  pCVar4->field5_0xbef8[0x18] = '\0';
  uVar3 = _DAT_0065ea34;
  pCVar4->field5_0xbef8[0x19] = '\0';
  pCVar4->field5_0xbef8[0x1a] = '\0';
  pCVar4->field5_0xbef8[0x1b] = '\0';
  pCVar4->field5_0xbef8[0x1c] = '\0';
  pCVar4->field5_0xbef8[0x1d] = '\0';
  pCVar4->field5_0xbef8[0x1e] = '\0';
  pCVar4->field5_0xbef8[0x1f] = '\0';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).field13_0x2620[4] = '\0';
  (pCVar1->base_character).field13_0x2620[5] = '\0';
  (pCVar1->base_character).field13_0x2620[6] = '\0';
  (pCVar1->base_character).field13_0x2620[7] = '\0';
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}
