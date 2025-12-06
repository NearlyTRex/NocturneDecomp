// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
// Address: 004f6ca0
// Address Range: [[004f6ca0, 004f6cfb]]
// Convention: __cdecl
// Signature: CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon *this_ptr)

{
  CEnemy *pCVar1;
  uint uVar2;
  uint uVar3;
  CHotDemon *pCVar4;
  
  pCVar4 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable =
       &PTR_core_hotdemon_cpp_FUN_004f6d00_0065fce4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"hotdemon.dfm");
  uVar3 = _DAT_0065fcd4;
  uVar2 = _DAT_0065fcd0;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = 'f';
  (pCVar1->base_character).cloth_data[0x349] = 'f';
  (pCVar1->base_character).cloth_data[0x34a] = 'f';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}
