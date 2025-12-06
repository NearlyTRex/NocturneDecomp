// Name: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
// Address: 004a9500
// Address Range: [[004a9500, 004a952d]]
// Convention: __cdecl
// Signature: CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)

{
  CEnemy *pCVar1;
  char cVar2;
  CCharacter *pCVar3;
  CEnemy *pCVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  
  pCVar4 = (CEnemy *)core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base_character);
  (pCVar4->base_character).base_actor.vtable = &PTR_core_enemy_cpp_FUN_004a9650_0065d7d4;
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  pCVar4->pool_me = 0;
  pCVar4->field8_0xbeac = 0;
  pCVar4->field6_0xbe38[4] = '\0';
  pCVar4->field6_0xbe38[5] = '\0';
  pCVar4->field6_0xbe38[6] = '\0';
  pCVar4->field6_0xbe38[7] = '\0';
  pCVar4->field6_0xbe38[8] = '\0';
  pCVar4->field6_0xbe38[9] = '\0';
  pCVar4->field6_0xbe38[10] = '\0';
  pCVar4->field6_0xbe38[0xb] = '\0';
  pCVar4->field6_0xbe38[0xc] = '\0';
  pCVar4->field6_0xbe38[0xd] = '\0';
  pCVar4->field6_0xbe38[0xe] = 'H';
  pCVar4->field6_0xbe38[0xf] = 'B';
  pCVar4->randomize_me = 1;
  pCVar1 = pCVar4 + 1;
  (pCVar1->base_character).base_actor.actor_name[0] = '\0';
  (pCVar1->base_character).base_actor.actor_name[1] = '\0';
  (pCVar1->base_character).base_actor.actor_name[2] = '\0';
  (pCVar1->base_character).base_actor.actor_name[3] = '\0';
  pCVar4->field4_0xbe30 = 0;
  pCVar4->patrol_name_pattern[0] = '\0';
  pCVar4->guard_distance = 100.0;
  pCVar4->field6_0xbe38[0] = '\0';
  pCVar4->field6_0xbe38[1] = '\0';
  pCVar4->field6_0xbe38[2] = '\0';
  pCVar4->field6_0xbe38[3] = '\0';
  pCVar4->victim_height = 6.0;
  pCVar3 = &pCVar4[1].base_character;
  (pCVar3->base_actor).actor_name[4] = '\x01';
  (pCVar3->base_actor).actor_name[5] = '\0';
  (pCVar3->base_actor).actor_name[6] = '\0';
  (pCVar3->base_actor).actor_name[7] = '\0';
  pCVar4->speed = fVar5;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  (pCVar4->base_character).base_actor.scale.x = iVar6 + 0x10000;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  pcVar7 = "ene";
  (pCVar4->base_character).base_actor.scale.y = iVar6 + 0x10000;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  piVar8 = &(pCVar4->base_character).base_actor.field21_0x11c;
  (pCVar4->base_character).base_actor.scale.z = iVar6 + 0x10000;
  do {
    cVar2 = *pcVar7;
    *(char *)piVar8 = cVar2;
    if (cVar2 == '\0') {
      return pCVar4;
    }
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    *(char *)((int)piVar8 + 1) = cVar2;
    piVar8 = (int *)((int)piVar8 + 2);
  } while (cVar2 != '\0');
  return pCVar4;
}
