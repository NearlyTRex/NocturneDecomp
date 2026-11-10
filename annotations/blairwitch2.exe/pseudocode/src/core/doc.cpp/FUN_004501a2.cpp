// Name: core_doc.cpp_FUN_004501a2
// Address: 004501a2
// Address Range: [[004501a2, 00450578]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004501a2(void)

#include "nocturne.h"

void core_doc_cpp_FUN_004501a2(void)

{
  uint uVar1;
  char cVar2;
  char *in_EAX;
  CCharacter *unaff_EBX;
  char *pcVar3;
  char (*pacVar4) [40];
  char *pcVar5;
  uint in_stack_00000140;
  uint in_stack_00000144;
  uint in_stack_00000148;
  uint in_stack_0000014c;
  uint in_stack_00000150;
  uint in_stack_00000154;
  uint in_stack_00000158;
  uint in_stack_0000015c;
  uint in_stack_00000160;
  
  cVar2 = (char)in_EAX + *in_EAX;
  pcVar3 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *(uint *)&unaff_EBX[2].field_0x4234 = 0;
  *(uint *)&unaff_EBX[2].field_0x41d4 = 0;
  *(uint *)&unaff_EBX[2].field_0x41dc = 0;
  *(uint *)&unaff_EBX[2].field_0x41e8 = 0;
  *(uint *)&unaff_EBX[2].field_0x41ec = 0;
  uVar1 = 0x41200000;
  *(uint *)&unaff_EBX[2].field_0x4258 = 0xf149f2ca;
  *(uint *)&unaff_EBX[2].field_0x4190 = uVar1;
  *(uint *)&unaff_EBX[2].field_0x4240 = 0xf149f2ca;
  *(uint *)&unaff_EBX[2].field_0x44f0 = 0;
  *(uint *)&unaff_EBX[2].field_0x41a0 = *(uint *)&unaff_EBX[2].field_0x419c;
  *(uint *)&unaff_EBX[2].field_0x4198 = *(uint *)&unaff_EBX[2].field_0x4194;
  *(uint *)&unaff_EBX[2].field_0x41c0 = *(uint *)&unaff_EBX[2].field_0x41bc;
  *(uint *)&unaff_EBX[2].field_0x41b8 = *(uint *)&unaff_EBX[2].field_0x41b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(&unaff_EBX->model,(char *)0x5cfb87);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&unaff_EBX->model);
  unaff_EBX->layer_action_index = 0;
  *(uint *)&unaff_EBX[2].field_0x41d8 = 0;
  *(uint *)&unaff_EBX[2].field_0x41f8 = 0;
  *(uint *)&unaff_EBX[2].field_0x41fc = 0;
  *(uint *)&unaff_EBX[2].field_0x4228 = 0;
  *(uint *)&unaff_EBX[2].field_0x4224 = *(uint *)&unaff_EBX[2].field_0x4228;
  *(uint *)&unaff_EBX[2].field_0x4220 = *(uint *)&unaff_EBX[2].field_0x4224;
  *(uint *)&unaff_EBX[2].field_0x422c = 0xffffffff;
  *(uint *)&unaff_EBX[2].field_0x41e0 = 0;
  *(uint *)&unaff_EBX[2].field_0x4200 = 0;
  *(uint *)&unaff_EBX[2].field_0x4204 = 0;
  *(uint *)&unaff_EBX[2].field_0x41e4 = 0;
  *(uint *)&unaff_EBX[2].field_0x4230 = 0;
  *(uint *)&unaff_EBX[2].field_0x4238 = 0;
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
  *(uint *)&unaff_EBX[2].field_0x42e8 = 0;
  *(uint *)&unaff_EBX[2].field_0x4298 = 0;
  *(uint *)&unaff_EBX[2].field_0x42cc = 0;
  *(uint *)&unaff_EBX[2].field_0x44f0 = 0;
  pcVar3 = &(unaff_EBX->model).field_0x2260;
  pcVar5 = &unaff_EBX[2].field_0x42f0;
  do {
    cVar2 = *pcVar3;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  pacVar4 = (unaff_EBX->cloth_list).filenames;
  pcVar3 = &unaff_EBX[2].field_0x43f0;
  do {
    cVar2 = (*pacVar4)[0];
    *pcVar3 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = (*pacVar4)[1];
    pacVar4 = (char (*) [40])(*pacVar4 + 2);
    pcVar3[1] = cVar2;
    pcVar3 = pcVar3 + 2;
  } while (cVar2 != '\0');
  *(uint *)&(unaff_EBX->base).field_0xfc = 1;
  *(uint *)&unaff_EBX->field_0x10a28 = 0;
  if ((uint *)&unaff_EBX->field_0x10a0c != &stack0x00000140) {
    *(uint *)&unaff_EBX->field_0x10a0c = 0xbde76c8b;
    *(uint *)&unaff_EBX->field_0x10a10 = 0x3ec3126f;
    *(uint *)&unaff_EBX->field_0x10a14 = 0x3e79db23;
  }
  if ((uint *)&unaff_EBX->field_0x10a18 != &stack0x00000158) {
    *(uint *)&unaff_EBX->field_0x10a18 = 0x3de76c8b;
    *(uint *)&unaff_EBX->field_0x10a1c = 0x3ec3126f;
    *(uint *)&unaff_EBX->field_0x10a20 = 0x3e79db23;
  }
  if ((uint *)&unaff_EBX->field_0x10a3c == &stack0x0000014c) {
    return;
  }
  *(uint *)&unaff_EBX->field_0x10a3c = 0x3f000000;
  *(uint *)&unaff_EBX->field_0x10a40 = 0;
  *(uint *)&unaff_EBX->field_0x10a44 = 0;
  return;
}
