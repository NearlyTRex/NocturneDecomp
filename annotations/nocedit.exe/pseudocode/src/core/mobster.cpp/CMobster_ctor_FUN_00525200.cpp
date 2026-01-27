// Name: core_mobster.cpp_CMobster_ctor_FUN_00525200
// Address: 00525200
// Address Range: [[00525200, 00525337]]
// Convention: __cdecl
// Signature: CMobster * core_mobster.cpp_CMobster_ctor_FUN_00525200(CMobster * this_ptr)

#include "nocturne.h"

CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_00525200(CMobster *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  float fVar3;
  float fVar4;
  CMobster *pCVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pCVar5 = (CMobster *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar5->base).base.base.vtable._ub = &g_CMobsterVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar5->base).base.model,"mobster1.dfm");
  fVar3 = 50.0f;
  pCVar2 = &pCVar5->base;
  (pCVar2->base).cloth_data[0x344] = -0x66;
  fVar4 = 100.0f;
  (pCVar2->base).cloth_data[0x345] = -0x67;
  (pCVar2->base).cloth_data[0x346] = '\x19';
  (pCVar2->base).cloth_data[0x347] = '?';
  pCVar2 = &pCVar5->base;
  (pCVar2->base).cloth_data[0x348] = 'f';
  (pCVar2->base).cloth_data[0x349] = 'f';
  (pCVar2->base).cloth_data[0x34a] = 'f';
  (pCVar2->base).cloth_data[0x34b] = '?';
  *(float *)((pCVar5->base).base.cloth_data + 0x34c) = fVar3;
  *(float *)((pCVar5->base).base.cloth_data + 0x350) = fVar4;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  pCVar5->unk1[0xc] = '\0';
  pCVar5->unk1[0xd] = '\0';
  pCVar5->unk1[0xe] = '\0';
  pCVar5->unk1[0xf] = '\0';
  pCVar5->unk1[0x10] = '\0';
  pCVar5->unk1[0x11] = '\0';
  pCVar5->unk1[0x12] = '\0';
  pCVar5->unk1[0x13] = '\0';
  pCVar5->unk1[0x14] = '\0';
  pCVar5->unk1[0x15] = '\0';
  pCVar5->unk1[0x16] = '\0';
  pCVar5->unk1[0x17] = '\0';
  pCVar5->unk3[0xa0] = '\0';
  pCVar5->unk3[0xa1] = '\0';
  pCVar5->unk3[0xa2] = '\0';
  pCVar5->unk3[0xa3] = '\0';
  pCVar5->unk3[0xa4] = '\0';
  pCVar5->unk3[0xa5] = '\0';
  pCVar5->unk3[0xa6] = '\0';
  pCVar5->unk3[0xa7] = '\0';
  (pCVar5->base).victim_height = 40.0;
  *(int *)(pCVar5->unk1 + 8) = iVar6;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0x62,0x65);
  pCVar5->unk1[0x20] = '\0';
  pCVar5->unk1[0x21] = '\0';
  pCVar5->unk1[0x22] = '\0';
  pCVar5->unk1[0x23] = '\0';
  pCVar5->unk1[0x18] = '\0';
  pCVar5->unk1[0x19] = '\0';
  pCVar5->unk1[0x1a] = '\0';
  pCVar5->unk1[0x1b] = '\0';
  pCVar5->post_mode = 0;
  pCVar5->unk2[0] = '\0';
  pCVar5->unk2[1] = '\0';
  pCVar5->unk2[2] = '\0';
  pCVar5->unk2[3] = '\0';
  pCVar5->unk2[4] = '\0';
  pCVar5->unk2[5] = '\0';
  pCVar5->unk2[6] = '\0';
  pCVar5->unk2[7] = '\0';
  pcVar7 = "none";
  pCVar5->side_of_car = 0;
  pCVar5->hold_pos_flag = 0;
  pcVar8 = pCVar5->unk3;
  pCVar5->unk1[0x1c] = (char)iVar6;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pCVar5->unk1[4] = '\0';
  pCVar5->unk1[5] = '\0';
  pCVar5->unk1[6] = '\0';
  pCVar5->unk1[7] = '\0';
  return pCVar5;
}
