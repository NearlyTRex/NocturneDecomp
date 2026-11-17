// Name: core_fire.cpp_CFireEffect_process_FUN_0049c430
// Address: 0049c430
// Address Range: [[0049c430, 0049c77d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_process_FUN_0049c430(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_process_FUN_0049c430(CFireEffect *this_ptr)

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
  CExplosion *this_ptr_09;
  CToss *this_ptr_10;
  CCrater *this_ptr_11;
  CGunFlame *this_ptr_12;
  CLightningBolt *this_ptr_13;
  CTrail *this_ptr_14;
  CShell *this_ptr_15;
  CPopcorn *this_ptr_16;
  CRainDrop *pCVar3;
  CMuzzleFlash *this_ptr_17;
  int iVar4;
  CBulletHole *this_ptr_18;
  
  this_ptr_00 = g_SmokeParticlePool;
  g_LaserBeamActiveCount = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_00498c30();
  do {
    if (this_ptr_00->active != 0) {
      core_fire_cpp_CSmokeParticle_process_FUN_004935b0(this_ptr_00);
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
  pCVar2 = CFirefly_ARRAY_01c848f8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->process)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&g_INT_01c85ff8);
  this_ptr_02 = g_CMuzzleFlash_ARRAY_01c86730;
  this_ptr_17 = &g_CMuzzleFlash_01c85ffc;
  do {
    if (this_ptr_17->frames_remaining != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_00496a60(this_ptr_17);
    }
    if (((CMuzzleEffect *)this_ptr_02)->frames_remaining != 0) {
      core_muzzle_cpp_CMuzzleEffect_process_FUN_0059d420((CMuzzleEffect *)this_ptr_02);
    }
    this_ptr_02 = this_ptr_02 + 1;
    this_ptr_17 = this_ptr_17 + 1;
  } while (this_ptr_02 != g_CMuzzleFlash_ARRAY_01c86730 + sizeof(g_CMuzzleFlash_ARRAY_01c86730) / sizeof(g_CMuzzleFlash_ARRAY_01c86730[0]));
  iVar4 = 0;
  if (0 < g_StakeActiveCount) {
    this_ptr_03 = g_StakePool;
    do {
      if ((this_ptr_03->physics_box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_00494580(this_ptr_03);
      }
      iVar4 = iVar4 + 1;
      this_ptr_03 = this_ptr_03 + 1;
    } while (iVar4 < g_StakeActiveCount);
  }
  this_ptr_04 = g_GlassParticlePool;
  do {
    if (0.0 < (this_ptr_04->base).lifetime_remaining) {
      (*((this_ptr_04->base).vtable)->process)(&this_ptr_04->base);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]));
  this_ptr_05 = g_BulletTrailPool;
  do {
    if (this_ptr_05->frames_remaining != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_00497330(this_ptr_05);
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
  this_ptr_08 = CLeaf_ARRAY_01c950dc;
  do {
    if (0.0 < (this_ptr_08->base).lifetime_remaining) {
      (*((this_ptr_08->base).vtable)->process)(&this_ptr_08->base);
    }
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CLeaf *)&g_LaserBeamActiveCount);
  pCVar2 = CFirefly_ARRAY_01c848f8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->process)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&g_INT_01c85ff8);
  iVar4 = 0;
  if (0 < g_BulletHoleActiveCount) {
    this_ptr_18 = g_BulletHolePool;
    do {
      core_fire_cpp_CBulletHole_process_FUN_00493cf0(this_ptr_18);
      iVar4 = iVar4 + 1;
      this_ptr_18 = this_ptr_18 + 1;
    } while (iVar4 < g_BulletHoleActiveCount);
  }
  this_ptr_09 = g_CExplosion_ARRAY_01c975e4;
  do {
    core_fire_cpp_CExplosion_process_FUN_00498e80(this_ptr_09);
    this_ptr_09 = this_ptr_09 + 1;
  } while (this_ptr_09 != g_CExplosion_ARRAY_01c975e4 + sizeof(g_CExplosion_ARRAY_01c975e4) / sizeof(g_CExplosion_ARRAY_01c975e4[0]));
  this_ptr_10 = g_TossPool;
  do {
    core_fire_cpp_CToss_process_FUN_004993f0(this_ptr_10);
    this_ptr_10 = this_ptr_10 + 1;
  } while (this_ptr_10 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]));
  this_ptr_11 = g_CCrater_ARRAY_01c9c4d4;
  do {
    core_fire_cpp_CCrater_process_FUN_00499930(this_ptr_11);
    this_ptr_11 = this_ptr_11 + 1;
  } while (this_ptr_11 != g_CCrater_ARRAY_01c9c4d4 + sizeof(g_CCrater_ARRAY_01c9c4d4) / sizeof(g_CCrater_ARRAY_01c9c4d4[0]));
  this_ptr_12 = g_CGunFlame_ARRAY_01c9cd98;
  bVar1 = false;
  do {
    if (ABS(this_ptr_12->lifetime) != 0.0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_00499ee0();
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_0049a3a0(this_ptr_12);
    }
    this_ptr_12 = this_ptr_12 + 1;
  } while (this_ptr_12 != g_CGunFlame_ARRAY_01c9cd98 + sizeof(g_CGunFlame_ARRAY_01c9cd98) / sizeof(g_CGunFlame_ARRAY_01c9cd98[0]));
  this_ptr_13 = g_CLightningBolt_ARRAY_01ca13ec;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_0049ab90(this_ptr_13);
    this_ptr_13 = this_ptr_13 + 1;
  } while (this_ptr_13 != g_CLightningBolt_ARRAY_01ca13ec + sizeof(g_CLightningBolt_ARRAY_01ca13ec) / sizeof(g_CLightningBolt_ARRAY_01ca13ec[0]));
  this_ptr_14 = g_CTrail_ARRAY_01ca15a8;
  do {
    core_fire_cpp_CTrail_process_FUN_0049b330(this_ptr_14);
    this_ptr_14 = this_ptr_14 + 1;
  } while (this_ptr_14 != g_CTrail_ARRAY_01ca15a8 + sizeof(g_CTrail_ARRAY_01ca15a8) / sizeof(g_CTrail_ARRAY_01ca15a8[0]));
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
  pCVar3 = g_RainDropPool;
  do {
    if (0.0 < *(float *)(((CDemonActorType *)pCVar3)->class_name + 0x24)) {
      (**(code **)(*(int *)((CDemonActorType *)((int)pCVar3 + 0x3c))->class_name + 4))(pCVar3);
    }
    pCVar3 = (CRainDrop *)(((CDemonActorType *)((int)pCVar3 + 0x3c))->class_name + 4);
  } while (pCVar3 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  return;
}
