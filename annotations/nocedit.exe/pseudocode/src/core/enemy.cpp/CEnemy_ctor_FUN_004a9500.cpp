// Name: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
// Address: 004a9500
// Address Range: [[004a9500, 004a952d]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)

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
  char *pcVar8;
  
  pCVar4 = (CEnemy *)core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base);
  (pCVar4->base).base.vtable._ub = &g_CEnemyVTable;
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  pCVar4->pool_me = 0;
  pCVar4->unk3 = 0;
  pCVar4->unk2[4] = '\0';
  pCVar4->unk2[5] = '\0';
  pCVar4->unk2[6] = '\0';
  pCVar4->unk2[7] = '\0';
  pCVar4->unk2[8] = '\0';
  pCVar4->unk2[9] = '\0';
  pCVar4->unk2[10] = '\0';
  pCVar4->unk2[0xb] = '\0';
  pCVar4->unk2[0xc] = '\0';
  pCVar4->unk2[0xd] = '\0';
  pCVar4->unk2[0xe] = 'H';
  pCVar4->unk2[0xf] = 'B';
  pCVar4->randomize_me = 1;
  pCVar1 = pCVar4 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  pCVar4->unk1 = 0;
  pCVar4->patrol_name_pattern[0] = '\0';
  pCVar4->guard_distance = 100.0;
  pCVar4->unk2[0] = '\0';
  pCVar4->unk2[1] = '\0';
  pCVar4->unk2[2] = '\0';
  pCVar4->unk2[3] = '\0';
  pCVar4->victim_height = 6.0;
  pCVar3 = &pCVar4[1].base;
  (pCVar3->base).actor_name[4] = '\x01';
  (pCVar3->base).actor_name[5] = '\0';
  (pCVar3->base).actor_name[6] = '\0';
  (pCVar3->base).actor_name[7] = '\0';
  pCVar4->speed = fVar5;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  (pCVar4->base).base.scale.x = iVar6 + 0x10000;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  pcVar7 = "ene";
  (pCVar4->base).base.scale.y = iVar6 + 0x10000;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  pcVar8 = (pCVar4->base).base.footstep_sound_code;
  (pCVar4->base).base.scale.z = iVar6 + 0x10000;
  do {
    cVar2 = *pcVar7;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') {
      return pCVar4;
    }
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  return pCVar4;
}
