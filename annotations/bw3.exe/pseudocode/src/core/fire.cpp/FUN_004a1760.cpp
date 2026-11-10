// Name: core_fire.cpp_FUN_004a1760
// Address: 004a1760
// Address Range: [[004a1760, 004a1ac4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a1760(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a1760(void)

{
  bool bVar1;
  int *piVar2;
  CSpark *pCVar3;
  CFirefly *pCVar4;
  CMuzzleFlash *this_ptr;
  CStake *this_ptr_00;
  CGlassParticle *pCVar5;
  CBulletTrail *this_ptr_01;
  CFireball *pCVar6;
  CRock *pCVar7;
  CLeaf *pCVar8;
  byte *puVar9;
  CExplosion *this_ptr_02;
  CToss *pCVar10;
  CCrater *this_ptr_03;
  CGunFlame *this_ptr_04;
  CLightningBolt *this_ptr_05;
  CTrail *this_ptr_06;
  CShell *pCVar11;
  CPopcorn *pCVar12;
  CRainDrop *pCVar13;
  CDemonActorType *pCVar14;
  int iVar15;
  
  piVar2 = (int *)&DAT_01c74ea0;
  _DAT_01cf5088 = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_0049c620();
  do {
    if (*piVar2 != 0) {
      core_fire_cpp_FUN_00496e00(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c8aea0);
  pCVar3 = g_SparkPool;
  do {
    if (0.0 < *(float *)&pCVar3->field_0x24) {
      (**(code **)(*(int *)&pCVar3->field_0x3c + 4))(pCVar3);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSpark *)&DAT_01cba2b4);
  pCVar4 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 4))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01cbb9b8);
  this_ptr = (CMuzzleFlash *)&DAT_01cbb9bc;
  do {
    if (*(int *)this_ptr != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_0049a450(this_ptr);
    }
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CMuzzleFlash *)&DAT_01cbc0ec);
  iVar15 = 0;
  if (0 < _DAT_01c8eea8) {
    this_ptr_00 = g_StakePool;
    do {
      if ((this_ptr_00->physics_box).is_valid != 0) {
        core_fire_cpp_CStake_process_FUN_00497e80(this_ptr_00);
      }
      iVar15 = iVar15 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar15 < _DAT_01c8eea8);
  }
  pCVar5 = CGlassParticle_ARRAY_01cbc0f0;
  do {
    if (0.0 < *(float *)&pCVar5->field_0x24) {
      (**(code **)(*(int *)&pCVar5->field_0x3c + 4))(pCVar5);
    }
    pCVar5 = pCVar5 + 1;
  } while (pCVar5 != (CGlassParticle *)&DAT_01cefd10);
  this_ptr_01 = (CBulletTrail *)0x1cefd14;
  do {
    if (this_ptr_01->frames_remaining != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_0049ad00(this_ptr_01);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CBulletTrail *)&DAT_01cefe7c);
  pCVar6 = g_FireballPool;
  do {
    if (0.0 < *(float *)&pCVar6->field_0x24) {
      (**(code **)(*(int *)&pCVar6->field_0x3c + 4))(pCVar6);
    }
    pCVar6 = pCVar6 + 1;
  } while (pCVar6 != (CFireball *)&DAT_01cf2780);
  pCVar7 = g_RockPool;
  do {
    if (0.0 < *(float *)&pCVar7->field_0x24) {
      (**(code **)(*(int *)&pCVar7->field_0x3c + 4))(pCVar7);
    }
    pCVar7 = pCVar7 + 1;
  } while (pCVar7 != (CRock *)&DAT_01cf3b84);
  pCVar8 = CLeaf_ARRAY_01cf3b88;
  do {
    if (0.0 < *(float *)&pCVar8->field_0x24) {
      (**(code **)(*(int *)&pCVar8->field_0x3c + 4))(pCVar8);
    }
    pCVar8 = pCVar8 + 1;
  } while (pCVar8 != (CLeaf *)&DAT_01cf5088);
  pCVar4 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 4))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01cbb9b8);
  iVar15 = 0;
  if (0 < _DAT_01c8aea0) {
    puVar9 = &DAT_01c8aea8;
    do {
      core_fire_cpp_FUN_00497540(puVar9);
      iVar15 = iVar15 + 1;
      puVar9 = puVar9 + 0x40;
    } while (iVar15 < _DAT_01c8aea0);
  }
  this_ptr_02 = (CExplosion *)0x1cf6090;
  do {
    core_fire_cpp_CExplosion_process_FUN_0049c890(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CExplosion *)&DAT_01cf61d0);
  pCVar10 = g_TossPool;
  do {
    core_fire_cpp_FUN_0049d090(pCVar10);
    pCVar10 = pCVar10 + 1;
  } while (pCVar10 != (CToss *)&DAT_01cfaff4);
  this_ptr_03 = (CCrater *)0x1cfaff8;
  do {
    core_fire_cpp_CCrater_process_FUN_0049d8b0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CCrater *)&DAT_01cfb8b8);
  this_ptr_04 = (CGunFlame *)0x1cfb8bc;
  bVar1 = false;
  do {
    if ((*(uint *)&this_ptr_04->field_0xc & 0x7fffffff) != 0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_0049de60();
        bVar1 = true;
      }
      core_fire_cpp_FUN_0049e390(this_ptr_04);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGunFlame *)&DAT_01d00eac);
  this_ptr_05 = (CLightningBolt *)0x1d00eb0;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_0049f4e0(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CLightningBolt *)&DAT_01d01ab0);
  this_ptr_06 = (CTrail *)0x1d01ab4;
  do {
    core_fire_cpp_CTrail_process_FUN_004a0630(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CTrail *)&DAT_01d028c4);
  pCVar11 = g_ShellPool;
  do {
    (**(code **)(*(int *)&pCVar11->field_0x3c + 4))(pCVar11);
    pCVar11 = pCVar11 + 1;
  } while (pCVar11 != (CShell *)&DAT_01d03b88);
  pCVar12 = g_PopcornPool;
  do {
    if (0.0 < *(float *)&pCVar12->field_0x24) {
      (**(code **)(*(int *)&pCVar12->field_0x3c + 4))(pCVar12);
    }
    pCVar12 = pCVar12 + 1;
  } while (pCVar12 != (CPopcorn *)&DAT_01d07b8c);
  pCVar13 = g_RainDropPool;
  do {
    if (0.0 < *(float *)&pCVar13->field_0x24) {
      (**(code **)(*(int *)&pCVar13->field_0x3c + 4))(pCVar13);
    }
    pCVar13 = pCVar13 + 1;
  } while (pCVar13 != (CRainDrop *)&DAT_01d0bb90);
  puVar9 = (byte *)0x1d0bb94;
  do {
    core_fire_cpp_FUN_0049fdf0(puVar9);
    puVar9 = puVar9 + 0x1e4;
  } while (puVar9 != &DAT_01d0ce7c);
  pCVar14 = (CDemonActorType *)0x1d0ce80;
  do {
    core_fire_cpp_FUN_004a0570(pCVar14);
    pCVar14 = (CDemonActorType *)(pCVar14->class_name + 0xc);
  } while (pCVar14 != &g_CFirestaffClassInfo);
  return;
}
