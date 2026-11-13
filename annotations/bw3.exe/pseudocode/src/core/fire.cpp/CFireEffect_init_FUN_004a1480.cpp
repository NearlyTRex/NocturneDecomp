// Name: core_fire.cpp_CFireEffect_init_FUN_004a1480
// Address: 004a1480
// Address Range: [[004a1480, 004a175a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_init_FUN_004a1480(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_init_FUN_004a1480(CFireEffect *this_ptr)

{
  CSmokeParticle *this_ptr_00;
  CSpark *pCVar1;
  CFirefly *pCVar3;
  uint *puVar4;
  CGlassParticle *pCVar5;
  byte *puVar7;
  CFireball *pCVar9;
  CRock *pCVar11;
  CLeaf *pCVar13;
  CFirefly *pCVar15;
  CExplosion *pCVar16;
  CToss *this_ptr_01;
  CCrater *this_ptr_02;
  CLightningBolt *pCVar17;
  CTrail *this_ptr_03;
  CShell *pCVar18;
  CPopcorn *pCVar20;
  CRainDrop *pCVar22;
  CDemonActorType *this_ptr_04;
  CSpark *pCVar2;
  CGlassParticle *pCVar6;
  byte *puVar8;
  CFireball *pCVar10;
  CRock *pCVar12;
  CLeaf *pCVar14;
  CShell *pCVar19;
  CPopcorn *pCVar21;
  CRainDrop *pCVar23;
  
  this_ptr_00 = (CSmokeParticle *)&DAT_01c74ea0;
  _DAT_01c74e9c = 0;
  do {
    core_fire_cpp_CSmokeParticle_reset_FUN_00496d50(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c8aea0);
  _DAT_01c8aea4 = 0;
  _DAT_01c8aea0 = 0;
  _DAT_01cb4eb0 = 0;
  pCVar1 = g_SparkPool;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CSpark *)&DAT_01cba2b4);
  pCVar15 = CFirefly_ARRAY_01cba2b8;
  do {
    pCVar3 = pCVar15 + 1;
    (pCVar15->base).lifetime_remaining = 0.0;
    pCVar15 = pCVar3;
  } while (pCVar3 != (CFirefly *)&DAT_01cbb9b8);
  puVar4 = (uint *)&DAT_01cbb9bc;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 0x17;
  } while (puVar4 != (uint *)&DAT_01cbc0ec);
  _DAT_01c8eea8 = 0;
  _DAT_01c8eeac = 0;
  _DAT_01cbc0ec = 0;
  pCVar5 = CGlassParticle_ARRAY_01cbc0f0;
  do {
    pCVar6 = pCVar5 + 1;
    (pCVar5->base).lifetime_remaining = 0.0;
    pCVar5 = pCVar6;
  } while (pCVar6 != (CGlassParticle *)&DAT_01cefd10);
  puVar8 = (byte *)0x1cefd14;
  do {
    puVar7 = puVar8 + 0x24;
    *(uint *)(puVar8 + 0x20) = 0;
    puVar8 = puVar7;
  } while (puVar7 != &DAT_01cefe7c);
  _DAT_01cefe7c = 0;
  pCVar9 = g_FireballPool;
  do {
    pCVar10 = pCVar9 + 1;
    (pCVar9->base).lifetime_remaining = 0.0;
    pCVar9 = pCVar10;
  } while (pCVar10 != (CFireball *)&DAT_01cf2780);
  _DAT_01cf2780 = 0;
  pCVar11 = g_RockPool;
  do {
    pCVar12 = pCVar11 + 1;
    (pCVar11->base).lifetime_remaining = 0.0;
    pCVar11 = pCVar12;
  } while (pCVar12 != (CRock *)&DAT_01cf3b84);
  _DAT_01cf3b84 = 0;
  pCVar13 = CLeaf_ARRAY_01cf3b88;
  do {
    pCVar14 = pCVar13 + 1;
    (pCVar13->base).lifetime_remaining = 0.0;
    pCVar13 = pCVar14;
  } while (pCVar14 != (CLeaf *)&DAT_01cf5088);
  _DAT_01cba2b4 = 0;
  pCVar15 = CFirefly_ARRAY_01cba2b8;
  do {
    pCVar3 = pCVar15 + 1;
    (pCVar15->base).lifetime_remaining = 0.0;
    pCVar15 = pCVar3;
  } while (pCVar3 != (CFirefly *)&DAT_01cbb9b8);
  pCVar16 = (CExplosion *)0x1cf6090;
  _DAT_01cf608c = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_0049c670(pCVar16);
    pCVar16 = pCVar16 + 1;
  } while (pCVar16 != (CExplosion *)&DAT_01cf61d0);
  this_ptr_01 = g_TossPool;
  _DAT_01cf61d0 = 0;
  do {
    core_fire_cpp_CToss_reset_FUN_0049cec0(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CToss *)&DAT_01cfaff4);
  this_ptr_02 = (CCrater *)0x1cfaff8;
  _DAT_01cfaff4 = 0;
  do {
    core_fire_cpp_CCrater_reset_FUN_0049d570(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CCrater *)&DAT_01cfb8b8);
  pCVar16 = (CExplosion *)0x1cfb8bc;
  _DAT_01cfb8b8 = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_0049c670(pCVar16);
    pCVar16 = (CExplosion *)&pCVar16[1].lifetime;
  } while (pCVar16 != (CExplosion *)&DAT_01d00eac);
  pCVar17 = (CLightningBolt *)0x1d00eb0;
  _DAT_01d00eac = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_0049f410(pCVar17);
    pCVar17 = pCVar17 + 1;
  } while (pCVar17 != (CLightningBolt *)&DAT_01d01ab0);
  _DAT_01d01ab0 = 0;
  this_ptr_03 = (CTrail *)0x1d01ab4;
  do {
    core_fire_cpp_CTrail_reset_FUN_004a05d0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CTrail *)&DAT_01d028c4);
  _DAT_01d028c4 = 0;
  pCVar18 = g_ShellPool;
  do {
    pCVar19 = pCVar18 + 1;
    (pCVar18->base).lifetime_remaining = 0.0;
    pCVar18 = pCVar19;
  } while (pCVar19 != (CShell *)&DAT_01d03b88);
  _DAT_01d03b88 = 0;
  pCVar20 = g_PopcornPool;
  do {
    pCVar21 = pCVar20 + 1;
    (pCVar20->base).lifetime_remaining = 0.0;
    pCVar20 = pCVar21;
  } while (pCVar21 != (CPopcorn *)&DAT_01d07b8c);
  _DAT_01d07b8c = 0;
  pCVar22 = g_RainDropPool;
  do {
    pCVar23 = pCVar22 + 1;
    (pCVar22->base).lifetime_remaining = 0.0;
    pCVar22 = pCVar23;
  } while (pCVar23 != (CRainDrop *)&DAT_01d0bb90);
  pCVar17 = (CLightningBolt *)0x1d0bb94;
  _DAT_01d0bb90 = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_0049f410(pCVar17);
    pCVar17 = (CLightningBolt *)&pCVar17[10].start_position;
  } while (pCVar17 != (CLightningBolt *)&DAT_01d0ce7c);
  this_ptr_04 = (CDemonActorType *)0x1d0ce80;
  _DAT_01d0ce7c = 0;
  do {
    core_fire_cpp_CStormEffect_reset_FUN_004a0470((CStormEffect *)this_ptr_04);
    this_ptr_04 = (CDemonActorType *)(this_ptr_04->class_name + 0xc);
  } while (this_ptr_04 != &g_CFirestaffClassInfo);
  return;
}
