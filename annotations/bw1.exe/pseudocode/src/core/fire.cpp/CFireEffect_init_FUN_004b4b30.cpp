// Name: core_fire.cpp_CFireEffect_init_FUN_004b4b30
// Address: 004b4b30
// Address Range: [[004b4b30, 004b4dc1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_init_FUN_004b4b30(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_init_FUN_004b4b30(CFireEffect *this_ptr)

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
  
  this_ptr_00 = (CSmokeParticle *)&DAT_01c58aa0;
  _DAT_01c58a9c = 0;
  do {
    core_fire_cpp_FUN_004abea0(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c6eaa0);
  _DAT_01c6eaa4 = 0;
  _DAT_01c6eaa0 = 0;
  _DAT_01c986b0 = 0;
  pCVar1 = g_SparkPool;
  do {
    pCVar2 = pCVar1 + 1;
    *(uint *)&pCVar1->field_0x24 = 0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CSpark *)&DAT_01c9dab4);
  pCVar15 = CFirefly_ARRAY_01c9dab8;
  do {
    pCVar3 = pCVar15 + 1;
    *(uint *)&pCVar15->field_0x24 = 0;
    pCVar15 = pCVar3;
  } while (pCVar3 != (CFirefly *)&DAT_01c9f1b8);
  puVar4 = (uint *)&DAT_01c9f1bc;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 0x17;
  } while (puVar4 != (uint *)&DAT_01c9f8ec);
  _DAT_01c726a8 = 0;
  _DAT_01c9f8ec = 0;
  _DAT_01c726ac = 0;
  pCVar5 = g_GlassParticlePool;
  do {
    pCVar6 = pCVar5 + 1;
    *(uint *)&pCVar5->field_0x24 = 0;
    pCVar5 = pCVar6;
  } while (pCVar6 != (CGlassParticle *)0x1ca9cf0);
  puVar8 = (byte *)0x1ca9cf4;
  do {
    puVar7 = puVar8 + 0x24;
    *(uint *)(puVar8 + 0x20) = 0;
    puVar8 = puVar7;
  } while (puVar7 != &DAT_01ca9e5c);
  _DAT_01ca9e5c = 0;
  pCVar9 = g_FireballPool;
  do {
    pCVar10 = pCVar9 + 1;
    *(uint *)&pCVar9->field_0x24 = 0;
    pCVar9 = pCVar10;
  } while (pCVar10 != (CFireball *)&DAT_01cac760);
  _DAT_01cac760 = 0;
  pCVar11 = g_RockPool;
  do {
    pCVar12 = pCVar11 + 1;
    *(uint *)&pCVar11->field_0x24 = 0;
    pCVar11 = pCVar12;
  } while (pCVar12 != (CRock *)&DAT_01cadb64);
  _DAT_01cadb64 = 0;
  pCVar13 = CLeaf_ARRAY_01cadb68;
  do {
    pCVar14 = pCVar13 + 1;
    *(uint *)&pCVar13->field_0x24 = 0;
    pCVar13 = pCVar14;
  } while (pCVar14 != (CLeaf *)&DAT_01caf068);
  _DAT_01c9dab4 = 0;
  pCVar15 = CFirefly_ARRAY_01c9dab8;
  do {
    pCVar3 = pCVar15 + 1;
    *(uint *)&pCVar15->field_0x24 = 0;
    pCVar15 = pCVar3;
  } while (pCVar3 != (CFirefly *)&DAT_01c9f1b8);
  this_ptr_01 = (CExplosion *)0x1cb0070;
  _DAT_01cb006c = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_004b1620(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CExplosion *)&DAT_01cb0188);
  this_ptr_02 = g_TossPool;
  _DAT_01cb0188 = 0;
  do {
    core_fire_cpp_CToss_reset_FUN_004b1c40(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CToss *)&DAT_01cb4f5c);
  this_ptr_03 = (CCrater *)0x1cb4f60;
  _DAT_01cb4f5c = 0;
  do {
    core_fire_cpp_FUN_004b1f90(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CCrater *)&DAT_01cb5820);
  this_ptr_04 = (CGunFlame *)&DAT_01cb5824;
  _DAT_01cb5820 = 0;
  do {
    core_fire_cpp_FUN_004b2b40(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGunFlame *)&DAT_01cb9e74);
  this_ptr_05 = (CLightningBolt *)0x1cb9e78;
  _DAT_01cb9e74 = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_004b3480(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CLightningBolt *)&DAT_01cba030);
  _DAT_01cba030 = 0;
  this_ptr_06 = (CTrail *)0x1cba034;
  do {
    core_fire_cpp_CTrail_reset_FUN_004b3c70(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CTrail *)&DAT_01cbae44);
  _DAT_01cbae44 = 0;
  pCVar16 = g_ShellPool;
  do {
    pCVar17 = pCVar16 + 1;
    *(uint *)&pCVar16->field_0x24 = 0;
    pCVar16 = pCVar17;
  } while (pCVar17 != (CShell *)&DAT_01cbc108);
  _DAT_01cbc108 = 0;
  pCVar18 = g_PopcornPool;
  do {
    pCVar19 = pCVar18 + 1;
    *(uint *)&pCVar18->field_0x24 = 0;
    pCVar18 = pCVar19;
  } while (pCVar19 != (CPopcorn *)&DAT_01cc010c);
  _DAT_01cc010c = 0;
  pCVar20 = g_RainDropPool;
  do {
    pCVar21 = pCVar20 + 1;
    *(uint *)&pCVar20->field_0x24 = 0;
    pCVar20 = pCVar21;
  } while (pCVar21 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  return;
}
