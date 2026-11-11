// Name: core_fire.cpp_FUN_004a1760
// Address: 004a1760
// Address Range: [[004a1760, 004a1ac4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a1760(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a1760(void)

{
  bool bVar1;
  int *piVar2;
  CSpark *this_ptr;
  CFirefly *pCVar3;
  CMuzzleFlash *this_ptr_00;
  CStake *this_ptr_01;
  CGlassParticle *this_ptr_02;
  CBulletTrail *this_ptr_03;
  CFireball *this_ptr_04;
  CRock *this_ptr_05;
  CLeaf *this_ptr_06;
  byte *puVar4;
  CExplosion *this_ptr_07;
  CToss *pCVar5;
  CCrater *this_ptr_08;
  CGunFlame *this_ptr_09;
  CLightningBolt *this_ptr_10;
  CTrail *this_ptr_11;
  CShell *this_ptr_12;
  CPopcorn *this_ptr_13;
  CRainDrop *this_ptr_14;
  CRing *this_ptr_15;
  CDemonActorType *pCVar6;
  int iVar7;
  
  piVar2 = (int *)&DAT_01c74ea0;
  _DAT_01cf5088 = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_0049c620();
  do {
    if (*piVar2 != 0) {
      core_fire_cpp_FUN_00496e00(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c8aea0);
  this_ptr = g_SparkPool;
  do {
    if (0.0 < (this_ptr->base).lifetime_remaining) {
      (*((this_ptr->base).vtable)->process)(&this_ptr->base);
    }
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSpark *)&DAT_01cba2b4);
  pCVar3 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < (pCVar3->base).lifetime_remaining) {
      (*((pCVar3->base).vtable)->process)(&pCVar3->base);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CFirefly *)&DAT_01cbb9b8);
  this_ptr_00 = (CMuzzleFlash *)&DAT_01cbb9bc;
  do {
    if (this_ptr_00->frames_remaining != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_0049a450(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CMuzzleFlash *)&DAT_01cbc0ec);
  iVar7 = 0;
  if (0 < _DAT_01c8eea8) {
    this_ptr_01 = g_StakePool;
    do {
      if ((this_ptr_01->physics_box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_00497e80(this_ptr_01);
      }
      iVar7 = iVar7 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar7 < _DAT_01c8eea8);
  }
  this_ptr_02 = CGlassParticle_ARRAY_01cbc0f0;
  do {
    if (0.0 < (this_ptr_02->base).lifetime_remaining) {
      (*((this_ptr_02->base).vtable)->process)(&this_ptr_02->base);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CGlassParticle *)&DAT_01cefd10);
  this_ptr_03 = (CBulletTrail *)0x1cefd14;
  do {
    if (this_ptr_03->frames_remaining != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_0049ad00(this_ptr_03);
    }
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CBulletTrail *)&DAT_01cefe7c);
  this_ptr_04 = g_FireballPool;
  do {
    if (0.0 < (this_ptr_04->base).lifetime_remaining) {
      (*((this_ptr_04->base).vtable)->process)(&this_ptr_04->base);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CFireball *)&DAT_01cf2780);
  this_ptr_05 = g_RockPool;
  do {
    if (0.0 < (this_ptr_05->base).lifetime_remaining) {
      (*((this_ptr_05->base).vtable)->process)(&this_ptr_05->base);
    }
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CRock *)&DAT_01cf3b84);
  this_ptr_06 = CLeaf_ARRAY_01cf3b88;
  do {
    if (0.0 < (this_ptr_06->base).lifetime_remaining) {
      (*((this_ptr_06->base).vtable)->process)(&this_ptr_06->base);
    }
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CLeaf *)&DAT_01cf5088);
  pCVar3 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < (pCVar3->base).lifetime_remaining) {
      (*((pCVar3->base).vtable)->process)(&pCVar3->base);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CFirefly *)&DAT_01cbb9b8);
  iVar7 = 0;
  if (0 < _DAT_01c8aea0) {
    puVar4 = &DAT_01c8aea8;
    do {
      core_fire_cpp_FUN_00497540(puVar4);
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 0x40;
    } while (iVar7 < _DAT_01c8aea0);
  }
  this_ptr_07 = (CExplosion *)0x1cf6090;
  do {
    core_fire_cpp_CExplosion_process_FUN_0049c890(this_ptr_07);
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CExplosion *)&DAT_01cf61d0);
  pCVar5 = g_TossPool;
  do {
    core_fire_cpp_FUN_0049d090(pCVar5);
    pCVar5 = pCVar5 + 1;
  } while (pCVar5 != (CToss *)&DAT_01cfaff4);
  this_ptr_08 = (CCrater *)0x1cfaff8;
  do {
    core_fire_cpp_CCrater_process_FUN_0049d8b0(this_ptr_08);
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CCrater *)&DAT_01cfb8b8);
  this_ptr_09 = (CGunFlame *)0x1cfb8bc;
  bVar1 = false;
  do {
    if (ABS(this_ptr_09->lifetime) != 0.0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_0049de60();
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_0049e390(this_ptr_09);
    }
    this_ptr_09 = this_ptr_09 + 1;
  } while (this_ptr_09 != (CGunFlame *)&DAT_01d00eac);
  this_ptr_10 = (CLightningBolt *)0x1d00eb0;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_0049f4e0(this_ptr_10);
    this_ptr_10 = this_ptr_10 + 1;
  } while (this_ptr_10 != (CLightningBolt *)&DAT_01d01ab0);
  this_ptr_11 = (CTrail *)0x1d01ab4;
  do {
    core_fire_cpp_CTrail_process_FUN_004a0630(this_ptr_11);
    this_ptr_11 = this_ptr_11 + 1;
  } while (this_ptr_11 != (CTrail *)&DAT_01d028c4);
  this_ptr_12 = g_ShellPool;
  do {
    (*((this_ptr_12->base).vtable)->process)(&this_ptr_12->base);
    this_ptr_12 = this_ptr_12 + 1;
  } while (this_ptr_12 != (CShell *)&DAT_01d03b88);
  this_ptr_13 = g_PopcornPool;
  do {
    if (0.0 < (this_ptr_13->base).lifetime_remaining) {
      (*((this_ptr_13->base).vtable)->process)(&this_ptr_13->base);
    }
    this_ptr_13 = this_ptr_13 + 1;
  } while (&this_ptr_13->base != (CParticle *)&DAT_01d07b8c);
  this_ptr_14 = g_RainDropPool;
  do {
    if (0.0 < (this_ptr_14->base).lifetime_remaining) {
      (*((this_ptr_14->base).vtable)->process)(&this_ptr_14->base);
    }
    this_ptr_14 = this_ptr_14 + 1;
  } while (&this_ptr_14->base != (CParticle *)&DAT_01d0bb90);
  this_ptr_15 = (CRing *)0x1d0bb94;
  do {
    core_fire_cpp_CRing_process_FUN_0049fdf0(this_ptr_15);
    this_ptr_15 = this_ptr_15 + 1;
  } while (this_ptr_15 != (CRing *)&DAT_01d0ce7c);
  pCVar6 = (CDemonActorType *)0x1d0ce80;
  do {
    core_fire_cpp_FUN_004a0570(pCVar6);
    pCVar6 = (CDemonActorType *)(pCVar6->class_name + 0xc);
  } while (pCVar6 != &g_CFirestaffClassInfo);
  return;
}
