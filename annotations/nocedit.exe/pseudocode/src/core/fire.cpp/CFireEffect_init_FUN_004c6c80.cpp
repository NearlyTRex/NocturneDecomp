// Name: core_fire.cpp_CFireEffect_init_FUN_004c6c80
// Address: 004c6c80
// Address Range: [[004c6c80, 004c6ebc]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_init_FUN_004c6c80(CFireEffect *this_ptr)

{
  CSpark *pCVar1;
  CMuzzleFlash *pCVar3;
  CGlassParticle *pCVar4;
  CBulletTrail *pCVar6;
  CFireball *pCVar8;
  CRock *pCVar10;
  CShell *pCVar12;
  CPopcorn *pCVar14;
  CRainDrop *pCVar16;
  CSmokeParticle *this_ptr_00;
  CExplosion *this_ptr_01;
  CToss *this_ptr_02;
  CCrater *this_ptr_03;
  CGunFlame *this_ptr_04;
  CLightningBolt *this_ptr_05;
  CTrail *this_ptr_06;
  CSpark *pCVar2;
  CGlassParticle *pCVar5;
  CBulletTrail *pCVar7;
  CFireball *pCVar9;
  CRock *pCVar11;
  CShell *pCVar13;
  CPopcorn *pCVar15;
  CRainDrop *pCVar17;
  
  this_ptr_00 = g_SmokeParticlePool;
  g_SmokeParticleAllocIndex = 0;
  do {
    core_fire_cpp_CSmokeParticle_ctor_FUN_004bf2e0(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount);
  g_BulletHoleAllocIndex = 0;
  g_BulletHoleActiveCount = 0;
  g_StakeActiveListHead = (CStake *)0x0;
  pCVar1 = g_SparkPool;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CSpark *)&g_SparkActiveCount);
  pCVar3 = g_MuzzleFlashPool;
  do {
    pCVar3->unk[0] = '\0';
    pCVar3->unk[1] = '\0';
    pCVar3->unk[2] = '\0';
    pCVar3->unk[3] = '\0';
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CMuzzleFlash *)&g_GlassParticleNextIndex);
  g_StakeActiveCount = 0;
  g_GlassParticleNextIndex = 0;
  g_StakeAllocIndex = 0;
  pCVar4 = g_GlassParticlePool;
  do {
    pCVar5 = pCVar4 + 1;
    (pCVar4->base).lifetime_remaining = 0.0;
    pCVar4 = pCVar5;
  } while (pCVar5 != (CGlassParticle *)&g_CFireEffectGlassParticlesEnd);
  pCVar6 = g_BulletTrailPool;
  do {
    pCVar7 = pCVar6 + 1;
    *(CBulletTrail **)(pCVar6->unk + 0x20) = (CBulletTrail *)0x0;
    pCVar6 = pCVar7;
  } while (pCVar7 != (CBulletTrail *)&g_BulletTrailActiveListHead);
  g_BulletTrailActiveListHead = (CBulletTrail *)0x0;
  pCVar8 = g_FireballPool;
  do {
    pCVar9 = pCVar8 + 1;
    (pCVar8->base).lifetime_remaining = 0.0;
    pCVar8 = pCVar9;
  } while (pCVar9 != (CFireball *)&g_CFireEffectFireballsEnd);
  g_CFireEffectFireballsEnd = (CFireball *)0x0;
  pCVar10 = g_RockPool;
  do {
    pCVar11 = pCVar10 + 1;
    (pCVar10->base).lifetime_remaining = 0.0;
    pCVar10 = pCVar11;
  } while (pCVar11 != (CRock *)&g_CFireEffectRocksEnd);
  g_LaserBeamActiveListHead = (CLaserBeam *)0x0;
  this_ptr_01 = g_ExplosionPool;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_004c38c0(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CExplosion *)&g_ExplosionActiveListHead);
  this_ptr_02 = g_TossPool;
  g_ExplosionActiveListHead = (CExplosion *)0x0;
  do {
    core_fire_cpp_CToss_init_FUN_004c3ed0(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CToss *)&g_TossActiveListHead);
  this_ptr_03 = g_CraterPool;
  g_TossActiveListHead = (CToss *)0x0;
  do {
    core_fire_cpp_CCrater_ctor_FUN_004c41e0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CCrater *)&g_CraterActiveListHead);
  this_ptr_04 = g_GunFlamePool;
  g_CraterActiveListHead = (CCrater *)0x0;
  do {
    core_fire_cpp_CGunFlame_ctor_FUN_004c4da0(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGunFlame *)&g_GunFlameActiveListHead);
  this_ptr_05 = g_LightningBoltPool;
  g_GunFlameActiveListHead = (CGunFlame *)0x0;
  do {
    core_fire_cpp_CLightningBolt_ctor_FUN_004c5630(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CLightningBolt *)&g_LightningBoltActiveListHead);
  this_ptr_06 = g_TrailPool;
  g_LightningBoltActiveListHead = (CLightningBolt *)0x0;
  do {
    core_fire_cpp_CTrail_ctor_FUN_004c5de0(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CTrail *)&g_TrailActiveListHead);
  g_TrailActiveListHead = (CTrail *)0x0;
  pCVar12 = g_ShellPool;
  do {
    pCVar13 = pCVar12 + 1;
    (pCVar12->base).lifetime_remaining = 0.0;
    pCVar12 = pCVar13;
  } while (pCVar13 != (CShell *)&g_CFireEffectShellsEnd);
  g_CFireEffectShellsEnd = (CShell *)0x0;
  pCVar14 = g_PopcornPool;
  do {
    pCVar15 = pCVar14 + 1;
    (pCVar14->base).lifetime_remaining = 0.0;
    pCVar14 = pCVar15;
  } while (pCVar15 != (CPopcorn *)&g_CFireEffectPopcornsEnd);
  g_CFireEffectPopcornsEnd = (CPopcorn *)0x0;
  pCVar16 = g_RainDropPool;
  do {
    pCVar17 = pCVar16 + 1;
    (pCVar16->base).lifetime_remaining = 0.0;
    pCVar16 = pCVar17;
  } while ((CDemonActorType *)pCVar17 != &g_CFlameClassInfo);
  return;
}
