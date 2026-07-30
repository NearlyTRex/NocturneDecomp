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
  byte *puVar2;
  CMuzzleFlash *this_ptr_01;
  CStake *this_ptr_02;
  CBulletTrail *this_ptr_03;
  CExplosion *this_ptr_04;
  CToss *this_ptr_05;
  CCrater *this_ptr_06;
  CGunFlame *this_ptr_07;
  CLightningBolt *this_ptr_08;
  CTrail *this_ptr_09;
  int iVar3;
  CBulletHole *this_ptr_10;
  
  this_ptr_00 = (CSmokeParticle *)&DAT_01c0a140;
  _DAT_01c5c700 = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_00486d40();
  do {
    if (this_ptr_00->active != 0) {
      core_fire_cpp_CSmokeParticle_process_FUN_00482820(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c20140);
  puVar2 = &DAT_01c49d54;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x4c;
  } while (puVar2 != &DAT_01c4e954);
  this_ptr_01 = (CMuzzleFlash *)&DAT_01c4e958;
  do {
    if (this_ptr_01->frames_remaining != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_00484ed0(this_ptr_01);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CMuzzleFlash *)&DAT_01c4f088);
  iVar3 = 0;
  if (0 < _DAT_01c23d48) {
    this_ptr_02 = (CStake *)&DAT_01c23d50;
    do {
      if ((this_ptr_02->physics_box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_004836b0(this_ptr_02);
      }
      iVar3 = iVar3 + 1;
      this_ptr_02 = this_ptr_02 + 1;
    } while (iVar3 < _DAT_01c23d48);
  }
  puVar2 = &DAT_01c4f08c;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x9c;
  } while (puVar2 != (byte *)0x1c58c8c);
  this_ptr_03 = (CBulletTrail *)0x1c58c90;
  do {
    if (this_ptr_03->frames_remaining != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_004856a0(this_ptr_03);
    }
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CBulletTrail *)&DAT_01c58df8);
  puVar2 = &DAT_01c58dfc;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x9c;
  } while (puVar2 != &DAT_01c5b4fc);
  puVar2 = &DAT_01c5b500;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x48;
  } while (puVar2 != &DAT_01c5c700);
  iVar3 = 0;
  if (0 < _DAT_01c20140) {
    this_ptr_10 = (CBulletHole *)&DAT_01c20148;
    do {
      core_fire_cpp_CBulletHole_process_FUN_00482e90(this_ptr_10);
      iVar3 = iVar3 + 1;
      this_ptr_10 = this_ptr_10 + 1;
    } while (iVar3 < _DAT_01c20140);
  }
  this_ptr_04 = (CExplosion *)0x1c5d708;
  do {
    core_fire_cpp_CExplosion_process_FUN_00486f90(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CExplosion *)&DAT_01c5d820);
  this_ptr_05 = (CToss *)&DAT_01c5d824;
  do {
    core_fire_cpp_CToss_process_FUN_004874d0(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CToss *)&DAT_01c625f4);
  this_ptr_06 = (CCrater *)&DAT_01c625f8;
  do {
    core_fire_cpp_CCrater_process_FUN_00487a20(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CCrater *)&DAT_01c62eb8);
  this_ptr_07 = (CGunFlame *)&DAT_01c62ebc;
  bVar1 = false;
  do {
    if (ABS(this_ptr_07->lifetime) != 0.0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_00487fd0();
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_00488430(this_ptr_07);
    }
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CGunFlame *)&DAT_01c6750c);
  this_ptr_08 = (CLightningBolt *)0x1c67510;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_00488bb0(this_ptr_08);
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CLightningBolt *)&DAT_01c676c8);
  this_ptr_09 = (CTrail *)0x1c676cc;
  do {
    core_fire_cpp_CTrail_process_FUN_00489310(this_ptr_09);
    this_ptr_09 = this_ptr_09 + 1;
  } while (this_ptr_09 != (CTrail *)&DAT_01c684dc);
  puVar2 = &DAT_01c684e0;
  do {
    (**(code **)(*(int *)(puVar2 + 0x34) + 4))(puVar2);
    puVar2 = puVar2 + 0x58;
  } while (puVar2 != &DAT_01c69610);
  puVar2 = &DAT_01c69614;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x38;
  } while (puVar2 != &DAT_01c6ce14);
  puVar2 = &DAT_01c6ce18;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x38;
  } while ((CDemonActorType *)puVar2 != &g_CFlameActorType_01c70618);
  return;
}
