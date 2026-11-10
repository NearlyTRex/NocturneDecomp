// Name: core_stranger.cpp_FUN_005628b4
// Address: 005628b4
// Address Range: [[005628b4, 00562b84]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005628b4(void)

#include "nocturne.h"

void core_stranger_cpp_FUN_005628b4(void)

{
  uint uVar1;
  char cVar2;
  char *in_EAX;
  CCharacter *unaff_EBX;
  char *pcVar3;
  
  cVar2 = (char)in_EAX + *in_EAX;
  pcVar3 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *(uint *)&unaff_EBX[2].field_0x4238 = 0;
  *(uint *)&unaff_EBX[2].field_0x41d4 = 0;
  *(uint *)&unaff_EBX[2].field_0x41dc = 0;
  *(uint *)&unaff_EBX[2].field_0x41e8 = 0;
  *(uint *)&unaff_EBX[2].field_0x41ec = 0;
  uVar1 = 0x41200000;
  *(uint *)&unaff_EBX[2].field_0x41f0 = 0;
  *(uint *)&unaff_EBX[2].field_0x4190 = uVar1;
  *(uint *)&unaff_EBX[2].field_0x425c = 0xf149f2ca;
  *(uint *)&unaff_EBX[2].field_0x4244 = 0xf149f2ca;
  *(uint *)&unaff_EBX[2].field_0x41a0 = *(uint *)&unaff_EBX[2].field_0x419c;
  *(uint *)&unaff_EBX[2].field_0x4198 = *(uint *)&unaff_EBX[2].field_0x4194;
  *(uint *)&unaff_EBX[2].field_0x41c0 = *(uint *)&unaff_EBX[2].field_0x41bc;
  *(uint *)&unaff_EBX[2].field_0x41b8 = *(uint *)&unaff_EBX[2].field_0x41b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&unaff_EBX->model,"p?stranger.dfm" + 2);
  unaff_EBX->layer_action_index = 0;
  *(uint *)&unaff_EBX[2].field_0x41d8 = 0;
  *(uint *)&unaff_EBX[2].field_0x41fc = 0;
  *(uint *)&unaff_EBX[2].field_0x4200 = 0;
  *(uint *)&unaff_EBX[2].field_0x422c = 0;
  *(uint *)&unaff_EBX[2].field_0x4228 = *(uint *)&unaff_EBX[2].field_0x422c;
  *(uint *)&unaff_EBX[2].field_0x4224 = *(uint *)&unaff_EBX[2].field_0x4228;
  *(uint *)&unaff_EBX[2].field_0x4230 = 0xffffffff;
  *(uint *)&unaff_EBX[2].field_0x41e0 = 0;
  *(uint *)&unaff_EBX[2].field_0x4204 = 0;
  *(uint *)&unaff_EBX[2].field_0x4208 = 0;
  *(uint *)&unaff_EBX[2].field_0x41e4 = 0;
  *(uint *)&unaff_EBX[2].field_0x4234 = 0;
  *(uint *)&unaff_EBX[2].field_0x423c = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)
             (*(int *)(&unaff_EBX[2].field_0x34cc + *(int *)&unaff_EBX[2].field_0x3324 * 4) + 0x2b4)
             ,(char *)0x5eb1ca);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xb,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xc,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xc,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,10,0,"draw_gasMask2Stand",0);
  core_cloth_cpp_CClothList_add_FUN_005b15c0(&unaff_EBX->cloth_list,"strcoat.cth");
  *(uint *)&unaff_EBX[2].field_0x4418 = 0;
  return;
}
