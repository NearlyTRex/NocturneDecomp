// Name: core_fire.cpp_CFireEffect_render_FUN_004c7180
// Address: 004c7180
// Address Range: [[004c7180, 004c7497]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_render_FUN_004c7180(CFireEffect * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a375 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056c072 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c511 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cb86 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CSmokeParticle[2048] g_CFireEffectSmokeParticles
//   undefined4 DAT_02d14218
//   undefined4 DAT_02d2a1ec
//   CBulletHole[256] g_CFireEffectBulletHoles
//   undefined4 DAT_02d2a204
//   undefined4 DAT_02d2a230
//   undefined4 DAT_02d2a240
//   undefined4 DAT_02d2ddf4
//   CStake[256] g_CFireEffectStakes
//   undefined4 DAT_02d2e05c
//   CSpark[256] g_CFireEffectSparks
//   undefined4 DAT_02d53e18
//   undefined4 DAT_02d53e4c
//   undefined4 DAT_02d53e64
//   undefined4 DAT_02d58a00
//   CMuzzleFlash[20] g_CFireEffectMuzzleFlashes
//   undefined4 DAT_02d58a60
//   undefined4 DAT_02d59134
//   CGlassParticle[256] g_CFireEffectGlassParticles
//   undefined4 DAT_02d59150
//   undefined4 DAT_02d591d4
//   undefined4 DAT_02d591ec
//   undefined4 DAT_02d62d38
//   CBulletTrail[10] g_CFireEffectBulletTrails
//   undefined4 DAT_02d62d5c
//   undefined4 DAT_02d62d60
//   undefined4 DAT_02d62d80
//   undefined4 DAT_02d62ea4
//   CFireball[64] g_CFireEffectFireballs
//   undefined4 DAT_02d62ec0
//   undefined4 DAT_02d62f44
//   undefined4 DAT_02d62f5c
//   undefined4 DAT_02d655a8
//   CRock[64] g_CFireEffectRocks
//   undefined4 DAT_02d655c4
//   undefined4 DAT_02d655f4
//   undefined4 DAT_02d6560c
//   undefined4 DAT_02d667ac
//   CLaserBeam[64] g_CFireEffectLaserBeams
//   undefined4 DAT_02d667f0
//   CExplosion[10] g_CFireEffectExplosions
//   undefined4 DAT_02d677d0
//   undefined4 DAT_02d678cc
//   CToss[20] g_CFireEffectTosses
//   undefined4 DAT_02d67cb4
//   undefined4 DAT_02d6c6a0
//   CGunFlame[500] g_CFireEffectGunFlames
//   undefined4 DAT_02d6cf8c
//   undefined4 DAT_02d715b8
//   CLightningBolt[10] g_CFireEffectLightningBolts
//   undefined4 DAT_02d715e8
//   undefined4 DAT_02d71774
//   CTrail[100] g_CFireEffectTrails
//   undefined4 DAT_02d7179c
//   undefined4 DAT_02d72588
//   CShell[50] g_CFireEffectShells
//   undefined4 DAT_02d725e4
//   undefined4 DAT_02d736bc
//   CPopcorn[256] g_CFireEffectPopcorns
//   undefined4 DAT_02d736d8
//   undefined4 DAT_02d736f8
//   undefined4 DAT_02d73710
//   undefined4 DAT_02d76ec0
//   CRainDrop[256] g_CFireEffectRainDrops
//   undefined4 DAT_02d76edc
//   undefined4 DAT_02d76efc
//   undefined4 DAT_02d76f14
//   CDemonActorType g_CFlameClassInfo
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_fire.cpp_CBulletHole_FUN_004bfa40
//   core_fire.cpp_CBulletTrail_FUN_004c21f0
//   core_fire.cpp_CExplosion_FUN_004c3b10
//   core_fire.cpp_CFireball_FUN_004c0d80
//   core_fire.cpp_CGunFlame_FUN_004c50b0
//   core_fire.cpp_CLaserBeam_FUN_004c25c0
//   core_fire.cpp_CLightningBolt_FUN_004c5720
//   core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
//   core_fire.cpp_CSmokeParticle_FUN_004bf1f0
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
//   core_fire.cpp_CSpark_FUN_004c0300
//   core_fire.cpp_CToss_FUN_004c4160
//   core_fire.cpp_CTrail_FUN_004c5e90
//   core_fire.cpp_FUN_004bfac0
//   core_fire.cpp_FUN_004c0140
//   core_set.cpp_CDemonSet_FUN_0056d380
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_render_FUN_004c7180(CFireEffect *this_ptr)

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
  if (0 < DAT_02d2ddf4) {
    iVar1 = 0;
    do {
      if (*(int *)(g_CFireEffectStakes[0].field0_0x0 + iVar1) == 0) {
        core_fire_cpp_FUN_004c0140();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x260;
    } while (iVar2 < DAT_02d2ddf4);
  }
  this_ptr_00 = g_CFireEffectRocks;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CRock *)&DAT_02d667ac);
  this_ptr_01 = g_CFireEffectFireballs;
  core_fire_cpp_CFireball_FUN_004c0d80(g_CFireEffectFireballs);
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->render)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CFireball *)&DAT_02d655a8);
  this_ptr_02 = g_CFireEffectShells;
  do {
    (*((this_ptr_02->base).vtable)->render)(&this_ptr_02->base);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CShell *)&DAT_02d736bc);
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    iVar2 = 0;
    core_fire_cpp_CBulletHole_FUN_004bfa40(g_CFireEffectBulletHoles);
    if (0 < DAT_02d2a1ec) {
      iVar1 = 0;
      do {
        if (*(int *)(g_CFireEffectBulletHoles[0].field0_0x0 + iVar1 + 0x10) != 0) {
          core_fire_cpp_FUN_004bfac0();
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < DAT_02d2a1ec);
    }
    this_ptr_03 = g_CFireEffectSmokeParticles;
    core_fire_cpp_CSmokeParticle_FUN_004bf1f0(g_CFireEffectSmokeParticles);
    do {
      if (this_ptr_03->active != 0) {
        core_fire_cpp_CSmokeParticle_render_FUN_004bf4c0(this_ptr_03);
      }
      this_ptr_03 = this_ptr_03 + 1;
    } while (this_ptr_03 != (CSmokeParticle *)&DAT_02d2a1ec);
    this_ptr_04 = g_CFireEffectMuzzleFlashes;
    do {
      if (*(int *)this_ptr_04->field0_0x0 != 0) {
        core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(this_ptr_04);
      }
      this_ptr_04 = this_ptr_04 + 1;
    } while (this_ptr_04 != (CMuzzleFlash *)&DAT_02d59134);
    iVar2 = 0;
    if (0 < DAT_02d667ac) {
      this_ptr_15 = g_CFireEffectLaserBeams;
      do {
        core_fire_cpp_CLaserBeam_FUN_004c25c0(this_ptr_15);
        iVar2 = iVar2 + 1;
        this_ptr_15 = this_ptr_15 + 1;
      } while (iVar2 < DAT_02d667ac);
    }
    this_ptr_05 = g_CFireEffectSparks;
    core_fire_cpp_CSpark_FUN_004c0300(g_CFireEffectSparks);
    do {
      if (0.0 < (this_ptr_05->base).lifetime_remaining) {
        (*((this_ptr_05->base).vtable)->render)(&this_ptr_05->base);
      }
      this_ptr_05 = this_ptr_05 + 1;
    } while (this_ptr_05 != (CSpark *)&DAT_02d58a00);
    this_ptr_06 = g_CFireEffectGlassParticles;
    do {
      if (0.0 < (this_ptr_06->base).lifetime_remaining) {
        (*((this_ptr_06->base).vtable)->render)(&this_ptr_06->base);
      }
      this_ptr_06 = this_ptr_06 + 1;
    } while (this_ptr_06 != (CGlassParticle *)&DAT_02d62d38);
    this_ptr_07 = g_CFireEffectBulletTrails;
    do {
      if (*(int *)(this_ptr_07->field0_0x0 + 0x20) != 0) {
        core_fire_cpp_CBulletTrail_FUN_004c21f0(this_ptr_07);
      }
      this_ptr_07 = this_ptr_07 + 1;
    } while (this_ptr_07 != (CBulletTrail *)&DAT_02d62ea4);
    this_ptr_08 = g_CFireEffectExplosions;
    do {
      core_fire_cpp_CExplosion_FUN_004c3b10(this_ptr_08);
      this_ptr_08 = this_ptr_08 + 1;
    } while (this_ptr_08 != (CExplosion *)&DAT_02d678cc);
    this_ptr_09 = g_CFireEffectTosses;
    do {
      core_fire_cpp_CToss_FUN_004c4160(this_ptr_09);
      this_ptr_09 = this_ptr_09 + 1;
    } while (this_ptr_09 != (CToss *)&DAT_02d6c6a0);
    this_ptr_10 = g_CFireEffectGunFlames;
    do {
      core_fire_cpp_CGunFlame_FUN_004c50b0(this_ptr_10);
      this_ptr_10 = this_ptr_10 + 1;
    } while (this_ptr_10 != (CGunFlame *)&DAT_02d715b8);
    this_ptr_11 = g_CFireEffectLightningBolts;
    do {
      core_fire_cpp_CLightningBolt_FUN_004c5720(this_ptr_11);
      this_ptr_11 = this_ptr_11 + 1;
    } while (this_ptr_11 != (CLightningBolt *)&DAT_02d71774);
    this_ptr_12 = g_CFireEffectTrails;
    do {
      core_fire_cpp_CTrail_FUN_004c5e90(this_ptr_12);
      this_ptr_12 = this_ptr_12 + 1;
    } while (this_ptr_12 != (CTrail *)&DAT_02d72588);
    this_ptr_13 = g_CFireEffectPopcorns;
    do {
      if (0.0 < (this_ptr_13->base).lifetime_remaining) {
        (*((this_ptr_13->base).vtable)->render)(&this_ptr_13->base);
      }
      this_ptr_13 = (CPopcorn *)(&this_ptr_13->base + 1);
    } while ((CParticle *)this_ptr_13 != (CParticle *)&DAT_02d76ec0);
    this_ptr_14 = g_CFireEffectRainDrops;
    do {
      if (0.0 < (this_ptr_14->base).lifetime_remaining) {
        (*((this_ptr_14->base).vtable)->render)(&this_ptr_14->base);
      }
      this_ptr_14 = (CRainDrop *)(&this_ptr_14->base + 1);
    } while ((CDemonActorType *)this_ptr_14 != &g_CFlameClassInfo);
  }
  return;
}


