// Name: core_doc.cpp_FUN_004501a2
// Address: 004501a2
// Address Range: [[004501a2, 00450578]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004501a2(void)

#include "nocturne.h"

void core_doc_cpp_FUN_004501a2(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CFlame *pCVar4;
  char cVar5;
  char *in_EAX;
  CCharacter *unaff_EBX;
  char *pcVar6;
  char (*pacVar7) [40];
  char *pcVar8;
  int *piVar9;
  uint in_stack_00000140;
  uint in_stack_00000144;
  uint in_stack_00000148;
  uint in_stack_0000014c;
  uint in_stack_00000150;
  uint in_stack_00000154;
  uint in_stack_00000158;
  uint in_stack_0000015c;
  uint in_stack_00000160;
  
  cVar5 = (char)in_EAX + *in_EAX;
  pcVar6 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar5);
  *pcVar6 = *pcVar6 + cVar5;
  *pcVar6 = *pcVar6 + cVar5;
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0x14] = '\0';
  (pCVar4->base).actor_name[0x15] = '\0';
  (pCVar4->base).actor_name[0x16] = '\0';
  (pCVar4->base).actor_name[0x17] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x3c] = '\0';
  pCVar4[1].off_event[0x3d] = '\0';
  pCVar4[1].off_event[0x3e] = '\0';
  pCVar4[1].off_event[0x3f] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x44] = '\0';
  pCVar4[1].off_event[0x45] = '\0';
  pCVar4[1].off_event[0x46] = '\0';
  pCVar4[1].off_event[0x47] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x50] = '\0';
  pCVar4[1].off_event[0x51] = '\0';
  pCVar4[1].off_event[0x52] = '\0';
  pCVar4[1].off_event[0x53] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x54] = '\0';
  uVar1 = 0x41200000;
  pCVar4[1].off_event[0x55] = '\0';
  pCVar4[1].off_event[0x56] = '\0';
  pCVar4[1].off_event[0x57] = '\0';
  unaff_EBX[2].flames[2].base.orient.vec.z = -1e+30;
  *(uint *)(unaff_EBX[2].flames[1].on_event + 0x5c) = uVar1;
  unaff_EBX[2].flames[2].base.location.position.x = -1e+30;
  unaff_EBX[2].flames[2].globe.linear_radius_scaled = 0;
  uVar1 = *(uint *)(unaff_EBX[2].flames[1].on_event + 0x60);
  uVar2 = *(uint *)(unaff_EBX[2].flames[1].off_event + 0x24);
  uVar3 = *(uint *)(unaff_EBX[2].flames[1].off_event + 0x1c);
  *(uint *)(unaff_EBX[2].flames[1].off_event + 8) =
       *(uint *)(unaff_EBX[2].flames[1].off_event + 4);
  *(uint *)unaff_EBX[2].flames[1].off_event = uVar1;
  *(uint *)(unaff_EBX[2].flames[1].off_event + 0x28) = uVar2;
  *(uint *)(unaff_EBX[2].flames[1].off_event + 0x20) = uVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(&unaff_EBX->model,(char *)0x5cfb87);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&unaff_EBX->model);
  unaff_EBX->layer_action_index = 0;
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x40] = '\0';
  pCVar4[1].off_event[0x41] = '\0';
  pCVar4[1].off_event[0x42] = '\0';
  pCVar4[1].off_event[0x43] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x60] = '\0';
  pCVar4[1].off_event[0x61] = '\0';
  pCVar4[1].off_event[0x62] = '\0';
  pCVar4[1].off_event[99] = '\0';
  unaff_EBX[2].flames[1].intensity = 0.0;
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[8] = '\0';
  (pCVar4->base).actor_name[9] = '\0';
  (pCVar4->base).actor_name[10] = '\0';
  (pCVar4->base).actor_name[0xb] = '\0';
  *(uint *)(unaff_EBX[2].flames[2].base.actor_name + 4) =
       *(uint *)(unaff_EBX[2].flames[2].base.actor_name + 8);
  *(uint *)unaff_EBX[2].flames[2].base.actor_name =
       *(uint *)(unaff_EBX[2].flames[2].base.actor_name + 4);
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0xc] = -1;
  (pCVar4->base).actor_name[0xd] = -1;
  (pCVar4->base).actor_name[0xe] = -1;
  (pCVar4->base).actor_name[0xf] = -1;
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x48] = '\0';
  pCVar4[1].off_event[0x49] = '\0';
  pCVar4[1].off_event[0x4a] = '\0';
  pCVar4[1].off_event[0x4b] = '\0';
  unaff_EBX[2].flames[1].randomness = 0.0;
  unaff_EBX[2].flames[1].burn_hero = 0;
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x4c] = '\0';
  pCVar4[1].off_event[0x4d] = '\0';
  pCVar4[1].off_event[0x4e] = '\0';
  pCVar4[1].off_event[0x4f] = '\0';
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0x10] = '\0';
  (pCVar4->base).actor_name[0x11] = '\0';
  (pCVar4->base).actor_name[0x12] = '\0';
  (pCVar4->base).actor_name[0x13] = '\0';
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0x18] = '\0';
  (pCVar4->base).actor_name[0x19] = '\0';
  (pCVar4->base).actor_name[0x1a] = '\0';
  (pCVar4->base).actor_name[0x1b] = '\0';
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,1,"draw_L_standholster",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,1,2,"draw_L_holsterAim",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,5,"draw_R_standScabbard",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,5,6,"draw_R_scabbardMelee",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xd,6,"draw_R_meleeAttack1",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xd,6,"draw_R_meleeAttack2",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xd,6,"draw_R_meleeAttack4",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xd,6,"draw_LR_meleeAttack3",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xd,6,"draw_R_crossAttack1",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,7,7,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,4,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,4,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,1,0x10,"draw_holsters2aimFlashlight",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0x12,2,"draw_L_reload",1);
  core_cloth_cpp_CClothList_add_FUN_005b15c0(&unaff_EBX->cloth_list,"LAZ86CLOTH.cth");
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).create_event[0x50] = '\0';
  (pCVar4->base).create_event[0x51] = '\0';
  (pCVar4->base).create_event[0x52] = '\0';
  (pCVar4->base).create_event[0x53] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[2].base.create_event[0] = '\0';
  pCVar4[2].base.create_event[1] = '\0';
  pCVar4[2].base.create_event[2] = '\0';
  pCVar4[2].base.create_event[3] = '\0';
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).create_event[0x34] = '\0';
  (pCVar4->base).create_event[0x35] = '\0';
  (pCVar4->base).create_event[0x36] = '\0';
  (pCVar4->base).create_event[0x37] = '\0';
  unaff_EBX[2].flames[2].globe.linear_radius_scaled = 0;
  pcVar6 = (unaff_EBX->model).model_name;
  pcVar8 = unaff_EBX[2].flames[2].base.create_event + 0x58;
  do {
    cVar5 = *pcVar6;
    *pcVar8 = cVar5;
    if (cVar5 == '\0') break;
    cVar5 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar5;
    pcVar8 = pcVar8 + 2;
  } while (cVar5 != '\0');
  pacVar7 = (unaff_EBX->cloth_list).filenames;
  piVar9 = &unaff_EBX[2].flames[2].base.particle_systems[1].standalone;
  do {
    cVar5 = (*pacVar7)[0];
    *(char *)piVar9 = cVar5;
    if (cVar5 == '\0') break;
    cVar5 = (*pacVar7)[1];
    pacVar7 = (char (*) [40])(*pacVar7 + 2);
    *(char *)((int)piVar9 + 1) = cVar5;
    piVar9 = (int *)((int)piVar9 + 2);
  } while (cVar5 != '\0');
  (unaff_EBX->base).is_transparent = 1;
  unaff_EBX->eye_glow_enabled = 0;
  if (&unaff_EBX->eye_glow_left_offset != (CVector3f *)&stack0x00000140) {
    (unaff_EBX->eye_glow_left_offset).x = -0.113;
    (unaff_EBX->eye_glow_left_offset).y = 0.381;
    (unaff_EBX->eye_glow_left_offset).z = 0.244;
  }
  if (&unaff_EBX->eye_glow_right_offset != (CVector3f *)&stack0x00000158) {
    (unaff_EBX->eye_glow_right_offset).x = 0.113;
    (unaff_EBX->eye_glow_right_offset).y = 0.381;
    (unaff_EBX->eye_glow_right_offset).z = 0.244;
  }
  if (&unaff_EBX->eye_glow_color == (CVector3f *)&stack0x0000014c) {
    return;
  }
  (unaff_EBX->eye_glow_color).x = 0.5;
  (unaff_EBX->eye_glow_color).y = 0.0;
  (unaff_EBX->eye_glow_color).z = 0.0;
  return;
}
