// Name: core_fire.cpp_CFireEffect_process_FUN_004a1760
// Address: 004a1760
// Address Range: [[004a1760, 004a1ac4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_process_FUN_004a1760(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_process_FUN_004a1760(CFireEffect *this_ptr)

{
  bool bVar1;
  CSmokeParticle *this_ptr_00;
  CSpark *this_ptr_01;
  CFirefly *pCVar2;
  CMuzzleFlash *this_ptr_02;
  CStake *this_ptr_03;
  CGlassParticle *this_ptr_04;
  CBulletTrail *this_ptr_05;
  CFireball *this_ptr_06;
  CRock *this_ptr_07;
  CLeaf *this_ptr_08;
  CBulletHole *this_ptr_09;
  CExplosion *this_ptr_10;
  CToss *this_ptr_11;
  CCrater *this_ptr_12;
  CGunFlame *this_ptr_13;
  CLightningBolt *this_ptr_14;
  CTrail *this_ptr_15;
  CShell *this_ptr_16;
  CPopcorn *this_ptr_17;
  CRainDrop *this_ptr_18;
  CRing *this_ptr_19;
  CDemonActorType *this_ptr_20;
  int iVar3;
  
  this_ptr_00 = (CSmokeParticle *)&DAT_01c74ea0;
  _DAT_01cf5088 = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_0049c620();
  do {
    if (this_ptr_00->active != 0) {
      core_fire_cpp_CSmokeParticle_process_FUN_00496e00(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c8aea0);
  this_ptr_01 = g_SparkPool;
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->process)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CSpark *)&DAT_01cba2b4);
  pCVar2 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->process)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&DAT_01cbb9b8);
  this_ptr_02 = (CMuzzleFlash *)&DAT_01cbb9bc;
  do {
    if (this_ptr_02->frames_remaining != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_0049a450(this_ptr_02);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CMuzzleFlash *)&DAT_01cbc0ec);
  iVar3 = 0;
  if (0 < _DAT_01c8eea8) {
    this_ptr_03 = g_StakePool;
    do {
      if ((this_ptr_03->physics_box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_00497e80(this_ptr_03);
      }
      iVar3 = iVar3 + 1;
      this_ptr_03 = this_ptr_03 + 1;
    } while (iVar3 < _DAT_01c8eea8);
  }
  this_ptr_04 = CGlassParticle_ARRAY_01cbc0f0;
  do {
    if (0.0 < (this_ptr_04->base).lifetime_remaining) {
      (*((this_ptr_04->base).vtable)->process)(&this_ptr_04->base);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGlassParticle *)&DAT_01cefd10);
  this_ptr_05 = (CBulletTrail *)0x1cefd14;
  do {
    if (this_ptr_05->frames_remaining != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_0049ad00(this_ptr_05);
    }
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CBulletTrail *)&DAT_01cefe7c);
  this_ptr_06 = g_FireballPool;
  do {
    if (0.0 < (this_ptr_06->base).lifetime_remaining) {
      (*((this_ptr_06->base).vtable)->process)(&this_ptr_06->base);
    }
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CFireball *)&DAT_01cf2780);
  this_ptr_07 = g_RockPool;
  do {
    if (0.0 < (this_ptr_07->base).lifetime_remaining) {
      (*((this_ptr_07->base).vtable)->process)(&this_ptr_07->base);
    }
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CRock *)&DAT_01cf3b84);
  this_ptr_08 = CLeaf_ARRAY_01cf3b88;
  do {
    if (0.0 < (this_ptr_08->base).lifetime_remaining) {
      (*((this_ptr_08->base).vtable)->process)(&this_ptr_08->base);
    }
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CLeaf *)&DAT_01cf5088);
  pCVar2 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->process)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&DAT_01cbb9b8);
  iVar3 = 0;
  if (0 < _DAT_01c8aea0) {
    this_ptr_09 = (CBulletHole *)&DAT_01c8aea8;
    do {
      core_fire_cpp_CBulletHole_process_FUN_00497540(this_ptr_09);
      iVar3 = iVar3 + 1;
      this_ptr_09 = this_ptr_09 + 1;
    } while (iVar3 < _DAT_01c8aea0);
  }
  this_ptr_10 = (CExplosion *)0x1cf6090;
  do {
    core_fire_cpp_CExplosion_process_FUN_0049c890(this_ptr_10);
    this_ptr_10 = this_ptr_10 + 1;
  } while (this_ptr_10 != (CExplosion *)&DAT_01cf61d0);
  this_ptr_11 = g_TossPool;
  do {
    core_fire_cpp_CToss_process_FUN_0049d090(this_ptr_11);
    this_ptr_11 = this_ptr_11 + 1;
  } while (this_ptr_11 != (CToss *)&DAT_01cfaff4);
  this_ptr_12 = (CCrater *)0x1cfaff8;
  do {
    core_fire_cpp_CCrater_process_FUN_0049d8b0(this_ptr_12);
    this_ptr_12 = this_ptr_12 + 1;
  } while (this_ptr_12 != (CCrater *)&DAT_01cfb8b8);
  this_ptr_13 = (CGunFlame *)0x1cfb8bc;
  bVar1 = false;
  do {
    if (ABS(this_ptr_13->lifetime) != 0.0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_0049de60();
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_0049e390(this_ptr_13);
    }
    this_ptr_13 = this_ptr_13 + 1;
  } while (this_ptr_13 != (CGunFlame *)&DAT_01d00eac);
  this_ptr_14 = (CLightningBolt *)0x1d00eb0;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_0049f4e0(this_ptr_14);
    this_ptr_14 = this_ptr_14 + 1;
  } while (this_ptr_14 != (CLightningBolt *)&DAT_01d01ab0);
  this_ptr_15 = (CTrail *)0x1d01ab4;
  do {
    core_fire_cpp_CTrail_process_FUN_004a0630(this_ptr_15);
    this_ptr_15 = this_ptr_15 + 1;
  } while (this_ptr_15 != (CTrail *)&DAT_01d028c4);
  this_ptr_16 = g_ShellPool;
  do {
    (*((this_ptr_16->base).vtable)->process)(&this_ptr_16->base);
    this_ptr_16 = this_ptr_16 + 1;
  } while (this_ptr_16 != (CShell *)&DAT_01d03b88);
  this_ptr_17 = g_PopcornPool;
  do {
    if (0.0 < (this_ptr_17->base).lifetime_remaining) {
      (*((this_ptr_17->base).vtable)->process)(&this_ptr_17->base);
    }
    this_ptr_17 = this_ptr_17 + 1;
  } while (&this_ptr_17->base != (CParticle *)&DAT_01d07b8c);
  this_ptr_18 = g_RainDropPool;
  do {
    if (0.0 < (this_ptr_18->base).lifetime_remaining) {
      (*((this_ptr_18->base).vtable)->process)(&this_ptr_18->base);
    }
    this_ptr_18 = this_ptr_18 + 1;
  } while (&this_ptr_18->base != (CParticle *)&DAT_01d0bb90);
  this_ptr_19 = (CRing *)0x1d0bb94;
  do {
    core_fire_cpp_CRing_process_FUN_0049fdf0(this_ptr_19);
    this_ptr_19 = this_ptr_19 + 1;
  } while (this_ptr_19 != (CRing *)&DAT_01d0ce7c);
  this_ptr_20 = (CDemonActorType *)0x1d0ce80;
  do {
    core_fire_cpp_CStormEffect_process_FUN_004a0570((CStormEffect *)this_ptr_20);
    this_ptr_20 = (CDemonActorType *)(this_ptr_20->class_name + 0xc);
  } while (this_ptr_20 != &g_CFirestaffClassInfo);
  return;
}
