// Name: core_fire.cpp_CFireEffect_process_FUN_004c6ec0
// Address: 004c6ec0
// Address Range: [[004c6ec0, 004c717d]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect *this_ptr)

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
  CGunFlame *this_ptr_18;
  
  this_ptr_00 = g_SmokeParticlePool;
  g_CFireEffectRocksEnd = (CRock *)0x0;
  this_ptr_18 = (CGunFlame *)0x4c6edb;
  core_fire_cpp_FUN_004c3870();
  do {
    if (this_ptr_00->active != 0) {
      core_fire_cpp_CSmokeParticle_process_FUN_004bf390(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount);
  this_ptr_01 = g_SparkPool;
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->process)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CSpark *)&g_SparkActiveCount);
  this_ptr_02 = g_MuzzleFlashPool;
  do {
    if (*(int *)this_ptr_02->field0_0x0 != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_004c1a00(this_ptr_02);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CMuzzleFlash *)&g_GlassParticleNextIndex);
  iVar2 = 0;
  if (0 < g_StakeActiveCount) {
    this_ptr_03 = g_StakePool;
    do {
      if ((this_ptr_03->box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_004c0210(this_ptr_03);
      }
      iVar2 = iVar2 + 1;
      this_ptr_03 = this_ptr_03 + 1;
    } while (iVar2 < g_StakeActiveCount);
  }
  this_ptr_04 = g_GlassParticlePool;
  do {
    if (0.0 < (this_ptr_04->base).lifetime_remaining) {
      (*((this_ptr_04->base).vtable)->process)(&this_ptr_04->base);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGlassParticle *)&g_CFireEffectGlassParticlesEnd);
  this_ptr_05 = g_BulletTrailPool;
  do {
    if (*(int *)(this_ptr_05->field0_0x0 + 0x20) != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_004c21d0(this_ptr_05);
    }
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CBulletTrail *)&g_BulletTrailActiveListHead);
  this_ptr_06 = g_FireballPool;
  do {
    if (0.0 < (this_ptr_06->base).lifetime_remaining) {
      (*((this_ptr_06->base).vtable)->process)(&this_ptr_06->base);
    }
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CFireball *)&g_CFireEffectFireballsEnd);
  this_ptr_07 = g_RockPool;
  do {
    if (0.0 < (this_ptr_07->base).lifetime_remaining) {
      (*((this_ptr_07->base).vtable)->process)(&this_ptr_07->base);
    }
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CRock *)&g_CFireEffectRocksEnd);
  iVar2 = 0;
  if (0 < g_BulletHoleActiveCount) {
    this_ptr_17 = g_BulletHolePool;
    do {
      core_fire_cpp_CBulletHole_process_FUN_004bfa00(this_ptr_17);
      iVar2 = iVar2 + 1;
      this_ptr_17 = this_ptr_17 + 1;
    } while (iVar2 < g_BulletHoleActiveCount);
  }
  this_ptr_08 = g_ExplosionPool;
  do {
    core_fire_cpp_CExplosion_process_FUN_004c3ac0(this_ptr_08);
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CExplosion *)&g_ExplosionActiveListHead);
  this_ptr_09 = g_TossPool;
  do {
    core_fire_cpp_CToss_process_FUN_004c4000(this_ptr_09);
    this_ptr_09 = this_ptr_09 + 1;
  } while (this_ptr_09 != (CToss *)&g_TossActiveListHead);
  this_ptr_10 = g_CraterPool;
  do {
    core_fire_cpp_CCrater_process_FUN_004c4550(this_ptr_10);
    this_ptr_10 = this_ptr_10 + 1;
  } while (this_ptr_10 != (CCrater *)&g_CraterActiveListHead);
  this_ptr_11 = g_GunFlamePool;
  bVar1 = false;
  do {
    if ((*(uint *)this_ptr_11->field0_0x0 & 0x7fffffff) != 0) {
      if (!bVar1) {
        core_fire_cpp_CGunFlame_initProcess_FUN_004c4b00(this_ptr_18);
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_004c4f60(this_ptr_11);
    }
    this_ptr_11 = this_ptr_11 + 1;
  } while (this_ptr_11 != (CGunFlame *)&g_GunFlameActiveListHead);
  this_ptr_12 = g_LightningBoltPool;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_004c56e0(this_ptr_12);
    this_ptr_12 = this_ptr_12 + 1;
  } while (this_ptr_12 != (CLightningBolt *)&g_LightningBoltActiveListHead);
  this_ptr_13 = g_TrailPool;
  do {
    core_fire_cpp_CTrail_process_FUN_004c5e40(this_ptr_13);
    this_ptr_13 = this_ptr_13 + 1;
  } while (this_ptr_13 != (CTrail *)&g_TrailActiveListHead);
  this_ptr_14 = g_ShellPool;
  do {
    (*((this_ptr_14->base).vtable)->process)(&this_ptr_14->base);
    this_ptr_14 = this_ptr_14 + 1;
  } while (this_ptr_14 != (CShell *)&g_CFireEffectShellsEnd);
  this_ptr_15 = g_PopcornPool;
  do {
    if (0.0 < (this_ptr_15->base).lifetime_remaining) {
      (*((this_ptr_15->base).vtable)->process)(&this_ptr_15->base);
    }
    this_ptr_15 = (CPopcorn *)(&this_ptr_15->base + 1);
  } while (this_ptr_15 != (CPopcorn *)&g_CFireEffectPopcornsEnd);
  this_ptr_16 = g_RainDropPool;
  do {
    if (0.0 < (this_ptr_16->base).lifetime_remaining) {
      (*((this_ptr_16->base).vtable)->process)(&this_ptr_16->base);
    }
    this_ptr_16 = (CRainDrop *)(&this_ptr_16->base + 1);
  } while ((CDemonActorType *)this_ptr_16 != &g_CFlameClassInfo);
  return;
}
