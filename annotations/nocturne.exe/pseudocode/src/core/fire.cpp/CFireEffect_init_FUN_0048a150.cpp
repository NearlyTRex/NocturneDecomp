// Name: core_fire.cpp_CFireEffect_init_FUN_0048a150
// Address: 0048a150
// Address Range: [[0048a150, 0048a38c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_init_FUN_0048a150(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_init_FUN_0048a150(CFireEffect *this_ptr)

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
  
  this_ptr_00 = g_CSmokeParticle_ARRAY_01c0a140;
  g_INT_01c0a13c = 0;
  do {
    core_fire_cpp_CSmokeParticle_reset_FUN_00482770(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c0a140 + sizeof(g_CSmokeParticle_ARRAY_01c0a140) / sizeof(g_CSmokeParticle_ARRAY_01c0a140[0]));
  g_INT_01c20144 = 0;
  g_INT_01c20140 = 0;
  g_INT_01c49d50 = 0;
  pCVar1 = g_SparkPool;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]));
  pCVar3 = g_CMuzzleFlash_ARRAY_01c4e958;
  do {
    pCVar3->frames_remaining = 0;
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != g_CMuzzleFlash_ARRAY_01c4e958 + sizeof(g_CMuzzleFlash_ARRAY_01c4e958) / sizeof(g_CMuzzleFlash_ARRAY_01c4e958[0]));
  g_INT_01c23d48 = 0;
  g_INT_01c4f088 = 0;
  g_INT_01c23d4c = 0;
  pCVar4 = g_GlassParticlePool;
  do {
    pCVar5 = pCVar4 + 1;
    (pCVar4->base).lifetime_remaining = 0.0;
    pCVar4 = pCVar5;
  } while (pCVar5 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]));
  pCVar6 = g_CBulletTrail_ARRAY_01c58c90;
  do {
    pCVar7 = pCVar6 + 1;
    pCVar6->frames_remaining = 0;
    pCVar6 = pCVar7;
  } while (pCVar7 != g_CBulletTrail_ARRAY_01c58c90 + sizeof(g_CBulletTrail_ARRAY_01c58c90) / sizeof(g_CBulletTrail_ARRAY_01c58c90[0]));
  g_INT_01c58df8 = 0;
  pCVar8 = g_FireballPool;
  do {
    pCVar9 = pCVar8 + 1;
    (pCVar8->base).lifetime_remaining = 0.0;
    pCVar8 = pCVar9;
  } while (pCVar9 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]));
  g_INT_01c5b4fc = 0;
  pCVar10 = g_RockPool;
  do {
    pCVar11 = pCVar10 + 1;
    (pCVar10->base).lifetime_remaining = 0.0;
    pCVar10 = pCVar11;
  } while (pCVar11 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]));
  g_INT_01c5d704 = 0;
  this_ptr_01 = g_CExplosion_ARRAY_01c5d708;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_00486d90(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != g_CExplosion_ARRAY_01c5d708 + sizeof(g_CExplosion_ARRAY_01c5d708) / sizeof(g_CExplosion_ARRAY_01c5d708[0]));
  this_ptr_02 = g_TossPool;
  g_INT_01c5d820 = 0;
  do {
    core_fire_cpp_CToss_reset_FUN_004873a0(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]));
  this_ptr_03 = g_CraterPool;
  g_INT_01c625f4 = 0;
  do {
    core_fire_cpp_CCrater_reset_FUN_004876b0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]));
  this_ptr_04 = g_CGunFlame_ARRAY_01c62ebc;
  g_INT_01c62eb8 = 0;
  do {
    core_fire_cpp_CGunFlame_reset_FUN_00488270(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != g_CGunFlame_ARRAY_01c62ebc + sizeof(g_CGunFlame_ARRAY_01c62ebc) / sizeof(g_CGunFlame_ARRAY_01c62ebc[0]));
  this_ptr_05 = g_CLightningBolt_ARRAY_01c67510;
  g_INT_01c6750c = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_00488b00(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != g_CLightningBolt_ARRAY_01c67510 + sizeof(g_CLightningBolt_ARRAY_01c67510) / sizeof(g_CLightningBolt_ARRAY_01c67510[0]));
  this_ptr_06 = g_CTrail_ARRAY_01c676cc;
  g_INT_01c676c8 = 0;
  do {
    core_fire_cpp_CTrail_reset_FUN_004892b0(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != g_CTrail_ARRAY_01c676cc + sizeof(g_CTrail_ARRAY_01c676cc) / sizeof(g_CTrail_ARRAY_01c676cc[0]));
  g_INT_01c684dc = 0;
  pCVar12 = g_ShellPool;
  do {
    pCVar13 = pCVar12 + 1;
    (pCVar12->base).lifetime_remaining = 0.0;
    pCVar12 = pCVar13;
  } while (pCVar13 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]));
  g_INT_01c69610 = 0;
  pCVar14 = g_PopcornPool;
  do {
    pCVar15 = pCVar14 + 1;
    (pCVar14->base).lifetime_remaining = 0.0;
    pCVar14 = pCVar15;
  } while (pCVar15 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]));
  g_INT_01c6ce14 = 0;
  pCVar16 = g_RainDropPool;
  do {
    pCVar17 = pCVar16 + 1;
    (pCVar16->base).lifetime_remaining = 0.0;
    pCVar16 = pCVar17;
  } while (pCVar17 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  return;
}
