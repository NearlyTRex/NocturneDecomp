// Name: core_fire.cpp_CFireEffect_render_FUN_0049c780
// Address: 0049c780
// Address Range: [[0049c780, 0049cb4c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_render_FUN_0049c780(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_render_FUN_0049c780(CFireEffect *this_ptr)

{
  int iVar1;
  CRock *pCVar2;
  CLeaf *pCVar3;
  CFirefly *pCVar4;
  CFireball *pCVar5;
  CShell *pCVar6;
  CSmokeParticle *this_ptr_00;
  int *piVar7;
  CLaserBeam *this_ptr_01;
  CSpark *pCVar8;
  CGlassParticle *pCVar9;
  CBulletTrail *this_ptr_02;
  CExplosion *this_ptr_03;
  CToss *this_ptr_04;
  CGunFlame *this_ptr_05;
  CLightningBolt *this_ptr_06;
  CTrail *this_ptr_07;
  CPopcorn *pCVar10;
  CRainDrop *pCVar11;
  int iVar12;
  CMuzzleFlash *this_ptr_08;
  
  iVar12 = 0;
  if (0 < _DAT_01c594e8) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) == 0) {
        core_fire_cpp_CStake_render_FUN_004944c0
                  ((CStake *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      iVar12 = iVar12 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar12 < _DAT_01c594e8);
  }
  pCVar2 = g_RockPool;
  do {
    if (0.0 < *(float *)&pCVar2->field_0x24) {
      (**(code **)(*(int *)&pCVar2->field_0x3c + 8))(pCVar2);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CRock *)&DAT_01c950d8);
  pCVar3 = CLeaf_ARRAY_01c950dc;
  do {
    if (0.0 < *(float *)&pCVar3->field_0x24) {
      (**(code **)(*(int *)&pCVar3->field_0x3c + 8))(pCVar3);
    }
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CLeaf *)&DAT_01c965dc);
  pCVar4 = CFirefly_ARRAY_01c848f8;
  do {
    if (0.0 < *(float *)&pCVar4->field_0x24) {
      (**(code **)(*(int *)&pCVar4->field_0x3c + 8))(pCVar4);
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CFirefly *)&DAT_01c85ff8);
  pCVar5 = g_FireballPool;
  core_fire_cpp_CFireball_setupRenderState_FUN_00495bb0(g_FireballPool);
  do {
    if (0.0 < *(float *)&pCVar5->field_0x24) {
      (**(code **)(*(int *)&pCVar5->field_0x3c + 8))(pCVar5);
    }
    pCVar5 = pCVar5 + 1;
  } while (pCVar5 != (CFireball *)&DAT_01c93cd4);
  pCVar6 = g_ShellPool;
  do {
    (**(code **)(*(int *)&pCVar6->field_0x3c + 8))(pCVar6);
    pCVar6 = pCVar6 + 1;
  } while (pCVar6 != (CShell *)&DAT_01ca367c);
  iVar12 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar12 == 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    iVar12 = 0;
    core_fire_cpp_CBulletHole_setupRenderState_FUN_00493d50((CBulletHole *)&DAT_01c558e8);
    if (0 < _DAT_01c558e0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c558f8) != 0) {
          core_fire_cpp_CBulletHole_render_FUN_00493dd0((CBulletHole *)(&DAT_01c558e8 + iVar1));
        }
        iVar12 = iVar12 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar12 < _DAT_01c558e0);
    }
    this_ptr_00 = (CSmokeParticle *)&DAT_01c3f8e0;
    core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00493410((CSmokeParticle *)&DAT_01c3f8e0);
    do {
      if (this_ptr_00->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_00493710(this_ptr_00);
      }
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c558e0);
    piVar7 = (int *)&DAT_01c86730;
    this_ptr_08 = (CMuzzleFlash *)&DAT_01c85ffc;
    do {
      if (*(int *)this_ptr_08 != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_00496a90(this_ptr_08);
      }
      if (*piVar7 != 0) {
        unkaddr_0059d350_cpp_FUN_0059d440(piVar7);
      }
      piVar7 = piVar7 + 0x17;
      this_ptr_08 = this_ptr_08 + 1;
    } while (piVar7 != (int *)&DAT_01c86e60);
    iVar12 = 0;
    if (0 < _DAT_01c965dc) {
      this_ptr_01 = (CLaserBeam *)0x1c965e0;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_00497800(this_ptr_01);
        iVar12 = iVar12 + 1;
        this_ptr_01 = this_ptr_01 + 1;
      } while (iVar12 < _DAT_01c965dc);
    }
    pCVar8 = g_SparkPool;
    core_fire_cpp_CSpark_setupRenderState_FUN_00494670(g_SparkPool);
    do {
      if (0.0 < *(float *)&pCVar8->field_0x24) {
        (**(code **)(*(int *)&pCVar8->field_0x3c + 8))(pCVar8);
      }
      pCVar8 = pCVar8 + 1;
    } while (pCVar8 != (CSpark *)&DAT_01c848f4);
    pCVar4 = CFirefly_ARRAY_01c848f8;
    core_fire_cpp_FUN_00495020(CFirefly_ARRAY_01c848f8);
    do {
      if (0.0 < *(float *)&pCVar4->field_0x24) {
        (**(code **)(*(int *)&pCVar4->field_0x3c + 8))(pCVar4);
      }
      pCVar4 = pCVar4 + 1;
    } while (pCVar4 != (CFirefly *)&DAT_01c85ff8);
    pCVar9 = g_GlassParticlePool;
    do {
      if (0.0 < *(float *)&pCVar9->field_0x24) {
        (**(code **)(*(int *)&pCVar9->field_0x3c + 8))(pCVar9);
      }
      pCVar9 = pCVar9 + 1;
    } while (pCVar9 != (CGlassParticle *)0x1c91264);
    this_ptr_02 = (CBulletTrail *)0x1c91268;
    do {
      if (this_ptr_02->frames_remaining != 0) {
        core_fire_cpp_CBulletTrail_render_FUN_00497350(this_ptr_02);
      }
      this_ptr_02 = this_ptr_02 + 1;
    } while (this_ptr_02 != (CBulletTrail *)&DAT_01c913d0);
    this_ptr_03 = (CExplosion *)0x1c975e4;
    do {
      core_fire_cpp_CExplosion_render_FUN_00498ed0(this_ptr_03);
      this_ptr_03 = this_ptr_03 + 1;
    } while (this_ptr_03 != (CExplosion *)&DAT_01c976fc);
    this_ptr_04 = g_TossPool;
    do {
      core_fire_cpp_CToss_render_FUN_00499570(this_ptr_04);
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != (CToss *)&DAT_01c9c4d0);
    this_ptr_05 = (CGunFlame *)&DAT_01c9cd98;
    do {
      core_fire_cpp_CGunFlame_render_FUN_0049a500(this_ptr_05);
      this_ptr_05 = this_ptr_05 + 1;
    } while (this_ptr_05 != (CGunFlame *)&DAT_01ca13e8);
    this_ptr_06 = (CLightningBolt *)0x1ca13ec;
    do {
      core_fire_cpp_CLightningBolt_render_FUN_0049abd0(this_ptr_06);
      this_ptr_06 = this_ptr_06 + 1;
    } while (this_ptr_06 != (CLightningBolt *)&DAT_01ca15a4);
    this_ptr_07 = (CTrail *)0x1ca15a8;
    do {
      core_fire_cpp_CTrail_render_FUN_0049b380(this_ptr_07);
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != (CTrail *)&DAT_01ca23b8);
    pCVar10 = g_PopcornPool;
    do {
      if (0.0 < *(float *)&pCVar10->field_0x24) {
        (**(code **)(*(int *)&pCVar10->field_0x3c + 8))(pCVar10);
      }
      pCVar10 = pCVar10 + 1;
    } while (pCVar10 != (CPopcorn *)&DAT_01ca7680);
    pCVar11 = g_RainDropPool;
    do {
      if (0.0 < *(float *)&pCVar11->field_0x24) {
        (**(code **)(*(int *)&pCVar11->field_0x3c + 8))(pCVar11);
      }
      pCVar11 = pCVar11 + 1;
    } while (pCVar11 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
    unkafter_superopt_cpp_FUN_005a8290(g_CSimpleParticleSystemPtr);
  }
  return;
}
