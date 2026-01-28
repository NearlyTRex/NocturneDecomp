// Name: core_fire.cpp_CFireEffect_render_FUN_004c7180
// Address: 004c7180
// Address Range: [[004c7180, 004c7497]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_render_FUN_004c7180(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_render_FUN_004c7180(CFireEffect *this_ptr)

{
  int iVar1;
  CRock *this_ptr_00;
  CFireball *this_ptr_01;
  CShell *this_ptr_02;
  CSmokeParticle *this_ptr_03;
  CMuzzleFlash *this_ptr_04;
  CSpark *this_ptr_05;
  CGlassParticle *this_ptr_06;
  CBulletTrail *this_ptr_07;
  CExplosion *this_ptr_08;
  CToss *this_ptr_09;
  CGunFlame *this_ptr_10;
  CLightningBolt *this_ptr_11;
  CTrail *this_ptr_12;
  CPopcorn *this_ptr_13;
  CRainDrop *this_ptr_14;
  int iVar2;
  CLaserBeam *this_ptr_15;
  
  iVar2 = 0;
  if (0 < g_StakeActiveCount) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_StakePool[0].box.rotation_matrix.m + iVar1 + -0x1c) == 0) {
        core_fire_cpp_CStake_render_FUN_004c0140
                  ((CStake *)((int)g_StakePool[0].box.rotation_matrix.m + iVar1 + -0x1c));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar2 < g_StakeActiveCount);
  }
  this_ptr_00 = g_RockPool;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CRock *)&g_CFireEffectRocksEnd);
  this_ptr_01 = g_FireballPool;
  core_fire_cpp_CFireball_initRender_FUN_004c0d80(g_FireballPool);
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->render)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CFireball *)&g_CFireEffectFireballsEnd);
  this_ptr_02 = g_ShellPool;
  do {
    (*((this_ptr_02->base).vtable)->render)(&this_ptr_02->base);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CShell *)&g_CFireEffectShellsEnd);
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 == 0) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    iVar2 = 0;
    core_fire_cpp_CBulletHole_initRender_FUN_004bfa40(g_BulletHolePool);
    if (0 < g_BulletHoleActiveCount) {
      iVar1 = 0;
      do {
        if (*(int *)((int)&g_BulletHolePool[0].actor_ptr + iVar1) != 0) {
          core_fire_cpp_CBulletHole_render_FUN_004bfac0
                    ((CBulletHole *)((int)&g_BulletHolePool[0].position.x + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < g_BulletHoleActiveCount);
    }
    this_ptr_03 = g_SmokeParticlePool;
    core_fire_cpp_CSmokeParticle_initRender_FUN_004bf1f0(g_SmokeParticlePool);
    do {
      if (this_ptr_03->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_004bf4c0(this_ptr_03);
      }
      this_ptr_03 = this_ptr_03 + 1;
    } while (this_ptr_03 != (CSmokeParticle *)&g_BulletHoleActiveCount);
    this_ptr_04 = g_MuzzleFlashPool;
    do {
      if (*(int *)this_ptr_04->unk != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(this_ptr_04);
      }
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != (CMuzzleFlash *)&g_GlassParticleNextIndex);
    iVar2 = 0;
    if (0 < (int)g_CFireEffectRocksEnd) {
      this_ptr_15 = g_LaserBeamPool;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_004c25c0(this_ptr_15);
        iVar2 = iVar2 + 1;
        this_ptr_15 = this_ptr_15 + 1;
      } while (iVar2 < (int)g_CFireEffectRocksEnd);
    }
    this_ptr_05 = g_SparkPool;
    core_fire_cpp_CSpark_initRender_FUN_004c0300(g_SparkPool);
    do {
      if (0.0 < (this_ptr_05->base).lifetime_remaining) {
        (*((this_ptr_05->base).vtable)->render)(&this_ptr_05->base);
      }
      this_ptr_05 = this_ptr_05 + 1;
    } while (this_ptr_05 != (CSpark *)&g_SparkActiveCount);
    this_ptr_06 = g_GlassParticlePool;
    do {
      if (0.0 < (this_ptr_06->base).lifetime_remaining) {
        (*((this_ptr_06->base).vtable)->render)(&this_ptr_06->base);
      }
      this_ptr_06 = this_ptr_06 + 1;
    } while (this_ptr_06 != (CGlassParticle *)&g_CFireEffectGlassParticlesEnd);
    this_ptr_07 = g_BulletTrailPool;
    do {
      if (*(int *)(this_ptr_07->unk + 0x20) != 0) {
        core_fire_cpp_CBulletTrail_render_FUN_004c21f0(this_ptr_07);
      }
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != (CBulletTrail *)&g_BulletTrailActiveListHead);
    this_ptr_08 = g_ExplosionPool;
    do {
      core_fire_cpp_CExplosion_render_FUN_004c3b10(this_ptr_08);
      this_ptr_08 = this_ptr_08 + 1;
    } while (this_ptr_08 != (CExplosion *)&g_ExplosionActiveListHead);
    this_ptr_09 = g_TossPool;
    do {
      core_fire_cpp_CToss_render_FUN_004c4160(this_ptr_09);
      this_ptr_09 = this_ptr_09 + 1;
    } while (this_ptr_09 != (CToss *)&g_TossActiveListHead);
    this_ptr_10 = g_GunFlamePool;
    do {
      core_fire_cpp_CGunFlame_render_FUN_004c50b0(this_ptr_10);
      this_ptr_10 = this_ptr_10 + 1;
    } while (this_ptr_10 != (CGunFlame *)&g_GunFlameActiveListHead);
    this_ptr_11 = g_LightningBoltPool;
    do {
      core_fire_cpp_CLightningBolt_render_FUN_004c5720(this_ptr_11);
      this_ptr_11 = this_ptr_11 + 1;
    } while (this_ptr_11 != (CLightningBolt *)&g_LightningBoltActiveListHead);
    this_ptr_12 = g_TrailPool;
    do {
      core_fire_cpp_CTrail_render_FUN_004c5e90(this_ptr_12);
      this_ptr_12 = this_ptr_12 + 1;
    } while (this_ptr_12 != (CTrail *)&g_TrailActiveListHead);
    this_ptr_13 = g_PopcornPool;
    do {
      if (0.0 < (this_ptr_13->base).lifetime_remaining) {
        (*((this_ptr_13->base).vtable)->render)(&this_ptr_13->base);
      }
      this_ptr_13 = (CPopcorn *)(&this_ptr_13->base + 1);
    } while (this_ptr_13 != (CPopcorn *)&g_CFireEffectPopcornsEnd);
    this_ptr_14 = g_RainDropPool;
    do {
      if (0.0 < (this_ptr_14->base).lifetime_remaining) {
        (*((this_ptr_14->base).vtable)->render)(&this_ptr_14->base);
      }
      this_ptr_14 = (CRainDrop *)(&this_ptr_14->base + 1);
    } while ((CDemonActorType *)this_ptr_14 != &g_CFlameClassInfo);
  }
  return;
}
