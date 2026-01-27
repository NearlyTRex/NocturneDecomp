// Name: core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
// Address: 005f8fe0
// Address Range: [[005f8fe0, 005f9085]]
// Convention: __cdecl
// Signature: CZombie * core_zombie.cpp_CZombie_ctor_FUN_005f8fe0(CZombie * this_ptr)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  float fVar3;
  CZombie *pCVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pCVar4 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pcVar7 = "true";
  (pCVar4->base).base.base.vtable._ub = &g_CZombieVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"zombie1.dfm");
  pCVar2 = &pCVar4->base;
  (pCVar2->base).cloth_data[0x344] = '\0';
  (pCVar2->base).cloth_data[0x345] = '\0';
  (pCVar2->base).cloth_data[0x346] = '\0';
  (pCVar2->base).cloth_data[0x347] = '?';
  pcVar8 = pCVar4->unk1 + 0x28;
  pCVar2 = &pCVar4->base;
  (pCVar2->base).cloth_data[0x348] = '\0';
  fVar5 = 50.0f;
  (pCVar2->base).cloth_data[0x349] = '\0';
  (pCVar2->base).cloth_data[0x34a] = -0x80;
  (pCVar2->base).cloth_data[0x34b] = '?';
  pCVar4->unk1[0x18] = '\0';
  fVar3 = 100.0f;
  pCVar4->unk1[0x19] = '\0';
  pCVar4->unk1[0x1a] = '\0';
  pCVar4->unk1[0x1b] = '\0';
  pCVar4->unk1[0x14] = '\0';
  pCVar4->unk1[0x15] = '\0';
  pCVar4->unk1[0x16] = '\0';
  pCVar4->unk1[0x17] = '\0';
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar5;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,1.0);
  pCVar4->unk1[0x20] = '\0';
  pCVar4->unk1[0x21] = '\0';
  pCVar4->unk1[0x22] = '\0';
  pCVar4->unk1[0x23] = '\0';
  *(float *)(pCVar4->unk1 + 8) = fVar5;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  pCVar4->unk1[0x10] = '\0';
  pCVar4->unk1[0x11] = '\0';
  pCVar4->unk1[0x12] = '\0';
  pCVar4->unk1[0x13] = '\0';
  pCVar4->unk1[0x24] = '\0';
  pCVar4->unk1[0x25] = '\0';
  pCVar4->unk1[0x26] = '\0';
  pCVar4->unk1[0x27] = '\0';
  *(int *)(pCVar4->unk1 + 0xc) = iVar6;
  pcVar8 = g_CDemonSetPtr->geometry_filename;
  pCVar4->is_miner_zombie = 0;
  pCVar4->unk2[0x4c] = '\0';
  pCVar4->unk2[0x4d] = '\0';
  pCVar4->unk2[0x4e] = '\0';
  pCVar4->unk2[0x4f] = '\0';
  iVar6 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,"mine.geo");
  pCVar4->always_chase_fast = 0;
  pCVar4->unk2[0x5c] = '\0';
  pCVar4->unk2[0x5d] = '\0';
  pCVar4->unk2[0x5e] = '\0';
  pCVar4->unk2[0x5f] = '\0';
  pCVar4->unk2[0x60] = '\0';
  pCVar4->unk2[0x61] = '\0';
  pCVar4->unk2[0x62] = '\0';
  pCVar4->unk2[99] = '\0';
  pCVar4->unk1[4] = '\0';
  pCVar4->unk1[5] = '\0';
  pCVar4->unk1[6] = '\0';
  pCVar4->unk1[7] = '\0';
  pCVar4->is_miner_zombie = (uint)(iVar6 == 0);
  return pCVar4;
}
