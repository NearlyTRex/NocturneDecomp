// Name: core_stranger.cpp_CStranger_ctor_FUN_005bb120
// Address: 005bb120
// Address Range: [[005bb120, 005bb4ad]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005bb120(CStranger *this_ptr)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005bb120(CStranger *this_ptr)

{
  CStranger *this_ptr_00;
  uint uVar1;
  uint uVar2;
  float fVar3;
  CStranger *pCVar5;
  CStranger_ptr_130264 pCVar6;
  
  pCVar5 = (CStranger *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar5->model);
  this_ptr_00 = ADJ(pCVar6);
  ADJ(pCVar6)->base.base.base.vtable._ub = &g_CStrangerVTable;
  ADJ(pCVar6)->guns_drawn = 0;
  pCVar6[-0xffffffff00000001].model_name[4] = '\0';
  pCVar6[-0xffffffff00000001].model_name[5] = '\0';
  pCVar6[-0xffffffff00000001].model_name[6] = '\0';
  pCVar6[-0xffffffff00000001].model_name[7] = '\0';
  pCVar6[-0xffffffff00000001].model_name[8] = '\0';
  pCVar6[-0xffffffff00000001].model_name[9] = '\0';
  pCVar6[-0xffffffff00000001].model_name[10] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xb] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xc] = -0x6e;
  pCVar6[-0xffffffff00000001].model_name[0xd] = '\n';
  pCVar6[-0xffffffff00000001].model_name[0xe] = '\x06';
  pCVar6[-0xffffffff00000001].model_name[0xf] = -0x41;
  ADJ(pCVar6)->unk2 = (CDemonActor *)0x0;
  pCVar6[-0xffffffff00000001].model_name[0x24] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x25] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x26] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x27] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x1c] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x1d] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x1e] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x1f] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x14] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x15] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x16] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x17] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x28] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x29] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x2a] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x2b] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x30] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x31] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x32] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x33] = '\0';
  ADJ(pCVar6)->unk4 = (CDemonActor *)0x0;
  pCVar6[-0xffffffff00000001].model_name[0x44] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x45] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x46] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x47] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x3c] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x3d] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x3e] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x3f] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x34] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x35] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x36] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x37] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x48] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x49] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x4a] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x4b] = '\0';
  ADJ(pCVar6)->unk5 = 0;
  pCVar6[-0xffffffff00000001].animation_state[0x54] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x55] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x56] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x57] = '\0';
  ADJ(pCVar6)->ladder_to_descend = (CDemonActor *)0x0;
  ADJ(pCVar6)->unk6 = 0;
  ADJ(pCVar6)->melee_attack_index = 0;
  ADJ(pCVar6)->action_timer = 0.0;
  fVar3 = 10.0f;
  pCVar6[-0xffffffff00000001].animation_state[0xc] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0xd] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0xe] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0xf] = '\0';
  *(float *)(ADJ(pCVar6)->unk1 + 0xc) = fVar3;
  pCVar6[-0xffffffff00000001].animation_state[0x78] = -0x36;
  pCVar6[-0xffffffff00000001].animation_state[0x79] = -0xe;
  pCVar6[-0xffffffff00000001].animation_state[0x7a] = 'I';
  pCVar6[-0xffffffff00000001].animation_state[0x7b] = -0xf;
  pCVar6[-0xffffffff00000001].animation_state[0x60] = -0x36;
  pCVar6[-0xffffffff00000001].animation_state[0x61] = -0xe;
  pCVar6[-0xffffffff00000001].animation_state[0x62] = 'I';
  pCVar6[-0xffffffff00000001].animation_state[99] = -0xf;
  uVar1 = *(uint *)(ADJ(pCVar6)->unk3 + 0xc);
  uVar2 = *(uint *)(ADJ(pCVar6)->unk3 + 4);
  *(uint *)(ADJ(pCVar6)->unk1 + 0x1c) = *(uint *)(ADJ(pCVar6)->unk1 + 0x18);
  *(uint *)(ADJ(pCVar6)->unk1 + 0x14) = *(uint *)(ADJ(pCVar6)->unk1 + 0x10);
  *(uint *)(ADJ(pCVar6)->unk3 + 0x10) = uVar1;
  *(uint *)(ADJ(pCVar6)->unk3 + 8) = uVar2;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar6)->base.base.model,"stranger.dfm");
  ADJ(pCVar6)->base.base.layer_action_index = 0;
  ADJ(pCVar6)->weapon = (CDemonActor *)0x0;
  pCVar6[-0xffffffff00000001].animation_state[0x18] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x19] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x1a] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x1b] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x1c] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x1d] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x1e] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x1f] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x48] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x49] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x4a] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x4b] = '\0';
  *(uint *)(ADJ(pCVar6)->unk8 + 0x38) = *(uint *)(ADJ(pCVar6)->unk8 + 0x3c);
  *(uint *)(ADJ(pCVar6)->unk8 + 0x34) = *(uint *)(ADJ(pCVar6)->unk8 + 0x38);
  pCVar6[-0xffffffff00000001].animation_state[0x4c] = -1;
  pCVar6[-0xffffffff00000001].animation_state[0x4d] = -1;
  pCVar6[-0xffffffff00000001].animation_state[0x4e] = -1;
  pCVar6[-0xffffffff00000001].animation_state[0x4f] = -1;
  ADJ(pCVar6)->unk7 = 0;
  pCVar6[-0xffffffff00000001].animation_state[0x20] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x21] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x22] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x23] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x24] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x25] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x26] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x27] = '\0';
  ADJ(pCVar6)->action_pending = 0;
  pCVar6[-0xffffffff00000001].animation_state[0x50] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x51] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x52] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x53] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x58] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x59] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x5a] = '\0';
  pCVar6[-0xffffffff00000001].animation_state[0x5b] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(ADJ(pCVar6)->base.inventory.selected_weapon)->model,"gat.kfm");
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0xb,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0xc,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,0xc,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0
            ((CCharacter *)this_ptr_00,10,0,"draw_gasMask2Stand",0);
  core_cloth_cpp_CClothList_add_FUN_0043c0f0
            (&ADJ(pCVar6)->base.base.cloth_list,"strcoat.cth");
  ADJ(pCVar6)->unk15 = 0;
  return this_ptr_00;
}
