// Name: core_cow.cpp_FUN_00444140
// Address: 00444140
// Address Range: [[00444140, 004441a5]]
// Convention: __cdecl
// Signature: CZombieCow * core_cow.cpp_FUN_00444140(CZombieCow * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieCow * __cdecl core_cow_cpp_FUN_00444140(CZombieCow *this_ptr)

{
  CEnemy *pCVar1;
  uint uVar2;
  uint uVar3;
  CZombieCow *pCVar4;
  
  pCVar4 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_cow_cpp_FUN_0065c0b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"cow.dfm");
  uVar2 = _DAT_0065c09c;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  uVar3 = _PTR_FUN_0065c09d_3;
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = -0x20;
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = '`';
  (pCVar1->base_character).cloth_data[0x34b] = '@';
  pCVar4->field1_0xbeb4[0x10] = '\0';
  pCVar4->field1_0xbeb4[0x11] = '\0';
  pCVar4->field1_0xbeb4[0x12] = '\0';
  pCVar4->field1_0xbeb4[0x13] = '\0';
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}
