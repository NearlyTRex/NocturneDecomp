// Name: core_fire.cpp_CFireEffect_render_FUN_004b5100
// Address: 004b5100
// Address Range: [[004b5100, 004b549c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_render_FUN_004b5100(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_render_FUN_004b5100(CFireEffect *this_ptr)

{
  int iVar1;
  CRock *this_ptr_00;
  CLeaf *this_ptr_01;
  CFirefly *pCVar2;
  CFireball *this_ptr_02;
  CShell *this_ptr_03;
  CSmokeParticle *this_ptr_04;
  CMuzzleFlash *this_ptr_05;
  CLaserBeam *this_ptr_06;
  CSpark *this_ptr_07;
  CGlassParticle *this_ptr_08;
  CBulletTrail *this_ptr_09;
  CExplosion *this_ptr_10;
  CToss *this_ptr_11;
  CGunFlame *this_ptr_12;
  CLightningBolt *this_ptr_13;
  CTrail *this_ptr_14;
  CPopcorn *this_ptr_15;
  CRainDrop *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < g_INT_01c726a8) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) == 0) {
        core_fire_cpp_CStake_render_FUN_004ace60
                  ((CStake *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar4 < g_INT_01c726a8);
  }
  this_ptr_00 = g_RockPool;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]));
  this_ptr_01 = CLeaf_ARRAY_01cadb68;
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->render)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CLeaf *)&g_INT_01caf068);
  pCVar2 = CFirefly_ARRAY_01c9dab8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->render)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&g_INT_01c9f1b8);
  this_ptr_02 = g_FireballPool;
  core_fire_cpp_CFireball_setupRenderState_FUN_004ae550(g_FireballPool);
  do {
    if (0.0 < (this_ptr_02->base).lifetime_remaining) {
      (*((this_ptr_02->base).vtable)->render)(&this_ptr_02->base);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]));
  this_ptr_03 = g_ShellPool;
  do {
    (*((this_ptr_03->base).vtable)->render)(&this_ptr_03->base);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]));
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(g_CDemonRenderer_PTR_00612560)
  ;
  if (iVar4 == 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    iVar4 = 0;
    core_fire_cpp_CBulletHole_setupRenderState_FUN_004ac6f0(g_CBulletHole_ARRAY_01c6eaa8);
    if (0 < g_INT_01c6eaa0) {
      iVar1 = 0;
      do {
        if (*(int *)((int)&g_CBulletHole_ARRAY_01c6eaa8[0].actor_ptr + iVar1) != 0) {
          core_fire_cpp_CBulletHole_render_FUN_004ac770
                    ((CBulletHole *)((int)&g_CBulletHole_ARRAY_01c6eaa8[0].position.x + iVar1));
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar4 < g_INT_01c6eaa0);
    }
    this_ptr_04 = g_CSmokeParticle_ARRAY_01c58aa0;
    core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004abdb0(g_CSmokeParticle_ARRAY_01c58aa0);
    do {
      if (this_ptr_04->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_004ac0b0(this_ptr_04);
      }
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != g_CSmokeParticle_ARRAY_01c58aa0 + sizeof(g_CSmokeParticle_ARRAY_01c58aa0) / sizeof(g_CSmokeParticle_ARRAY_01c58aa0[0]));
    this_ptr_05 = g_CMuzzleFlash_ARRAY_01c9f1bc;
    do {
      if (this_ptr_05->frames_remaining != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_004af430(this_ptr_05);
      }
      this_ptr_05 = this_ptr_05 + 1;
    } while (this_ptr_05 != g_CMuzzleFlash_ARRAY_01c9f1bc + sizeof(g_CMuzzleFlash_ARRAY_01c9f1bc) / sizeof(g_CMuzzleFlash_ARRAY_01c9f1bc[0]));
    iVar4 = 0;
    if (0 < g_INT_01caf068) {
      this_ptr_06 = g_CLaserBeam_ARRAY_01caf06c;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_004b01a0(this_ptr_06);
        iVar4 = iVar4 + 1;
        this_ptr_06 = this_ptr_06 + 1;
      } while (iVar4 < g_INT_01caf068);
    }
    this_ptr_07 = g_SparkPool;
    core_fire_cpp_CSpark_setupRenderState_FUN_004ad010(g_SparkPool);
    do {
      if (0.0 < (this_ptr_07->base).lifetime_remaining) {
        (*((this_ptr_07->base).vtable)->render)(&this_ptr_07->base);
      }
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]));
    pCVar2 = CFirefly_ARRAY_01c9dab8;
    core_fire_cpp_CFirefly_setupRenderState_FUN_004ad9c0(CFirefly_ARRAY_01c9dab8);
    do {
      if (0.0 < (pCVar2->base).lifetime_remaining) {
        (*((pCVar2->base).vtable)->render)(&pCVar2->base);
      }
      pCVar2 = pCVar2 + 1;
    } while (pCVar2 != (CFirefly *)&g_INT_01c9f1b8);
    this_ptr_08 = g_GlassParticlePool;
    do {
      if (0.0 < (this_ptr_08->base).lifetime_remaining) {
        (*((this_ptr_08->base).vtable)->render)(&this_ptr_08->base);
      }
      this_ptr_08 = this_ptr_08 + 1;
    } while (this_ptr_08 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]));
    this_ptr_09 = g_CBulletTrail_ARRAY_01ca9cf4;
    do {
      if (this_ptr_09->frames_remaining != 0) {
        core_fire_cpp_CBulletTrail_render_FUN_004afcf0(this_ptr_09);
      }
      this_ptr_09 = this_ptr_09 + 1;
    } while (this_ptr_09 != g_CBulletTrail_ARRAY_01ca9cf4 + sizeof(g_CBulletTrail_ARRAY_01ca9cf4) / sizeof(g_CBulletTrail_ARRAY_01ca9cf4[0]));
    this_ptr_10 = g_CExplosion_ARRAY_01cb0070;
    do {
      core_fire_cpp_CExplosion_render_FUN_004b1870(this_ptr_10);
      this_ptr_10 = this_ptr_10 + 1;
    } while (this_ptr_10 != g_CExplosion_ARRAY_01cb0070 + sizeof(g_CExplosion_ARRAY_01cb0070) / sizeof(g_CExplosion_ARRAY_01cb0070[0]));
    this_ptr_11 = g_TossPool;
    do {
      core_fire_cpp_CToss_render_FUN_004b1f10(this_ptr_11);
      this_ptr_11 = this_ptr_11 + 1;
    } while (this_ptr_11 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]));
    this_ptr_12 = g_CGunFlame_ARRAY_01cb5824;
    do {
      core_fire_cpp_CGunFlame_render_FUN_004b2ea0(this_ptr_12);
      this_ptr_12 = this_ptr_12 + 1;
    } while (this_ptr_12 != g_CGunFlame_ARRAY_01cb5824 + sizeof(g_CGunFlame_ARRAY_01cb5824) / sizeof(g_CGunFlame_ARRAY_01cb5824[0]));
    this_ptr_13 = g_CLightningBolt_ARRAY_01cb9e78;
    do {
      core_fire_cpp_CLightningBolt_render_FUN_004b3570(this_ptr_13);
      this_ptr_13 = this_ptr_13 + 1;
    } while (this_ptr_13 != g_CLightningBolt_ARRAY_01cb9e78 + sizeof(g_CLightningBolt_ARRAY_01cb9e78) / sizeof(g_CLightningBolt_ARRAY_01cb9e78[0]));
    this_ptr_14 = g_CTrail_ARRAY_01cba034;
    do {
      core_fire_cpp_CTrail_render_FUN_004b3d20(this_ptr_14);
      this_ptr_14 = this_ptr_14 + 1;
    } while (this_ptr_14 != g_CTrail_ARRAY_01cba034 + sizeof(g_CTrail_ARRAY_01cba034) / sizeof(g_CTrail_ARRAY_01cba034[0]));
    this_ptr_15 = g_PopcornPool;
    do {
      if (0.0 < (this_ptr_15->base).lifetime_remaining) {
        (*((this_ptr_15->base).vtable)->render)(&this_ptr_15->base);
      }
      this_ptr_15 = this_ptr_15 + 1;
    } while (this_ptr_15 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]));
    pCVar3 = g_RainDropPool;
    do {
      if (0.0 < *(float *)(((CDemonActorType *)pCVar3)->class_name + 0x24)) {
        (**(code **)(*(int *)((CDemonActorType *)((int)pCVar3 + 0x3c))->class_name + 8))(pCVar3);
      }
      pCVar3 = (CRainDrop *)(((CDemonActorType *)((int)pCVar3 + 0x3c))->class_name + 4);
    } while (pCVar3 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]));
  }
  return;
}
