// Name: core_fire.cpp_CFireEffect_process_FUN_004b4dd0
// Address: 004b4dd0
// Address Range: [[004b4dd0, 004b50fd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_process_FUN_004b4dd0(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_process_FUN_004b4dd0(CFireEffect *this_ptr)

{
  bool bVar1;
  int *piVar2;
  CSpark *this_ptr_00;
  CFirefly *pCVar3;
  CMuzzleFlash *this_ptr_01;
  CStake *this_ptr_02;
  CGlassParticle *this_ptr_03;
  CBulletTrail *this_ptr_04;
  CFireball *this_ptr_05;
  CRock *this_ptr_06;
  CLeaf *this_ptr_07;
  CExplosion *this_ptr_08;
  CToss *this_ptr_09;
  CCrater *this_ptr_10;
  CGunFlame *this_ptr_11;
  CLightningBolt *this_ptr_12;
  CTrail *this_ptr_13;
  CShell *this_ptr_14;
  CPopcorn *this_ptr_15;
  CRainDrop *pCVar4;
  int iVar5;
  byte *puVar6;
  
  piVar2 = (int *)&DAT_01c58aa0;
  _DAT_01caf068 = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_004b15d0();
  do {
    if (*piVar2 != 0) {
      core_fire_cpp_FUN_004abf50(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c6eaa0);
  this_ptr_00 = g_SparkPool;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->process)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSpark *)&DAT_01c9dab4);
  pCVar3 = CFirefly_ARRAY_01c9dab8;
  do {
    if (0.0 < (pCVar3->base).lifetime_remaining) {
      (*((pCVar3->base).vtable)->process)(&pCVar3->base);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CFirefly *)&DAT_01c9f1b8);
  this_ptr_01 = (CMuzzleFlash *)&DAT_01c9f1bc;
  do {
    if (this_ptr_01->frames_remaining != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_004af400(this_ptr_01);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CMuzzleFlash *)&DAT_01c9f8ec);
  iVar5 = 0;
  if (0 < _DAT_01c726a8) {
    this_ptr_02 = g_StakePool;
    do {
      if ((this_ptr_02->physics_box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_004acf20(this_ptr_02);
      }
      iVar5 = iVar5 + 1;
      this_ptr_02 = this_ptr_02 + 1;
    } while (iVar5 < _DAT_01c726a8);
  }
  this_ptr_03 = g_GlassParticlePool;
  do {
    if (0.0 < (this_ptr_03->base).lifetime_remaining) {
      (*((this_ptr_03->base).vtable)->process)(&this_ptr_03->base);
    }
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CGlassParticle *)0x1ca9cf0);
  this_ptr_04 = (CBulletTrail *)0x1ca9cf4;
  do {
    if (this_ptr_04->frames_remaining != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_004afcd0(this_ptr_04);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CBulletTrail *)&DAT_01ca9e5c);
  this_ptr_05 = g_FireballPool;
  do {
    if (0.0 < (this_ptr_05->base).lifetime_remaining) {
      (*((this_ptr_05->base).vtable)->process)(&this_ptr_05->base);
    }
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CFireball *)&DAT_01cac760);
  this_ptr_06 = g_RockPool;
  do {
    if (0.0 < (this_ptr_06->base).lifetime_remaining) {
      (*((this_ptr_06->base).vtable)->process)(&this_ptr_06->base);
    }
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CRock *)&DAT_01cadb64);
  this_ptr_07 = CLeaf_ARRAY_01cadb68;
  do {
    if (0.0 < (this_ptr_07->base).lifetime_remaining) {
      (*((this_ptr_07->base).vtable)->process)(&this_ptr_07->base);
    }
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CLeaf *)&DAT_01caf068);
  pCVar3 = CFirefly_ARRAY_01c9dab8;
  do {
    if (0.0 < (pCVar3->base).lifetime_remaining) {
      (*((pCVar3->base).vtable)->process)(&pCVar3->base);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CFirefly *)&DAT_01c9f1b8);
  iVar5 = 0;
  if (0 < _DAT_01c6eaa0) {
    puVar6 = &DAT_01c6eaa8;
    do {
      core_fire_cpp_FUN_004ac690(puVar6);
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0x3c;
    } while (iVar5 < _DAT_01c6eaa0);
  }
  this_ptr_08 = (CExplosion *)0x1cb0070;
  do {
    core_fire_cpp_CExplosion_process_FUN_004b1820(this_ptr_08);
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CExplosion *)&DAT_01cb0188);
  this_ptr_09 = g_TossPool;
  do {
    core_fire_cpp_CToss_process_FUN_004b1d90(this_ptr_09);
    this_ptr_09 = this_ptr_09 + 1;
  } while (this_ptr_09 != (CToss *)&DAT_01cb4f5c);
  this_ptr_10 = (CCrater *)0x1cb4f60;
  do {
    core_fire_cpp_CCrater_process_FUN_004b22d0(this_ptr_10);
    this_ptr_10 = this_ptr_10 + 1;
  } while (this_ptr_10 != (CCrater *)&DAT_01cb5820);
  this_ptr_11 = (CGunFlame *)&DAT_01cb5824;
  bVar1 = false;
  do {
    if (ABS(this_ptr_11->lifetime) != 0.0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_004b2880();
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_004b2d40(this_ptr_11);
    }
    this_ptr_11 = this_ptr_11 + 1;
  } while (this_ptr_11 != (CGunFlame *)&DAT_01cb9e74);
  this_ptr_12 = (CLightningBolt *)0x1cb9e78;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_004b3530(this_ptr_12);
    this_ptr_12 = this_ptr_12 + 1;
  } while (this_ptr_12 != (CLightningBolt *)&DAT_01cba030);
  this_ptr_13 = (CTrail *)0x1cba034;
  do {
    core_fire_cpp_CTrail_process_FUN_004b3cd0(this_ptr_13);
    this_ptr_13 = this_ptr_13 + 1;
  } while (this_ptr_13 != (CTrail *)&DAT_01cbae44);
  this_ptr_14 = g_ShellPool;
  do {
    (*((this_ptr_14->base).vtable)->process)(&this_ptr_14->base);
    this_ptr_14 = this_ptr_14 + 1;
  } while (this_ptr_14 != (CShell *)&DAT_01cbc108);
  this_ptr_15 = g_PopcornPool;
  do {
    if (0.0 < (this_ptr_15->base).lifetime_remaining) {
      (*((this_ptr_15->base).vtable)->process)(&this_ptr_15->base);
    }
    this_ptr_15 = this_ptr_15 + 1;
  } while (&this_ptr_15->base != (CParticle *)&DAT_01cc010c);
  pCVar4 = g_RainDropPool;
  do {
    if (0.0 < *(float *)(((CDemonActorType *)pCVar4)->class_name + 0x24)) {
      (**(code **)(*(int *)((CDemonActorType *)((int)pCVar4 + 0x3c))->class_name + 4))(pCVar4);
    }
    pCVar4 = (CRainDrop *)(((CDemonActorType *)((int)pCVar4 + 0x3c))->class_name + 4);
  } while (pCVar4 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  return;
}
