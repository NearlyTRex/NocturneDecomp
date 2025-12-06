// Name: core_beast.cpp_CBeast_ctor_FUN_00418220
// Address: 00418220
// Address Range: [[00418220, 0041827b]]
// Convention: __cdecl
// Signature: CBeast * core_beast.cpp_CBeast_ctor_FUN_00418220(CBeast * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast *this_ptr)

{
  CEnemy *pCVar1;
  uint uVar2;
  uint uVar3;
  CBeast *pCVar4;
  
  pCVar4 = (CBeast *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &g_CBeastVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"beast.dfm");
  uVar3 = _DAT_0065aa5c;
  uVar2 = _DAT_0065aa58;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = ' ';
  (pCVar1->base_character).cloth_data[0x347] = 'A';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = ' ';
  (pCVar1->base_character).cloth_data[0x34b] = 'A';
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}
