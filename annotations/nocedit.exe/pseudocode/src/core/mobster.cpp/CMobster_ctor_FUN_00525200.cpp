// Name: core_mobster.cpp_CMobster_ctor_FUN_00525200
// Address: 00525200
// Address Range: [[00525200, 00525337]]
// Convention: __cdecl
// Signature: CMobster * core_mobster.cpp_CMobster_ctor_FUN_00525200(CMobster * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_00525200(CMobster *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  uint uVar3;
  uint uVar4;
  CMobster *pCVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pCVar5 = (CMobster *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar5->base_enemy).base_character.base_actor.vtable =
       &PTR_core_mobster_cpp_FUN_00525340_00661794;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base_enemy).base_character.model,"mobster1.dfm");
  uVar3 = _DAT_00661780;
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x344] = -0x66;
  uVar4 = _DAT_00661784;
  (pCVar2->base_character).cloth_data[0x345] = -0x67;
  (pCVar2->base_character).cloth_data[0x346] = '\x19';
  (pCVar2->base_character).cloth_data[0x347] = '?';
  pCVar2 = &pCVar5->base_enemy;
  (pCVar2->base_character).cloth_data[0x348] = 'f';
  (pCVar2->base_character).cloth_data[0x349] = 'f';
  (pCVar2->base_character).cloth_data[0x34a] = 'f';
  (pCVar2->base_character).cloth_data[0x34b] = '?';
  *(uint *)((pCVar5->base_enemy).base_character.cloth_data + 0x34c) = uVar3;
  *(uint *)((pCVar5->base_enemy).base_character.cloth_data + 0x350) = uVar4;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  pCVar5->field1_0xbeb4[0xc] = '\0';
  pCVar5->field1_0xbeb4[0xd] = '\0';
  pCVar5->field1_0xbeb4[0xe] = '\0';
  pCVar5->field1_0xbeb4[0xf] = '\0';
  pCVar5->field1_0xbeb4[0x10] = '\0';
  pCVar5->field1_0xbeb4[0x11] = '\0';
  pCVar5->field1_0xbeb4[0x12] = '\0';
  pCVar5->field1_0xbeb4[0x13] = '\0';
  pCVar5->field1_0xbeb4[0x14] = '\0';
  pCVar5->field1_0xbeb4[0x15] = '\0';
  pCVar5->field1_0xbeb4[0x16] = '\0';
  pCVar5->field1_0xbeb4[0x17] = '\0';
  pCVar5->field6_0xbeec[0xa0] = '\0';
  pCVar5->field6_0xbeec[0xa1] = '\0';
  pCVar5->field6_0xbeec[0xa2] = '\0';
  pCVar5->field6_0xbeec[0xa3] = '\0';
  pCVar5->field6_0xbeec[0xa4] = '\0';
  pCVar5->field6_0xbeec[0xa5] = '\0';
  pCVar5->field6_0xbeec[0xa6] = '\0';
  pCVar5->field6_0xbeec[0xa7] = '\0';
  (pCVar5->base_enemy).victim_height = 40.0;
  *(int *)(pCVar5->field1_0xbeb4 + 8) = iVar6;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0x62,0x65);
  pCVar5->field1_0xbeb4[0x20] = '\0';
  pCVar5->field1_0xbeb4[0x21] = '\0';
  pCVar5->field1_0xbeb4[0x22] = '\0';
  pCVar5->field1_0xbeb4[0x23] = '\0';
  pCVar5->field1_0xbeb4[0x18] = '\0';
  pCVar5->field1_0xbeb4[0x19] = '\0';
  pCVar5->field1_0xbeb4[0x1a] = '\0';
  pCVar5->field1_0xbeb4[0x1b] = '\0';
  pCVar5->post_mode = 0;
  pCVar5->field3_0xbedc[0] = '\0';
  pCVar5->field3_0xbedc[1] = '\0';
  pCVar5->field3_0xbedc[2] = '\0';
  pCVar5->field3_0xbedc[3] = '\0';
  pCVar5->field3_0xbedc[4] = '\0';
  pCVar5->field3_0xbedc[5] = '\0';
  pCVar5->field3_0xbedc[6] = '\0';
  pCVar5->field3_0xbedc[7] = '\0';
  pcVar7 = "none";
  pCVar5->side_of_car = 0;
  pCVar5->hold_pos_flag = 0;
  pcVar8 = pCVar5->field6_0xbeec;
  pCVar5->field1_0xbeb4[0x1c] = (char)iVar6;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pCVar5->field1_0xbeb4[4] = '\0';
  pCVar5->field1_0xbeb4[5] = '\0';
  pCVar5->field1_0xbeb4[6] = '\0';
  pCVar5->field1_0xbeb4[7] = '\0';
  return pCVar5;
}