// Assembly code:
// 004c7180: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_render_FUN_004c7180
// 004c7181: PUSH ESI
// 004c7182: PUSH EDI
// 004c7183: PUSH EBP
// 004c7184: MOV EBP,ESP
// 004c7186: AND ESP,0xfffffff8
// 004c7189: MOV EDX,dword ptr [0x02d2ddf4]
//   XREF to: 02d2ddf4 (READ)
// 004c718f: XOR ESI,ESI
// 004c7191: TEST EDX,EDX
// 004c7193: JLE 0x004c71b5
//   XREF to: 004c71b5 (CONDITIONAL_JUMP)
// 004c7195: XOR EBX,EBX
// 004c7197: CMP dword ptr [EBX + 0x2d2ddfc],0x0
//   Label: LAB_004c7197
//   XREF to: 02d2ddfc (READ)
//   XREF to: 02d2e05c (READ)
// 004c719e: JZ 0x004c7483
//   XREF to: 004c7483 (CONDITIONAL_JUMP)
// 004c71a4: MOV ECX,dword ptr [0x02d2ddf4]
//   Label: LAB_004c71a4
//   XREF to: 02d2ddf4 (READ)
// 004c71aa: INC ESI
// 004c71ab: ADD EBX,0x260
// 004c71b1: CMP ESI,ECX
// 004c71b3: JL 0x004c7197
//   XREF to: 004c7197 (CONDITIONAL_JUMP)
// 004c71b5: MOV EBX,0x2d655ac
//   Label: LAB_004c71b5
//   XREF to: 02d655ac (DATA)
// 004c71ba: LEA ESI,[EBX + 0x1200]
//   XREF to: 02d667ac (DATA)
// 004c71c0: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c71c0
//   XREF to: 02d655c4 (READ)
//   XREF to: 02d6560c (READ)
// 004c71c3: FLDZ
// 004c71c5: FCOMPP
// 004c71c7: FNSTSW AX
// 004c71c9: SAHF
// 004c71ca: JNC 0x004c71d6
//   XREF to: 004c71d6 (CONDITIONAL_JUMP)
// 004c71cc: PUSH EBX
//   XREF to: 02d655ac (DATA)
//   XREF to: 02d655f4 (DATA)
// 004c71cd: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d655e0 (READ)
//   XREF to: 02d65628 (READ)
// 004c71d0: CALL dword ptr [EAX + 0x8]
// 004c71d3: ADD ESP,0x4
// 004c71d6: ADD EBX,0x48
//   Label: LAB_004c71d6
// 004c71d9: CMP EBX,ESI
// 004c71db: JNZ 0x004c71c0
//   XREF to: 004c71c0 (CONDITIONAL_JUMP)
// 004c71dd: PUSH 0x2d62ea8
//   XREF to: 02d62ea8 (DATA)
// 004c71e2: MOV EBX,0x2d62ea8
//   XREF to: 02d62ea8 (PARAM)
// 004c71e7: CALL core_fire.cpp_CFireball_FUN_004c0d80
//   XREF to: 004c0d80 (UNCONDITIONAL_CALL)
// 004c71ec: ADD ESP,0x4
// 004c71ef: LEA ESI,[EBX + 0x2700]
//   XREF to: 02d655a8 (DATA)
// 004c71f5: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c71f5
//   XREF to: 02d62ec0 (READ)
//   XREF to: 02d62f5c (READ)
// 004c71f8: FLDZ
// 004c71fa: FCOMPP
// 004c71fc: FNSTSW AX
// 004c71fe: SAHF
// 004c71ff: JNC 0x004c720b
//   XREF to: 004c720b (CONDITIONAL_JUMP)
// 004c7201: PUSH EBX
//   XREF to: 02d62ea8 (DATA)
//   XREF to: 02d62f44 (DATA)
// 004c7202: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d62edc (READ)
//   XREF to: 02d62f78 (READ)
// 004c7205: CALL dword ptr [EAX + 0x8]
// 004c7208: ADD ESP,0x4
// 004c720b: ADD EBX,0x9c
//   Label: LAB_004c720b
// 004c7211: CMP EBX,ESI
// 004c7213: JNZ 0x004c71f5
//   XREF to: 004c71f5 (CONDITIONAL_JUMP)
// 004c7215: MOV EBX,0x2d7258c
//   XREF to: 02d7258c (DATA)
// 004c721a: LEA ESI,[EBX + 0x1130]
//   XREF to: 02d736bc (DATA)
// 004c7220: PUSH EBX
//   Label: LAB_004c7220
//   XREF to: 02d7258c (DATA)
//   XREF to: 02d725e4 (DATA)
// 004c7221: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d725c0 (READ)
//   XREF to: 02d72618 (READ)
// 004c7224: CALL dword ptr [EAX + 0x8]
// 004c7227: ADD EBX,0x58
//   XREF to: 02d725e4 (PARAM)
// 004c722a: ADD ESP,0x4
// 004c722d: CMP EBX,ESI
// 004c722f: JNZ 0x004c7220
//   XREF to: 004c7220 (CONDITIONAL_JUMP)
// 004c7231: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c7236: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c7237: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004c723c: ADD ESP,0x4
// 004c723f: TEST EAX,EAX
// 004c7241: JNZ 0x004c747c
//   XREF to: 004c747c (CONDITIONAL_JUMP)
// 004c7247: PUSH EAX
// 004c7248: PUSH EAX
// 004c7249: PUSH EAX
// 004c724a: PUSH EAX
// 004c724b: PUSH EAX
// 004c724c: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c7252: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004c7253: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 004c7258: ADD ESP,0x18
// 004c725b: PUSH 0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004c7260: XOR ESI,ESI
// 004c7262: CALL core_fire.cpp_CBulletHole_FUN_004bfa40
//   XREF to: 004bfa40 (UNCONDITIONAL_CALL)
// 004c7267: MOV ECX,dword ptr [0x02d2a1ec]
//   XREF to: 02d2a1ec (READ)
// 004c726d: ADD ESP,0x4
// 004c7270: TEST ECX,ECX
// 004c7272: JLE 0x004c729d
//   XREF to: 004c729d (CONDITIONAL_JUMP)
// 004c7274: XOR EBX,EBX
// 004c7276: CMP dword ptr [EBX + 0x2d2a204],0x0
//   Label: LAB_004c7276
//   XREF to: 02d2a204 (READ)
//   XREF to: 02d2a240 (READ)
// 004c727d: JZ 0x004c728f
//   XREF to: 004c728f (CONDITIONAL_JUMP)
// 004c727f: MOV EAX,0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004c7284: ADD EAX,EBX
//   XREF to: 02d2a1f4 (PARAM)
//   XREF to: 02d2a230 (PARAM)
// 004c7286: PUSH EAX
//   XREF to: 02d2a1f4 (DATA)
//   XREF to: 02d2a230 (DATA)
// 004c7287: CALL core_fire.cpp_FUN_004bfac0
//   XREF to: 004bfac0 (UNCONDITIONAL_CALL)
// 004c728c: ADD ESP,0x4
// 004c728f: MOV EDI,dword ptr [0x02d2a1ec]
//   Label: LAB_004c728f
//   XREF to: 02d2a1ec (READ)
// 004c7295: INC ESI
// 004c7296: ADD EBX,0x3c
// 004c7299: CMP ESI,EDI
// 004c729b: JL 0x004c7276
//   XREF to: 004c7276 (CONDITIONAL_JUMP)
// 004c729d: PUSH 0x2d141ec
//   Label: LAB_004c729d
//   XREF to: 02d141ec (DATA)
// 004c72a2: MOV EBX,0x2d141ec
//   XREF to: 02d141ec (PARAM)
// 004c72a7: CALL core_fire.cpp_CSmokeParticle_FUN_004bf1f0
//   XREF to: 004bf1f0 (UNCONDITIONAL_CALL)
// 004c72ac: ADD ESP,0x4
// 004c72af: LEA ESI,[EBX + 0x16000]
//   XREF to: 02d2a1ec (DATA)
// 004c72b5: MOV EAX,dword ptr [EBX]
//   Label: LAB_004c72b5
//   XREF to: 02d141ec (READ)
//   XREF to: 02d14218 (READ)
// 004c72b7: TEST EAX,EAX
// 004c72b9: JZ 0x004c72c4
//   XREF to: 004c72c4 (CONDITIONAL_JUMP)
// 004c72bb: PUSH EBX
//   XREF to: 02d141ec (DATA)
//   XREF to: 02d14218 (DATA)
// 004c72bc: CALL core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
//   XREF to: 004bf4c0 (UNCONDITIONAL_CALL)
// 004c72c1: ADD ESP,0x4
// 004c72c4: ADD EBX,0x2c
//   Label: LAB_004c72c4
//   XREF to: 02d14218 (PARAM)
// 004c72c7: CMP EBX,ESI
// 004c72c9: JNZ 0x004c72b5
//   XREF to: 004c72b5 (CONDITIONAL_JUMP)
// 004c72cb: MOV EBX,0x2d58a04
//   XREF to: 02d58a04 (PARAM)
// 004c72d0: LEA ESI,[EBX + 0x730]
//   XREF to: 02d59134 (DATA)
// 004c72d6: MOV EAX,dword ptr [EBX]
//   Label: LAB_004c72d6
//   XREF to: 02d58a04 (READ)
//   XREF to: 02d58a60 (READ)
// 004c72d8: TEST EAX,EAX
// 004c72da: JZ 0x004c72e5
//   XREF to: 004c72e5 (CONDITIONAL_JUMP)
// 004c72dc: PUSH EBX
//   XREF to: 02d58a04 (DATA)
//   XREF to: 02d58a60 (DATA)
// 004c72dd: CALL core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
//   XREF to: 004c1a30 (UNCONDITIONAL_CALL)
// 004c72e2: ADD ESP,0x4
// 004c72e5: ADD EBX,0x5c
//   Label: LAB_004c72e5
//   XREF to: 02d58a60 (PARAM)
// 004c72e8: CMP EBX,ESI
// 004c72ea: JNZ 0x004c72d6
//   XREF to: 004c72d6 (CONDITIONAL_JUMP)
// 004c72ec: MOV EDX,dword ptr [0x02d667ac]
//   XREF to: 02d667ac (READ)
// 004c72f2: XOR EBX,ESI
// 004c72f4: TEST EDX,EDX
// 004c72f6: JLE 0x004c7320
//   XREF to: 004c7320 (CONDITIONAL_JUMP)
// 004c72f8: MOV ESI,0x2d667b0
//   XREF to: 02d667b0 (DATA)
// 004c72fd: PUSH ESI
//   Label: LAB_004c72fd
//   XREF to: 02d667b0 (DATA)
//   XREF to: 02d667f0 (DATA)
// 004c72fe: CALL core_fire.cpp_CLaserBeam_FUN_004c25c0
//   XREF to: 004c25c0 (UNCONDITIONAL_CALL)
// 004c7303: INC EBX
// 004c7304: MOV ECX,dword ptr [0x02d667ac]
//   XREF to: 02d667ac (READ)
// 004c730a: ADD ESP,0x4
// 004c730d: ADD ESI,0x40
// 004c7310: CMP EBX,ECX
// 004c7312: JL 0x004c72fd
//   XREF to: 004c72fd (CONDITIONAL_JUMP)
// 004c7314: LEA EAX,[EAX]
// 004c731a: LEA EDX,[EDX]
// 004c7320: PUSH 0x2d53e00
//   Label: LAB_004c7320
//   XREF to: 02d53e00 (DATA)
// 004c7325: MOV EBX,0x2d53e00
//   XREF to: 02d53e00 (PARAM)
// 004c732a: CALL core_fire.cpp_CSpark_FUN_004c0300
//   XREF to: 004c0300 (UNCONDITIONAL_CALL)
// 004c732f: ADD ESP,0x4
// 004c7332: LEA ESI,[EBX + 0x4c00]
//   XREF to: 02d58a00 (DATA)
// 004c7338: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c7338
//   XREF to: 02d53e18 (READ)
//   XREF to: 02d53e64 (READ)
// 004c733b: FLDZ
// 004c733d: FCOMPP
// 004c733f: FNSTSW AX
// 004c7341: SAHF
// 004c7342: JNC 0x004c734e
//   XREF to: 004c734e (CONDITIONAL_JUMP)
// 004c7344: PUSH EBX
//   XREF to: 02d53e00 (DATA)
//   XREF to: 02d53e4c (DATA)
// 004c7345: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d53e34 (READ)
//   XREF to: 02d53e80 (READ)
// 004c7348: CALL dword ptr [EAX + 0x8]
// 004c734b: ADD ESP,0x4
// 004c734e: ADD EBX,0x4c
//   Label: LAB_004c734e
// 004c7351: CMP EBX,ESI
// 004c7353: JNZ 0x004c7338
//   XREF to: 004c7338 (CONDITIONAL_JUMP)
// 004c7355: MOV EBX,0x2d59138
//   XREF to: 02d59138 (DATA)
// 004c735a: LEA ESI,[EBX + 0x9c00]
//   XREF to: 02d62d38 (DATA)
// 004c7360: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c7360
//   XREF to: 02d59150 (READ)
//   XREF to: 02d591ec (READ)
// 004c7363: FLDZ
// 004c7365: FCOMPP
// 004c7367: FNSTSW AX
// 004c7369: SAHF
// 004c736a: JNC 0x004c7376
//   XREF to: 004c7376 (CONDITIONAL_JUMP)
// 004c736c: PUSH EBX
//   XREF to: 02d59138 (DATA)
//   XREF to: 02d591d4 (DATA)
// 004c736d: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d5916c (READ)
//   XREF to: 02d59208 (READ)
// 004c7370: CALL dword ptr [EAX + 0x8]
// 004c7373: ADD ESP,0x4
// 004c7376: ADD EBX,0x9c
//   Label: LAB_004c7376
// 004c737c: CMP EBX,ESI
// 004c737e: JNZ 0x004c7360
//   XREF to: 004c7360 (CONDITIONAL_JUMP)
// 004c7380: MOV EBX,0x2d62d3c
//   XREF to: 02d62d3c (PARAM)
// 004c7385: LEA ESI,[EBX + 0x168]
//   XREF to: 02d62ea4 (DATA)
// 004c738b: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_004c738b
//   XREF to: 02d62d5c (READ)
//   XREF to: 02d62d80 (READ)
// 004c738e: TEST EAX,EAX
// 004c7390: JZ 0x004c739b
//   XREF to: 004c739b (CONDITIONAL_JUMP)
// 004c7392: PUSH EBX
//   XREF to: 02d62d3c (DATA)
//   XREF to: 02d62d60 (DATA)
// 004c7393: CALL core_fire.cpp_CBulletTrail_FUN_004c21f0
//   XREF to: 004c21f0 (UNCONDITIONAL_CALL)
// 004c7398: ADD ESP,0x4
// 004c739b: ADD EBX,0x24
//   Label: LAB_004c739b
//   XREF to: 02d62d60 (PARAM)
// 004c739e: CMP EBX,ESI
// 004c73a0: JNZ 0x004c738b
//   XREF to: 004c738b (CONDITIONAL_JUMP)
// 004c73a2: MOV EBX,0x2d677b4
//   XREF to: 02d677b4 (PARAM)
// 004c73a7: LEA ESI,[EBX + 0x118]
//   XREF to: 02d678cc (DATA)
// 004c73ad: PUSH EBX
//   Label: LAB_004c73ad
//   XREF to: 02d677b4 (DATA)
//   XREF to: 02d677d0 (DATA)
// 004c73ae: CALL core_fire.cpp_CExplosion_FUN_004c3b10
//   XREF to: 004c3b10 (UNCONDITIONAL_CALL)
// 004c73b3: ADD EBX,0x1c
//   XREF to: 02d677d0 (PARAM)
// 004c73b6: ADD ESP,0x4
// 004c73b9: CMP EBX,ESI
// 004c73bb: JNZ 0x004c73ad
//   XREF to: 004c73ad (CONDITIONAL_JUMP)
// 004c73bd: MOV EBX,0x2d678d0
//   XREF to: 02d678d0 (PARAM)
// 004c73c2: LEA ESI,[EBX + 0x4dd0]
//   XREF to: 02d6c6a0 (DATA)
// 004c73c8: PUSH EBX
//   Label: LAB_004c73c8
//   XREF to: 02d678d0 (DATA)
//   XREF to: 02d67cb4 (DATA)
// 004c73c9: CALL core_fire.cpp_CToss_FUN_004c4160
//   XREF to: 004c4160 (UNCONDITIONAL_CALL)
// 004c73ce: ADD EBX,0x3e4
//   XREF to: 02d67cb4 (PARAM)
// 004c73d4: ADD ESP,0x4
// 004c73d7: CMP EBX,ESI
// 004c73d9: JNZ 0x004c73c8
//   XREF to: 004c73c8 (CONDITIONAL_JUMP)
// 004c73db: MOV EBX,0x2d6cf68
//   XREF to: 02d6cf68 (PARAM)
// 004c73e0: LEA ESI,[EBX + 0x4650]
//   XREF to: 02d715b8 (DATA)
// 004c73e6: PUSH EBX
//   Label: LAB_004c73e6
//   XREF to: 02d6cf68 (DATA)
//   XREF to: 02d6cf8c (DATA)
// 004c73e7: CALL core_fire.cpp_CGunFlame_FUN_004c50b0
//   XREF to: 004c50b0 (UNCONDITIONAL_CALL)
// 004c73ec: ADD EBX,0x24
//   XREF to: 02d6cf8c (PARAM)
// 004c73ef: ADD ESP,0x4
// 004c73f2: CMP EBX,ESI
// 004c73f4: JNZ 0x004c73e6
//   XREF to: 004c73e6 (CONDITIONAL_JUMP)
// 004c73f6: MOV EBX,0x2d715bc
//   XREF to: 02d715bc (PARAM)
// 004c73fb: LEA ESI,[EBX + 0x1b8]
//   XREF to: 02d71774 (DATA)
// 004c7401: PUSH EBX
//   Label: LAB_004c7401
//   XREF to: 02d715bc (DATA)
//   XREF to: 02d715e8 (DATA)
// 004c7402: CALL core_fire.cpp_CLightningBolt_FUN_004c5720
//   XREF to: 004c5720 (UNCONDITIONAL_CALL)
// 004c7407: ADD EBX,0x2c
//   XREF to: 02d715e8 (PARAM)
// 004c740a: ADD ESP,0x4
// 004c740d: CMP EBX,ESI
// 004c740f: JNZ 0x004c7401
//   XREF to: 004c7401 (CONDITIONAL_JUMP)
// 004c7411: MOV EBX,0x2d71778
//   XREF to: 02d71778 (PARAM)
// 004c7416: LEA ESI,[EBX + 0xe10]
//   XREF to: 02d72588 (DATA)
// 004c741c: PUSH EBX
//   Label: LAB_004c741c
//   XREF to: 02d71778 (DATA)
//   XREF to: 02d7179c (DATA)
// 004c741d: CALL core_fire.cpp_CTrail_FUN_004c5e90
//   XREF to: 004c5e90 (UNCONDITIONAL_CALL)
// 004c7422: ADD EBX,0x24
//   XREF to: 02d7179c (PARAM)
// 004c7425: ADD ESP,0x4
// 004c7428: CMP EBX,ESI
// 004c742a: JNZ 0x004c741c
//   XREF to: 004c741c (CONDITIONAL_JUMP)
// 004c742c: MOV EBX,0x2d736c0
//   XREF to: 02d736c0 (DATA)
// 004c7431: LEA ESI,[EBX + 0x3800]
//   XREF to: 02d76ec0 (DATA)
// 004c7437: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c7437
//   XREF to: 02d736d8 (READ)
//   XREF to: 02d73710 (READ)
// 004c743a: FLDZ
// 004c743c: FCOMPP
// 004c743e: FNSTSW AX
// 004c7440: SAHF
// 004c7441: JNC 0x004c744d
//   XREF to: 004c744d (CONDITIONAL_JUMP)
// 004c7443: PUSH EBX
//   XREF to: 02d736c0 (DATA)
//   XREF to: 02d736f8 (DATA)
// 004c7444: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d736f4 (READ)
//   XREF to: 02d7372c (READ)
// 004c7447: CALL dword ptr [EAX + 0x8]
// 004c744a: ADD ESP,0x4
// 004c744d: ADD EBX,0x38
//   Label: LAB_004c744d
// 004c7450: CMP EBX,ESI
// 004c7452: JNZ 0x004c7437
//   XREF to: 004c7437 (CONDITIONAL_JUMP)
// 004c7454: MOV EBX,0x2d76ec4
//   XREF to: 02d76ec4 (DATA)
// 004c7459: LEA ESI,[EBX + 0x3800]
//   XREF to: 02d7a6c4 (DATA)
// 004c745f: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c745f
//   XREF to: 02d76edc (READ)
//   XREF to: 02d76f14 (READ)
// 004c7462: FLDZ
// 004c7464: FCOMPP
// 004c7466: FNSTSW AX
// 004c7468: SAHF
// 004c7469: JNC 0x004c7475
//   XREF to: 004c7475 (CONDITIONAL_JUMP)
// 004c746b: PUSH EBX
//   XREF to: 02d76ec4 (DATA)
//   XREF to: 02d76efc (DATA)
// 004c746c: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d76ef8 (READ)
//   XREF to: 02d76f30 (READ)
// 004c746f: CALL dword ptr [EAX + 0x8]
// 004c7472: ADD ESP,0x4
// 004c7475: ADD EBX,0x38
//   Label: LAB_004c7475
// 004c7478: CMP EBX,ESI
// 004c747a: JNZ 0x004c745f
//   XREF to: 004c745f (CONDITIONAL_JUMP)
// 004c747c: MOV ESP,EBP
//   Label: LAB_004c747c
// 004c747e: POP EBP
// 004c747f: POP EDI
// 004c7480: POP ESI
// 004c7481: POP EBX
// 004c7482: RET
// 004c7483: MOV EAX,0x2d2ddfc
//   Label: LAB_004c7483
//   XREF to: 02d2ddfc (DATA)
// 004c7488: ADD EAX,EBX
//   XREF to: 02d2e05c (PARAM)
// 004c748a: PUSH EAX
//   XREF to: 02d2e05c (DATA)
// 004c748b: CALL core_fire.cpp_FUN_004c0140
//   XREF to: 004c0140 (UNCONDITIONAL_CALL)
// 004c7490: ADD ESP,0x4
// 004c7493: JMP 0x004c71a4
//   XREF to: 004c71a4 (UNCONDITIONAL_JUMP)
