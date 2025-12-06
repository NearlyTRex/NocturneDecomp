// Name: core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
// Address: 005f8fe0
// Address Range: [[005f8fe0, 005f9085]]
// Convention: __cdecl
// Signature: CZombie * core_zombie.cpp_CZombie_ctor_FUN_005f8fe0(CZombie * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  uint uVar3;
  uint uVar4;
  CZombie *pCVar5;
  float fVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  pCVar5 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  pcVar8 = "true";
  (pCVar5->base_enemy).base_character.base_actor.vtable = &PTR_core_zombie_cpp_CZombie_FUN_006659e4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base_enemy).base_character.model,"zombie1.dfm");
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x344] = '\0';
  (pCVar2->base_character).cloth_data[0x345] = '\0';
  (pCVar2->base_character).cloth_data[0x346] = '\0';
  (pCVar2->base_character).cloth_data[0x347] = '?';
  pcVar9 = pCVar5->field1_0xbeb4 + 0x28;
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x348] = '\0';
  uVar3 = _DAT_006659cc;
  (pCVar2->base_character).cloth_data[0x349] = '\0';
  (pCVar2->base_character).cloth_data[0x34a] = -0x80;
  (pCVar2->base_character).cloth_data[0x34b] = '?';
  pCVar5->field1_0xbeb4[0x18] = '\0';
  uVar4 = _PTR_FUN_006659cd_3;
  pCVar5->field1_0xbeb4[0x19] = '\0';
  pCVar5->field1_0xbeb4[0x1a] = '\0';
  pCVar5->field1_0xbeb4[0x1b] = '\0';
  pCVar5->field1_0xbeb4[0x14] = '\0';
  pCVar5->field1_0xbeb4[0x15] = '\0';
  pCVar5->field1_0xbeb4[0x16] = '\0';
  pCVar5->field1_0xbeb4[0x17] = '\0';
  *(uint *)((pCVar5->base_enemy).base_character.cloth_data + 0x34c) = uVar3;
  *(uint *)((pCVar5->base_enemy).base_character.cloth_data + 0x350) = uVar4;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,1.0);
  pCVar5->field1_0xbeb4[0x20] = '\0';
  pCVar5->field1_0xbeb4[0x21] = '\0';
  pCVar5->field1_0xbeb4[0x22] = '\0';
  pCVar5->field1_0xbeb4[0x23] = '\0';
  *(float *)(pCVar5->field1_0xbeb4 + 8) = fVar6;
  iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  pCVar5->field1_0xbeb4[0x10] = '\0';
  pCVar5->field1_0xbeb4[0x11] = '\0';
  pCVar5->field1_0xbeb4[0x12] = '\0';
  pCVar5->field1_0xbeb4[0x13] = '\0';
  pCVar5->field1_0xbeb4[0x24] = '\0';
  pCVar5->field1_0xbeb4[0x25] = '\0';
  pCVar5->field1_0xbeb4[0x26] = '\0';
  pCVar5->field1_0xbeb4[0x27] = '\0';
  *(int *)(pCVar5->field1_0xbeb4 + 0xc) = iVar7;
  pcVar9 = g_CDemonSetPtr->geometry_filename;
  pCVar5->is_miner_zombie = 0;
  pCVar5->field4_0xbf48[0x4c] = '\0';
  pCVar5->field4_0xbf48[0x4d] = '\0';
  pCVar5->field4_0xbf48[0x4e] = '\0';
  pCVar5->field4_0xbf48[0x4f] = '\0';
  iVar7 = crt_string_c_stricmp_FUN_005fe7f0(pcVar9,"mine.geo");
  pCVar5->always_chase_fast = 0;
  pCVar5->field4_0xbf48[0x5c] = '\0';
  pCVar5->field4_0xbf48[0x5d] = '\0';
  pCVar5->field4_0xbf48[0x5e] = '\0';
  pCVar5->field4_0xbf48[0x5f] = '\0';
  pCVar5->field4_0xbf48[0x60] = '\0';
  pCVar5->field4_0xbf48[0x61] = '\0';
  pCVar5->field4_0xbf48[0x62] = '\0';
  pCVar5->field4_0xbf48[99] = '\0';
  pCVar5->field1_0xbeb4[4] = '\0';
  pCVar5->field1_0xbeb4[5] = '\0';
  pCVar5->field1_0xbeb4[6] = '\0';
  pCVar5->field1_0xbeb4[7] = '\0';
  pCVar5->is_miner_zombie = (uint)(iVar7 == 0);
  return pCVar5;
}
