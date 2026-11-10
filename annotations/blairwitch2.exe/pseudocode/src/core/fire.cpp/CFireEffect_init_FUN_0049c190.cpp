// Name: core_fire.cpp_CFireEffect_init_FUN_0049c190
// Address: 0049c190
// Address Range: [[0049c190, 0049c42a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_init_FUN_0049c190(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_init_FUN_0049c190(CFireEffect *this_ptr)

{
  CSpark *pCVar1;
  CFirefly *pCVar3;
  uint *puVar4;
  CGlassParticle *pCVar5;
  byte *puVar7;
  CFireball *pCVar9;
  CRock *pCVar11;
  CLeaf *pCVar13;
  CFirefly *pCVar15;
  CShell *pCVar16;
  CPopcorn *pCVar18;
  CRainDrop *pCVar20;
  CSmokeParticle *this_ptr_00;
  uint *puVar22;
  CExplosion *this_ptr_01;
  CToss *this_ptr_02;
  CCrater *this_ptr_03;
  CGunFlame *this_ptr_04;
  CLightningBolt *this_ptr_05;
  CTrail *this_ptr_06;
  CSpark *pCVar2;
  CGlassParticle *pCVar6;
  byte *puVar8;
  CFireball *pCVar10;
  CRock *pCVar12;
  CLeaf *pCVar14;
  CShell *pCVar17;
  CPopcorn *pCVar19;
  CRainDrop *pCVar21;
  
  this_ptr_00 = (CSmokeParticle *)&DAT_01c3f8e0;
  _DAT_01c3f8dc = 0;
  do {
    core_fire_cpp_CSmokeParticle_reset_FUN_00493500(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c558e0);
  _DAT_01c558e4 = 0;
  _DAT_01c558e0 = 0;
  _DAT_01c7f4f0 = 0;
  pCVar1 = g_SparkPool;
  do {
    pCVar2 = pCVar1 + 1;
    *(uint *)&pCVar1->field_0x24 = 0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CSpark *)&DAT_01c848f4);
  pCVar15 = CFirefly_ARRAY_01c848f8;
  do {
    pCVar3 = pCVar15 + 1;
    *(uint *)&pCVar15->field_0x24 = 0;
    pCVar15 = pCVar3;
  } while (pCVar3 != (CFirefly *)&DAT_01c85ff8);
  puVar4 = (uint *)&DAT_01c85ffc;
  puVar22 = (uint *)&DAT_01c86730;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 0x17;
    *puVar22 = 0;
    puVar22 = puVar22 + 0x17;
  } while (puVar4 != (uint *)&DAT_01c8672c);
  _DAT_01c594e8 = 0;
  _DAT_01c86e60 = 0;
  _DAT_01c594ec = 0;
  pCVar5 = g_GlassParticlePool;
  do {
    pCVar6 = pCVar5 + 1;
    *(uint *)&pCVar5->field_0x24 = 0;
    pCVar5 = pCVar6;
  } while (pCVar6 != (CGlassParticle *)0x1c91264);
  puVar8 = (byte *)0x1c91268;
  do {
    puVar7 = puVar8 + 0x24;
    *(uint *)(puVar8 + 0x20) = 0;
    puVar8 = puVar7;
  } while (puVar7 != &DAT_01c913d0);
  _DAT_01c913d0 = 0;
  pCVar9 = g_FireballPool;
  do {
    pCVar10 = pCVar9 + 1;
    *(uint *)&pCVar9->field_0x24 = 0;
    pCVar9 = pCVar10;
  } while (pCVar10 != (CFireball *)&DAT_01c93cd4);
  _DAT_01c93cd4 = 0;
  pCVar11 = g_RockPool;
  do {
    pCVar12 = pCVar11 + 1;
    *(uint *)&pCVar11->field_0x24 = 0;
    pCVar11 = pCVar12;
  } while (pCVar12 != (CRock *)&DAT_01c950d8);
  _DAT_01c950d8 = 0;
  pCVar13 = CLeaf_ARRAY_01c950dc;
  do {
    pCVar14 = pCVar13 + 1;
    *(uint *)&pCVar13->field_0x24 = 0;
    pCVar13 = pCVar14;
  } while (pCVar14 != (CLeaf *)&DAT_01c965dc);
  _DAT_01c848f4 = 0;
  pCVar15 = CFirefly_ARRAY_01c848f8;
  do {
    pCVar3 = pCVar15 + 1;
    *(uint *)&pCVar15->field_0x24 = 0;
    pCVar15 = pCVar3;
  } while (pCVar3 != (CFirefly *)&DAT_01c85ff8);
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
  pCVar16 = g_ShellPool;
  do {
    pCVar17 = pCVar16 + 1;
    *(uint *)&pCVar16->field_0x24 = 0;
    pCVar16 = pCVar17;
  } while (pCVar17 != (CShell *)&DAT_01ca367c);
  _DAT_01ca367c = 0;
  pCVar18 = g_PopcornPool;
  do {
    pCVar19 = pCVar18 + 1;
    *(uint *)&pCVar18->field_0x24 = 0;
    pCVar18 = pCVar19;
  } while (pCVar19 != (CPopcorn *)&DAT_01ca7680);
  _DAT_01ca7680 = 0;
  pCVar20 = g_RainDropPool;
  do {
    pCVar21 = pCVar20 + 1;
    *(uint *)&pCVar20->field_0x24 = 0;
    pCVar20 = pCVar21;
  } while (pCVar21 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  return;
}
