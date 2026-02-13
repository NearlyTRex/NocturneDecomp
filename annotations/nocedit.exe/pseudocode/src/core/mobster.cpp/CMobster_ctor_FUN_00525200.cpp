// Name: core_mobster.cpp_CMobster_ctor_FUN_00525200
// Address: 00525200
// Address Range: [[00525200, 00525337]]
// Convention: __cdecl
// Signature: CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_00525200(CMobster *this_ptr)

#include "nocturne.h"

CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_00525200(CMobster *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CMobster *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = (CMobster *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CMobsterVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"mobster1.dfm");
  fVar2 = 50.0f;
  (pCVar4->base).base.collision_cylinder_height = 0.6;
  fVar3 = 100.0f;
  (pCVar4->base).base.collision_cylinder_radius = 0.9;
  (pCVar4->base).base.ai_detection_range_min = fVar2;
  (pCVar4->base).base.ai_detection_range_max = fVar3;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  pCVar4->unk1[4] = '\0';
  pCVar4->unk1[5] = '\0';
  pCVar4->unk1[6] = '\0';
  pCVar4->unk1[7] = '\0';
  pCVar4->unk1[8] = '\0';
  pCVar4->unk1[9] = '\0';
  pCVar4->unk1[10] = '\0';
  pCVar4->unk1[0xb] = '\0';
  pCVar4->unk1[0xc] = '\0';
  pCVar4->unk1[0xd] = '\0';
  pCVar4->unk1[0xe] = '\0';
  pCVar4->unk1[0xf] = '\0';
  pCVar4->unk2[0x3c] = '\0';
  pCVar4->unk2[0x3d] = '\0';
  pCVar4->unk2[0x3e] = '\0';
  pCVar4->unk2[0x3f] = '\0';
  pCVar4->unk2[0x40] = '\0';
  pCVar4->unk2[0x41] = '\0';
  pCVar4->unk2[0x42] = '\0';
  pCVar4->unk2[0x43] = '\0';
  (pCVar4->base).victim_height = 40.0;
  *(int *)pCVar4->unk1 = iVar5;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(0x62,0x65);
  pCVar4->unk1[0x18] = '\0';
  pCVar4->unk1[0x19] = '\0';
  pCVar4->unk1[0x1a] = '\0';
  pCVar4->unk1[0x1b] = '\0';
  pCVar4->unk1[0x10] = '\0';
  pCVar4->unk1[0x11] = '\0';
  pCVar4->unk1[0x12] = '\0';
  pCVar4->unk1[0x13] = '\0';
  pCVar4->post_mode = 0;
  pCVar4->our_post = (CDemonActor *)0x0;
  pCVar4->vehicle = (CDemonActor *)0x0;
  pcVar6 = "none";
  pCVar4->side_of_car = 0;
  pCVar4->hold_pos_flag = 0;
  pcVar7 = pCVar4->hold_pos_condition;
  pCVar4->unk1[0x14] = (char)iVar5;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  (pCVar4->base).allow_pathfind_to_new_targets = 0;
  return pCVar4;
}
