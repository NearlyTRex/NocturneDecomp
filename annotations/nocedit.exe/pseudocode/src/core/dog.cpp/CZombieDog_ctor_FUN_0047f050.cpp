// Name: core_dog.cpp_CZombieDog_ctor_FUN_0047f050
// Address: 0047f050
// Address Range: [[0047f050, 0047f0b5]]
// Convention: __cdecl
// Signature: CZombieDog * core_dog.cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog * this_ptr)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CZombieDog *pCVar4;
  
  pCVar4 = (CZombieDog *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_dog_cpp_FUN_0065ca44;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"dog.dfm");
  fVar2 = 50.0f;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  fVar3 = PTR_core_bride_cpp_FUN_0065ca2d_3;
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '@';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field1_0xbeb4[0x10] = '\0';
  pCVar4->field1_0xbeb4[0x11] = '\0';
  pCVar4->field1_0xbeb4[0x12] = '\0';
  pCVar4->field1_0xbeb4[0x13] = '\0';
  *(float *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
