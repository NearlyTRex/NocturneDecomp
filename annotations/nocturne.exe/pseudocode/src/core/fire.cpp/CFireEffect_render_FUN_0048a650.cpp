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
  byte *puVar2;
  CSmokeParticle *this_ptr_00;
  CMuzzleFlash *this_ptr_01;
  CBulletTrail *this_ptr_02;
  CExplosion *this_ptr_03;
  CToss *this_ptr_04;
  CGunFlame *this_ptr_05;
  CLightningBolt *this_ptr_06;
  CTrail *this_ptr_07;
  int iVar3;
  CLaserBeam *this_ptr_08;
  
  iVar3 = 0;
  if (0 < _DAT_01c23d48) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1c23d50) == 0) {
        core_fire_cpp_CStake_render_FUN_004835d0((CStake *)(iVar1 + 0x1c23d50));
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar3 < _DAT_01c23d48);
  }
  puVar2 = (byte *)0x1c5b500;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x48;
  } while (puVar2 != &DAT_01c5c700);
  puVar2 = (byte *)0x1c58dfc;
  core_fire_cpp_CFireball_setupRenderState_FUN_004842a0((CFireball *)0x1c58dfc);
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
    }
    puVar2 = puVar2 + 0x9c;
  } while (puVar2 != &DAT_01c5b4fc);
  puVar2 = (byte *)0x1c684e0;
  do {
    (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
    puVar2 = puVar2 + 0x58;
  } while (puVar2 != &DAT_01c69610);
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar3 == 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (0x01E57284,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    iVar3 = 0;
    core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0((CBulletHole *)&DAT_01c20148);
    if (0 < _DAT_01c20140) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c20158) != 0) {
          core_fire_cpp_CBulletHole_render_FUN_00482f50((CBulletHole *)(&DAT_01c20148 + iVar1));
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar3 < _DAT_01c20140);
    }
    this_ptr_00 = (CSmokeParticle *)&DAT_01c0a140;
    core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00482680((CSmokeParticle *)&DAT_01c0a140);
    do {
      if (this_ptr_00->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_00482950(this_ptr_00);
      }
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CSmokeParticle *)&DAT_01c20140);
    this_ptr_01 = (CMuzzleFlash *)&DAT_01c4e958;
    do {
      if (this_ptr_01->frames_remaining != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_00484f00(this_ptr_01);
      }
      this_ptr_01 = this_ptr_01 + 1;
    } while (this_ptr_01 != (CMuzzleFlash *)&DAT_01c4f088);
    iVar3 = 0;
    if (0 < _DAT_01c5c700) {
      this_ptr_08 = (CLaserBeam *)0x1c5c704;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_00485a90(this_ptr_08);
        iVar3 = iVar3 + 1;
        this_ptr_08 = this_ptr_08 + 1;
      } while (iVar3 < _DAT_01c5c700);
    }
    puVar2 = (byte *)0x1c49d54;
    core_fire_cpp_CSpark_setupRenderState_FUN_004837a0((CSpark *)0x1c49d54);
    do {
      if (0.0 < *(float *)(puVar2 + 0x18)) {
        (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x4c;
    } while (puVar2 != &DAT_01c4e954);
    iVar3 = 0x1c4f08c;
    do {
      if (0.0 < *(float *)(iVar3 + 0x18)) {
        (**(code **)(*(int *)(iVar3 + 0x34) + 8))(iVar3);
      }
      iVar3 = iVar3 + 0x9c;
    } while (iVar3 != 0x1c58c8c);
    this_ptr_02 = (CBulletTrail *)0x1c58c90;
    do {
      if (this_ptr_02->frames_remaining != 0) {
        core_fire_cpp_CBulletTrail_render_FUN_004856c0(this_ptr_02);
      }
      this_ptr_02 = this_ptr_02 + 1;
    } while (this_ptr_02 != (CBulletTrail *)&DAT_01c58df8);
    this_ptr_03 = (CExplosion *)0x1c5d708;
    do {
      core_fire_cpp_CExplosion_render_FUN_00486fe0(this_ptr_03);
      this_ptr_03 = this_ptr_03 + 1;
    } while (this_ptr_03 != (CExplosion *)&DAT_01c5d820);
    this_ptr_04 = (CToss *)0x1c5d824;
    do {
      core_fire_cpp_CToss_render_FUN_00487630(this_ptr_04);
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != (CToss *)&DAT_01c625f4);
    this_ptr_05 = (CGunFlame *)&DAT_01c62ebc;
    do {
      core_fire_cpp_CGunFlame_render_FUN_00488580(this_ptr_05);
      this_ptr_05 = this_ptr_05 + 1;
    } while (this_ptr_05 != (CGunFlame *)&DAT_01c6750c);
    this_ptr_06 = (CLightningBolt *)0x1c67510;
    do {
      core_fire_cpp_CLightningBolt_render_FUN_00488bf0(this_ptr_06);
      this_ptr_06 = this_ptr_06 + 1;
    } while (this_ptr_06 != (CLightningBolt *)&DAT_01c676c8);
    this_ptr_07 = (CTrail *)0x1c676cc;
    do {
      core_fire_cpp_CTrail_render_FUN_00489360(this_ptr_07);
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != (CTrail *)&DAT_01c684dc);
    puVar2 = (byte *)0x1c69614;
    do {
      if (0.0 < *(float *)(puVar2 + 0x18)) {
        (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x38;
    } while (puVar2 != &DAT_01c6ce14);
    iVar3 = 0x1c6ce18;
    do {
      if (0.0 < *(float *)(iVar3 + 0x18)) {
        (**(code **)(*(int *)(iVar3 + 0x34) + 8))(iVar3);
      }
      iVar3 = iVar3 + 0x38;
    } while ((CDemonActorType *)iVar3 != &g_CFlameActorType_01c70618);
  }
  return;
}
