// Name: core_fire.cpp_FUN_004a1480
// Address: 004a1480
// Address Range: [[004a1480, 004a175a]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a1480(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a1480(void)

{
  CSmokeParticle *this_ptr;
  CSpark *pCVar1;
  CFirefly *pCVar3;
  uint *puVar4;
  CGlassParticle *pCVar5;
  byte *puVar7;
  CFireball *pCVar8;
  CRock *pCVar10;
  CLeaf *pCVar12;
  CFirefly *pCVar14;
  CExplosion *pCVar15;
  CToss *this_ptr_00;
  byte *puVar16;
  CLightningBolt *pCVar17;
  CTrail *this_ptr_01;
  CShell *pCVar18;
  CPopcorn *pCVar20;
  CRainDrop *pCVar22;
  CDemonActorType *pCVar24;
  CSpark *pCVar2;
  CGlassParticle *pCVar6;
  CFireball *pCVar9;
  CRock *pCVar11;
  CLeaf *pCVar13;
  CShell *pCVar19;
  CPopcorn *pCVar21;
  CRainDrop *pCVar23;
  
  this_ptr = (CSmokeParticle *)&DAT_01c74ea0;
  _DAT_01c74e9c = 0;
  do {
    core_fire_cpp_FUN_00496d50(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSmokeParticle *)&DAT_01c8aea0);
  _DAT_01c8aea4 = 0;
  _DAT_01c8aea0 = 0;
  _DAT_01cb4eb0 = 0;
  pCVar1 = g_SparkPool;
  do {
    pCVar2 = pCVar1 + 1;
    *(uint *)&pCVar1->field_0x24 = 0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CSpark *)&DAT_01cba2b4);
  pCVar14 = CFirefly_ARRAY_01cba2b8;
  do {
    pCVar3 = pCVar14 + 1;
    *(uint *)&pCVar14->field_0x24 = 0;
    pCVar14 = pCVar3;
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
    *(uint *)&pCVar5->field_0x24 = 0;
    pCVar5 = pCVar6;
  } while (pCVar6 != (CGlassParticle *)&DAT_01cefd10);
  puVar16 = (byte *)0x1cefd14;
  do {
    puVar7 = puVar16 + 0x24;
    *(uint *)(puVar16 + 0x20) = 0;
    puVar16 = puVar7;
  } while (puVar7 != &DAT_01cefe7c);
  _DAT_01cefe7c = 0;
  pCVar8 = g_FireballPool;
  do {
    pCVar9 = pCVar8 + 1;
    *(uint *)&pCVar8->field_0x24 = 0;
    pCVar8 = pCVar9;
  } while (pCVar9 != (CFireball *)&DAT_01cf2780);
  _DAT_01cf2780 = 0;
  pCVar10 = g_RockPool;
  do {
    pCVar11 = pCVar10 + 1;
    *(uint *)&pCVar10->field_0x24 = 0;
    pCVar10 = pCVar11;
  } while (pCVar11 != (CRock *)&DAT_01cf3b84);
  _DAT_01cf3b84 = 0;
  pCVar12 = CLeaf_ARRAY_01cf3b88;
  do {
    pCVar13 = pCVar12 + 1;
    *(uint *)&pCVar12->field_0x24 = 0;
    pCVar12 = pCVar13;
  } while (pCVar13 != (CLeaf *)&DAT_01cf5088);
  _DAT_01cba2b4 = 0;
  pCVar14 = CFirefly_ARRAY_01cba2b8;
  do {
    pCVar3 = pCVar14 + 1;
    *(uint *)&pCVar14->field_0x24 = 0;
    pCVar14 = pCVar3;
  } while (pCVar3 != (CFirefly *)&DAT_01cbb9b8);
  pCVar15 = (CExplosion *)0x1cf6090;
  _DAT_01cf608c = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_0049c670(pCVar15);
    pCVar15 = pCVar15 + 1;
  } while (pCVar15 != (CExplosion *)&DAT_01cf61d0);
  this_ptr_00 = g_TossPool;
  _DAT_01cf61d0 = 0;
  do {
    core_fire_cpp_CToss_reset_FUN_0049cec0(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CToss *)&DAT_01cfaff4);
  puVar16 = (byte *)0x1cfaff8;
  _DAT_01cfaff4 = 0;
  do {
    core_fire_cpp_FUN_0049d570(puVar16);
    puVar16 = puVar16 + 0x70;
  } while (puVar16 != &DAT_01cfb8b8);
  pCVar15 = (CExplosion *)0x1cfb8bc;
  _DAT_01cfb8b8 = 0;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_0049c670(pCVar15);
    pCVar15 = (CExplosion *)&pCVar15[1].field_0xc;
  } while (pCVar15 != (CExplosion *)&DAT_01d00eac);
  pCVar17 = (CLightningBolt *)0x1d00eb0;
  _DAT_01d00eac = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_0049f410(pCVar17);
    pCVar17 = pCVar17 + 1;
  } while (pCVar17 != (CLightningBolt *)&DAT_01d01ab0);
  _DAT_01d01ab0 = 0;
  this_ptr_01 = (CTrail *)0x1d01ab4;
  do {
    core_fire_cpp_CTrail_reset_FUN_004a05d0(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CTrail *)&DAT_01d028c4);
  _DAT_01d028c4 = 0;
  pCVar18 = g_ShellPool;
  do {
    pCVar19 = pCVar18 + 1;
    *(uint *)&pCVar18->field_0x24 = 0;
    pCVar18 = pCVar19;
  } while (pCVar19 != (CShell *)&DAT_01d03b88);
  _DAT_01d03b88 = 0;
  pCVar20 = g_PopcornPool;
  do {
    pCVar21 = pCVar20 + 1;
    *(uint *)&pCVar20->field_0x24 = 0;
    pCVar20 = pCVar21;
  } while (pCVar21 != (CPopcorn *)&DAT_01d07b8c);
  _DAT_01d07b8c = 0;
  pCVar22 = g_RainDropPool;
  do {
    pCVar23 = pCVar22 + 1;
    *(uint *)&pCVar22->field_0x24 = 0;
    pCVar22 = pCVar23;
  } while (pCVar23 != (CRainDrop *)&DAT_01d0bb90);
  pCVar17 = (CLightningBolt *)0x1d0bb94;
  _DAT_01d0bb90 = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_0049f410(pCVar17);
    pCVar17 = (CLightningBolt *)&pCVar17[10].field_0x4;
  } while (pCVar17 != (CLightningBolt *)&DAT_01d0ce7c);
  pCVar24 = (CDemonActorType *)0x1d0ce80;
  _DAT_01d0ce7c = 0;
  do {
    core_fire_cpp_FUN_004a0470(pCVar24);
    pCVar24 = (CDemonActorType *)(pCVar24->class_name + 0xc);
  } while (pCVar24 != &g_CFirestaffClassInfo);
  return;
}
