// Name: core_armour.cpp_CArmour_ctor_FUN_004121a0
// Address: 004121a0
// Address Range: [[004121a0, 00412232]]
// Convention: __cdecl
// Signature: CArmour * core_armour.cpp_CArmour_ctor_FUN_004121a0(CArmour * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  float fVar3;
  uint uVar4;
  CArmour *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar5 = (CArmour *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  pcVar6 = "none";
  (pCVar5->base_enemy).base_character.base_actor.vtable._ub = &g_CArmourVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base_enemy).base_character.model,"armour.dfm");
  uVar4 = _DAT_00659d2c;
  fVar3 = 50.0f;
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x344] = -0x66;
  (pCVar2->base_character).cloth_data[0x345] = -0x67;
  (pCVar2->base_character).cloth_data[0x346] = '\x19';
  (pCVar2->base_character).cloth_data[0x347] = '?';
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x348] = '\0';
  (pCVar2->base_character).cloth_data[0x349] = '\0';
  (pCVar2->base_character).cloth_data[0x34a] = '\0';
  (pCVar2->base_character).cloth_data[0x34b] = '@';
  pcVar7 = pCVar5->field1_0xbeb4 + 8;
  *(float *)((pCVar5->base_enemy).base_character.cloth_data + 0x34c) = fVar3;
  *(uint *)((pCVar5->base_enemy).base_character.cloth_data + 0x350) = uVar4;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).field11_0x25a0[0x70] = '\x02';
  (pCVar2->base_character).field11_0x25a0[0x71] = '\0';
  (pCVar2->base_character).field11_0x25a0[0x72] = '\0';
  (pCVar2->base_character).field11_0x25a0[0x73] = '\0';
  return pCVar5;
}
