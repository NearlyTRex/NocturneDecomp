// Name: core_stranger.cpp_CPrye_ctor_FUN_00517f80
// Address: 00517f80
// Address Range: [[00517f80, 0051842c]]
// Convention: unknown
// Signature: CPrye * core_stranger_cpp_CPrye_ctor_FUN_00517f80(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPrye * core_stranger_cpp_CPrye_ctor_FUN_00517f80(CPrye *this_ptr)

{
  uint uVar1;
  CPrye *this_ptr_00;
  
  this_ptr_00 = (CPrye *)core_hero_cpp_CHero_ctor_FUN_004d24b0((CHero *)this_ptr);
  *(CHero_full_vtable **)&this_ptr_00->field_0x154 = &g_CPryeVTable;
  core_prye_cpp_CPrye_createDefaultWeapon_FUN_00518430(this_ptr_00);
  *(uint *)&this_ptr_00->field_0x20bcc = 0;
  *(uint *)&this_ptr_00->field_0x20bd0 = 0;
  *(uint *)&this_ptr_00->field_0x20bd4 = 0;
  *(uint *)&this_ptr_00->field_0x20bd8 = 0xbf060a92;
  *(uint *)&this_ptr_00->field_0x20bf8 = 0;
  *(uint *)&this_ptr_00->field_0x20bf0 = 0;
  *(uint *)&this_ptr_00->field_0x20be8 = 0;
  *(uint *)&this_ptr_00->field_0x20be0 = 0;
  *(uint *)&this_ptr_00->field_0x20bf4 = 0;
  *(uint *)&this_ptr_00->field_0x20bfc = 0;
  *(uint *)&this_ptr_00->field_0x20c18 = 0;
  *(uint *)&this_ptr_00->field_0x20c10 = 0;
  *(uint *)&this_ptr_00->field_0x20c08 = 0;
  *(uint *)&this_ptr_00->field_0x20c00 = 0;
  *(uint *)&this_ptr_00->field_0x20c14 = 0;
  *(uint *)&this_ptr_00->field_0x20c1c = 0;
  *(uint *)&this_ptr_00->field_0x20c80 = 0;
  *(uint *)&this_ptr_00->field_0x20c20 = 0;
  *(uint *)&this_ptr_00->field_0x20c28 = 0;
  *(uint *)&this_ptr_00->field_0x20c30 = 0;
  *(uint *)&this_ptr_00->field_0x20c34 = 0;
  uVar1 = 0x41200000;
  *(uint *)&this_ptr_00->field_0x20ca4 = 0xf149f2ca;
  *(uint *)&this_ptr_00->field_0x20c8c = 0xf149f2ca;
  *(uint *)&this_ptr_00->field_0x20bdc = uVar1;
  *(uint *)&this_ptr_00->field_0x20bec = *(uint *)&this_ptr_00->field_0x20be8;
  *(uint *)&this_ptr_00->field_0x20be4 = *(uint *)&this_ptr_00->field_0x20be0;
  *(uint *)&this_ptr_00->field_0x20c0c = *(uint *)&this_ptr_00->field_0x20c08;
  *(uint *)&this_ptr_00->field_0x20c04 = *(uint *)&this_ptr_00->field_0x20c00;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x158,(char *)0x5cca9f);
  *(uint *)&this_ptr_00->field_0x2f00 = 0;
  *(uint *)&this_ptr_00->field_0x20c24 = 0;
  *(uint *)&this_ptr_00->field_0x20c44 = 0;
  *(uint *)&this_ptr_00->field_0x20c48 = 0;
  *(uint *)&this_ptr_00->field_0x20c74 = 0;
  *(uint *)&this_ptr_00->field_0x20c70 = *(uint *)&this_ptr_00->field_0x20c74;
  *(uint *)&this_ptr_00->field_0x20c6c = *(uint *)&this_ptr_00->field_0x20c70;
  *(uint *)&this_ptr_00->field_0x20c78 = 0xffffffff;
  *(uint *)&this_ptr_00->field_0x20c2c = 0;
  *(uint *)&this_ptr_00->field_0x20c4c = 0;
  *(uint *)&this_ptr_00->field_0x20c50 = 0;
  *(uint *)&this_ptr_00->field_0x20b64 = 0;
  *(uint *)&this_ptr_00->field_0x20c7c = 0;
  *(uint *)&this_ptr_00->field_0x20c84 = 0;
  *(uint *)&this_ptr_00->field_0x20b60 = 0;
  *(uint *)&this_ptr_00->field_0x27c0 = 1;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0xc,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0,8,"draw_meleeStand",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0xd,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0xd,8,(char *)0x5ccbc6,1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0xd,8,(char *)0x5ccbcd,1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0xd,8,(char *)0x5ccbd4,1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0xd,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,10,0,"draw_gasMask2Stand",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,3,0xe,"draw_coatPocket2aimRifle",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0xf,0xe,"draw_cockRifle",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,1,0x10,"draw_holsters2aimFlashlight",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,3,0xb,"draw_coatPocket2Goggles",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0xb,0,"draw_goggles2Stand",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,2,2,"draw_firePistol",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,2,2,"draw_firePistol",-1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,8,8,"draw_fireStaffAttack",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,8,8,"draw_lightningStaffAttack",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0,0x11,"draw_stand2vile",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0,0x12,"draw_healStick",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0x11,0x11,"draw_vileThrow",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_004337e0
            ((CCharacter *)this_ptr_00,0x12,0x12,"heal_shake",1);
  core_cloth_cpp_CClothList_add_FUN_0043fa40
            ((CClothList *)&this_ptr_00->field_0x2f08,(char *)0x5ccd24);
  *(uint *)&this_ptr_00->field_0x20d00 = 0;
  return this_ptr_00;
}
