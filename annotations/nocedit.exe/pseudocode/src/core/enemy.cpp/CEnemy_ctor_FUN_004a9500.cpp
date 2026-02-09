// Name: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
// Address: 004a9500
// Address Range: [[004a9500, 004a952d]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = (CEnemy *)core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CEnemyVTable;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  pCVar2->pool_me = 0;
  pCVar2->unk5 = 0;
  pCVar2->victim = (CDemonActor *)0x0;
  pCVar2->unk3 = 0;
  pCVar2->unk4 = 0x42480000;
  pCVar2->randomize_me = 1;
  pCVar2->script_victim = (CDemonActor *)0x0;
  pCVar2->unk1 = 0;
  pCVar2->patrol_name_pattern[0] = '\0';
  pCVar2->guard_distance = 100.0;
  pCVar2->unk2[0] = '\0';
  pCVar2->unk2[1] = '\0';
  pCVar2->unk2[2] = '\0';
  pCVar2->unk2[3] = '\0';
  pCVar2->victim_height = 6.0;
  pCVar2->field14_0xbeb8 = 1;
  pCVar2->speed = fVar3;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  (pCVar2->base).base.scale.x = iVar4 + 0x10000;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  pcVar5 = "ene";
  (pCVar2->base).base.scale.y = iVar4 + 0x10000;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  pcVar6 = (pCVar2->base).base.footstep_sound_code;
  (pCVar2->base).base.scale.z = iVar4 + 0x10000;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}
