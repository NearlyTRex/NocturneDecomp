// Name: core_fire.cpp_CFireEffect_render_FUN_0049c780
// Address: 0049c780
// Address Range: [[0049c780, 0049cb4c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_render_FUN_0049c780(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_render_FUN_0049c780(CFireEffect *this_ptr)

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
  CMuzzleFlash *this_ptr_16;
  
  iVar4 = 0;
  if (0 < g_StakeActiveCount) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) == 0) {
        core_fire_cpp_CStake_render_FUN_004944c0
                  ((CStake *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar4 < g_StakeActiveCount);
  }
  this_ptr_00 = g_RockPool;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]));
  this_ptr_01 = CLeaf_ARRAY_01c950dc;
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->render)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CLeaf *)&g_LaserBeamActiveCount);
  pCVar2 = CFirefly_ARRAY_01c848f8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->render)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&g_INT_01c85ff8);
  this_ptr_02 = g_FireballPool;
  core_fire_cpp_CFireball_setupRenderState_FUN_00495bb0(g_FireballPool);
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
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar4 == 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    iVar4 = 0;
    core_fire_cpp_CBulletHole_setupRenderState_FUN_00493d50(g_BulletHolePool);
    if (0 < g_BulletHoleActiveCount) {
      iVar1 = 0;
      do {
        if (*(int *)((int)&g_BulletHolePool[0].actor_ptr + iVar1) != 0) {
          core_fire_cpp_CBulletHole_render_FUN_00493dd0
                    ((CBulletHole *)((int)&g_BulletHolePool[0].position.x + iVar1));
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar4 < g_BulletHoleActiveCount);
    }
    this_ptr_04 = g_SmokeParticlePool;
    core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00493410(g_SmokeParticlePool);
    do {
      if (this_ptr_04->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_00493710(this_ptr_04);
      }
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != g_SmokeParticlePool + sizeof(g_SmokeParticlePool) / sizeof(g_SmokeParticlePool[0]));
    this_ptr_05 = g_CMuzzleFlash_ARRAY_01c86730;
    this_ptr_16 = &g_CMuzzleFlash_01c85ffc;
    do {
      if (this_ptr_16->frames_remaining != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_00496a90(this_ptr_16);
      }
      if (((CMuzzleEffect *)this_ptr_05)->frames_remaining != 0) {
        core_muzzle_cpp_CMuzzleEffect_render_FUN_0059d440((CMuzzleEffect *)this_ptr_05);
      }
      this_ptr_05 = this_ptr_05 + 1;
      this_ptr_16 = this_ptr_16 + 1;
    } while (this_ptr_05 != g_CMuzzleFlash_ARRAY_01c86730 + sizeof(g_CMuzzleFlash_ARRAY_01c86730) / sizeof(g_CMuzzleFlash_ARRAY_01c86730[0]));
    iVar4 = 0;
    if (0 < g_LaserBeamActiveCount) {
      this_ptr_06 = g_LaserBeamPool;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_00497800(this_ptr_06);
        iVar4 = iVar4 + 1;
        this_ptr_06 = this_ptr_06 + 1;
      } while (iVar4 < g_LaserBeamActiveCount);
    }
    this_ptr_07 = g_SparkPool;
    core_fire_cpp_CSpark_setupRenderState_FUN_00494670(g_SparkPool);
    do {
      if (0.0 < (this_ptr_07->base).lifetime_remaining) {
        (*((this_ptr_07->base).vtable)->render)(&this_ptr_07->base);
      }
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]));
    pCVar2 = CFirefly_ARRAY_01c848f8;
    core_fire_cpp_CFirefly_setupRenderState_FUN_00495020(CFirefly_ARRAY_01c848f8);
    do {
      if (0.0 < (pCVar2->base).lifetime_remaining) {
        (*((pCVar2->base).vtable)->render)(&pCVar2->base);
      }
      pCVar2 = pCVar2 + 1;
    } while (pCVar2 != (CFirefly *)&g_INT_01c85ff8);
    this_ptr_08 = g_GlassParticlePool;
    do {
      if (0.0 < (this_ptr_08->base).lifetime_remaining) {
        (*((this_ptr_08->base).vtable)->render)(&this_ptr_08->base);
      }
      this_ptr_08 = this_ptr_08 + 1;
    } while (this_ptr_08 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]));
    this_ptr_09 = g_BulletTrailPool;
    do {
      if (this_ptr_09->frames_remaining != 0) {
        core_fire_cpp_CBulletTrail_render_FUN_00497350(this_ptr_09);
      }
      this_ptr_09 = this_ptr_09 + 1;
    } while (this_ptr_09 != g_BulletTrailPool + sizeof(g_BulletTrailPool) / sizeof(g_BulletTrailPool[0]));
    this_ptr_10 = g_CExplosion_ARRAY_01c975e4;
    do {
      core_fire_cpp_CExplosion_render_FUN_00498ed0(this_ptr_10);
      this_ptr_10 = this_ptr_10 + 1;
    } while (this_ptr_10 != g_CExplosion_ARRAY_01c975e4 + sizeof(g_CExplosion_ARRAY_01c975e4) / sizeof(g_CExplosion_ARRAY_01c975e4[0]));
    this_ptr_11 = g_TossPool;
    do {
      core_fire_cpp_CToss_render_FUN_00499570(this_ptr_11);
      this_ptr_11 = this_ptr_11 + 1;
    } while (this_ptr_11 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]));
    this_ptr_12 = g_CGunFlame_ARRAY_01c9cd98;
    do {
      core_fire_cpp_CGunFlame_render_FUN_0049a500(this_ptr_12);
      this_ptr_12 = this_ptr_12 + 1;
    } while (this_ptr_12 != g_CGunFlame_ARRAY_01c9cd98 + sizeof(g_CGunFlame_ARRAY_01c9cd98) / sizeof(g_CGunFlame_ARRAY_01c9cd98[0]));
    this_ptr_13 = g_CLightningBolt_ARRAY_01ca13ec;
    do {
      core_fire_cpp_CLightningBolt_render_FUN_0049abd0(this_ptr_13);
      this_ptr_13 = this_ptr_13 + 1;
    } while (this_ptr_13 != g_CLightningBolt_ARRAY_01ca13ec + sizeof(g_CLightningBolt_ARRAY_01ca13ec) / sizeof(g_CLightningBolt_ARRAY_01ca13ec[0]));
    this_ptr_14 = g_CTrail_ARRAY_01ca15a8;
    do {
      core_fire_cpp_CTrail_render_FUN_0049b380(this_ptr_14);
      this_ptr_14 = this_ptr_14 + 1;
    } while (this_ptr_14 != g_CTrail_ARRAY_01ca15a8 + sizeof(g_CTrail_ARRAY_01ca15a8) / sizeof(g_CTrail_ARRAY_01ca15a8[0]));
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
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880
              (g_CDemonRenderer_PTR_0060b280,0);
    core_bwspart_cpp_CSimpleParticleSystem_render_FUN_005a8290(g_CSimpleParticleSystemPtr);
  }
  return;
}
