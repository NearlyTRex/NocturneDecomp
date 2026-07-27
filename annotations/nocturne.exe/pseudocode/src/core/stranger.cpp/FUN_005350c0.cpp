// Name: core_stranger.cpp_FUN_005350c0
// Address: 005350c0
// Address Range: [[005350c0, 0053544d]]
// Convention: unknown
// Signature: int core_stranger_cpp_FUN_005350c0(undefined4 param_1)

#include "nocturne.h"

int core_stranger_cpp_FUN_005350c0(uint param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = core_hero_cpp_FUN_004b46d0(param_1);
  iVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar2 + 0x1fb40);
  iVar2 = iVar3 + -0x1fb40;
  *(byte ***)(iVar3 + -0x1f9f4) = &PTR_core_stranger_cpp_FUN_00535450_005a2744;
  *(uint *)(iVar3 + -0x104) = 0;
  *(uint *)(iVar3 + -0x100) = 0;
  *(uint *)(iVar3 + -0xfc) = 0;
  *(uint *)(iVar3 + -0xf8) = 0xbf060a92;
  *(uint *)(iVar3 + -0xd8) = 0;
  *(uint *)(iVar3 + -0xe0) = 0;
  *(uint *)(iVar3 + -0xe8) = 0;
  *(uint *)(iVar3 + -0xf0) = 0;
  *(uint *)(iVar3 + -0xdc) = 0;
  *(uint *)(iVar3 + -0xd4) = 0;
  *(uint *)(iVar3 + -0xb8) = 0;
  *(uint *)(iVar3 + -0xc0) = 0;
  *(uint *)(iVar3 + -200) = 0;
  *(uint *)(iVar3 + -0xd0) = 0;
  *(uint *)(iVar3 + -0xbc) = 0;
  *(uint *)(iVar3 + -0xb4) = 0;
  *(uint *)(iVar3 + -0x4c) = 0;
  *(uint *)(iVar3 + -0xb0) = 0;
  *(uint *)(iVar3 + -0xa8) = 0;
  *(uint *)(iVar3 + -0x9c) = 0;
  *(uint *)(iVar3 + -0x98) = 0;
  fVar1 = 10.0f;
  *(uint *)(iVar3 + -0x94) = 0;
  *(float *)(iVar3 + -0xf4) = fVar1;
  *(uint *)(iVar3 + -0x28) = 0xf149f2ca;
  *(uint *)(iVar3 + -0x40) = 0xf149f2ca;
  *(uint *)(iVar3 + -0xe4) = *(uint *)(iVar3 + -0xe8);
  *(uint *)(iVar3 + -0xec) = *(uint *)(iVar3 + -0xf0);
  *(uint *)(iVar3 + -0xc4) = *(uint *)(iVar3 + -200);
  *(uint *)(iVar3 + -0xcc) = *(uint *)(iVar3 + -0xd0);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar3 + -0x1f9f0,"stranger.dfm");
  *(uint *)(iVar3 + -0x1d0bc) = 0;
  *(uint *)(iVar3 + -0xac) = 0;
  *(uint *)(iVar3 + -0x88) = 0;
  *(uint *)(iVar3 + -0x84) = 0;
  *(uint *)(iVar3 + -0x58) = 0;
  *(uint *)(iVar3 + -0x5c) = *(uint *)(iVar3 + -0x58);
  *(uint *)(iVar3 + -0x60) = *(uint *)(iVar3 + -0x5c);
  *(uint *)(iVar3 + -0x54) = 0xffffffff;
  *(uint *)(iVar3 + -0xa4) = 0;
  *(uint *)(iVar3 + -0x80) = 0;
  *(uint *)(iVar3 + -0x7c) = 0;
  *(uint *)(iVar3 + -0xa0) = 0;
  *(uint *)(iVar3 + -0x50) = 0;
  *(uint *)(iVar3 + -0x48) = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (*(int *)(iVar3 + -0x270) + 0x150,"gat.kfm");
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,0xb,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760(iVar2,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760(iVar2,0xc,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,0xc,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760(iVar2,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar2,10,0,"draw_gasMask2Stand",0);
  core_cloth_cpp_CClothList_add_FUN_00438390(iVar3 + -0x1d0b4,"strcoat.cth");
  *(uint *)(iVar3 + 0x194) = 0;
  return iVar2;
}
