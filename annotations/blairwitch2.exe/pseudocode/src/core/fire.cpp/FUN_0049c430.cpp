// Name: core_fire.cpp_FUN_0049c430
// Address: 0049c430
// Address Range: [[0049c430, 0049c77d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049c430(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_0049c430(CFireEffect *this_ptr)

{
  bool bVar1;
  int *piVar2;
  CSpark *pCVar3;
  CFirefly *pCVar4;
  CStake *this_ptr_00;
  CGlassParticle *pCVar5;
  CBulletTrail *this_ptr_01;
  CFireball *pCVar6;
  CRock *pCVar7;
  CLeaf *pCVar8;
  CExplosion *this_ptr_02;
  CToss *this_ptr_03;
  CCrater *this_ptr_04;
  CGunFlame *this_ptr_05;
  CLightningBolt *this_ptr_06;
  CTrail *this_ptr_07;
  CShell *pCVar9;
  CPopcorn *pCVar10;
  CRainDrop *pCVar11;
  CMuzzleFlash *this_ptr_08;
  int iVar12;
  byte *puVar13;
  
  piVar2 = (int *)&DAT_01c3f8e0;
  _DAT_01c965dc = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_00498c30();
  do {
    if (*piVar2 != 0) {
      core_fire_cpp_FUN_004935b0(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c558e0);
  pCVar3 = g_SparkPool;
  do {
    if (0.0 < *(float *)&pCVar3->field_0x24) {
      (**(code **)(*(int *)&pCVar3->field_0x3c + 4))(pCVar3);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSpark *)&DAT_01c848f4);
  pCVar4 = CFirefly_ARRAY_01c848f8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 4))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01c85ff8);
  piVar2 = (int *)&DAT_01c86730;
  this_ptr_08 = (CMuzzleFlash *)&DAT_01c85ffc;
  do {
    if (*(int *)this_ptr_08 != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_00496a60(this_ptr_08);
    }
    if (*piVar2 != 0) {
      unkaddr_0059d350_cpp_FUN_0059d420(piVar2);
    }
    piVar2 = piVar2 + 0x17;
    this_ptr_08 = this_ptr_08 + 1;
  } while (piVar2 != (int *)&DAT_01c86e60);
  iVar12 = 0;
  if (0 < _DAT_01c594e8) {
    this_ptr_00 = g_StakePool;
    do {
      if (*(int *)&this_ptr_00->field_0x258 != 0) {
        core_fire_cpp_FUN_00494580(this_ptr_00);
      }
      iVar12 = iVar12 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar12 < _DAT_01c594e8);
  }
  pCVar5 = g_GlassParticlePool;
  do {
    if (0.0 < *(float *)&pCVar5->field_0x24) {
      (**(code **)(*(int *)&pCVar5->field_0x3c + 4))(pCVar5);
    }
    pCVar5 = pCVar5 + 1;
  } while (pCVar5 != (CGlassParticle *)0x1c91264);
  this_ptr_01 = (CBulletTrail *)0x1c91268;
  do {
    if (*(int *)&this_ptr_01->field_0x20 != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_00497330(this_ptr_01);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CBulletTrail *)&DAT_01c913d0);
  pCVar6 = g_FireballPool;
  do {
    if (0.0 < *(float *)&pCVar6->field_0x24) {
      (**(code **)(*(int *)&pCVar6->field_0x3c + 4))(pCVar6);
    }
    pCVar6 = pCVar6 + 1;
  } while (pCVar6 != (CFireball *)&DAT_01c93cd4);
  pCVar7 = g_RockPool;
  do {
    if (0.0 < *(float *)&pCVar7->field_0x24) {
      (**(code **)(*(int *)&pCVar7->field_0x3c + 4))(pCVar7);
    }
    pCVar7 = pCVar7 + 1;
  } while (pCVar7 != (CRock *)&DAT_01c950d8);
  pCVar8 = CLeaf_ARRAY_01c950dc;
  do {
    if (0.0 < *(float *)&pCVar8->field_0x24) {
      (**(code **)(*(int *)&pCVar8->field_0x3c + 4))(pCVar8);
    }
    pCVar8 = pCVar8 + 1;
  } while (pCVar8 != (CLeaf *)&DAT_01c965dc);
  pCVar4 = CFirefly_ARRAY_01c848f8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 4))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01c85ff8);
  iVar12 = 0;
  if (0 < _DAT_01c558e0) {
    puVar13 = &DAT_01c558e8;
    do {
      core_fire_cpp_FUN_00493cf0(puVar13);
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 0x3c;
    } while (iVar12 < _DAT_01c558e0);
  }
  this_ptr_02 = (CExplosion *)0x1c975e4;
  do {
    core_fire_cpp_FUN_00498e80(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CExplosion *)&DAT_01c976fc);
  this_ptr_03 = g_TossPool;
  do {
    core_fire_cpp_FUN_004993f0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CToss *)&DAT_01c9c4d0);
  this_ptr_04 = (CCrater *)0x1c9c4d4;
  do {
    core_fire_cpp_FUN_00499930(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CCrater *)&DAT_01c9cd94);
  this_ptr_05 = (CGunFlame *)&DAT_01c9cd98;
  bVar1 = false;
  do {
    if ((*(uint *)this_ptr_05 & 0x7fffffff) != 0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_00499ee0();
        bVar1 = true;
      }
      core_fire_cpp_FUN_0049a3a0(this_ptr_05);
    }
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CGunFlame *)&DAT_01ca13e8);
  this_ptr_06 = (CLightningBolt *)0x1ca13ec;
  do {
    core_fire_cpp_FUN_0049ab90(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CLightningBolt *)&DAT_01ca15a4);
  this_ptr_07 = (CTrail *)0x1ca15a8;
  do {
    core_fire_cpp_FUN_0049b330(this_ptr_07);
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CTrail *)&DAT_01ca23b8);
  pCVar9 = g_ShellPool;
  do {
    (**(code **)(*(int *)&pCVar9->field_0x3c + 4))(pCVar9);
    pCVar9 = pCVar9 + 1;
  } while (pCVar9 != (CShell *)&DAT_01ca367c);
  pCVar10 = g_PopcornPool;
  do {
    if (0.0 < *(float *)&pCVar10->field_0x24) {
      (**(code **)(*(int *)&pCVar10->field_0x3c + 4))(pCVar10);
    }
    pCVar10 = pCVar10 + 1;
  } while (pCVar10 != (CPopcorn *)&DAT_01ca7680);
  pCVar11 = g_RainDropPool;
  do {
    if (0.0 < *(float *)&pCVar11->field_0x24) {
      (**(code **)(*(int *)&pCVar11->field_0x3c + 4))(pCVar11);
    }
    pCVar11 = pCVar11 + 1;
  } while (pCVar11 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  return;
}
