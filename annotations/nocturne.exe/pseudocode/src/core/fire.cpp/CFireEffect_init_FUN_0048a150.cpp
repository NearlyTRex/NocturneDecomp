// Name: core_fire.cpp_CFireEffect_init_FUN_0048a150
// Address: 0048a150
// Address Range: [[0048a150, 0048a38c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_init_FUN_0048a150(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_init_FUN_0048a150(CFireEffect *this_ptr)

{
  byte *puVar1;
  uint *puVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  CSmokeParticle *this_ptr_00;
  CExplosion *this_ptr_01;
  CToss *this_ptr_02;
  CCrater *this_ptr_03;
  CGunFlame *this_ptr_04;
  CLightningBolt *this_ptr_05;
  CTrail *this_ptr_06;
  
  this_ptr_00 = (CSmokeParticle *)&DAT_01c0a140;
  _DAT_01c0a13c = 0;
  do {
    core_fire_cpp_CSmokeParticle_reset_FUN_00482770(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c20140);
  _DAT_01c20144 = 0;
  _DAT_01c20140 = 0;
  _DAT_01c49d50 = 0;
  puVar4 = (byte *)0x1c49d54;
  do {
    puVar1 = puVar4 + 0x4c;
    *(uint *)(puVar4 + 0x18) = 0;
    puVar4 = puVar1;
  } while (puVar1 != &DAT_01c4e954);
  puVar2 = (uint *)&DAT_01c4e958;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0x17;
  } while (puVar2 != (uint *)&DAT_01c4f088);
  _DAT_01c23d48 = 0;
  _DAT_01c4f088 = 0;
  _DAT_01c23d4c = 0;
  iVar5 = 0x1c4f08c;
  do {
    iVar3 = iVar5 + 0x9c;
    *(uint *)(iVar5 + 0x18) = 0;
    iVar5 = iVar3;
  } while (iVar3 != 0x1c58c8c);
  puVar4 = (byte *)0x1c58c90;
  do {
    puVar1 = puVar4 + 0x24;
    *(uint *)(puVar4 + 0x20) = 0;
    puVar4 = puVar1;
  } while (puVar1 != &DAT_01c58df8);
  _DAT_01c58df8 = 0;
  puVar4 = (byte *)0x1c58dfc;
  do {
    puVar1 = puVar4 + 0x9c;
    *(uint *)(puVar4 + 0x18) = 0;
    puVar4 = puVar1;
  } while (puVar1 != &DAT_01c5b4fc);
  _DAT_01c5b4fc = 0;
  puVar4 = (byte *)0x1c5b500;
  do {
    puVar1 = puVar4 + 0x48;
    *(uint *)(puVar4 + 0x18) = 0;
    puVar4 = puVar1;
  } while (puVar1 != &DAT_01c5c700);
  _DAT_01c5d704 = 0;
  this_ptr_01 = (CExplosion *)0x1c5d708;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_00486d90(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CExplosion *)&DAT_01c5d820);
  this_ptr_02 = (CToss *)0x1c5d824;
  _DAT_01c5d820 = 0;
  do {
    core_fire_cpp_CToss_reset_FUN_004873a0(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CToss *)&DAT_01c625f4);
  this_ptr_03 = (CCrater *)0x1c625f8;
  _DAT_01c625f4 = 0;
  do {
    core_fire_cpp_CCrater_reset_FUN_004876b0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CCrater *)&DAT_01c62eb8);
  this_ptr_04 = (CGunFlame *)&DAT_01c62ebc;
  _DAT_01c62eb8 = 0;
  do {
    core_fire_cpp_CGunFlame_reset_FUN_00488270(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGunFlame *)&DAT_01c6750c);
  this_ptr_05 = (CLightningBolt *)0x1c67510;
  _DAT_01c6750c = 0;
  do {
    core_fire_cpp_CLightningBolt_reset_FUN_00488b00(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CLightningBolt *)&DAT_01c676c8);
  this_ptr_06 = (CTrail *)0x1c676cc;
  _DAT_01c676c8 = 0;
  do {
    core_fire_cpp_CTrail_reset_FUN_004892b0(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CTrail *)&DAT_01c684dc);
  _DAT_01c684dc = 0;
  puVar4 = (byte *)0x1c684e0;
  do {
    puVar1 = puVar4 + 0x58;
    *(uint *)(puVar4 + 0x18) = 0;
    puVar4 = puVar1;
  } while (puVar1 != &DAT_01c69610);
  _DAT_01c69610 = 0;
  puVar4 = (byte *)0x1c69614;
  do {
    puVar1 = puVar4 + 0x38;
    *(uint *)(puVar4 + 0x18) = 0;
    puVar4 = puVar1;
  } while (puVar1 != &DAT_01c6ce14);
  _DAT_01c6ce14 = 0;
  iVar5 = 0x1c6ce18;
  do {
    iVar3 = iVar5 + 0x38;
    *(uint *)(iVar5 + 0x18) = 0;
    iVar5 = iVar3;
  } while ((CDemonActorType *)iVar3 != &g_CFlameActorType_01c70618);
  return;
}
