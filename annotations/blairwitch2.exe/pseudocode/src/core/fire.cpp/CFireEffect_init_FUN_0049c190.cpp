// Name: core_fire.cpp_CFireEffect_init_FUN_0049c190
// Address: 0049c190
// Address Range: [[0049c190, 0049c42a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_init_FUN_0049c190(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_init_FUN_0049c190(CFireEffect *this_ptr)

{
  CDemonActorType *pCVar1;
  CSpark *pCVar2;
  CFirefly *pCVar4;
  CMuzzleFlash *pCVar5;
  CGlassParticle *pCVar6;
  CBulletTrail *pCVar8;
  CFireball *pCVar10;
  CRock *pCVar12;
  CLeaf *pCVar14;
  CFirefly *pCVar16;
  CShell *pCVar17;
  CPopcorn *pCVar19;
  CDemonActorType *pCVar21;
  CSmokeParticle *this_ptr_00;
  CMuzzleFlash *pCVar22;
  CExplosion *this_ptr_01;
  CToss *this_ptr_02;
  CCrater *this_ptr_03;
  CGunFlame *this_ptr_04;
  CLightningBolt *this_ptr_05;
  CTrail *this_ptr_06;
  CSpark *pCVar3;
  CGlassParticle *pCVar7;
  CBulletTrail *pCVar9;
  CFireball *pCVar11;
  CRock *pCVar13;
  CLeaf *pCVar15;
  CShell *pCVar18;
  CPopcorn *pCVar20;
  
  this_ptr_00 = g_CSmokeParticle_ARRAY_01c3f8e0;
  g_INT_01c3f8dc = 0;
  do {
    core_fire_cpp_CSmokeParticle_reset_FUN_00493500(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c3f8e0 + sizeof(g_CSmokeParticle_ARRAY_01c3f8e0) / sizeof(g_CSmokeParticle_ARRAY_01c3f8e0[0]));
  g_INT_01c558e4 = 0;
  g_INT_01c558e0 = 0;
  g_INT_01c7f4f0 = 0;
  pCVar2 = g_SparkPool;
  do {
    pCVar3 = pCVar2 + 1;
    (pCVar2->base).lifetime_remaining = 0.0;
    pCVar2 = pCVar3;
  } while (pCVar3 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]));
  pCVar16 = CFirefly_ARRAY_01c848f8;
  do {
    pCVar4 = pCVar16 + 1;
    (pCVar16->base).lifetime_remaining = 0.0;
    pCVar16 = pCVar4;
  } while (pCVar4 != (CFirefly *)&g_INT_01c85ff8);
  pCVar5 = &g_CMuzzleFlash_01c85ffc;
  pCVar22 = g_CMuzzleFlash_ARRAY_01c86730;
  do {
    pCVar5->frames_remaining = 0;
    pCVar5 = pCVar5 + 1;
    pCVar22->frames_remaining = 0;
    pCVar22 = pCVar22 + 1;
  } while (pCVar5 != (CMuzzleFlash *)&g_INT_01c8672c);
  g_INT_01c594e8 = 0;
  g_INT_01c86e60 = 0;
  g_INT_01c594ec = 0;
  pCVar6 = g_GlassParticlePool;
  do {
    pCVar7 = pCVar6 + 1;
    (pCVar6->base).lifetime_remaining = 0.0;
    pCVar6 = pCVar7;
  } while (pCVar7 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]));
  pCVar8 = g_CBulletTrail_ARRAY_01c91268;
  do {
    pCVar9 = pCVar8 + 1;
    pCVar8->frames_remaining = 0;
    pCVar8 = pCVar9;
  } while (pCVar9 != g_CBulletTrail_ARRAY_01c91268 + sizeof(g_CBulletTrail_ARRAY_01c91268) / sizeof(g_CBulletTrail_ARRAY_01c91268[0]));
  g_INT_01c913d0 = 0;
  pCVar10 = g_FireballPool;
  do {
    pCVar11 = pCVar10 + 1;
    (pCVar10->base).lifetime_remaining = 0.0;
    pCVar10 = pCVar11;
  } while (pCVar11 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]));
  g_INT_01c93cd4 = 0;
  pCVar12 = g_RockPool;
  do {
    pCVar13 = pCVar12 + 1;
    (pCVar12->base).lifetime_remaining = 0.0;
    pCVar12 = pCVar13;
  } while (pCVar13 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]));
  g_INT_01c950d8 = 0;
  pCVar14 = CLeaf_ARRAY_01c950dc;
  do {
    pCVar15 = pCVar14 + 1;
    (pCVar14->base).lifetime_remaining = 0.0;
    pCVar14 = pCVar15;
  } while (pCVar15 != (CLeaf *)&g_INT_01c965dc);
  g_INT_01c848f4 = 0;
  pCVar16 = CFirefly_ARRAY_01c848f8;
  do {
    pCVar4 = pCVar16 + 1;
    (pCVar16->base).lifetime_remaining = 0.0;
    pCVar16 = pCVar4;
  } while (pCVar4 != (CFirefly *)&g_INT_01c85ff8);
  this_ptr_01 = g_CExplosion_ARRAY_01c975e4;
  g_INT_01c975e0 = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_00498c80(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != g_CExplosion_ARRAY_01c975e4 + sizeof(g_CExplosion_ARRAY_01c975e4) / sizeof(g_CExplosion_ARRAY_01c975e4[0]));
  this_ptr_02 = g_TossPool;
  g_INT_01c976fc = 0;
  do {
    core_fire_cpp_CToss_reset_FUN_004992a0(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]));
  this_ptr_03 = g_CCrater_ARRAY_01c9c4d4;
  g_INT_01c9c4d0 = 0;
  do {
    core_fire_cpp_CCrater_reset_FUN_004995f0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != g_CCrater_ARRAY_01c9c4d4 + sizeof(g_CCrater_ARRAY_01c9c4d4) / sizeof(g_CCrater_ARRAY_01c9c4d4[0]));
  this_ptr_04 = g_CGunFlame_ARRAY_01c9cd98;
  g_INT_01c9cd94 = 0;
  do {
    core_fire_cpp_CGunFlame_reset_FUN_0049a1a0(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != g_CGunFlame_ARRAY_01c9cd98 + sizeof(g_CGunFlame_ARRAY_01c9cd98) / sizeof(g_CGunFlame_ARRAY_01c9cd98[0]));
  this_ptr_05 = g_CLightningBolt_ARRAY_01ca13ec;
  g_INT_01ca13e8 = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_0049aae0(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != g_CLightningBolt_ARRAY_01ca13ec + sizeof(g_CLightningBolt_ARRAY_01ca13ec) / sizeof(g_CLightningBolt_ARRAY_01ca13ec[0]));
  g_INT_01ca15a4 = 0;
  this_ptr_06 = g_CTrail_ARRAY_01ca15a8;
  do {
    core_fire_cpp_CTrail_reset_FUN_0049b2d0(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != g_CTrail_ARRAY_01ca15a8 + sizeof(g_CTrail_ARRAY_01ca15a8) / sizeof(g_CTrail_ARRAY_01ca15a8[0]));
  g_INT_01ca23b8 = 0;
  pCVar17 = g_ShellPool;
  do {
    pCVar18 = pCVar17 + 1;
    (pCVar17->base).lifetime_remaining = 0.0;
    pCVar17 = pCVar18;
  } while (pCVar18 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]));
  g_INT_01ca367c = 0;
  pCVar19 = g_PopcornPool;
  do {
    pCVar20 = pCVar19 + 1;
    (pCVar19->base).lifetime_remaining = 0.0;
    pCVar19 = pCVar20;
  } while (pCVar20 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]));
  g_INT_01ca7680 = 0;
  pCVar21 = (CDemonActorType *)g_RainDropPool;
  do {
    pCVar1 = pCVar21 + 1;
    pCVar21->class_name[0x24] = '\0';
    pCVar21->class_name[0x25] = '\0';
    pCVar21->class_name[0x26] = '\0';
    pCVar21->class_name[0x27] = '\0';
    pCVar21 = (CDemonActorType *)(pCVar1->class_name + 4);
  } while ((CDemonActorType *)(pCVar1->class_name + 4) != &g_CFlameClassInfo);
  return;
}
