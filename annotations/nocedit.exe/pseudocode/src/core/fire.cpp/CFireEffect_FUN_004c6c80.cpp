// Name: core_fire.cpp_CFireEffect_FUN_004c6c80
// Address: 004c6c80
// Address Range: [[004c6c80, 004c6ebc]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c6c80(CFireEffect * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c6c60 (004c6c60) at 004c6c66 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c9300 (004c9300) at 004c9321 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1a75 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db5ae [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e329 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005392bc [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d141e8
//   CSmokeParticle[2048] g_CFireEffectSmokeParticles
//   undefined4 DAT_02d14218
//   undefined4 DAT_02d2a1ec
//   undefined4 DAT_02d2a1f0
//   undefined4 DAT_02d2ddf4
//   undefined4 DAT_02d2ddf8
//   undefined4 DAT_02d53dfc
//   CSpark[256] g_CFireEffectSparks
//   undefined4 DAT_02d53e18
//   undefined4 DAT_02d53e64
//   undefined4 DAT_02d58a00
//   CMuzzleFlash[20] g_CFireEffectMuzzleFlashes
//   undefined4 DAT_02d58a60
//   undefined4 DAT_02d59134
//   CGlassParticle[256] g_CFireEffectGlassParticles
//   undefined4 DAT_02d59150
//   undefined4 DAT_02d591ec
//   undefined4 DAT_02d62d38
//   CBulletTrail[10] g_CFireEffectBulletTrails
//   undefined4 DAT_02d62d5c
//   undefined4 DAT_02d62d80
//   undefined4 DAT_02d62ea4
//   CFireball[64] g_CFireEffectFireballs
//   undefined4 DAT_02d62ec0
//   undefined4 DAT_02d62f5c
//   undefined4 DAT_02d655a8
//   CRock[64] g_CFireEffectRocks
//   undefined4 DAT_02d655c4
//   undefined4 DAT_02d6560c
//   undefined4 DAT_02d6563c
//   undefined4 DAT_02d667ac
//   undefined4 DAT_02d677b0
//   CExplosion[10] g_CFireEffectExplosions
//   undefined4 DAT_02d677d0
//   undefined4 DAT_02d678cc
//   CToss[20] g_CFireEffectTosses
//   undefined4 DAT_02d67cb4
//   undefined4 DAT_02d6c6a0
//   CCrater[20] g_CFireEffectCraters
//   undefined4 DAT_02d6c714
//   undefined4 DAT_02d6cf64
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
//   undefined4 DAT_02d725a4
//   undefined4 DAT_02d725fc
//   undefined4 DAT_02d736bc
//   CPopcorn[256] g_CFireEffectPopcorns
//   undefined4 DAT_02d736d8
//   undefined4 DAT_02d73710
//   undefined4 DAT_02d76ec0
//   CRainDrop[256] g_CFireEffectRainDrops
//   undefined4 DAT_02d76edc
//   undefined4 DAT_02d76f14
//   undefined4 DAT_02d76f34
//   CDemonActorType g_CFlameClassInfo
// Function calls:
//   core_fire.cpp_CCrater_FUN_004c41e0
//   core_fire.cpp_CExplosion_ctor_FUN_004c38c0
//   core_fire.cpp_CGunFlame_ctor_FUN_004c4da0
//   core_fire.cpp_CLightningBolt_ctor_FUN_004c5630
//   core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0
//   core_fire.cpp_CToss_FUN_004c3ed0
//   core_fire.cpp_CTrail_ctor_FUN_004c5de0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_FUN_004c6c80(CFireEffect *this_ptr)

