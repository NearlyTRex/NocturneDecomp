// Name: core_stranger.cpp_CStranger_ctor_FUN_005350c0
// Address: 005350c0
// Address Range: [[005350c0, 0053544d]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005350c0(CStranger *this_ptr)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005350c0(CStranger *this_ptr)

{
  CStranger *this_ptr_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  CHero *pCVar5;
  CKeyFramedModelInstance *pCVar6;
  
  pCVar5 = core_hero_cpp_FUN_004b46d0(&this_ptr->base);
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)&pCVar5[1].base.base.process_disabled);
  this_ptr_00 = (CStranger *)(pCVar6[-0x156].part_visibility_flags + 0x1a);
  pCVar6[-0x155].part_visibility_flags[0xe] = (int)&g_CStrangerVTable;
  pCVar6[-0xffffffff00000001].model_name[0] = '\0';
  pCVar6[-0xffffffff00000001].model_name[1] = '\0';
  pCVar6[-0xffffffff00000001].model_name[2] = '\0';
  pCVar6[-0xffffffff00000001].model_name[3] = '\0';
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
  pCVar6[-0xffffffff00000001].model_name[0x2c] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x2d] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x2e] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x2f] = '\0';
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
  pCVar6[-0xffffffff00000001].model_name[0x4c] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x4d] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x4e] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x4f] = '\0';
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
  pCVar6[-0xffffffff00000001].model_name[0x50] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x51] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x52] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x53] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xb8] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xb9] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xba] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xbb] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x54] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x55] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x56] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x57] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x5c] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x5d] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x5e] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x5f] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x68] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x69] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x6a] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x6b] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x6c] = '\0';
  fVar4 = 10.0f;
  pCVar6[-0xffffffff00000001].model_name[0x6d] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x6e] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x6f] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x70] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x71] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x72] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x73] = '\0';
  *(float *)(pCVar6[-1].model_name + 0x10) = fVar4;
  pCVar6[-0xffffffff00000001].model_name[0xdc] = -0x36;
  pCVar6[-0xffffffff00000001].model_name[0xdd] = -0xe;
  pCVar6[-0xffffffff00000001].model_name[0xde] = 'I';
  pCVar6[-0xffffffff00000001].model_name[0xdf] = -0xf;
  pCVar6[-0xffffffff00000001].model_name[0xc4] = -0x36;
  pCVar6[-0xffffffff00000001].model_name[0xc5] = -0xe;
  pCVar6[-0xffffffff00000001].model_name[0xc6] = 'I';
  pCVar6[-0xffffffff00000001].model_name[199] = -0xf;
  uVar1 = *(uint *)(pCVar6[-1].model_name + 0x14);
  uVar2 = *(uint *)(pCVar6[-1].model_name + 0x3c);
  uVar3 = *(uint *)(pCVar6[-1].model_name + 0x34);
  *(uint *)(pCVar6[-1].model_name + 0x20) = *(uint *)(pCVar6[-1].model_name + 0x1c);
  *(uint *)(pCVar6[-1].model_name + 0x18) = uVar1;
  *(uint *)(pCVar6[-1].model_name + 0x40) = uVar2;
  *(uint *)(pCVar6[-1].model_name + 0x38) = uVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(pCVar6[-0x155].part_visibility_flags + 0xf),
             "stranger.dfm");
  pCVar6[-0xffffffff0000013a].model_name[0xe4] = '\0';
  pCVar6[-0xffffffff0000013a].model_name[0xe5] = '\0';
  pCVar6[-0xffffffff0000013a].model_name[0xe6] = '\0';
  pCVar6[-0xffffffff0000013a].model_name[0xe7] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x58] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x59] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x5a] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x5b] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x7c] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x7d] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x7e] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x7f] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x80] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x81] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x82] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x83] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xac] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xad] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xae] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xaf] = '\0';
  *(uint *)(pCVar6[-1].model_name + 0xa8) = *(uint *)(pCVar6[-1].model_name + 0xac);
  *(uint *)(pCVar6[-1].model_name + 0xa4) = *(uint *)(pCVar6[-1].model_name + 0xa8);
  pCVar6[-0xffffffff00000001].model_name[0xb0] = -1;
  pCVar6[-0xffffffff00000001].model_name[0xb1] = -1;
  pCVar6[-0xffffffff00000001].model_name[0xb2] = -1;
  pCVar6[-0xffffffff00000001].model_name[0xb3] = -1;
  pCVar6[-0xffffffff00000001].model_name[0x60] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x61] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x62] = '\0';
  pCVar6[-0xffffffff00000001].model_name[99] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x84] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x85] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x86] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x87] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x88] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x89] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x8a] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x8b] = '\0';
  pCVar6[-0xffffffff00000001].model_name[100] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x65] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x66] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0x67] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xb4] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xb5] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xb6] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xb7] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xbc] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xbd] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xbe] = '\0';
  pCVar6[-0xffffffff00000001].model_name[0xbf] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)(*(int *)(pCVar6[-2].model_name + 0x10) + 0x150),
             "gat.kfm");
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,0xb,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,0xc,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,0xc,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,10,0,"draw_gasMask2Stand",0);
  core_cloth_cpp_CClothList_add_FUN_00438390
            ((CClothList *)(pCVar6[-0x13a].model_name + 0xec),"strcoat.cth");
  pCVar6[1].part_visibility_flags[6] = 0;
  return this_ptr_00;
}
