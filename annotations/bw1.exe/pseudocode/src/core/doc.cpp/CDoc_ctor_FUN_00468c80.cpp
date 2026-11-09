// Name: core_doc.cpp_CDoc_ctor_FUN_00468c80
// Address: 00468c80
// Address Range: [[00468c80, 00469052]]
// Convention: unknown
// Signature: CDoc * core_doc_cpp_CDoc_ctor_FUN_00468c80(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDoc * core_doc_cpp_CDoc_ctor_FUN_00468c80(CDoc *this_ptr)

{
  uint uVar1;
  CDoc *this_ptr_00;
  uint uStack000001a8;
  
  this_ptr_00 = (CDoc *)core_hero_cpp_FUN_004ea830((CHero *)this_ptr);
  *(byte ***)&this_ptr_00->field_0x154 = &g_CDocVTable;
  *(uint *)&this_ptr_00->field_0x1ffac = 0;
  *(uint *)&this_ptr_00->field_0x1ffb0 = 0;
  *(uint *)&this_ptr_00->field_0x1ffb4 = 0;
  *(uint *)&this_ptr_00->field_0x1ffb8 = 0xbf060a92;
  *(uint *)&this_ptr_00->field_0x1ffd8 = 0;
  *(uint *)&this_ptr_00->field_0x1ffd0 = 0;
  *(uint *)&this_ptr_00->field_0x1ffc8 = 0;
  *(uint *)&this_ptr_00->field_0x1ffcc = *(uint *)&this_ptr_00->field_0x1ffc8;
  *(uint *)&this_ptr_00->field_0x1ffc0 = 0;
  *(uint *)&this_ptr_00->field_0x1ffd4 = 0;
  *(uint *)&this_ptr_00->field_0x1ffdc = 0;
  *(uint *)&this_ptr_00->field_0x1fff8 = 0;
  *(uint *)&this_ptr_00->field_0x1fff0 = 0;
  *(uint *)&this_ptr_00->field_0x1ffe8 = 0;
  *(uint *)&this_ptr_00->field_0x1ffc4 = *(uint *)&this_ptr_00->field_0x1ffc0;
  *(uint *)&this_ptr_00->field_0x1ffe0 = 0;
  *(uint *)&this_ptr_00->field_0x1ffec = *(uint *)&this_ptr_00->field_0x1ffe8;
  *(uint *)&this_ptr_00->field_0x1fff4 = 0;
  *(uint *)&this_ptr_00->field_0x1fffc = 0;
  *(uint *)&this_ptr_00->field_0x20060 = 0;
  *(uint *)&this_ptr_00->field_0x20000 = 0;
  *(uint *)&this_ptr_00->field_0x20008 = 0;
  *(uint *)&this_ptr_00->field_0x20010 = 0;
  *(uint *)&this_ptr_00->field_0x20014 = 0;
  uVar1 = 0x41200000;
  *(uint *)&this_ptr_00->field_0x20084 = 0xf149f2ca;
  *(uint *)&this_ptr_00->field_0x1ffe4 = *(uint *)&this_ptr_00->field_0x1ffe0;
  *(uint *)&this_ptr_00->field_0x1ffbc = uVar1;
  *(uint *)&this_ptr_00->field_0x2006c = 0xf149f2ca;
  core_skeleton_cpp_FUN_00569f50(&this_ptr_00->field_0x158,0x5d98a4);
  *(uint *)&this_ptr_00->field_0x2c98 = 0;
  *(uint *)&this_ptr_00->field_0x20004 = 0;
  *(uint *)&this_ptr_00->field_0x20024 = 0;
  *(uint *)&this_ptr_00->field_0x20028 = 0;
  *(uint *)&this_ptr_00->field_0x20054 = 0;
  *(uint *)&this_ptr_00->field_0x20050 = *(uint *)&this_ptr_00->field_0x20054;
  *(uint *)&this_ptr_00->field_0x2004c = *(uint *)&this_ptr_00->field_0x20050;
  *(uint *)&this_ptr_00->field_0x20058 = 0xffffffff;
  *(uint *)&this_ptr_00->field_0x2000c = 0;
  *(uint *)&this_ptr_00->field_0x2002c = 0;
  *(uint *)&this_ptr_00->field_0x20030 = 0;
  *(uint *)&this_ptr_00->field_0x1ff5c = 0;
  *(uint *)&this_ptr_00->field_0x2005c = 0;
  *(uint *)&this_ptr_00->field_0x20064 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(*(int *)&this_ptr_00->field_0x1fe20 + 0x158),
             "liteluger.kfm");
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0xc,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0xd,8,"draw_spearStab",1);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,0xd,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,9,9,"draw_holdCrate",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,10,0,"draw_gasMask2Stand",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,3,0xe,"draw_coatPocket2aimRifle",0);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0xf,0xe,"draw_cockRifle",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,1,0x10,"draw_holsters2aimFlashlight",0);
  core_charactr_cpp_FUN_00434320
            ((CCharacter *)this_ptr_00,3,0xb,"draw_coatPocket2Goggles",0);
  core_charactr_cpp_FUN_00434320((CCharacter *)this_ptr_00,0xb,0,"draw_goggles2Stand",0);
  uStack000001a8 = 0x469041;
  core_cloth_cpp_FUN_00441de0((CClothList *)&this_ptr_00->field_0x2ca0,"doc-coat_bw.cth");
  *(uint *)&this_ptr_00->field_0x200e0 = 0;
  return this_ptr_00;
}
