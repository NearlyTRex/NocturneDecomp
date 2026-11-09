// Name: core_fire.cpp_FUN_004b4dd0
// Address: 004b4dd0
// Address Range: [[004b4dd0, 004b50fd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b4dd0(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004b4dd0(CFireEffect *this_ptr)

{
  bool bVar1;
  int *piVar2;
  CSpark *pCVar3;
  CFirefly *pCVar4;
  CMuzzleFlash *this_ptr_00;
  CStake *this_ptr_01;
  CGlassParticle *pCVar5;
  CBulletTrail *this_ptr_02;
  CFireball *pCVar6;
  CRock *pCVar7;
  CLeaf *pCVar8;
  CExplosion *this_ptr_03;
  CToss *this_ptr_04;
  CCrater *this_ptr_05;
  CGunFlame *this_ptr_06;
  CLightningBolt *this_ptr_07;
  CTrail *this_ptr_08;
  CShell *pCVar9;
  CPopcorn *pCVar10;
  CRainDrop *pCVar11;
  int iVar12;
  byte *puVar13;
  
  piVar2 = (int *)&DAT_01c58aa0;
  _DAT_01caf068 = 0;
  core_fire_cpp_updateTextureAnimCounts_FUN_004b15d0();
  do {
    if (*piVar2 != 0) {
      core_fire_cpp_FUN_004abf50(piVar2);
    }
    piVar2 = piVar2 + 0xb;
  } while (piVar2 != (int *)&DAT_01c6eaa0);
  pCVar3 = g_SparkPool;
  do {
    if (0.0 < *(float *)&pCVar3->field_0x24) {
      (**(code **)(*(int *)&pCVar3->field_0x3c + 4))(pCVar3);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSpark *)&DAT_01c9dab4);
  pCVar4 = CFirefly_ARRAY_01c9dab8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 4))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01c9f1b8);
  this_ptr_00 = (CMuzzleFlash *)&DAT_01c9f1bc;
  do {
    if (*(int *)this_ptr_00 != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_004af400(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CMuzzleFlash *)&DAT_01c9f8ec);
  iVar12 = 0;
  if (0 < _DAT_01c726a8) {
    this_ptr_01 = g_StakePool;
    do {
      if (*(int *)&this_ptr_01->field_0x258 != 0) {
        core_fire_cpp_CStake_process_FUN_004acf20(this_ptr_01);
      }
      iVar12 = iVar12 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar12 < _DAT_01c726a8);
  }
  pCVar5 = g_GlassParticlePool;
  do {
    if (0.0 < *(float *)&pCVar5->field_0x24) {
      (**(code **)(*(int *)&pCVar5->field_0x3c + 4))(pCVar5);
    }
    pCVar5 = pCVar5 + 1;
  } while (pCVar5 != (CGlassParticle *)0x1ca9cf0);
  this_ptr_02 = (CBulletTrail *)0x1ca9cf4;
  do {
    if (*(int *)&this_ptr_02->field_0x20 != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_004afcd0(this_ptr_02);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CBulletTrail *)&DAT_01ca9e5c);
  pCVar6 = g_FireballPool;
  do {
    if (0.0 < *(float *)&pCVar6->field_0x24) {
      (**(code **)(*(int *)&pCVar6->field_0x3c + 4))(pCVar6);
    }
    pCVar6 = pCVar6 + 1;
  } while (pCVar6 != (CFireball *)&DAT_01cac760);
  pCVar7 = g_RockPool;
  do {
    if (0.0 < *(float *)&pCVar7->field_0x24) {
      (**(code **)(*(int *)&pCVar7->field_0x3c + 4))(pCVar7);
    }
    pCVar7 = pCVar7 + 1;
  } while (pCVar7 != (CRock *)&DAT_01cadb64);
  pCVar8 = CLeaf_ARRAY_01cadb68;
  do {
    if (0.0 < *(float *)&pCVar8->field_0x24) {
      (**(code **)(*(int *)&pCVar8->field_0x3c + 4))(pCVar8);
    }
    pCVar8 = pCVar8 + 1;
  } while (pCVar8 != (CLeaf *)&DAT_01caf068);
  pCVar4 = CFirefly_ARRAY_01c9dab8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 4))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01c9f1b8);
  iVar12 = 0;
  if (0 < _DAT_01c6eaa0) {
    puVar13 = &DAT_01c6eaa8;
    do {
      core_fire_cpp_FUN_004ac690(puVar13);
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 0x3c;
    } while (iVar12 < _DAT_01c6eaa0);
  }
  this_ptr_03 = (CExplosion *)0x1cb0070;
  do {
    core_fire_cpp_FUN_004b1820(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CExplosion *)&DAT_01cb0188);
  this_ptr_04 = g_TossPool;
  do {
    core_fire_cpp_FUN_004b1d90(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CToss *)&DAT_01cb4f5c);
  this_ptr_05 = (CCrater *)0x1cb4f60;
  do {
    core_fire_cpp_FUN_004b22d0(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CCrater *)&DAT_01cb5820);
  this_ptr_06 = (CGunFlame *)&DAT_01cb5824;
  bVar1 = false;
  do {
    if ((*(uint *)this_ptr_06 & 0x7fffffff) != 0) {
      if (!bVar1) {
        core_fire_cpp_initProcess_FUN_004b2880();
        bVar1 = true;
      }
      core_fire_cpp_FUN_004b2d40(this_ptr_06);
    }
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CGunFlame *)&DAT_01cb9e74);
  this_ptr_07 = (CLightningBolt *)0x1cb9e78;
  do {
    core_fire_cpp_FUN_004b3530(this_ptr_07);
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CLightningBolt *)&DAT_01cba030);
  this_ptr_08 = (CTrail *)0x1cba034;
  do {
    core_fire_cpp_FUN_004b3cd0(this_ptr_08);
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CTrail *)&DAT_01cbae44);
  pCVar9 = g_ShellPool;
  do {
    (**(code **)(*(int *)&pCVar9->field_0x3c + 4))(pCVar9);
    pCVar9 = pCVar9 + 1;
  } while (pCVar9 != (CShell *)&DAT_01cbc108);
  pCVar10 = g_PopcornPool;
  do {
    if (0.0 < *(float *)&pCVar10->field_0x24) {
      (**(code **)(*(int *)&pCVar10->field_0x3c + 4))(pCVar10);
    }
    pCVar10 = pCVar10 + 1;
  } while (pCVar10 != (CPopcorn *)&DAT_01cc010c);
  pCVar11 = g_RainDropPool;
  do {
    if (0.0 < *(float *)&pCVar11->field_0x24) {
      (**(code **)(*(int *)&pCVar11->field_0x3c + 4))(pCVar11);
    }
    pCVar11 = pCVar11 + 1;
  } while (pCVar11 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  return;
}
