// Name: core_fire.cpp_CFireEffect_render_FUN_004b5100
// Address: 004b5100
// Address Range: [[004b5100, 004b549c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_render_FUN_004b5100(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_render_FUN_004b5100(CFireEffect *this_ptr)

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
  CExplosion *this_ptr_04;
  CToss *this_ptr_05;
  CGunFlame *this_ptr_06;
  CLightningBolt *this_ptr_07;
  CTrail *this_ptr_08;
  CPopcorn *pCVar9;
  CRainDrop *pCVar10;
  int iVar11;
  
  iVar11 = 0;
  if (0 < _DAT_01c726a8) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) == 0) {
        core_fire_cpp_CStake_render_FUN_004ace60
                  ((CStake *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      iVar11 = iVar11 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar11 < _DAT_01c726a8);
  }
  pCVar2 = g_RockPool;
  do {
    if (0.0 < *(float *)&pCVar2->field_0x24) {
      (**(code **)(*(int *)&pCVar2->field_0x3c + 8))(pCVar2);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CRock *)&DAT_01cadb64);
  pCVar3 = CLeaf_ARRAY_01cadb68;
  do {
    if (0.0 < *(float *)&pCVar3->field_0x24) {
      (**(code **)(*(int *)&pCVar3->field_0x3c + 8))(pCVar3);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CLeaf *)&DAT_01caf068);
  pCVar4 = CFirefly_ARRAY_01c9dab8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 8))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01c9f1b8);
  pCVar5 = g_FireballPool;
  core_fire_cpp_CFireball_setupRenderState_FUN_004ae550(g_FireballPool);
  do {
    if (0.0 < *(float *)&pCVar5->field_0x24) {
      (**(code **)(*(int *)&pCVar5->field_0x3c + 8))(pCVar5);
    }
    pCVar5 = pCVar5 + 1;
  } while (pCVar5 != (CFireball *)&DAT_01cac760);
  pCVar6 = g_ShellPool;
  do {
    (**(code **)(*(int *)&pCVar6->field_0x3c + 8))(pCVar6);
    pCVar6 = pCVar6 + 1;
  } while (pCVar6 != (CShell *)&DAT_01cbc108);
  iVar11 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar11 == 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    iVar11 = 0;
    core_fire_cpp_CBulletHole_setupRenderState_FUN_004ac6f0((CBulletHole *)&DAT_01c6eaa8);
    if (0 < _DAT_01c6eaa0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c6eab8) != 0) {
          core_fire_cpp_CBulletHole_render_FUN_004ac770((CBulletHole *)(&DAT_01c6eaa8 + iVar1));
        }
        iVar11 = iVar11 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar11 < _DAT_01c6eaa0);
    }
    this_ptr_00 = (CSmokeParticle *)&DAT_01c58aa0;
    core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004abdb0((CSmokeParticle *)&DAT_01c58aa0);
    do {
      if (this_ptr_00->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_004ac0b0(this_ptr_00);
      }
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c6eaa0);
    this_ptr_01 = (CMuzzleFlash *)&DAT_01c9f1bc;
    do {
      if (*(int *)this_ptr_01 != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_004af430(this_ptr_01);
      }
      this_ptr_01 = this_ptr_01 + 1;
    } while (this_ptr_01 != (CMuzzleFlash *)&DAT_01c9f8ec);
    iVar11 = 0;
    if (0 < _DAT_01caf068) {
      this_ptr_02 = (CLaserBeam *)0x1caf06c;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_004b01a0(this_ptr_02);
        iVar11 = iVar11 + 1;
        this_ptr_02 = this_ptr_02 + 1;
      } while (iVar11 < _DAT_01caf068);
    }
    pCVar7 = g_SparkPool;
    core_fire_cpp_CSpark_setupRenderState_FUN_004ad010(g_SparkPool);
    do {
      if (0.0 < *(float *)&pCVar7->field_0x24) {
        (**(code **)(*(int *)&pCVar7->field_0x3c + 8))(pCVar7);
      }
      pCVar7 = pCVar7 + 1;
    } while (pCVar7 != (CSpark *)&DAT_01c9dab4);
    pCVar4 = CFirefly_ARRAY_01c9dab8;
    core_fire_cpp_FUN_004ad9c0(CFirefly_ARRAY_01c9dab8);
    do {
      if (0.0 < *(float *)&pCVar4->field_0x24) {
        (**(code **)(*(int *)&pCVar4->field_0x3c + 8))(pCVar4);
      }
      pCVar4 = pCVar4 + 1;
    } while (pCVar4 != (CFirefly *)&DAT_01c9f1b8);
    pCVar8 = g_GlassParticlePool;
    do {
      if (0.0 < *(float *)&pCVar8->field_0x24) {
        (**(code **)(*(int *)&pCVar8->field_0x3c + 8))(pCVar8);
      }
      pCVar8 = pCVar8 + 1;
    } while (pCVar8 != (CGlassParticle *)0x1ca9cf0);
    this_ptr_03 = (CBulletTrail *)0x1ca9cf4;
    do {
      if (this_ptr_03->frames_remaining != 0) {
        core_fire_cpp_CBulletTrail_render_FUN_004afcf0(this_ptr_03);
      }
      this_ptr_03 = this_ptr_03 + 1;
    } while (this_ptr_03 != (CBulletTrail *)&DAT_01ca9e5c);
    this_ptr_04 = (CExplosion *)0x1cb0070;
    do {
      core_fire_cpp_CExplosion_render_FUN_004b1870(this_ptr_04);
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != (CExplosion *)&DAT_01cb0188);
    this_ptr_05 = g_TossPool;
    do {
      core_fire_cpp_CToss_render_FUN_004b1f10(this_ptr_05);
      this_ptr_05 = this_ptr_05 + 1;
    } while (this_ptr_05 != (CToss *)&DAT_01cb4f5c);
    this_ptr_06 = (CGunFlame *)&DAT_01cb5824;
    do {
      core_fire_cpp_CGunFlame_render_FUN_004b2ea0(this_ptr_06);
      this_ptr_06 = this_ptr_06 + 1;
    } while (this_ptr_06 != (CGunFlame *)&DAT_01cb9e74);
    this_ptr_07 = (CLightningBolt *)0x1cb9e78;
    do {
      core_fire_cpp_CLightningBolt_render_FUN_004b3570(this_ptr_07);
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != (CLightningBolt *)&DAT_01cba030);
    this_ptr_08 = (CTrail *)0x1cba034;
    do {
      core_fire_cpp_CTrail_render_FUN_004b3d20(this_ptr_08);
      this_ptr_08 = this_ptr_08 + 1;
    } while (this_ptr_08 != (CTrail *)&DAT_01cbae44);
    pCVar9 = g_PopcornPool;
    do {
      if (0.0 < *(float *)&pCVar9->field_0x24) {
        (**(code **)(*(int *)&pCVar9->field_0x3c + 8))(pCVar9);
      }
      pCVar9 = pCVar9 + 1;
    } while (pCVar9 != (CPopcorn *)&DAT_01cc010c);
    pCVar10 = g_RainDropPool;
    do {
      if (0.0 < *(float *)&pCVar10->field_0x24) {
        (**(code **)(*(int *)&pCVar10->field_0x3c + 8))(pCVar10);
      }
      pCVar10 = pCVar10 + 1;
    } while (pCVar10 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  }
  return;
}