{
  CSpark *pCVar1;
  CMuzzleFlash *pCVar3;
  CGlassParticle *pCVar4;
  CBulletTrail *pCVar6;
  CFireball *pCVar8;
  CRock *pCVar10;
  CShell *pCVar12;
  CPopcorn *pCVar14;
  CRainDrop *pCVar16;
  CSmokeParticle *this_ptr_00;
  CExplosion *this_ptr_01;
  CToss *this_ptr_02;
  CCrater *this_ptr_03;
  CGunFlame *this_ptr_04;
  CLightningBolt *this_ptr_05;
  CTrail *this_ptr_06;
  CSpark *pCVar2;
  CGlassParticle *pCVar5;
  CBulletTrail *pCVar7;
  CFireball *pCVar9;
  CRock *pCVar11;
  CShell *pCVar13;
  CPopcorn *pCVar15;
  CRainDrop *pCVar17;
  
  this_ptr_00 = g_CFireEffectSmokeParticles;
  DAT_02d141e8 = 0;
  do {
    core_fire_cpp_CSmokeParticle_ctor_FUN_004bf2e0(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_02d2a1ec);
  DAT_02d2a1f0 = 0;
  DAT_02d2a1ec = 0;
  DAT_02d53dfc = 0;
  pCVar1 = g_CFireEffectSparks;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CSpark *)&DAT_02d58a00);
  pCVar3 = g_CFireEffectMuzzleFlashes;
  do {
    pCVar3->field0_0x0[0] = '\0';
    pCVar3->field0_0x0[1] = '\0';
    pCVar3->field0_0x0[2] = '\0';
    pCVar3->field0_0x0[3] = '\0';
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CMuzzleFlash *)&DAT_02d59134);
  DAT_02d2ddf4 = 0;
  DAT_02d59134 = 0;
  DAT_02d2ddf8 = 0;
  pCVar4 = g_CFireEffectGlassParticles;
  do {
    pCVar5 = pCVar4 + 1;
    (pCVar4->base).lifetime_remaining = 0.0;
    pCVar4 = pCVar5;
  } while (pCVar5 != (CGlassParticle *)&DAT_02d62d38);
  pCVar6 = g_CFireEffectBulletTrails;
  do {
    pCVar7 = pCVar6 + 1;
    pCVar6->field0_0x0[0x20] = '\0';
    pCVar6->field0_0x0[0x21] = '\0';
    pCVar6->field0_0x0[0x22] = '\0';
    pCVar6->field0_0x0[0x23] = '\0';
    pCVar6 = pCVar7;
  } while (pCVar7 != (CBulletTrail *)&DAT_02d62ea4);
  DAT_02d62ea4 = 0;
  pCVar8 = g_CFireEffectFireballs;
  do {
    pCVar9 = pCVar8 + 1;
    (pCVar8->base).lifetime_remaining = 0.0;
    pCVar8 = pCVar9;
  } while (pCVar9 != (CFireball *)&DAT_02d655a8);
  _DAT_02d655a8 = 0;
  pCVar10 = g_CFireEffectRocks;
  do {
    pCVar11 = pCVar10 + 1;
    (pCVar10->base).lifetime_remaining = 0.0;
    pCVar10 = pCVar11;
  } while (pCVar11 != (CRock *)&DAT_02d667ac);
  DAT_02d677b0 = 0;
  this_ptr_01 = g_CFireEffectExplosions;
  do {
    core_fire_cpp_CExplosion_ctor_FUN_004c38c0(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CExplosion *)&DAT_02d678cc);
  this_ptr_02 = g_CFireEffectTosses;
  DAT_02d678cc = 0;
  do {
    core_fire_cpp_CToss_FUN_004c3ed0(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CToss *)&DAT_02d6c6a0);
  this_ptr_03 = g_CFireEffectCraters;
  DAT_02d6c6a0 = 0;
  do {
    core_fire_cpp_CCrater_FUN_004c41e0(this_ptr_03);
    this_ptr_03 = this_ptr_03 + 1;
  } while (this_ptr_03 != (CCrater *)&DAT_02d6cf64);
  this_ptr_04 = g_CFireEffectGunFlames;
  DAT_02d6cf64 = 0;
  do {
    core_fire_cpp_CGunFlame_ctor_FUN_004c4da0(this_ptr_04);
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGunFlame *)&DAT_02d715b8);
  this_ptr_05 = g_CFireEffectLightningBolts;
  DAT_02d715b8 = 0;
  do {
    core_fire_cpp_CLightningBolt_ctor_FUN_004c5630(this_ptr_05);
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CLightningBolt *)&DAT_02d71774);
  this_ptr_06 = g_CFireEffectTrails;
  DAT_02d71774 = 0;
  do {
    core_fire_cpp_CTrail_ctor_FUN_004c5de0(this_ptr_06);
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CTrail *)&DAT_02d72588);
  _DAT_02d72588 = 0;
  pCVar12 = g_CFireEffectShells;
  do {
    pCVar13 = pCVar12 + 1;
    (pCVar12->base).lifetime_remaining = 0.0;
    pCVar12 = pCVar13;
  } while (pCVar13 != (CShell *)&DAT_02d736bc);
  DAT_02d736bc = 0;
  pCVar14 = g_CFireEffectPopcorns;
  do {
    pCVar15 = pCVar14 + 1;
    (pCVar14->base).lifetime_remaining = 0.0;
    pCVar14 = pCVar15;
  } while (pCVar15 != (CPopcorn *)&DAT_02d76ec0);
  DAT_02d76ec0 = 0;
  pCVar16 = g_CFireEffectRainDrops;
  do {
    pCVar17 = pCVar16 + 1;
    (pCVar16->base).lifetime_remaining = 0.0;
    pCVar16 = pCVar17;
  } while ((CDemonActorType *)pCVar17 != &g_CFlameClassInfo);
  return;
}


