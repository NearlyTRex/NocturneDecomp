// Name: core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
// Address: 005f8fe0
// Address Range: [[005f8fe0, 005f9085]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr)

{
  char cVar1;
  float fVar2;
  CZombie *pCVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar3 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pcVar6 = "true";
  (pCVar3->base).base.base.vtable._ub = &g_CZombieVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"zombie1.dfm");
  (pCVar3->base).base.field54_0x2ddc = 0.5;
  pcVar7 = pCVar3->rise_from_grave_condition;
  (pCVar3->base).base.collision_cylinder_radius = 1.0;
  fVar4 = 50.0f;
  pCVar3->unk1[0x18] = '\0';
  fVar2 = 100.0f;
  pCVar3->unk1[0x19] = '\0';
  pCVar3->unk1[0x1a] = '\0';
  pCVar3->unk1[0x1b] = '\0';
  pCVar3->unk1[0x14] = '\0';
  pCVar3->unk1[0x15] = '\0';
  pCVar3->unk1[0x16] = '\0';
  pCVar3->unk1[0x17] = '\0';
  (pCVar3->base).base.field56_0x2de4 = fVar4;
  (pCVar3->base).base.field57_0x2de8 = fVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,1.0);
  pCVar3->grave_actor = (CDemonActor *)0x0;
  *(float *)(pCVar3->unk1 + 8) = fVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  pCVar3->unk1[0x10] = '\0';
  pCVar3->unk1[0x11] = '\0';
  pCVar3->unk1[0x12] = '\0';
  pCVar3->unk1[0x13] = '\0';
  pCVar3->unk2 = 0;
  *(int *)(pCVar3->unk1 + 0xc) = iVar5;
  pcVar7 = g_CDemonSetPtr->geometry_filename;
  pCVar3->is_miner_zombie = 0;
  pCVar3->unk4[0x4c] = '\0';
  pCVar3->unk4[0x4d] = '\0';
  pCVar3->unk4[0x4e] = '\0';
  pCVar3->unk4[0x4f] = '\0';
  iVar5 = stricmp(pcVar7,"mine.geo");
  pCVar3->always_chase_fast = 0;
  pCVar3->unk4[0x5c] = '\0';
  pCVar3->unk4[0x5d] = '\0';
  pCVar3->unk4[0x5e] = '\0';
  pCVar3->unk4[0x5f] = '\0';
  pCVar3->unk4[0x60] = '\0';
  pCVar3->unk4[0x61] = '\0';
  pCVar3->unk4[0x62] = '\0';
  pCVar3->unk4[99] = '\0';
  pCVar3->unk1[4] = '\0';
  pCVar3->unk1[5] = '\0';
  pCVar3->unk1[6] = '\0';
  pCVar3->unk1[7] = '\0';
  pCVar3->is_miner_zombie = (uint)(iVar5 == 0);
  return pCVar3;
}
