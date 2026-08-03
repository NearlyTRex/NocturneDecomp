// Name: core_fire.cpp_CFireEffect_process_FUN_0048a390
// Address: 0048a390
// Address Range: [[0048a390, 0048a64d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_process_FUN_0048a390(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_process_FUN_0048a390(CFireEffect *this_ptr)

{
  bool bVar1;
  CSmokeParticle *this_ptr_00;
  CSpark *this_ptr_01;
  CMuzzleFlash *this_ptr_02;
  CStake *this_ptr_03;
  CGlassParticle *this_ptr_04;
  CBulletTrail *this_ptr_05;
  CFireball *this_ptr_06;
  CRock *this_ptr_07;
  CExplosion *this_ptr_08;
  CToss *this_ptr_09;
  CCrater *this_ptr_10;
  CGunFlame *this_ptr_11;
  CLightningBolt *this_ptr_12;
  CTrail *this_ptr_13;
  CShell *this_ptr_14;
  CPopcorn *this_ptr_15;
  CRainDrop *this_ptr_16;
  int iVar2;
  CBulletHole *this_ptr_17;
  
  this_ptr_00 = g_CSmokeParticle_ARRAY_01c0a140;
  _DAT_01c5c700 = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_00486d40();
  do {
    if (this_ptr_00->active != 0) {
      core_fire_cpp_CSmokeParticle_process_FUN_00482820(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c20140);
  this_ptr_01 = g_CSpark_ARRAY_01c49d54;
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->process)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CSpark *)&DAT_01c4e954);
  this_ptr_02 = g_CMuzzleFlash_ARRAY_01c4e958;
  do {
    if (this_ptr_02->frames_remaining != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_00484ed0(this_ptr_02);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CMuzzleFlash *)&DAT_01c4f088);
  iVar2 = 0;
  if (0 < _DAT_01c23d48) {
    this_ptr_03 = g_CStake_ARRAY_01c23d50;
    do {
      if ((this_ptr_03->physics_box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_004836b0(this_ptr_03);
      }
      iVar2 = iVar2 + 1;
      this_ptr_03 = this_ptr_03 + 1;
    } while (iVar2 < _DAT_01c23d48);
  }
  this_ptr_04 = g_CGlassParticle_ARRAY_01c4f08c;
  do {
    if (0.0 < (this_ptr_04->base).lifetime_remaining) {
      (*((this_ptr_04->base).vtable)->process)(&this_ptr_04->base);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGlassParticle *)0x1c58c8c);
  this_ptr_05 = g_CBulletTrail_ARRAY_01c58c90;
  do {
    if (this_ptr_05->frames_remaining != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_004856a0(this_ptr_05);
    }
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CBulletTrail *)&DAT_01c58df8);
  this_ptr_06 = g_CFireball_ARRAY_01c58dfc;
  do {
    if (0.0 < (this_ptr_06->base).lifetime_remaining) {
      (*((this_ptr_06->base).vtable)->process)(&this_ptr_06->base);
    }
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CFireball *)&DAT_01c5b4fc);
  this_ptr_07 = g_CRock_ARRAY_01c5b500;
  do {
    if (0.0 < (this_ptr_07->base).lifetime_remaining) {
      (*((this_ptr_07->base).vtable)->process)(&this_ptr_07->base);
    }
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CRock *)&DAT_01c5c700);
  iVar2 = 0;
  if (0 < _DAT_01c20140) {
    this_ptr_17 = g_CBulletHole_ARRAY_01c20148;
    do {
      core_fire_cpp_CBulletHole_process_FUN_00482e90(this_ptr_17);
      iVar2 = iVar2 + 1;
      this_ptr_17 = this_ptr_17 + 1;
    } while (iVar2 < _DAT_01c20140);
  }
  this_ptr_08 = g_CExplosion_ARRAY_01c5d708;
  do {
    core_fire_cpp_CExplosion_process_FUN_00486f90(this_ptr_08);
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CExplosion *)&DAT_01c5d820);
  this_ptr_09 = g_CToss_ARRAY_01c5d824;
  do {
    core_fire_cpp_CToss_process_FUN_004874d0(this_ptr_09);
    this_ptr_09 = this_ptr_09 + 1;
  } while (this_ptr_09 != (CToss *)&DAT_01c625f4);
  this_ptr_10 = g_CCrater_ARRAY_01c625f8;
  do {
    core_fire_cpp_CCrater_process_FUN_00487a20(this_ptr_10);
    this_ptr_10 = this_ptr_10 + 1;
  } while (this_ptr_10 != (CCrater *)&DAT_01c62eb8);
  this_ptr_11 = g_CGunFlame_ARRAY_01c62ebc;
  bVar1 = false;
  do {
    if (ABS(this_ptr_11->lifetime) != 0.0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_00487fd0();
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_00488430(this_ptr_11);
    }
    this_ptr_11 = this_ptr_11 + 1;
  } while (this_ptr_11 != (CGunFlame *)&DAT_01c6750c);
  this_ptr_12 = g_CLightningBolt_ARRAY_01c67510;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_00488bb0(this_ptr_12);
    this_ptr_12 = this_ptr_12 + 1;
  } while (this_ptr_12 != (CLightningBolt *)&DAT_01c676c8);
  this_ptr_13 = g_CTrail_ARRAY_01c676cc;
  do {
    core_fire_cpp_CTrail_process_FUN_00489310(this_ptr_13);
    this_ptr_13 = this_ptr_13 + 1;
  } while (this_ptr_13 != (CTrail *)&DAT_01c684dc);
  this_ptr_14 = g_CShell_ARRAY_01c684e0;
  do {
    (*((this_ptr_14->base).vtable)->process)(&this_ptr_14->base);
    this_ptr_14 = this_ptr_14 + 1;
  } while (this_ptr_14 != (CShell *)&DAT_01c69610);
  this_ptr_15 = g_CPopcorn_ARRAY_01c69614;
  do {
    if (0.0 < (this_ptr_15->base).lifetime_remaining) {
      (*((this_ptr_15->base).vtable)->process)(&this_ptr_15->base);
    }
    this_ptr_15 = this_ptr_15 + 1;
  } while (&this_ptr_15->base != (CParticle *)&DAT_01c6ce14);
  this_ptr_16 = g_CRainDrop_ARRAY_01c6ce18;
  do {
    if (0.0 < (this_ptr_16->base).lifetime_remaining) {
      (*((this_ptr_16->base).vtable)->process)(&this_ptr_16->base);
    }
    this_ptr_16 = this_ptr_16 + 1;
  } while (this_ptr_16 != g_CRainDrop_ARRAY_01c6ce18 + sizeof(g_CRainDrop_ARRAY_01c6ce18) / sizeof(g_CRainDrop_ARRAY_01c6ce18[0]));
  return;
}
