// Name: core_fire.cpp_CFireEffect_render_FUN_004a1ad0
// Address: 004a1ad0
// Address Range: [[004a1ad0, 004a1e8b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_render_FUN_004a1ad0(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_render_FUN_004a1ad0(CFireEffect *this_ptr)

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
  byte *puVar3;
  CToss *pCVar4;
  CGunFlame *this_ptr_10;
  CTrail *this_ptr_11;
  CPopcorn *this_ptr_12;
  CRainDrop *this_ptr_13;
  int iVar5;
  
  iVar5 = 0;
  if (0 < _DAT_01c8eea8) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) == 0) {
        core_fire_cpp_CStake_render_FUN_00497dc0
                  ((CStake *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar5 < _DAT_01c8eea8);
  }
  this_ptr_00 = g_RockPool;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CRock *)&DAT_01cf3b84);
  this_ptr_01 = CLeaf_ARRAY_01cf3b88;
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->render)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CLeaf *)&DAT_01cf5088);
  pCVar2 = CFirefly_ARRAY_01cba2b8;
  do {
    if (0.0 < (pCVar2->base).lifetime_remaining) {
      (*((pCVar2->base).vtable)->render)(&pCVar2->base);
    }
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CFirefly *)&DAT_01cbb9b8);
  this_ptr_02 = g_FireballPool;
  core_fire_cpp_CFireball_setupRenderState_FUN_004995a0(g_FireballPool);
  do {
    if (0.0 < (this_ptr_02->base).lifetime_remaining) {
      (*((this_ptr_02->base).vtable)->render)(&this_ptr_02->base);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CFireball *)&DAT_01cf2780);
  this_ptr_03 = g_ShellPool;
  do {
    (*((this_ptr_03->base).vtable)->render)(&this_ptr_03->base);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CShell *)&DAT_01d03b88);
  iVar5 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar5 == 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    iVar5 = 0;
    core_fire_cpp_FUN_004975a0(&DAT_01c8aea8);
    if (0 < _DAT_01c8aea0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c8aeb8) != 0) {
          core_fire_cpp_CBulletHole_render_FUN_00497610((CBulletHole *)(&DAT_01c8aea8 + iVar1));
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + 0x40;
      } while (iVar5 < _DAT_01c8aea0);
    }
    this_ptr_04 = (CSmokeParticle *)&DAT_01c74ea0;
    core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00496c60((CSmokeParticle *)&DAT_01c74ea0);
    do {
      if (this_ptr_04->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_00496f60(this_ptr_04);
      }
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != (CSmokeParticle *)&DAT_01c8aea0);
    this_ptr_05 = (CMuzzleFlash *)&DAT_01cbb9bc;
    do {
      if (this_ptr_05->frames_remaining != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_0049a480(this_ptr_05);
      }
      this_ptr_05 = this_ptr_05 + 1;
    } while (this_ptr_05 != (CMuzzleFlash *)&DAT_01cbc0ec);
    iVar5 = 0;
    if (0 < _DAT_01cf5088) {
      this_ptr_06 = (CLaserBeam *)0x1cf508c;
      do {
        core_fire_cpp_CLaserBeam_render_FUN_0049b1d0(this_ptr_06);
        iVar5 = iVar5 + 1;
        this_ptr_06 = this_ptr_06 + 1;
      } while (iVar5 < _DAT_01cf5088);
    }
    this_ptr_07 = g_SparkPool;
    core_fire_cpp_CSpark_setupRenderState_FUN_00497f70(g_SparkPool);
    do {
      if (0.0 < (this_ptr_07->base).lifetime_remaining) {
        (*((this_ptr_07->base).vtable)->render)(&this_ptr_07->base);
      }
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != (CSpark *)&DAT_01cba2b4);
    pCVar2 = CFirefly_ARRAY_01cba2b8;
    core_fire_cpp_CFirefly_setupRenderState_FUN_00498a10(CFirefly_ARRAY_01cba2b8);
    do {
      if (0.0 < (pCVar2->base).lifetime_remaining) {
        (*((pCVar2->base).vtable)->render)(&pCVar2->base);
      }
      pCVar2 = pCVar2 + 1;
    } while (pCVar2 != (CFirefly *)&DAT_01cbb9b8);
    this_ptr_08 = CGlassParticle_ARRAY_01cbc0f0;
    do {
      if (0.0 < (this_ptr_08->base).lifetime_remaining) {
        (*((this_ptr_08->base).vtable)->render)(&this_ptr_08->base);
      }
      this_ptr_08 = this_ptr_08 + 1;
    } while (this_ptr_08 != (CGlassParticle *)&DAT_01cefd10);
    this_ptr_09 = (CBulletTrail *)0x1cefd14;
    do {
      if (this_ptr_09->frames_remaining != 0) {
        core_fire_cpp_CBulletTrail_render_FUN_0049ad20(this_ptr_09);
      }
      this_ptr_09 = this_ptr_09 + 1;
    } while (this_ptr_09 != (CBulletTrail *)&DAT_01cefe7c);
    puVar3 = (byte *)0x1cf6090;
    do {
      core_fire_cpp_FUN_0049c8e0(puVar3);
      puVar3 = puVar3 + 0x20;
    } while (puVar3 != &DAT_01cf61d0);
    pCVar4 = g_TossPool;
    do {
      core_fire_cpp_FUN_0049d500(pCVar4);
      pCVar4 = pCVar4 + 1;
    } while (pCVar4 != (CToss *)&DAT_01cfaff4);
    this_ptr_10 = (CGunFlame *)0x1cfb8bc;
    do {
      core_fire_cpp_CGunFlame_render_FUN_0049e500(this_ptr_10);
      this_ptr_10 = this_ptr_10 + 1;
    } while (this_ptr_10 != (CGunFlame *)&DAT_01d00eac);
    puVar3 = (byte *)0x1d00eb0;
    do {
      core_fire_cpp_FUN_0049f520(puVar3);
      puVar3 = puVar3 + 0x30;
    } while (puVar3 != &DAT_01d01ab0);
    this_ptr_11 = (CTrail *)0x1d01ab4;
    do {
      core_fire_cpp_CTrail_render_FUN_004a0680(this_ptr_11);
      this_ptr_11 = this_ptr_11 + 1;
    } while (this_ptr_11 != (CTrail *)&DAT_01d028c4);
    this_ptr_12 = g_PopcornPool;
    do {
      if (0.0 < (this_ptr_12->base).lifetime_remaining) {
        (*((this_ptr_12->base).vtable)->render)(&this_ptr_12->base);
      }
      this_ptr_12 = this_ptr_12 + 1;
    } while (&this_ptr_12->base != (CParticle *)&DAT_01d07b8c);
    this_ptr_13 = g_RainDropPool;
    do {
      if (0.0 < (this_ptr_13->base).lifetime_remaining) {
        (*((this_ptr_13->base).vtable)->render)(&this_ptr_13->base);
      }
      this_ptr_13 = this_ptr_13 + 1;
    } while (&this_ptr_13->base != (CParticle *)&DAT_01d0bb90);
    puVar3 = (byte *)0x1d0bb94;
    do {
      puVar3 = puVar3 + 0x1e4;
    } while (puVar3 != &DAT_01d0ce7c);
  }
  return;
}
