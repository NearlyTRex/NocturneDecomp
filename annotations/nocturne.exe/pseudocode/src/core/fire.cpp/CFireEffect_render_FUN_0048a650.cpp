// Name: core_fire.cpp_CFireEffect_render_FUN_0048a650
// Address: 0048a650
// Address Range: [[0048a650, 0048a967]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_render_FUN_0048a650(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_render_FUN_0048a650(CFireEffect *this_ptr)

{
  int iVar1;
  CRock *this_ptr_00;
  CFireball *this_ptr_01;
  CShell *this_ptr_02;
  CSmokeParticle *this_ptr_03;
  CMuzzleFlash *this_ptr_04;
  CSpark *this_ptr_05;
  CGlassParticle *this_ptr_06;
  CBulletTrail *this_ptr_07;
  CExplosion *this_ptr_08;
  CToss *this_ptr_09;
  CGunFlame *this_ptr_10;
  CLightningBolt *this_ptr_11;
  CTrail *this_ptr_12;
  CPopcorn *this_ptr_13;
  CRainDrop *this_ptr_14;
  int iVar2;
  CLaserBeam *this_ptr_15;
  
  iVar2 = 0;
  if (0 < _DAT_01c23d48) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_CStake_ARRAY_01c23d50[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) ==
          0) {
        core_fire_cpp_CStake_render_FUN_004835d0
                  ((CStake *)
                   ((int)g_CStake_ARRAY_01c23d50[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar2 < _DAT_01c23d48);
  }
  this_ptr_00 = g_CRock_ARRAY_01c5b500;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CRock *)&DAT_01c5c700);
  this_ptr_01 = g_CFireball_ARRAY_01c58dfc;
  core_fire_cpp_CFireball_setupRenderState_FUN_004842a0(g_CFireball_ARRAY_01c58dfc);
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->render)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CFireball *)&DAT_01c5b4fc);
  this_ptr_02 = g_CShell_ARRAY_01c684e0;
  do {
    (*((this_ptr_02->base).vtable)->render)(&this_ptr_02->base);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CShell *)&DAT_01c69610);
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 == 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (g_CDemonSet_PTR_005be368,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    iVar2 = 0;
    core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(g_CBulletHole_ARRAY_01c20148);
    if (0 < _DAT_01c20140) {
      iVar1 = 0;
      do {
        if (*(int *)((int)&g_CBulletHole_ARRAY_01c20148[0].actor_ptr + iVar1) != 0) {
          core_fire_cpp_CBulletHole_render_FUN_00482f50
                    ((CBulletHole *)((int)&g_CBulletHole_ARRAY_01c20148[0].position.x + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < _DAT_01c20140);
    }
    this_ptr_03 = g_CSmokeParticle_ARRAY_01c0a140;
    core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00482680(g_CSmokeParticle_ARRAY_01c0a140);
    do {
      if (this_ptr_03->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_00482950(this_ptr_03);
      }
      this_ptr_03 = this_ptr_03 + 1;
    } while (this_ptr_03 != (CSmokeParticle *)&DAT_01c20140);
    this_ptr_04 = g_CMuzzleFlash_ARRAY_01c4e958;
    do {
      if (this_ptr_04->frames_remaining != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_00484f00(this_ptr_04);
      }
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != (CMuzzleFlash *)&DAT_01c4f088);
    iVar2 = 0;
    if (0 < _DAT_01c5c700) {
      this_ptr_15 = g_CLaserBeam_ARRAY_01c5c704;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_00485a90(this_ptr_15);
        iVar2 = iVar2 + 1;
        this_ptr_15 = this_ptr_15 + 1;
      } while (iVar2 < _DAT_01c5c700);
    }
    this_ptr_05 = g_CSpark_ARRAY_01c49d54;
    core_fire_cpp_CSpark_setupRenderState_FUN_004837a0(g_CSpark_ARRAY_01c49d54);
    do {
      if (0.0 < (this_ptr_05->base).lifetime_remaining) {
        (*((this_ptr_05->base).vtable)->render)(&this_ptr_05->base);
      }
      this_ptr_05 = this_ptr_05 + 1;
    } while (this_ptr_05 != (CSpark *)&DAT_01c4e954);
    this_ptr_06 = g_CGlassParticle_ARRAY_01c4f08c;
    do {
      if (0.0 < (this_ptr_06->base).lifetime_remaining) {
        (*((this_ptr_06->base).vtable)->render)(&this_ptr_06->base);
      }
      this_ptr_06 = this_ptr_06 + 1;
    } while (this_ptr_06 != (CGlassParticle *)0x1c58c8c);
    this_ptr_07 = g_CBulletTrail_ARRAY_01c58c90;
    do {
      if (this_ptr_07->frames_remaining != 0) {
        core_fire_cpp_CBulletTrail_render_FUN_004856c0(this_ptr_07);
      }
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != (CBulletTrail *)&DAT_01c58df8);
    this_ptr_08 = g_CExplosion_ARRAY_01c5d708;
    do {
      core_fire_cpp_CExplosion_render_FUN_00486fe0(this_ptr_08);
      this_ptr_08 = this_ptr_08 + 1;
    } while (this_ptr_08 != (CExplosion *)&DAT_01c5d820);
    this_ptr_09 = g_CToss_ARRAY_01c5d824;
    do {
      core_fire_cpp_CToss_render_FUN_00487630(this_ptr_09);
      this_ptr_09 = this_ptr_09 + 1;
    } while (this_ptr_09 != (CToss *)&DAT_01c625f4);
    this_ptr_10 = g_CGunFlame_ARRAY_01c62ebc;
    do {
      core_fire_cpp_CGunFlame_render_FUN_00488580(this_ptr_10);
      this_ptr_10 = this_ptr_10 + 1;
    } while (this_ptr_10 != (CGunFlame *)&DAT_01c6750c);
    this_ptr_11 = g_CLightningBolt_ARRAY_01c67510;
    do {
      core_fire_cpp_CLightningBolt_render_FUN_00488bf0(this_ptr_11);
      this_ptr_11 = this_ptr_11 + 1;
    } while (this_ptr_11 != (CLightningBolt *)&DAT_01c676c8);
    this_ptr_12 = g_CTrail_ARRAY_01c676cc;
    do {
      core_fire_cpp_CTrail_render_FUN_00489360(this_ptr_12);
      this_ptr_12 = this_ptr_12 + 1;
    } while (this_ptr_12 != (CTrail *)&DAT_01c684dc);
    this_ptr_13 = g_CPopcorn_ARRAY_01c69614;
    do {
      if (0.0 < (this_ptr_13->base).lifetime_remaining) {
        (*((this_ptr_13->base).vtable)->render)(&this_ptr_13->base);
      }
      this_ptr_13 = this_ptr_13 + 1;
    } while (&this_ptr_13->base != (CParticle *)&DAT_01c6ce14);
    this_ptr_14 = g_CRainDrop_ARRAY_01c6ce18;
    do {
      if (0.0 < (this_ptr_14->base).lifetime_remaining) {
        (*((this_ptr_14->base).vtable)->render)(&this_ptr_14->base);
      }
      this_ptr_14 = this_ptr_14 + 1;
    } while (this_ptr_14 != g_CRainDrop_ARRAY_01c6ce18 + sizeof(g_CRainDrop_ARRAY_01c6ce18) / sizeof(g_CRainDrop_ARRAY_01c6ce18[0]));
  }
  return;
}
