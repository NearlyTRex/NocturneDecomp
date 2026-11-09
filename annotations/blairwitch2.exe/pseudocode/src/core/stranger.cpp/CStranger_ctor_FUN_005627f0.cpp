// Name: core_stranger.cpp_CStranger_ctor_FUN_005627f0
// Address: 005627f0
// Address Range: [[005627f0, 005628b0]]
// Convention: unknown
// Signature: CStranger * core_stranger_cpp_CStranger_ctor_FUN_005627f0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStranger * core_stranger_cpp_CStranger_ctor_FUN_005627f0(CStranger *this_ptr)

{
  byte *this_ptr_00;
  uint uVar1;
  int iVar2;
  CKeyFramedModelInstance *pCVar3;
  uint uStack00000140;
  
  iVar2 = core_hero_cpp_FUN_004ce240(this_ptr);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(iVar2 + 0x25744));
  this_ptr_00 = &pCVar3[-0x194].field_0x6c;
  *(byte **)&pCVar3[-0x192].field_0x24 = &g_CStrangerVTable;
  *(uint *)&pCVar3[-1].field_0x78 = 0;
  *(uint *)&pCVar3[-1].field_0x7c = 0;
  *(uint *)&pCVar3[-1].field_0x80 = 0;
  *(uint *)&pCVar3[-1].field_0x84 = 0xbf060a92;
  *(uint *)&pCVar3[-1].field_0xa4 = 0;
  *(uint *)&pCVar3[-1].field_0x9c = 0;
  *(uint *)&pCVar3[-1].field_0x94 = 0;
  *(uint *)&pCVar3[-1].field_0x8c = 0;
  *(uint *)&pCVar3[-1].field_0xa0 = 0;
  *(uint *)&pCVar3[-1].field_0xa8 = 0;
  *(uint *)&pCVar3[-1].field_0xc4 = 0;
  *(uint *)&pCVar3[-1].field_0xbc = 0;
  *(uint *)&pCVar3[-1].field_0xb4 = 0;
  *(uint *)&pCVar3[-1].field_0xac = 0;
  *(uint *)&pCVar3[-1].field_0xc0 = 0;
  *(uint *)&pCVar3[-1].field_0xc8 = 0;
  *(uint *)&pCVar3[-1].field_0x130 = 0;
  *(uint *)&pCVar3[-1].field_0xcc = 0;
  *(uint *)&pCVar3[-1].field_0xd4 = 0;
  *(uint *)&pCVar3[-1].field_0xe0 = 0;
  *(uint *)&pCVar3[-1].field_0xe4 = 0;
  uVar1 = 0x41200000;
  *(uint *)&pCVar3[-1].field_0xe8 = 0;
  *(uint *)&pCVar3[-1].field_0x88 = uVar1;
  *(uint *)&pCVar3[-1].field_0x154 = 0xf149f2ca;
  *(uint *)&pCVar3[-1].field_0x13c = 0xf149f2ca;
  *(uint *)&pCVar3[-1].field_0x98 = *(uint *)&pCVar3[-1].field_0x94;
  *(uint *)&pCVar3[-1].field_0x90 = *(uint *)&pCVar3[-1].field_0x8c;
  *(uint *)&pCVar3[-1].field_0xb8 = *(uint *)&pCVar3[-1].field_0xb4;
  *(uint *)&pCVar3[-1].field_0xb0 = *(uint *)&pCVar3[-1].field_0xac;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3[-0x192].field_0x28,"p?stranger.dfm" + 2);
  *(uint *)&pCVar3[-0x176].field_0xe8 = 0;
  *(uint *)&pCVar3[-1].field_0xd0 = 0;
  *(uint *)&pCVar3[-1].field_0xf4 = 0;
  *(uint *)&pCVar3[-1].field_0xf8 = 0;
  *(uint *)&pCVar3[-1].field_0x124 = 0;
  *(uint *)&pCVar3[-1].field_0x120 = *(uint *)&pCVar3[-1].field_0x124;
  *(uint *)&pCVar3[-1].field_0x11c = *(uint *)&pCVar3[-1].field_0x120;
  *(uint *)&pCVar3[-1].field_0x128 = 0xffffffff;
  *(uint *)&pCVar3[-1].field_0xd8 = 0;
  *(uint *)&pCVar3[-1].field_0xfc = 0;
  *(uint *)&pCVar3[-1].field_0x100 = 0;
  *(uint *)&pCVar3[-1].field_0xdc = 0;
  *(uint *)&pCVar3[-1].field_0x12c = 0;
  *(uint *)&pCVar3[-1].field_0x134 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)
             (*(int *)((int)pCVar3 + *(int *)&pCVar3[-0xb].field_0xf4 * 4 + -0xdb8) + 0x2b4),
             (char *)0x5eb1ca);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0xb,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0xc,8,"draw_spearStab",1);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,0xc,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,9,9,"draw_holdCrate",0);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,10,0,"draw_gasMask2Stand",0);
  uStack00000140 = 0x562b73;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            ((CClothList *)&pCVar3[-0x176].field_0xf0,"strcoat.cth");
  *(uint *)&pCVar3[1].field_0x18 = 0;
  return (CStranger *)this_ptr_00;
}