// Assembly code:
// 004c6c80: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c6c80
// 004c6c81: PUSH ESI
// 004c6c82: PUSH EBP
// 004c6c83: MOV EBX,0x2d141ec
//   XREF to: 02d141ec (PARAM)
// 004c6c88: XOR EDX,EDX
// 004c6c8a: LEA ESI,[EBX + 0x16000]
//   XREF to: 02d2a1ec (DATA)
// 004c6c90: MOV dword ptr [0x02d141e8],EDX
//   XREF to: 02d141e8 (WRITE)
// 004c6c96: PUSH EBX
//   Label: LAB_004c6c96
//   XREF to: 02d141ec (DATA)
//   XREF to: 02d14218 (DATA)
// 004c6c97: CALL core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0
//   XREF to: 004bf2e0 (UNCONDITIONAL_CALL)
// 004c6c9c: ADD EBX,0x2c
//   XREF to: 02d14218 (PARAM)
// 004c6c9f: ADD ESP,0x4
// 004c6ca2: CMP EBX,ESI
// 004c6ca4: JNZ 0x004c6c96
//   XREF to: 004c6c96 (CONDITIONAL_JUMP)
// 004c6ca6: MOV EAX,0x2d53e00
//   XREF to: 02d53e00 (DATA)
// 004c6cab: XOR ECX,ECX
// 004c6cad: XOR EBX,ESI
// 004c6caf: MOV dword ptr [0x02d2a1f0],ECX
//   XREF to: 02d2a1f0 (WRITE)
// 004c6cb5: MOV dword ptr [0x02d2a1ec],EBX
//   XREF to: 02d2a1ec (WRITE)
// 004c6cbb: MOV dword ptr [0x02d53dfc],ECX
//   XREF to: 02d53dfc (WRITE)
// 004c6cc1: LEA EBX,[EAX + 0x4c00]
//   XREF to: 02d58a00 (DATA)
// 004c6cc7: ADD EAX,0x4c
//   Label: LAB_004c6cc7
// 004c6cca: MOV dword ptr [EAX + -0x34],0x0
//   XREF to: 02d53e18 (WRITE)
//   XREF to: 02d53e64 (WRITE)
// 004c6cd1: CMP EAX,EBX
// 004c6cd3: JNZ 0x004c6cc7
//   XREF to: 004c6cc7 (CONDITIONAL_JUMP)
// 004c6cd5: MOV EAX,0x2d58a04
//   XREF to: 02d58a04 (DATA)
// 004c6cda: LEA EBX,[EAX + 0x730]
//   XREF to: 02d59134 (DATA)
// 004c6ce0: MOV dword ptr [EAX],0x0
//   Label: LAB_004c6ce0
//   XREF to: 02d58a04 (WRITE)
//   XREF to: 02d58a60 (WRITE)
// 004c6ce6: ADD EAX,0x5c
// 004c6ce9: CMP EAX,EBX
// 004c6ceb: JNZ 0x004c6ce0
//   XREF to: 004c6ce0 (CONDITIONAL_JUMP)
// 004c6ced: PUSH EDI
// 004c6cee: XOR EDI,EDI
// 004c6cf0: XOR EAX,EBX
// 004c6cf2: MOV dword ptr [0x02d2ddf4],EDI
//   XREF to: 02d2ddf4 (WRITE)
// 004c6cf8: MOV [0x02d59134],EAX
//   XREF to: 02d59134 (WRITE)
// 004c6cfd: MOV EAX,0x2d59138
//   XREF to: 02d59138 (DATA)
// 004c6d02: MOV dword ptr [0x02d2ddf8],EDI
//   XREF to: 02d2ddf8 (WRITE)
// 004c6d08: LEA EBX,[EAX + 0x9c00]
//   XREF to: 02d62d38 (DATA)
// 004c6d0e: ADD EAX,0x9c
//   Label: LAB_004c6d0e
// 004c6d13: MOV dword ptr [EAX + 0xffffff7c],0x0
//   XREF to: 02d59150 (WRITE)
//   XREF to: 02d591ec (WRITE)
// 004c6d1d: CMP EAX,EBX
// 004c6d1f: JNZ 0x004c6d0e
//   XREF to: 004c6d0e (CONDITIONAL_JUMP)
// 004c6d21: MOV EAX,0x2d62d3c
//   XREF to: 02d62d3c (DATA)
// 004c6d26: LEA EBX,[EAX + 0x168]
//   XREF to: 02d62ea4 (DATA)
// 004c6d2c: ADD EAX,0x24
//   Label: LAB_004c6d2c
// 004c6d2f: MOV dword ptr [EAX + -0x4],0x0
//   XREF to: 02d62d5c (WRITE)
//   XREF to: 02d62d80 (WRITE)
// 004c6d36: CMP EAX,EBX
// 004c6d38: JNZ 0x004c6d2c
//   XREF to: 004c6d2c (CONDITIONAL_JUMP)
// 004c6d3a: XOR EDX,EDX
// 004c6d3c: MOV EAX,0x2d62ea8
//   XREF to: 02d62ea8 (DATA)
// 004c6d41: MOV dword ptr [0x02d62ea4],EDX
//   XREF to: 02d62ea4 (WRITE)
// 004c6d47: LEA EBX,[EAX + 0x2700]
//   XREF to: 02d655a8 (DATA)
// 004c6d4d: ADD EAX,0x9c
//   Label: LAB_004c6d4d
// 004c6d52: MOV dword ptr [EAX + 0xffffff7c],0x0
//   XREF to: 02d62ec0 (WRITE)
//   XREF to: 02d62f5c (WRITE)
// 004c6d5c: CMP EAX,EBX
// 004c6d5e: JNZ 0x004c6d4d
//   XREF to: 004c6d4d (CONDITIONAL_JUMP)
// 004c6d60: XOR ECX,ECX
// 004c6d62: MOV EAX,0x2d655ac
//   XREF to: 02d655ac (DATA)
// 004c6d67: MOV dword ptr [0x02d655a8],ECX
//   XREF to: 02d655a8 (WRITE)
// 004c6d6d: LEA EBX,[EAX + 0x1200]
//   XREF to: 02d667ac (DATA)
// 004c6d73: ADD EAX,0x48
//   Label: LAB_004c6d73
//   XREF to: 02d6563c (PARAM)
// 004c6d76: MOV dword ptr [EAX + -0x30],0x0
//   XREF to: 02d655c4 (WRITE)
//   XREF to: 02d6560c (WRITE)
// 004c6d7d: CMP EAX,EBX
// 004c6d7f: JNZ 0x004c6d73
//   XREF to: 004c6d73 (CONDITIONAL_JUMP)
// 004c6d81: XOR EBX,EBX
// 004c6d83: MOV dword ptr [0x02d677b0],EBX
//   XREF to: 02d677b0 (WRITE)
// 004c6d89: MOV EBX,0x2d677b4
//   XREF to: 02d677b4 (PARAM)
// 004c6d8e: LEA ESI,[EBX + 0x118]
//   XREF to: 02d678cc (DATA)
// 004c6d94: PUSH EBX
//   Label: LAB_004c6d94
//   XREF to: 02d677b4 (DATA)
//   XREF to: 02d677d0 (DATA)
// 004c6d95: CALL core_fire.cpp_CExplosion_ctor_FUN_004c38c0
//   XREF to: 004c38c0 (UNCONDITIONAL_CALL)
// 004c6d9a: ADD EBX,0x1c
//   XREF to: 02d677d0 (PARAM)
// 004c6d9d: ADD ESP,0x4
// 004c6da0: CMP EBX,ESI
// 004c6da2: JNZ 0x004c6d94
//   XREF to: 004c6d94 (CONDITIONAL_JUMP)
// 004c6da4: XOR ESI,ESI
// 004c6da6: MOV EBX,0x2d678d0
//   XREF to: 02d678d0 (PARAM)
// 004c6dab: MOV dword ptr [0x02d678cc],ESI
//   XREF to: 02d678cc (WRITE)
// 004c6db1: LEA ESI,[EBX + 0x4dd0]
//   XREF to: 02d6c6a0 (DATA)
// 004c6db7: PUSH EBX
//   Label: LAB_004c6db7
//   XREF to: 02d678d0 (DATA)
//   XREF to: 02d67cb4 (DATA)
// 004c6db8: CALL core_fire.cpp_CToss_FUN_004c3ed0
//   XREF to: 004c3ed0 (UNCONDITIONAL_CALL)
// 004c6dbd: ADD EBX,0x3e4
//   XREF to: 02d67cb4 (PARAM)
// 004c6dc3: ADD ESP,0x4
// 004c6dc6: CMP EBX,ESI
// 004c6dc8: JNZ 0x004c6db7
//   XREF to: 004c6db7 (CONDITIONAL_JUMP)
// 004c6dca: MOV EBX,0x2d6c6a4
//   XREF to: 02d6c6a4 (PARAM)
// 004c6dcf: XOR EDI,EDI
// 004c6dd1: LEA ESI,[EBX + 0x8c0]
//   XREF to: 02d6cf64 (DATA)
// 004c6dd7: MOV dword ptr [0x02d6c6a0],EDI
//   XREF to: 02d6c6a0 (WRITE)
// 004c6ddd: POP EDI
// 004c6dde: PUSH EBX
//   Label: LAB_004c6dde
//   XREF to: 02d6c6a4 (DATA)
//   XREF to: 02d6c714 (DATA)
// 004c6ddf: CALL core_fire.cpp_CCrater_FUN_004c41e0
//   XREF to: 004c41e0 (UNCONDITIONAL_CALL)
// 004c6de4: ADD EBX,0x70
//   XREF to: 02d6c714 (PARAM)
// 004c6de7: ADD ESP,0x4
// 004c6dea: CMP EBX,ESI
// 004c6dec: JNZ 0x004c6dde
//   XREF to: 004c6dde (CONDITIONAL_JUMP)
// 004c6dee: MOV EBX,0x2d6cf68
//   XREF to: 02d6cf68 (PARAM)
// 004c6df3: XOR EBP,EBP
// 004c6df5: LEA ESI,[EBX + 0x4650]
//   XREF to: 02d715b8 (DATA)
// 004c6dfb: MOV dword ptr [0x02d6cf64],EBP
//   XREF to: 02d6cf64 (WRITE)
// 004c6e01: PUSH EBX
//   Label: LAB_004c6e01
//   XREF to: 02d6cf68 (DATA)
//   XREF to: 02d6cf8c (DATA)
// 004c6e02: CALL core_fire.cpp_CGunFlame_ctor_FUN_004c4da0
//   XREF to: 004c4da0 (UNCONDITIONAL_CALL)
// 004c6e07: ADD EBX,0x24
//   XREF to: 02d6cf8c (PARAM)
// 004c6e0a: ADD ESP,0x4
// 004c6e0d: CMP EBX,ESI
// 004c6e0f: JNZ 0x004c6e01
//   XREF to: 004c6e01 (CONDITIONAL_JUMP)
// 004c6e11: MOV EBX,0x2d715bc
//   XREF to: 02d715bc (PARAM)
// 004c6e16: XOR EAX,EAX
// 004c6e18: LEA ESI,[EBX + 0x1b8]
//   XREF to: 02d71774 (DATA)
// 004c6e1e: MOV [0x02d715b8],EAX
//   XREF to: 02d715b8 (WRITE)
// 004c6e23: PUSH EBX
//   Label: LAB_004c6e23
//   XREF to: 02d715bc (DATA)
//   XREF to: 02d715e8 (DATA)
// 004c6e24: CALL core_fire.cpp_CLightningBolt_ctor_FUN_004c5630
//   XREF to: 004c5630 (UNCONDITIONAL_CALL)
// 004c6e29: ADD EBX,0x2c
//   XREF to: 02d715e8 (PARAM)
// 004c6e2c: ADD ESP,0x4
// 004c6e2f: CMP EBX,ESI
// 004c6e31: JNZ 0x004c6e23
//   XREF to: 004c6e23 (CONDITIONAL_JUMP)
// 004c6e33: MOV EBX,0x2d71778
//   XREF to: 02d71778 (PARAM)
// 004c6e38: XOR EDX,EDX
// 004c6e3a: LEA ESI,[EBX + 0xe10]
//   XREF to: 02d72588 (DATA)
// 004c6e40: MOV dword ptr [0x02d71774],EDX
//   XREF to: 02d71774 (WRITE)
// 004c6e46: PUSH EBX
//   Label: LAB_004c6e46
//   XREF to: 02d71778 (DATA)
//   XREF to: 02d7179c (DATA)
// 004c6e47: CALL core_fire.cpp_CTrail_ctor_FUN_004c5de0
//   XREF to: 004c5de0 (UNCONDITIONAL_CALL)
// 004c6e4c: ADD EBX,0x24
//   XREF to: 02d7179c (PARAM)
// 004c6e4f: ADD ESP,0x4
// 004c6e52: CMP EBX,ESI
// 004c6e54: JNZ 0x004c6e46
//   XREF to: 004c6e46 (CONDITIONAL_JUMP)
// 004c6e56: XOR ECX,ECX
// 004c6e58: MOV EAX,0x2d7258c
//   XREF to: 02d7258c (DATA)
// 004c6e5d: MOV dword ptr [0x02d72588],ECX
//   XREF to: 02d72588 (WRITE)
// 004c6e63: LEA EBX,[EAX + 0x1130]
//   XREF to: 02d736bc (DATA)
// 004c6e69: ADD EAX,0x58
//   Label: LAB_004c6e69
// 004c6e6c: MOV dword ptr [EAX + -0x40],0x0
//   XREF to: 02d725a4 (WRITE)
//   XREF to: 02d725fc (WRITE)
// 004c6e73: CMP EAX,EBX
// 004c6e75: JNZ 0x004c6e69
//   XREF to: 004c6e69 (CONDITIONAL_JUMP)
// 004c6e77: XOR EBX,EBX
// 004c6e79: MOV EAX,0x2d736c0
//   XREF to: 02d736c0 (DATA)
// 004c6e7e: MOV dword ptr [0x02d736bc],EBX
//   XREF to: 02d736bc (WRITE)
// 004c6e84: LEA EBX,[EAX + 0x3800]
//   XREF to: 02d76ec0 (DATA)
// 004c6e8a: ADD EAX,0x38
//   Label: LAB_004c6e8a
// 004c6e8d: MOV dword ptr [EAX + -0x20],0x0
//   XREF to: 02d736d8 (WRITE)
//   XREF to: 02d73710 (WRITE)
// 004c6e94: CMP EAX,EBX
// 004c6e96: JNZ 0x004c6e8a
//   XREF to: 004c6e8a (CONDITIONAL_JUMP)
// 004c6e98: XOR ESI,ESI
// 004c6e9a: MOV EAX,0x2d76ec4
//   XREF to: 02d76ec4 (DATA)
// 004c6e9f: MOV dword ptr [0x02d76ec0],ESI
//   XREF to: 02d76ec0 (WRITE)
// 004c6ea5: LEA EBX,[EAX + 0x3800]
//   XREF to: 02d7a6c4 (DATA)
// 004c6eab: ADD EAX,0x38
//   Label: LAB_004c6eab
//   XREF to: 02d76f34 (DATA)
// 004c6eae: MOV dword ptr [EAX + -0x20],0x0
//   XREF to: 02d76edc (WRITE)
//   XREF to: 02d76f14 (WRITE)
// 004c6eb5: CMP EAX,EBX
// 004c6eb7: JNZ 0x004c6eab
//   XREF to: 004c6eab (CONDITIONAL_JUMP)
// 004c6eb9: POP EBP
// 004c6eba: POP ESI
// 004c6ebb: POP EBX
// 004c6ebc: RET
