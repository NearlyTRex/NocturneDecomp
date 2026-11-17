// Name: core_fire.cpp_CFireEffect_init_FUN_004a1480
// Address: 004a1480
// Address Range: [[004a1480, 004a175a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_init_FUN_004a1480(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_init_FUN_004a1480(CFireEffect *this_ptr)

{
  CSmokeParticle *this_ptr_00;
  CSpark *pCVar1;
  CFirefly *pCVar3;
  CMuzzleFlash *pCVar4;
  CGlassParticle *pCVar5;
  CBulletTrail *pCVar7;
  CFireball *pCVar9;
  CRock *pCVar11;
  CLeaf *pCVar13;
  CFirefly *pCVar15;
  CExplosion *this_ptr_01;
  CToss *this_ptr_02;
  CCrater *this_ptr_03;
  CGunFlame *this_ptr_04;
  CLightningBolt *pCVar16;
  CTrail *this_ptr_05;
  CShell *pCVar17;
  CPopcorn *pCVar19;
  CRainDrop *pCVar21;
  CStormEffect *this_ptr_06;
  CSpark *pCVar2;
  CGlassParticle *pCVar6;
  CBulletTrail *pCVar8;
  CFireball *pCVar10;
  CRock *pCVar12;
  CLeaf *pCVar14;
  CShell *pCVar18;
  CPopcorn *pCVar20;
  CRainDrop *pCVar22;
  
  this_ptr_00 = g_CSmokeParticle_ARRAY_01c74ea0;
  g_INT_01c74e9c = 0;
  do {
    core_fire_cpp_CSmokeParticle_reset_FUN_00496d50(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c74ea0 + sizeof(g_CSmokeParticle_ARRAY_01c74ea0) / sizeof(g_CSmokeParticle_ARRAY_01c74ea0[0]));
  g_INT_01c8aea4 = 0;
  g_INT_01c8aea0 = 0;
  g_INT_01cb4eb0 = 0;
  pCVar1 = g_SparkPool;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]));
  pCVar15 = CFirefly_ARRAY_01cba2b8;
  do {
    pCVar3 = pCVar15 + 1;
    (pCVar15->base).lifetime_remaining = 0.0;
    pCVar15 = pCVar3;
  } while (pCVar3 != (CFirefly *)&g_INT_01cbb9b8);
  pCVar4 = g_CMuzzleFlash_ARRAY_01cbb9bc;
  do {
    pCVar4->frames_remaining = 0;
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != g_CMuzzleFlash_ARRAY_01cbb9bc + sizeof(g_CMuzzleFlash_ARRAY_01cbb9bc) / sizeof(g_CMuzzleFlash_ARRAY_01cbb9bc[0]));
  g_INT_01c8eea8 = 0;
  g_INT_01c8eeac = 0;
  g_INT_01cbc0ec = 0;
  pCVar5 = CGlassParticle_ARRAY_01cbc0f0;
  do {
    pCVar6 = pCVar5 + 1;
    (pCVar5->base).lifetime_remaining = 0.0;
    pCVar5 = pCVar6;
  } while (pCVar6 != (CGlassParticle *)&g_INT_01cefd10);
  pCVar7 = g_CBulletTrail_ARRAY_01cefd14;
  do {
    pCVar8 = pCVar7 + 1;
    pCVar7->frames_remaining = 0;
    pCVar7 = pCVar8;
  } while (pCVar8 != g_CBulletTrail_ARRAY_01cefd14 + sizeof(g_CBulletTrail_ARRAY_01cefd14) / sizeof(g_CBulletTrail_ARRAY_01cefd14[0]));
  g_INT_01cefe7c = 0;
  pCVar9 = g_FireballPool;
  do {
    pCVar10 = pCVar9 + 1;
    (pCVar9->base).lifetime_remaining = 0.0;
    pCVar9 = pCVar10;
  } while (pCVar10 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]));
  g_INT_01cf2780 = 0;
  pCVar11 = g_RockPool;
  do {
    pCVar12 = pCVar11 + 1;
    (pCVar11->base).lifetime_remaining = 0.0;
    pCVar11 = pCVar12;
  } while (pCVar12 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]));
  g_INT_01cf3b84 = 0;
  pCVar13 = CLeaf_ARRAY_01cf3b88;
  do {
    pCVar14 = pCVar13 + 1;
    (pCVar13->base).lifetime_remaining = 0.0;
    pCVar13 = pCVar14;
  } while (pCVar14 != (CLeaf *)&g_INT_01cf5088);
  g_INT_01cba2b4 = 0;
  pCVar15 = CFirefly_ARRAY_01cba2b8;
  do {
    pCVar3 = pCVar15 + 1;
    (pCVar15->base).lifetime_remaining = 0.0;
    pCVar15 = pCVar3;
  } while (pCVar3 != (CFirefly *)&g_INT_01cbb9b8);
  this_ptr_01 = g_CExplosion_ARRAY_01cf6090;
  g_INT_01cf608c = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_0049c670(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != g_CExplosion_ARRAY_01cf6090 + sizeof(g_CExplosion_ARRAY_01cf6090) / sizeof(g_CExplosion_ARRAY_01cf6090[0]));
  this_ptr_02 = g_TossPool;
  g_INT_01cf61d0 = 0;
  do {
    core_fire_cpp_CToss_reset_FUN_0049cec0(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]));
  this_ptr_03 = g_CCrater_ARRAY_01cfaff8;
  g_INT_01cfaff4 = 0;
  do {
    core_fire_cpp_CCrater_reset_FUN_0049d570(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != g_CCrater_ARRAY_01cfaff8 + sizeof(g_CCrater_ARRAY_01cfaff8) / sizeof(g_CCrater_ARRAY_01cfaff8[0]));
  this_ptr_04 = g_CGunFlame_ARRAY_01cfb8bc;
  g_INT_01cfb8b8 = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_0049c670((CExplosion *)this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != g_CGunFlame_ARRAY_01cfb8bc + sizeof(g_CGunFlame_ARRAY_01cfb8bc) / sizeof(g_CGunFlame_ARRAY_01cfb8bc[0]));
  pCVar16 = g_CLightningBolt_ARRAY_01d00eb0;
  g_INT_01d00eac = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_0049f410(pCVar16);
    pCVar16 = pCVar16 + 1;
  } while (pCVar16 != g_CLightningBolt_ARRAY_01d00eb0 + sizeof(g_CLightningBolt_ARRAY_01d00eb0) / sizeof(g_CLightningBolt_ARRAY_01d00eb0[0]));
  g_INT_01d01ab0 = 0;
  this_ptr_05 = g_CTrail_ARRAY_01d01ab4;
  do {
    core_fire_cpp_CTrail_reset_FUN_004a05d0(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != g_CTrail_ARRAY_01d01ab4 + sizeof(g_CTrail_ARRAY_01d01ab4) / sizeof(g_CTrail_ARRAY_01d01ab4[0]));
  g_INT_01d028c4 = 0;
  pCVar17 = g_ShellPool;
  do {
    pCVar18 = pCVar17 + 1;
    (pCVar17->base).lifetime_remaining = 0.0;
    pCVar17 = pCVar18;
  } while (pCVar18 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]));
  g_INT_01d03b88 = 0;
  pCVar19 = g_PopcornPool;
  do {
    pCVar20 = pCVar19 + 1;
    (pCVar19->base).lifetime_remaining = 0.0;
    pCVar19 = pCVar20;
  } while (pCVar20 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]));
  g_INT_01d07b8c = 0;
  pCVar21 = g_RainDropPool;
  do {
    pCVar22 = pCVar21 + 1;
    (pCVar21->base).lifetime_remaining = 0.0;
    pCVar21 = pCVar22;
  } while (pCVar22 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  pCVar16 = &g_CLightningBolt_01d0bb94;
  g_INT_01d0bb90 = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_0049f410(pCVar16);
    pCVar16 = (CLightningBolt *)&pCVar16[10].start_position;
  } while (pCVar16 != (CLightningBolt *)&g_INT_01d0ce7c);
  this_ptr_06 = &g_CStormEffect_01d0ce80;
  g_INT_01d0ce7c = 0;
  do {
    core_fire_cpp_CStormEffect_reset_FUN_004a0470(this_ptr_06);
    this_ptr_06 = (CStormEffect *)(((CDemonActorType *)this_ptr_06)->class_name + 0xc);
  } while ((CDemonActorType *)this_ptr_06 != &g_CFirestaffClassInfo);
  return;
}
