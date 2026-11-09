// Name: core_doc.cpp_CDoc_ctor_FUN_004500d0
// Address: 004500d0
// Address Range: [[004500d0, 0045019e]]
// Convention: unknown
// Signature: CDoc * core_doc_cpp_CDoc_ctor_FUN_004500d0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDoc * core_doc_cpp_CDoc_ctor_FUN_004500d0(CDoc *this_ptr)

{
  byte *this_ptr_00;
  char cVar1;
  uint uVar2;
  int iVar3;
  CBoxActor *pCVar4;
  char *pcVar5;
  char *pcVar6;
  uint uStack00000104;
  
  iVar3 = core_hero_cpp_FUN_004ce240(this_ptr);
  pCVar4 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30((CBoxActor *)(iVar3 + 0x259b4));
  this_ptr_00 = &pCVar4[-0x4d].field_0x110;
  *(byte **)&pCVar4[-0x4d].field_0x3c0 = &g_CDocVTable;
  *(uint *)&pCVar4[-1].field_0x5cc = 0;
  *(uint *)&pCVar4[-1].field_0x460 = 0;
  *(uint *)&pCVar4[-1].field_0x464 = 0;
  *(uint *)&pCVar4[-1].field_0x468 = 0;
  *(uint *)&pCVar4[-1].field_0x46c = 0xbf060a92;
  *(uint *)&pCVar4[-1].field_0x48c = 0;
  *(uint *)&pCVar4[-1].field_0x484 = 0;
  *(uint *)&pCVar4[-1].field_0x47c = 0;
  *(uint *)&pCVar4[-1].field_0x474 = 0;
  *(uint *)&pCVar4[-1].field_0x488 = 0;
  *(uint *)&pCVar4[-1].field_0x490 = 0;
  *(uint *)&pCVar4[-1].field_0x4ac = 0;
  *(uint *)&pCVar4[-1].field_0x4a4 = 0;
  *(uint *)&pCVar4[-1].field_0x49c = 0;
  *(uint *)&pCVar4[-1].field_0x494 = 0;
  *(uint *)&pCVar4[-1].field_0x4a8 = 0;
  *(uint *)&pCVar4[-1].field_0x4b0 = 0;
  *(uint *)&pCVar4[-1].field_0x514 = 0;
  *(uint *)&pCVar4[-1].field_0x4b4 = 0;
  *(uint *)&pCVar4[-1].field_0x4bc = 0;
  *(uint *)&pCVar4[-1].field_0x4c8 = 0;
  *(uint *)&pCVar4[-1].field_0x4cc = 0;
  uVar2 = 0x41200000;
  *(uint *)&pCVar4[-1].field_0x538 = 0xf149f2ca;
  *(uint *)&pCVar4[-1].field_0x470 = uVar2;
  *(uint *)&pCVar4[-1].field_0x520 = 0xf149f2ca;
  *(uint *)&pCVar4[-1].field_0x7d0 = 0;
  *(uint *)&pCVar4[-1].field_0x480 = *(uint *)&pCVar4[-1].field_0x47c;
  *(uint *)&pCVar4[-1].field_0x478 = *(uint *)&pCVar4[-1].field_0x474;
  *(uint *)&pCVar4[-1].field_0x4a0 = *(uint *)&pCVar4[-1].field_0x49c;
  *(uint *)&pCVar4[-1].field_0x498 = *(uint *)&pCVar4[-1].field_0x494;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar4[-0x4d].field_0x3c4,(char *)0x5cfb87);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&pCVar4[-0x4d].field_0x3c4);
  *(uint *)&pCVar4[-0x48].field_0x6f0 = 0;
  *(uint *)&pCVar4[-1].field_0x4b8 = 0;
  *(uint *)&pCVar4[-1].field_0x4d8 = 0;
  *(uint *)&pCVar4[-1].field_0x4dc = 0;
  *(uint *)&pCVar4[-1].field_0x508 = 0;
  *(uint *)&pCVar4[-1].field_0x504 = *(uint *)&pCVar4[-1].field_0x508;
  *(uint *)&pCVar4[-1].field_0x500 = *(uint *)&pCVar4[-1].field_0x504;
  *(uint *)&pCVar4[-1].field_0x50c = 0xffffffff;
  *(uint *)&pCVar4[-1].field_0x4c0 = 0;
  *(uint *)&pCVar4[-1].field_0x4e0 = 0;
  *(uint *)&pCVar4[-1].field_0x4e4 = 0;
  *(uint *)&pCVar4[-1].field_0x4c4 = 0;
  *(uint *)&pCVar4[-1].field_0x510 = 0;
  *(uint *)&pCVar4[-1].field_0x518 = 0;
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,1,"draw_L_standholster",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,1,2,"draw_L_holsterAim",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,5,"draw_R_standScabbard",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,5,6,"draw_R_scabbardMelee",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0xd,6,"draw_R_meleeAttack1",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0xd,6,"draw_R_meleeAttack2",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0xd,6,"draw_R_meleeAttack4",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0xd,6,"draw_LR_meleeAttack3",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0xd,6,"draw_R_crossAttack1",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,7,7,"draw_holdCrate",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0,4,"draw_stand2TossAim",1);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,4,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,0x10,"draw_holsters2aimFlashlight",0);
  core_charactr_cpp_FUN_0042a330((CCharacter *)this_ptr_00,0x12,2,"draw_L_reload",1);
  uStack00000104 = 0x450430;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            ((CClothList *)&pCVar4[-0x48].field_0x6f8,"LAZ86CLOTH.cth");
  *(uint *)&pCVar4[-1].field_0x5c8 = 0;
  *(uint *)&pCVar4[-1].field_0x578 = 0;
  *(uint *)&pCVar4[-1].field_0x5ac = 0;
  *(uint *)&pCVar4[-1].field_0x7d0 = 0;
  pcVar5 = &pCVar4[-0x49].field_0x6d4;
  pcVar6 = &pCVar4[-1].field_0x5d0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = &pCVar4[-0x48].field_0x6fc;
  pcVar6 = &pCVar4[-1].field_0x6d0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4[-0x4d].field_0x20c = 1;
  *(uint *)&pCVar4[-0x2b].field_0x110 = 0;
  if (&pCVar4[-0x2b].field_0xf4 != &stack0x00000110) {
    *(uint *)&pCVar4[-0x2b].field_0xf4 = 0xbde76c8b;
    *(uint *)&pCVar4[-0x2b].field_0xf8 = 0x3ec3126f;
    *(uint *)&pCVar4[-0x2b].field_0xfc = 0x3e79db23;
  }
  if (&pCVar4[-0x2b].field_0x100 != &stack0x00000128) {
    *(uint *)&pCVar4[-0x2b].field_0x100 = 0x3de76c8b;
    *(uint *)&pCVar4[-0x2b].field_0x104 = 0x3ec3126f;
    *(uint *)&pCVar4[-0x2b].field_0x108 = 0x3e79db23;
  }
  if (&pCVar4[-0x2b].field_0x124 == &stack0x0000011c) {
    return (CDoc *)this_ptr_00;
  }
  *(uint *)&pCVar4[-0x2b].field_0x124 = 0x3f000000;
  *(uint *)&pCVar4[-0x2b].field_0x128 = 0;
  *(uint *)&pCVar4[-0x2b].field_0x12c = 0;
  return (CDoc *)this_ptr_00;
}
