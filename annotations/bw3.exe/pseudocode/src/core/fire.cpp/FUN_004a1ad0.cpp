// Name: core_fire.cpp_FUN_004a1ad0
// Address: 004a1ad0
// Address Range: [[004a1ad0, 004a1e8b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004a1ad0(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004a1ad0(CFireEffect *this_ptr)

{
  int iVar1;
  CRock *pCVar2;
  CLeaf *pCVar3;
  CFirefly *pCVar4;
  CFireball *pCVar5;
  CShell *pCVar6;
  CSmokeParticle *this_ptr_00;
  CMuzzleFlash *this_ptr_01;
  CLaserBeam *this_ptr_02;
  CSpark *pCVar7;
  CGlassParticle *pCVar8;
  CBulletTrail *this_ptr_03;
  byte *puVar9;
  CToss *pCVar10;
  CTrail *this_ptr_04;
  CPopcorn *pCVar11;
  CRainDrop *pCVar12;
  int iVar13;
  
  iVar13 = 0;
  if (0 < _DAT_01c8eea8) {
    iVar1 = 0;
    do {
      if (*(int *)(&g_StakePool[0].field_0x0 + iVar1) == 0) {
        core_fire_cpp_FUN_00497dc0((CStake *)(&g_StakePool[0].field_0x0 + iVar1));
      }
      iVar13 = iVar13 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar13 < _DAT_01c8eea8);
  }
  pCVar2 = g_RockPool;
  do {
    if (0.0 < *(float *)&pCVar2->field_0x24) {
      (**(code **)(*(int *)&pCVar2->field_0x3c + 8))(pCVar2);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CRock *)&DAT_01cf3b84);
  pCVar3 = CLeaf_ARRAY_01cf3b88;
  do {
    if (0.0 < *(float *)&pCVar3->field_0x24) {
      (**(code **)(*(int *)&pCVar3->field_0x3c + 8))(pCVar3);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CLeaf *)&DAT_01cf5088);
  pCVar4 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 8))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01cbb9b8);
  pCVar5 = g_FireballPool;
  core_fire_cpp_FUN_004995a0(g_FireballPool);
  do {
    if (0.0 < *(float *)&pCVar5->field_0x24) {
      (**(code **)(*(int *)&pCVar5->field_0x3c + 8))(pCVar5);
    }
    pCVar5 = pCVar5 + 1;
  } while (pCVar5 != (CFireball *)&DAT_01cf2780);
  pCVar6 = g_ShellPool;
  do {
    (**(code **)(*(int *)&pCVar6->field_0x3c + 8))(pCVar6);
    pCVar6 = pCVar6 + 1;
  } while (pCVar6 != (CShell *)&DAT_01d03b88);
  iVar13 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar13 == 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    iVar13 = 0;
    core_fire_cpp_FUN_004975a0(&DAT_01c8aea8);
    if (0 < _DAT_01c8aea0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c8aeb8) != 0) {
          core_fire_cpp_FUN_00497610((CBulletHole *)(&DAT_01c8aea8 + iVar1));
        }
        iVar13 = iVar13 + 1;
        iVar1 = iVar1 + 0x40;
      } while (iVar13 < _DAT_01c8aea0);
    }
    this_ptr_00 = (CSmokeParticle *)&DAT_01c74ea0;
    core_fire_cpp_FUN_00496c60((CSmokeParticle *)&DAT_01c74ea0);
    do {
      if (*(int *)this_ptr_00 != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_00496f60(this_ptr_00);
      }
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c8aea0);
    this_ptr_01 = (CMuzzleFlash *)&DAT_01cbb9bc;
    do {
      if (*(int *)this_ptr_01 != 0) {
        core_fire_cpp_FUN_0049a480(this_ptr_01);
      }
      this_ptr_01 = this_ptr_01 + 1;
    } while (this_ptr_01 != (CMuzzleFlash *)&DAT_01cbc0ec);
    iVar13 = 0;
    if (0 < _DAT_01cf5088) {
      this_ptr_02 = (CLaserBeam *)0x1cf508c;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_0049b1d0(this_ptr_02);
        iVar13 = iVar13 + 1;
        this_ptr_02 = this_ptr_02 + 1;
      } while (iVar13 < _DAT_01cf5088);
    }
    pCVar7 = g_SparkPool;
    core_fire_cpp_FUN_00497f70(g_SparkPool);
    do {
      if (0.0 < *(float *)&pCVar7->field_0x24) {
        (**(code **)(*(int *)&pCVar7->field_0x3c + 8))(pCVar7);
      }
      pCVar7 = pCVar7 + 1;
    } while (pCVar7 != (CSpark *)&DAT_01cba2b4);
    pCVar4 = CFirefly_ARRAY_01cba2b8;
    core_fire_cpp_FUN_00498a10(CFirefly_ARRAY_01cba2b8);
    do {
      if (0.0 < *(float *)&pCVar4->field_0x24) {
        (**(code **)(*(int *)&pCVar4->field_0x3c + 8))(pCVar4);
      }
      pCVar4 = pCVar4 + 1;
    } while (pCVar4 != (CFirefly *)&DAT_01cbb9b8);
    pCVar8 = CGlassParticle_ARRAY_01cbc0f0;
    do {
      if (0.0 < *(float *)&pCVar8->field_0x24) {
        (**(code **)(*(int *)&pCVar8->field_0x3c + 8))(pCVar8);
      }
      pCVar8 = pCVar8 + 1;
    } while (pCVar8 != (CGlassParticle *)&DAT_01cefd10);
    this_ptr_03 = (CBulletTrail *)0x1cefd14;
    do {
      if (*(int *)&this_ptr_03->field_0x20 != 0) {
        core_fire_cpp_FUN_0049ad20(this_ptr_03);
      }
      this_ptr_03 = this_ptr_03 + 1;
    } while (this_ptr_03 != (CBulletTrail *)&DAT_01cefe7c);
    puVar9 = (byte *)0x1cf6090;
    do {
      core_fire_cpp_FUN_0049c8e0(puVar9);
      puVar9 = puVar9 + 0x20;
    } while (puVar9 != &DAT_01cf61d0);
    pCVar10 = g_TossPool;
    do {
      core_fire_cpp_FUN_0049d500(pCVar10);
      pCVar10 = pCVar10 + 1;
    } while (pCVar10 != (CToss *)&DAT_01cfaff4);
    puVar9 = (byte *)0x1cfb8bc;
    do {
      core_fire_cpp_FUN_0049e500(puVar9);
      puVar9 = puVar9 + 0x2c;
    } while (puVar9 != &DAT_01d00eac);
    puVar9 = (byte *)0x1d00eb0;
    do {
      core_fire_cpp_FUN_0049f520(puVar9);
      puVar9 = puVar9 + 0x30;
    } while (puVar9 != &DAT_01d01ab0);
    this_ptr_04 = (CTrail *)0x1d01ab4;
    do {
      core_fire_cpp_FUN_004a0680(this_ptr_04);
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != (CTrail *)&DAT_01d028c4);
    pCVar11 = g_PopcornPool;
    do {
      if (0.0 < *(float *)&pCVar11->field_0x24) {
        (**(code **)(*(int *)&pCVar11->field_0x3c + 8))(pCVar11);
      }
      pCVar11 = pCVar11 + 1;
    } while (pCVar11 != (CPopcorn *)&DAT_01d07b8c);
    pCVar12 = g_RainDropPool;
    do {
      if (0.0 < *(float *)&pCVar12->field_0x24) {
        (**(code **)(*(int *)&pCVar12->field_0x3c + 8))(pCVar12);
      }
      pCVar12 = pCVar12 + 1;
    } while (pCVar12 != (CRainDrop *)&DAT_01d0bb90);
    puVar9 = (byte *)0x1d0bb94;
    do {
      puVar9 = puVar9 + 0x1e4;
    } while (puVar9 != &DAT_01d0ce7c);
  }
  return;
}
