// Name: core_bride.cpp_CBride_ctor_FUN_004237a0
// Address: 004237a0
// Address Range: [[004237a0, 00423805]]
// Convention: __cdecl
// Signature: CBride * core_bride.cpp_CBride_ctor_FUN_004237a0(CBride * this_ptr)

#include "nocturne.h"

CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_004237a0(CBride *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CBride *pCVar4;
  
  pCVar4 = (CBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable._ub = &g_CBrideVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"bride.dfm");
  fVar2 = 50.0f;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  fVar3 = 100.0f;
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '@';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field1_0xbeb4[0x2c] = '\0';
  pCVar4->field1_0xbeb4[0x2d] = '\0';
  pCVar4->field1_0xbeb4[0x2e] = '\0';
  pCVar4->field1_0xbeb4[0x2f] = '\0';
  *(float *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
