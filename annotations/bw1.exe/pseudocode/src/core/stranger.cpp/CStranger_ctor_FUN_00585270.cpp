// Name: core_stranger.cpp_CStranger_ctor_FUN_00585270
// Address: 00585270
// Address Range: [[00585270, 00585661]]
// Convention: unknown
// Signature: CStranger * core_stranger_cpp_CStranger_ctor_FUN_00585270(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStranger * core_stranger_cpp_CStranger_ctor_FUN_00585270(CStranger *this_ptr)

{
  CStranger *this_ptr_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CHero *pCVar4;
  CKeyFramedModelInstance *pCVar5;
  uint uStack000001a8;
  
  pCVar4 = core_hero_cpp_CHero_ctor_FUN_004ea830(&this_ptr->base);
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                     ((CKeyFramedModelInstance *)&pCVar4[1].base.base.collision_disabled);
  this_ptr_00 = (CStranger *)(pCVar5[-0x15a].model_name + 0x74);
  *(CHero_full_vtable **)(pCVar5[-0x159].model_name + 0x4c) = &g_CStrangerVTable;
  pCVar5[-0xffffffff00000001].model_name[4] = '\0';
  pCVar5[-0xffffffff00000001].model_name[5] = '\0';
  pCVar5[-0xffffffff00000001].model_name[6] = '\0';
  pCVar5[-0xffffffff00000001].model_name[7] = '\0';
  pCVar5[-0xffffffff00000001].model_name[8] = '\0';
  pCVar5[-0xffffffff00000001].model_name[9] = '\0';
  pCVar5[-0xffffffff00000001].model_name[10] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xb] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xc] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xd] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xe] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xf] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x10] = -0x6e;
  pCVar5[-0xffffffff00000001].model_name[0x11] = '\n';
  pCVar5[-0xffffffff00000001].model_name[0x12] = '\x06';
  pCVar5[-0xffffffff00000001].model_name[0x13] = -0x41;
  pCVar5[-0xffffffff00000001].model_name[0x30] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x31] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x32] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x33] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x28] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x29] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2b] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x20] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x21] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x22] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x23] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x18] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x19] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x1a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x1b] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x34] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x35] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x36] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x37] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x50] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x51] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x52] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x53] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x48] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x49] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4b] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x40] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x41] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x42] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x43] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x38] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x39] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x3a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x3b] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x54] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x55] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x56] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x57] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xb8] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xb9] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xba] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xbb] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x58] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x59] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5b] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x60] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x61] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x62] = '\0';
  pCVar5[-0xffffffff00000001].model_name[99] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x68] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x69] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x6a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x6b] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x6c] = '\0';
  uVar1 = 0x41200000;
  pCVar5[-0xffffffff00000001].model_name[0x6d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x6e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x6f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x70] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x71] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x72] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x73] = '\0';
  *(uint *)(pCVar5[-1].model_name + 0x14) = uVar1;
  pCVar5[-0xffffffff00000001].model_name[0xdc] = -0x36;
  pCVar5[-0xffffffff00000001].model_name[0xdd] = -0xe;
  pCVar5[-0xffffffff00000001].model_name[0xde] = 'I';
  pCVar5[-0xffffffff00000001].model_name[0xdf] = -0xf;
  pCVar5[-0xffffffff00000001].model_name[0xc4] = -0x36;
  pCVar5[-0xffffffff00000001].model_name[0xc5] = -0xe;
  pCVar5[-0xffffffff00000001].model_name[0xc6] = 'I';
  pCVar5[-0xffffffff00000001].model_name[199] = -0xf;
  uVar1 = *(uint *)(pCVar5[-1].model_name + 0x18);
  uVar2 = *(uint *)(pCVar5[-1].model_name + 0x40);
  uVar3 = *(uint *)(pCVar5[-1].model_name + 0x38);
  *(uint *)(pCVar5[-1].model_name + 0x24) = *(uint *)(pCVar5[-1].model_name + 0x20);
  *(uint *)(pCVar5[-1].model_name + 0x1c) = uVar1;
  *(uint *)(pCVar5[-1].model_name + 0x44) = uVar2;
  *(uint *)(pCVar5[-1].model_name + 0x3c) = uVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar5[-0x159].model_name + 0x50),
             "p?stranger.dfm" + 2);
  pCVar5[-0xffffffff0000013c].model_name[0x84] = '\0';
  pCVar5[-0xffffffff0000013c].model_name[0x85] = '\0';
  pCVar5[-0xffffffff0000013c].model_name[0x86] = '\0';
  pCVar5[-0xffffffff0000013c].model_name[0x87] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x7c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x7d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x7e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x7f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x80] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x81] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x82] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x83] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xac] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xad] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xae] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xaf] = '\0';
  *(uint *)(pCVar5[-1].model_name + 0xa8) = *(uint *)(pCVar5[-1].model_name + 0xac);
  *(uint *)(pCVar5[-1].model_name + 0xa4) = *(uint *)(pCVar5[-1].model_name + 0xa8);
  pCVar5[-0xffffffff00000001].model_name[0xb0] = -1;
  pCVar5[-0xffffffff00000001].model_name[0xb1] = -1;
  pCVar5[-0xffffffff00000001].model_name[0xb2] = -1;
  pCVar5[-0xffffffff00000001].model_name[0xb3] = -1;
  pCVar5[-0xffffffff00000001].model_name[100] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x65] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x66] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x67] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x84] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x85] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x86] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x87] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x88] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x89] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x8a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x8b] = '\0';
  pCVar5[-1].part_visibility_flags[0xb] = 0;
  pCVar5[-0xffffffff00000001].model_name[0xb4] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xb5] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xb6] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xb7] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xbc] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xbd] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xbe] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xbf] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar5[-2].part_visibility_flags[0x1b] + 0x158),
             (char *)0x5f63ce);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xc,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xd,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xd,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,10,0,"draw_gasMask2Stand",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,0xe,"draw_coatPocket2aimRifle",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xf,0xe,"draw_cockRifle",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,1,0x10,"draw_holsters2aimFlashlight",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,3,0xb,"draw_coatPocket2Goggles",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320
            ((CCharacter *)this_ptr_00,0xb,0,"draw_goggles2Stand",0);
  uStack000001a8 = 0x585650;
  core_cloth_cpp_CClothList_add_FUN_00441de0
            ((CClothList *)(pCVar5[-0x13c].model_name + 0x8c),"strcoat.cth");
  pCVar5[1].part_visibility_flags[6] = 0;
  return this_ptr_00;
}
