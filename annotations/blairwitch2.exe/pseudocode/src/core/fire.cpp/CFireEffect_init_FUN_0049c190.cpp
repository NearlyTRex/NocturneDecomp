// Name: core_fire.cpp_CFireEffect_init_FUN_0049c190
// Address: 0049c190
// Address Range: [[0049c190, 0049c42a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_init_FUN_0049c190(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_init_FUN_0049c190(CFireEffect *this_ptr)

{
  CDemonActorType *pCVar1;
  CSpark *pCVar2;
  CFirefly *pCVar4;
  uint *puVar5;
  CGlassParticle *pCVar6;
  byte *puVar8;
  CFireball *pCVar10;
  CRock *pCVar12;
  CLeaf *pCVar14;
  CFirefly *pCVar16;
  CShell *pCVar17;
  CPopcorn *pCVar19;
  CDemonActorType *pCVar21;
  CSmokeParticle *this_ptr_00;
  uint *puVar22;
  CExplosion *this_ptr_01;
  CToss *this_ptr_02;
  CCrater *this_ptr_03;
  CGunFlame *this_ptr_04;
  CLightningBolt *this_ptr_05;
  CTrail *this_ptr_06;
  CSpark *pCVar3;
  CGlassParticle *pCVar7;
  byte *puVar9;
  CFireball *pCVar11;
  CRock *pCVar13;
  CLeaf *pCVar15;
  CShell *pCVar18;
  CPopcorn *pCVar20;
  
  this_ptr_00 = (CSmokeParticle *)&DAT_01c3f8e0;
  _DAT_01c3f8dc = 0;
  do {
    core_fire_cpp_CSmokeParticle_reset_FUN_00493500(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c558e0);
  _DAT_01c558e4 = 0;
  _DAT_01c558e0 = 0;
  _DAT_01c7f4f0 = 0;
  pCVar2 = g_SparkPool;
  do {
    pCVar3 = pCVar2 + 1;
    (pCVar2->base).lifetime_remaining = 0.0;
    pCVar2 = pCVar3;
  } while (pCVar3 != (CSpark *)&DAT_01c848f4);
  pCVar16 = CFirefly_ARRAY_01c848f8;
  do {
    pCVar4 = pCVar16 + 1;
    (pCVar16->base).lifetime_remaining = 0.0;
    pCVar16 = pCVar4;
  } while (pCVar4 != (CFirefly *)&DAT_01c85ff8);
  puVar5 = (uint *)&DAT_01c85ffc;
  puVar22 = (uint *)&DAT_01c86730;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 0x17;
    *puVar22 = 0;
    puVar22 = puVar22 + 0x17;
  } while (puVar5 != (uint *)&DAT_01c8672c);
  _DAT_01c594e8 = 0;
  _DAT_01c86e60 = 0;
  _DAT_01c594ec = 0;
  pCVar6 = g_GlassParticlePool;
  do {
    pCVar7 = pCVar6 + 1;
    (pCVar6->base).lifetime_remaining = 0.0;
    pCVar6 = pCVar7;
  } while (pCVar7 != (CGlassParticle *)&DAT_01c91264);
  puVar9 = (byte *)0x1c91268;
  do {
    puVar8 = puVar9 + 0x24;
    *(uint *)(puVar9 + 0x20) = 0;
    puVar9 = puVar8;
  } while (puVar8 != &DAT_01c913d0);
  _DAT_01c913d0 = 0;
  pCVar10 = g_FireballPool;
  do {
    pCVar11 = pCVar10 + 1;
    (pCVar10->base).lifetime_remaining = 0.0;
    pCVar10 = pCVar11;
  } while (pCVar11 != (CFireball *)&DAT_01c93cd4);
  _DAT_01c93cd4 = 0;
  pCVar12 = g_RockPool;
  do {
    pCVar13 = pCVar12 + 1;
    (pCVar12->base).lifetime_remaining = 0.0;
    pCVar12 = pCVar13;
  } while (pCVar13 != (CRock *)&DAT_01c950d8);
  _DAT_01c950d8 = 0;
  pCVar14 = CLeaf_ARRAY_01c950dc;
  do {
    pCVar15 = pCVar14 + 1;
    (pCVar14->base).lifetime_remaining = 0.0;
    pCVar14 = pCVar15;
  } while (pCVar15 != (CLeaf *)&DAT_01c965dc);
  _DAT_01c848f4 = 0;
  pCVar16 = CFirefly_ARRAY_01c848f8;
  do {
    pCVar4 = pCVar16 + 1;
    (pCVar16->base).lifetime_remaining = 0.0;
    pCVar16 = pCVar4;
  } while (pCVar4 != (CFirefly *)&DAT_01c85ff8);
  this_ptr_01 = (CExplosion *)0x1c975e4;
  _DAT_01c975e0 = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_00498c80(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CExplosion *)&DAT_01c976fc);
  this_ptr_02 = g_TossPool;
  _DAT_01c976fc = 0;
  do {
    core_fire_cpp_CToss_reset_FUN_004992a0(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CToss *)&DAT_01c9c4d0);
  this_ptr_03 = (CCrater *)0x1c9c4d4;
  _DAT_01c9c4d0 = 0;
  do {
    core_fire_cpp_CCrater_reset_FUN_004995f0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CCrater *)&DAT_01c9cd94);
  this_ptr_04 = (CGunFlame *)&DAT_01c9cd98;
  _DAT_01c9cd94 = 0;
  do {
    core_fire_cpp_CGunFlame_reset_FUN_0049a1a0(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGunFlame *)&DAT_01ca13e8);
  this_ptr_05 = (CLightningBolt *)0x1ca13ec;
  _DAT_01ca13e8 = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_0049aae0(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CLightningBolt *)&DAT_01ca15a4);
  _DAT_01ca15a4 = 0;
  this_ptr_06 = (CTrail *)0x1ca15a8;
  do {
    core_fire_cpp_CTrail_reset_FUN_0049b2d0(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CTrail *)&DAT_01ca23b8);
  _DAT_01ca23b8 = 0;
  pCVar17 = g_ShellPool;
  do {
    pCVar18 = pCVar17 + 1;
    (pCVar17->base).lifetime_remaining = 0.0;
    pCVar17 = pCVar18;
  } while (pCVar18 != (CShell *)&DAT_01ca367c);
  _DAT_01ca367c = 0;
  pCVar19 = g_PopcornPool;
  do {
    pCVar20 = pCVar19 + 1;
    (pCVar19->base).lifetime_remaining = 0.0;
    pCVar19 = pCVar20;
  } while (pCVar20 != (CPopcorn *)&DAT_01ca7680);
  _DAT_01ca7680 = 0;
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
