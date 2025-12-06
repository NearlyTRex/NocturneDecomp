// Name: core_drone.cpp_ctor_FUN_0048eb50
// Address: 0048eb50
// Address Range: [[0048eb50, 0048ebbf]]
// Convention: __cdecl
// Signature: CDrone * core_drone.cpp_ctor_FUN_0048eb50(CDrone * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDrone * __cdecl core_drone_cpp_ctor_FUN_0048eb50(CDrone *this_ptr)

{
  CEnemy *pCVar1;
  uint uVar2;
  uint uVar3;
  CDrone *pCVar4;
  
  pCVar4 = (CDrone *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_drone_cpp_FUN_0065d0c4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"drone.dfm");
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  uVar2 = _DAT_0065d0ac;
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '@';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  uVar3 = _PTR_core_bride_cpp_FUN_0065d0ad_3;
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).field11_0x25a0[0x70] = '\x01';
  (pCVar1->base_character).field11_0x25a0[0x71] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x72] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x73] = '\0';
  (pCVar4->base_enemy).base_character.hit_points = 75.0;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}
