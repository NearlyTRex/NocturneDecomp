// Name: core_fire.cpp_CFireEffect_process_FUN_004a1760
// Address: 004a1760
// Address Range: [[004a1760, 004a1ac4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_process_FUN_004a1760(CFireEffect *this_ptr)

#include "nocturne.h"

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
  CLightningBolt *pCVar3;
  CTrail *this_ptr_14;
  CShell *this_ptr_15;
  CPopcorn *this_ptr_16;
  CRainDrop *this_ptr_17;
  CStormEffect *this_ptr_18;
  int iVar4;
  
  this_ptr_00 = g_SmokeParticlePool;
  g_LaserBeamActiveCount = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_0049c620();
  do {
    if (this_ptr_00->active != 0) {
      core_fire_cpp_CSmokeParticle_process_FUN_00496e00(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_SmokeParticlePool + sizeof(g_SmokeParticlePool) / sizeof(g_SmokeParticlePool[0]));
  this_ptr_01 = g_SparkPool;
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->process)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]));
  pCVar2 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->process)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&g_MuzzleFlashAllocIndex);
  this_ptr_02 = g_MuzzleFlashPool;
  do {
    if (this_ptr_02->frames_remaining != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_0049a450(this_ptr_02);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != g_MuzzleFlashPool + sizeof(g_MuzzleFlashPool) / sizeof(g_MuzzleFlashPool[0]));
  iVar4 = 0;
  if (0 < g_INT_01c8eea8) {
    this_ptr_03 = g_StakePool;
    do {
      if ((this_ptr_03->physics_box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_00497e80(this_ptr_03);
      }
      iVar4 = iVar4 + 1;
      this_ptr_03 = this_ptr_03 + 1;
    } while (iVar4 < g_INT_01c8eea8);
  }
  this_ptr_04 = CGlassParticle_ARRAY_01cbc0f0;
  do {
    if (0.0 < (this_ptr_04->base).lifetime_remaining) {
      (*((this_ptr_04->base).vtable)->process)(&this_ptr_04->base);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGlassParticle *)&g_INT_01cefd10);
  this_ptr_05 = g_BulletTrailPool;
  do {
    if (this_ptr_05->frames_remaining != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_0049ad00(this_ptr_05);
    }
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != g_BulletTrailPool + sizeof(g_BulletTrailPool) / sizeof(g_BulletTrailPool[0]));
  this_ptr_06 = g_FireballPool;
  do {
    if (0.0 < (this_ptr_06->base).lifetime_remaining) {
      (*((this_ptr_06->base).vtable)->process)(&this_ptr_06->base);
    }
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]));
  this_ptr_07 = g_RockPool;
  do {
    if (0.0 < (this_ptr_07->base).lifetime_remaining) {
      (*((this_ptr_07->base).vtable)->process)(&this_ptr_07->base);
    }
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]));
  this_ptr_08 = CLeaf_ARRAY_01cf3b88;
  do {
    if (0.0 < (this_ptr_08->base).lifetime_remaining) {
      (*((this_ptr_08->base).vtable)->process)(&this_ptr_08->base);
    }
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CLeaf *)&g_LaserBeamActiveCount);
  pCVar2 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->process)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&g_MuzzleFlashAllocIndex);
  iVar4 = 0;
  if (0 < g_INT_01c8aea0) {
    this_ptr_09 = g_CBulletHole_ARRAY_01c8aea8;
    do {
      core_fire_cpp_CBulletHole_process_FUN_00497540(this_ptr_09);
      iVar4 = iVar4 + 1;
      this_ptr_09 = this_ptr_09 + 1;
    } while (iVar4 < g_INT_01c8aea0);
  }
  this_ptr_10 = g_CExplosion_ARRAY_01cf6090;
  do {
    core_fire_cpp_CExplosion_process_FUN_0049c890(this_ptr_10);
    this_ptr_10 = this_ptr_10 + 1;
  } while (this_ptr_10 != g_CExplosion_ARRAY_01cf6090 + sizeof(g_CExplosion_ARRAY_01cf6090) / sizeof(g_CExplosion_ARRAY_01cf6090[0]));
  this_ptr_11 = g_TossPool;
  do {
    core_fire_cpp_CToss_process_FUN_0049d090(this_ptr_11);
    this_ptr_11 = this_ptr_11 + 1;
  } while (this_ptr_11 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]));
  this_ptr_12 = g_CCrater_ARRAY_01cfaff8;
  do {
    core_fire_cpp_CCrater_process_FUN_0049d8b0(this_ptr_12);
    this_ptr_12 = this_ptr_12 + 1;
  } while (this_ptr_12 != g_CCrater_ARRAY_01cfaff8 + sizeof(g_CCrater_ARRAY_01cfaff8) / sizeof(g_CCrater_ARRAY_01cfaff8[0]));
  this_ptr_13 = g_CGunFlame_ARRAY_01cfb8bc;
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
  } while (this_ptr_13 != g_CGunFlame_ARRAY_01cfb8bc + sizeof(g_CGunFlame_ARRAY_01cfb8bc) / sizeof(g_CGunFlame_ARRAY_01cfb8bc[0]));
  pCVar3 = g_CLightningBolt_ARRAY_01d00eb0;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_0049f4e0(pCVar3);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != g_CLightningBolt_ARRAY_01d00eb0 + sizeof(g_CLightningBolt_ARRAY_01d00eb0) / sizeof(g_CLightningBolt_ARRAY_01d00eb0[0]));
  this_ptr_14 = g_CTrail_ARRAY_01d01ab4;
  do {
    core_fire_cpp_CTrail_process_FUN_004a0630(this_ptr_14);
    this_ptr_14 = this_ptr_14 + 1;
  } while (this_ptr_14 != g_CTrail_ARRAY_01d01ab4 + sizeof(g_CTrail_ARRAY_01d01ab4) / sizeof(g_CTrail_ARRAY_01d01ab4[0]));
  this_ptr_15 = g_ShellPool;
  do {
    (*((this_ptr_15->base).vtable)->process)(&this_ptr_15->base);
    this_ptr_15 = this_ptr_15 + 1;
  } while (this_ptr_15 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]));
  this_ptr_16 = g_PopcornPool;
  do {
    if (0.0 < (this_ptr_16->base).lifetime_remaining) {
      (*((this_ptr_16->base).vtable)->process)(&this_ptr_16->base);
    }
    this_ptr_16 = this_ptr_16 + 1;
  } while (this_ptr_16 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]));
  this_ptr_17 = g_RainDropPool;
  do {
    if (0.0 < (this_ptr_17->base).lifetime_remaining) {
      (*((this_ptr_17->base).vtable)->process)(&this_ptr_17->base);
    }
    this_ptr_17 = this_ptr_17 + 1;
  } while (this_ptr_17 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  pCVar3 = &g_CLightningBolt_01d0bb94;
  do {
    core_fire_cpp_CRing_process_FUN_0049fdf0((CRing *)pCVar3);
    pCVar3 = (CLightningBolt *)((int)pCVar3 + 0x1e4);
  } while (pCVar3 != (CLightningBolt *)&g_INT_01d0ce7c);
  this_ptr_18 = &g_CStormEffect_01d0ce80;
  do {
    core_fire_cpp_CStormEffect_process_FUN_004a0570(this_ptr_18);
    this_ptr_18 = (CStormEffect *)(((CDemonActorType *)this_ptr_18)->class_name + 0xc);
  } while ((CDemonActorType *)this_ptr_18 != &g_CFirestaffClassInfo);
  return;
}
