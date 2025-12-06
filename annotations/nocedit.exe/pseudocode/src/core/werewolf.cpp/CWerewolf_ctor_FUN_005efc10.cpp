// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
// Address: 005efc10
// Address Range: [[005efc10, 005efcbd]]
// Convention: __cdecl
// Signature: CWerewolf * core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf *this_ptr)

{
  CEnemy *pCVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  CWerewolf *pCVar5;
  
  pCVar5 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar5->base_enemy).base_character.base_actor.vtable = &PTR_core_werewolf_cpp_FUN_00665784;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base_enemy).base_character.model,"wolfbrn.dfm");
  pCVar1 = &pCVar5->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = -0x80;
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar5->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = '\0';
  (pCVar1->base_character).cloth_data[0x34b] = '@';
  pCVar5->type = 0;
  pCVar5->light_up_eyes = 1;
  pCVar5->field6_0xbed8[0x10] = '\0';
  uVar2 = _DAT_00665760;
  pCVar5->field6_0xbed8[0x11] = '\0';
  pCVar5->field6_0xbed8[0x12] = '\0';
  pCVar5->field6_0xbed8[0x13] = '\0';
  pCVar5->chain_length = 5.0;
  uVar3 = _PTR_FUN_00665761_3;
  pCVar5->field8_0xbef0[0] = '\0';
  fVar4 = DAT_00665768;
  pCVar5->field8_0xbef0[1] = '\0';
  pCVar5->field8_0xbef0[2] = '\0';
  pCVar5->field8_0xbef0[3] = '\0';
  pCVar5->field8_0xbef0[4] = '\0';
  pCVar5->field8_0xbef0[5] = '\0';
  pCVar5->field8_0xbef0[6] = '\0';
  pCVar5->field8_0xbef0[7] = '\0';
  pCVar5->phase = 0;
  *(uint *)((pCVar5->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(uint *)((pCVar5->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  pCVar5->phase_timer = fVar4;
  return pCVar5;
}
