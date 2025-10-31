// Name: core_fire.cpp_CFireEffect_process_FUN_004c6ec0
// Address: 004c6ec0
// Address Range: [[004c6ec0, 004c717d]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3451 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e516 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539925 [UNCONDITIONAL_CALL]
// Globals:
//   CSmokeParticle[2048] g_CFireEffectSmokeParticles
//   undefined4 DAT_02d14218
//   undefined4 DAT_02d2a1ec
//   CBulletHole[256] g_CFireEffectBulletHoles
//   undefined4 DAT_02d2a230
//   undefined4 DAT_02d2ddf4
//   CStake[256] g_CFireEffectStakes
//   undefined4 DAT_02d2e054
//   undefined4 DAT_02d2e05c
//   undefined4 DAT_02d2e2b4
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
// Function calls:
//   core_fire.cpp_CBulletHole_process_FUN_004bfa00
//   core_fire.cpp_CBulletTrail_process_FUN_004c21d0
//   core_fire.cpp_CCrater_process_FUN_004c4550
//   core_fire.cpp_CExplosion_process_FUN_004c3ac0
//   core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00
//   core_fire.cpp_CGunFlame_process_FUN_004c4f60
//   core_fire.cpp_CLightningBolt_process_FUN_004c56e0
//   core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00
//   core_fire.cpp_CSmokeParticle_process_FUN_004bf390
//   core_fire.cpp_CStake_process_FUN_004c0210
//   core_fire.cpp_CToss_process_FUN_004c4000
//   core_fire.cpp_CTrail_process_FUN_004c5e40
//   core_fire.cpp_FUN_004c3870

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect *this_ptr)

{
  bool bVar1;
  CSmokeParticle *this_ptr_00;
  CSpark *this_ptr_01;
  CMuzzleFlash *this_ptr_02;
  CStake *this_ptr_03;
  CGlassParticle *this_ptr_04;
  CBulletTrail *this_ptr_05;
  CFireball *this_ptr_06;
  CRock *this_ptr_07;
  CExplosion *this_ptr_08;
  CToss *this_ptr_09;
  CCrater *this_ptr_10;
  CGunFlame *this_ptr_11;
  CLightningBolt *this_ptr_12;
  CTrail *this_ptr_13;
  CShell *this_ptr_14;
  CPopcorn *this_ptr_15;
  CRainDrop *this_ptr_16;
  int iVar2;
  CBulletHole *this_ptr_17;
  CGunFlame *unaff_EDI;
  
  this_ptr_00 = g_CFireEffectSmokeParticles;
  DAT_02d667ac = 0;
  core_fire_cpp_FUN_004c3870();
  do {
    if (this_ptr_00->active != 0) {
      core_fire_cpp_CSmokeParticle_process_FUN_004bf390(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSmokeParticle *)&DAT_02d2a1ec);
  this_ptr_01 = g_CFireEffectSparks;
  do {
    if (0.0 < (this_ptr_01->base).lifetime_remaining) {
      (*((this_ptr_01->base).vtable)->process)(&this_ptr_01->base);
    }
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (CSpark *)&DAT_02d58a00);
  this_ptr_02 = g_CFireEffectMuzzleFlashes;
  do {
    if (*(int *)this_ptr_02->field0_0x0 != 0) {
      core_fire_cpp_CMuzzleFlash_process_FUN_004c1a00(this_ptr_02);
    }
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != (CMuzzleFlash *)&DAT_02d59134);
  iVar2 = 0;
  if (0 < DAT_02d2ddf4) {
    this_ptr_03 = g_CFireEffectStakes;
    do {
      if (*(int *)(this_ptr_03->field0_0x0 + 600) != 0) {
        core_fire_cpp_CStake_process_FUN_004c0210(this_ptr_03);
      }
      iVar2 = iVar2 + 1;
      this_ptr_03 = this_ptr_03 + 1;
    } while (iVar2 < DAT_02d2ddf4);
  }
  this_ptr_04 = g_CFireEffectGlassParticles;
  do {
    if (0.0 < (this_ptr_04->base).lifetime_remaining) {
      (*((this_ptr_04->base).vtable)->process)(&this_ptr_04->base);
    }
    this_ptr_04 = this_ptr_04 + 1;
  } while (this_ptr_04 != (CGlassParticle *)&DAT_02d62d38);
  this_ptr_05 = g_CFireEffectBulletTrails;
  do {
    if (*(int *)(this_ptr_05->field0_0x0 + 0x20) != 0) {
      core_fire_cpp_CBulletTrail_process_FUN_004c21d0(this_ptr_05);
    }
    this_ptr_05 = this_ptr_05 + 1;
  } while (this_ptr_05 != (CBulletTrail *)&DAT_02d62ea4);
  this_ptr_06 = g_CFireEffectFireballs;
  do {
    if (0.0 < (this_ptr_06->base).lifetime_remaining) {
      (*((this_ptr_06->base).vtable)->process)(&this_ptr_06->base);
    }
    this_ptr_06 = this_ptr_06 + 1;
  } while (this_ptr_06 != (CFireball *)&DAT_02d655a8);
  this_ptr_07 = g_CFireEffectRocks;
  do {
    if (0.0 < (this_ptr_07->base).lifetime_remaining) {
      (*((this_ptr_07->base).vtable)->process)(&this_ptr_07->base);
    }
    this_ptr_07 = this_ptr_07 + 1;
  } while (this_ptr_07 != (CRock *)&DAT_02d667ac);
  iVar2 = 0;
  if (0 < DAT_02d2a1ec) {
    this_ptr_17 = g_CFireEffectBulletHoles;
    do {
      core_fire_cpp_CBulletHole_process_FUN_004bfa00(this_ptr_17);
      iVar2 = iVar2 + 1;
      this_ptr_17 = this_ptr_17 + 1;
    } while (iVar2 < DAT_02d2a1ec);
  }
  this_ptr_08 = g_CFireEffectExplosions;
  do {
    core_fire_cpp_CExplosion_process_FUN_004c3ac0(this_ptr_08);
    this_ptr_08 = this_ptr_08 + 1;
  } while (this_ptr_08 != (CExplosion *)&DAT_02d678cc);
  this_ptr_09 = g_CFireEffectTosses;
  do {
    core_fire_cpp_CToss_process_FUN_004c4000(this_ptr_09);
    this_ptr_09 = this_ptr_09 + 1;
  } while (this_ptr_09 != (CToss *)&DAT_02d6c6a0);
  this_ptr_10 = g_CFireEffectCraters;
  do {
    core_fire_cpp_CCrater_process_FUN_004c4550(this_ptr_10);
    this_ptr_10 = this_ptr_10 + 1;
  } while (this_ptr_10 != (CCrater *)&DAT_02d6cf64);
  this_ptr_11 = g_CFireEffectGunFlames;
  bVar1 = false;
  do {
    if ((*(uint *)this_ptr_11->field0_0x0 & 0x7fffffff) != 0) {
      if (!bVar1) {
        core_fire_cpp_CGunFlame_initProcess_FUN_004c4b00(unaff_EDI);
        bVar1 = true;
      }
      core_fire_cpp_CGunFlame_process_FUN_004c4f60(this_ptr_11);
    }
    this_ptr_11 = this_ptr_11 + 1;
  } while (this_ptr_11 != (CGunFlame *)&DAT_02d715b8);
  this_ptr_12 = g_CFireEffectLightningBolts;
  do {
    core_fire_cpp_CLightningBolt_process_FUN_004c56e0(this_ptr_12);
    this_ptr_12 = this_ptr_12 + 1;
  } while (this_ptr_12 != (CLightningBolt *)&DAT_02d71774);
  this_ptr_13 = g_CFireEffectTrails;
  do {
    core_fire_cpp_CTrail_process_FUN_004c5e40(this_ptr_13);
    this_ptr_13 = this_ptr_13 + 1;
  } while (this_ptr_13 != (CTrail *)&DAT_02d72588);
  this_ptr_14 = g_CFireEffectShells;
  do {
    (*((this_ptr_14->base).vtable)->process)(&this_ptr_14->base);
    this_ptr_14 = this_ptr_14 + 1;
  } while (this_ptr_14 != (CShell *)&DAT_02d736bc);
  this_ptr_15 = g_CFireEffectPopcorns;
  do {
    if (0.0 < (this_ptr_15->base).lifetime_remaining) {
      (*((this_ptr_15->base).vtable)->process)(&this_ptr_15->base);
    }
    this_ptr_15 = (CPopcorn *)(&this_ptr_15->base + 1);
  } while ((CParticle *)this_ptr_15 != (CParticle *)&DAT_02d76ec0);
  this_ptr_16 = g_CFireEffectRainDrops;
  do {
    if (0.0 < (this_ptr_16->base).lifetime_remaining) {
      (*((this_ptr_16->base).vtable)->process)(&this_ptr_16->base);
    }
    this_ptr_16 = (CRainDrop *)(&this_ptr_16->base + 1);
  } while ((CDemonActorType *)this_ptr_16 != &g_CFlameClassInfo);
  return;
}


// Assembly code:
// 004c6ec0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_process_FUN_004c6ec0
// 004c6ec1: PUSH ESI
// 004c6ec2: PUSH EDI
// 004c6ec3: PUSH EBP
// 004c6ec4: MOV EBP,ESP
// 004c6ec6: AND ESP,0xfffffff8
// 004c6ec9: XOR EDX,EDX
// 004c6ecb: MOV EBX,0x2d141ec
//   XREF to: 02d141ec (PARAM)
// 004c6ed0: MOV dword ptr [0x02d667ac],EDX
//   XREF to: 02d667ac (WRITE)
// 004c6ed6: CALL core_fire.cpp_FUN_004c3870
//   XREF to: 004c3870 (UNCONDITIONAL_CALL)
// 004c6edb: LEA ESI,[EBX + 0x16000]
//   XREF to: 02d2a1ec (DATA)
// 004c6ee1: MOV EAX,dword ptr [EBX]
//   Label: LAB_004c6ee1
//   XREF to: 02d141ec (READ)
//   XREF to: 02d14218 (READ)
// 004c6ee3: TEST EAX,EAX
// 004c6ee5: JNZ 0x004c7170
//   XREF to: 004c7170 (CONDITIONAL_JUMP)
// 004c6eeb: ADD EBX,0x2c
//   Label: LAB_004c6eeb
//   XREF to: 02d14218 (PARAM)
// 004c6eee: CMP EBX,ESI
// 004c6ef0: JNZ 0x004c6ee1
//   XREF to: 004c6ee1 (CONDITIONAL_JUMP)
// 004c6ef2: MOV EBX,0x2d53e00
//   XREF to: 02d53e00 (DATA)
// 004c6ef7: LEA ESI,[EBX + 0x4c00]
//   XREF to: 02d58a00 (DATA)
// 004c6efd: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c6efd
//   XREF to: 02d53e18 (READ)
//   XREF to: 02d53e64 (READ)
// 004c6f00: FLDZ
// 004c6f02: FCOMPP
// 004c6f04: FNSTSW AX
// 004c6f06: SAHF
// 004c6f07: JNC 0x004c6f13
//   XREF to: 004c6f13 (CONDITIONAL_JUMP)
// 004c6f09: PUSH EBX
//   XREF to: 02d53e00 (DATA)
//   XREF to: 02d53e4c (DATA)
// 004c6f0a: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d53e34 (READ)
//   XREF to: 02d53e80 (READ)
// 004c6f0d: CALL dword ptr [EAX + 0x4]
// 004c6f10: ADD ESP,0x4
// 004c6f13: ADD EBX,0x4c
//   Label: LAB_004c6f13
// 004c6f16: CMP EBX,ESI
// 004c6f18: JNZ 0x004c6efd
//   XREF to: 004c6efd (CONDITIONAL_JUMP)
// 004c6f1a: MOV EBX,0x2d58a04
//   XREF to: 02d58a04 (PARAM)
// 004c6f1f: LEA ESI,[EBX + 0x730]
//   XREF to: 02d59134 (DATA)
// 004c6f25: MOV EAX,dword ptr [EBX]
//   Label: LAB_004c6f25
//   XREF to: 02d58a04 (READ)
//   XREF to: 02d58a60 (READ)
// 004c6f27: TEST EAX,EAX
// 004c6f29: JZ 0x004c6f34
//   XREF to: 004c6f34 (CONDITIONAL_JUMP)
// 004c6f2b: PUSH EBX
//   XREF to: 02d58a04 (DATA)
//   XREF to: 02d58a60 (DATA)
// 004c6f2c: CALL core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00
//   XREF to: 004c1a00 (UNCONDITIONAL_CALL)
// 004c6f31: ADD ESP,0x4
// 004c6f34: ADD EBX,0x5c
//   Label: LAB_004c6f34
//   XREF to: 02d58a60 (PARAM)
// 004c6f37: CMP EBX,ESI
// 004c6f39: JNZ 0x004c6f25
//   XREF to: 004c6f25 (CONDITIONAL_JUMP)
// 004c6f3b: MOV ECX,dword ptr [0x02d2ddf4]
//   XREF to: 02d2ddf4 (READ)
// 004c6f41: XOR ESI,ESI
// 004c6f43: TEST ECX,ECX
// 004c6f45: JLE 0x004c6f70
//   XREF to: 004c6f70 (CONDITIONAL_JUMP)
// 004c6f47: MOV EBX,0x2d2ddfc
//   XREF to: 02d2ddfc (PARAM)
// 004c6f4c: MOV EAX,dword ptr [EBX + 0x258]
//   Label: LAB_004c6f4c
//   XREF to: 02d2e054 (READ)
//   XREF to: 02d2e2b4 (READ)
// 004c6f52: TEST EAX,EAX
// 004c6f54: JZ 0x004c6f5f
//   XREF to: 004c6f5f (CONDITIONAL_JUMP)
// 004c6f56: PUSH EBX
//   XREF to: 02d2ddfc (DATA)
//   XREF to: 02d2e05c (DATA)
// 004c6f57: CALL core_fire.cpp_CStake_process_FUN_004c0210
//   XREF to: 004c0210 (UNCONDITIONAL_CALL)
// 004c6f5c: ADD ESP,0x4
// 004c6f5f: MOV EDI,dword ptr [0x02d2ddf4]
//   Label: LAB_004c6f5f
//   XREF to: 02d2ddf4 (READ)
// 004c6f65: INC ESI
// 004c6f66: ADD EBX,0x260
//   XREF to: 02d2e05c (PARAM)
// 004c6f6c: CMP ESI,EDI
// 004c6f6e: JL 0x004c6f4c
//   XREF to: 004c6f4c (CONDITIONAL_JUMP)
// 004c6f70: MOV EBX,0x2d59138
//   Label: LAB_004c6f70
//   XREF to: 02d59138 (DATA)
// 004c6f75: LEA ESI,[EBX + 0x9c00]
//   XREF to: 02d62d38 (DATA)
// 004c6f7b: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c6f7b
//   XREF to: 02d59150 (READ)
//   XREF to: 02d591ec (READ)
// 004c6f7e: FLDZ
// 004c6f80: FCOMPP
// 004c6f82: FNSTSW AX
// 004c6f84: SAHF
// 004c6f85: JNC 0x004c6f91
//   XREF to: 004c6f91 (CONDITIONAL_JUMP)
// 004c6f87: PUSH EBX
//   XREF to: 02d59138 (DATA)
//   XREF to: 02d591d4 (DATA)
// 004c6f88: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d5916c (READ)
//   XREF to: 02d59208 (READ)
// 004c6f8b: CALL dword ptr [EAX + 0x4]
// 004c6f8e: ADD ESP,0x4
// 004c6f91: ADD EBX,0x9c
//   Label: LAB_004c6f91
// 004c6f97: CMP EBX,ESI
// 004c6f99: JNZ 0x004c6f7b
//   XREF to: 004c6f7b (CONDITIONAL_JUMP)
// 004c6f9b: MOV EBX,0x2d62d3c
//   XREF to: 02d62d3c (PARAM)
// 004c6fa0: LEA ESI,[EBX + 0x168]
//   XREF to: 02d62ea4 (DATA)
// 004c6fa6: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_004c6fa6
//   XREF to: 02d62d5c (READ)
//   XREF to: 02d62d80 (READ)
// 004c6fa9: TEST EAX,EAX
// 004c6fab: JZ 0x004c6fb6
//   XREF to: 004c6fb6 (CONDITIONAL_JUMP)
// 004c6fad: PUSH EBX
//   XREF to: 02d62d3c (DATA)
//   XREF to: 02d62d60 (DATA)
// 004c6fae: CALL core_fire.cpp_CBulletTrail_process_FUN_004c21d0
//   XREF to: 004c21d0 (UNCONDITIONAL_CALL)
// 004c6fb3: ADD ESP,0x4
// 004c6fb6: ADD EBX,0x24
//   Label: LAB_004c6fb6
//   XREF to: 02d62d60 (PARAM)
// 004c6fb9: CMP EBX,ESI
// 004c6fbb: JNZ 0x004c6fa6
//   XREF to: 004c6fa6 (CONDITIONAL_JUMP)
// 004c6fbd: MOV EBX,0x2d62ea8
//   XREF to: 02d62ea8 (DATA)
// 004c6fc2: LEA ESI,[EBX + 0x2700]
//   XREF to: 02d655a8 (DATA)
// 004c6fc8: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c6fc8
//   XREF to: 02d62ec0 (READ)
//   XREF to: 02d62f5c (READ)
// 004c6fcb: FLDZ
// 004c6fcd: FCOMPP
// 004c6fcf: FNSTSW AX
// 004c6fd1: SAHF
// 004c6fd2: JNC 0x004c6fde
//   XREF to: 004c6fde (CONDITIONAL_JUMP)
// 004c6fd4: PUSH EBX
//   XREF to: 02d62ea8 (DATA)
//   XREF to: 02d62f44 (DATA)
// 004c6fd5: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d62edc (READ)
//   XREF to: 02d62f78 (READ)
// 004c6fd8: CALL dword ptr [EAX + 0x4]
// 004c6fdb: ADD ESP,0x4
// 004c6fde: ADD EBX,0x9c
//   Label: LAB_004c6fde
// 004c6fe4: CMP EBX,ESI
// 004c6fe6: JNZ 0x004c6fc8
//   XREF to: 004c6fc8 (CONDITIONAL_JUMP)
// 004c6fe8: MOV EBX,0x2d655ac
//   XREF to: 02d655ac (DATA)
// 004c6fed: LEA ESI,[EBX + 0x1200]
//   XREF to: 02d667ac (DATA)
// 004c6ff3: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c6ff3
//   XREF to: 02d655c4 (READ)
//   XREF to: 02d6560c (READ)
// 004c6ff6: FLDZ
// 004c6ff8: FCOMPP
// 004c6ffa: FNSTSW AX
// 004c6ffc: SAHF
// 004c6ffd: JNC 0x004c7009
//   XREF to: 004c7009 (CONDITIONAL_JUMP)
// 004c6fff: PUSH EBX
//   XREF to: 02d655ac (DATA)
//   XREF to: 02d655f4 (DATA)
// 004c7000: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d655e0 (READ)
//   XREF to: 02d65628 (READ)
// 004c7003: CALL dword ptr [EAX + 0x4]
// 004c7006: ADD ESP,0x4
// 004c7009: ADD EBX,0x48
//   Label: LAB_004c7009
// 004c700c: CMP EBX,ESI
// 004c700e: JNZ 0x004c6ff3
//   XREF to: 004c6ff3 (CONDITIONAL_JUMP)
// 004c7010: MOV EAX,[0x02d2a1ec]
//   XREF to: 02d2a1ec (READ)
// 004c7015: XOR EBX,ESI
// 004c7017: TEST EAX,EAX
// 004c7019: JLE 0x004c7040
//   XREF to: 004c7040 (CONDITIONAL_JUMP)
// 004c701b: MOV ESI,0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004c7020: PUSH ESI
//   Label: LAB_004c7020
//   XREF to: 02d2a1f4 (DATA)
//   XREF to: 02d2a230 (DATA)
// 004c7021: CALL core_fire.cpp_CBulletHole_process_FUN_004bfa00
//   XREF to: 004bfa00 (UNCONDITIONAL_CALL)
// 004c7026: INC EBX
// 004c7027: MOV EDX,dword ptr [0x02d2a1ec]
//   XREF to: 02d2a1ec (READ)
// 004c702d: ADD ESP,0x4
// 004c7030: ADD ESI,0x3c
// 004c7033: CMP EBX,EDX
// 004c7035: JL 0x004c7020
//   XREF to: 004c7020 (CONDITIONAL_JUMP)
// 004c7037: LEA EAX,[EAX]
// 004c703d: LEA EDX,[EDX]
// 004c7040: MOV EBX,0x2d677b4
//   Label: LAB_004c7040
//   XREF to: 02d677b4 (PARAM)
// 004c7045: LEA ESI,[EBX + 0x118]
//   XREF to: 02d678cc (DATA)
// 004c704b: PUSH EBX
//   Label: LAB_004c704b
//   XREF to: 02d677b4 (DATA)
//   XREF to: 02d677d0 (DATA)
// 004c704c: CALL core_fire.cpp_CExplosion_process_FUN_004c3ac0
//   XREF to: 004c3ac0 (UNCONDITIONAL_CALL)
// 004c7051: ADD EBX,0x1c
//   XREF to: 02d677d0 (PARAM)
// 004c7054: ADD ESP,0x4
// 004c7057: CMP EBX,ESI
// 004c7059: JNZ 0x004c704b
//   XREF to: 004c704b (CONDITIONAL_JUMP)
// 004c705b: MOV EBX,0x2d678d0
//   XREF to: 02d678d0 (PARAM)
// 004c7060: LEA ESI,[EBX + 0x4dd0]
//   XREF to: 02d6c6a0 (DATA)
// 004c7066: PUSH EBX
//   Label: LAB_004c7066
//   XREF to: 02d678d0 (DATA)
//   XREF to: 02d67cb4 (DATA)
// 004c7067: CALL core_fire.cpp_CToss_process_FUN_004c4000
//   XREF to: 004c4000 (UNCONDITIONAL_CALL)
// 004c706c: ADD EBX,0x3e4
//   XREF to: 02d67cb4 (PARAM)
// 004c7072: ADD ESP,0x4
// 004c7075: CMP EBX,ESI
// 004c7077: JNZ 0x004c7066
//   XREF to: 004c7066 (CONDITIONAL_JUMP)
// 004c7079: MOV EBX,0x2d6c6a4
//   XREF to: 02d6c6a4 (PARAM)
// 004c707e: LEA ESI,[EBX + 0x8c0]
//   XREF to: 02d6cf64 (DATA)
// 004c7084: PUSH EBX
//   Label: LAB_004c7084
//   XREF to: 02d6c6a4 (DATA)
//   XREF to: 02d6c714 (DATA)
// 004c7085: CALL core_fire.cpp_CCrater_process_FUN_004c4550
//   XREF to: 004c4550 (UNCONDITIONAL_CALL)
// 004c708a: ADD EBX,0x70
//   XREF to: 02d6c714 (PARAM)
// 004c708d: ADD ESP,0x4
// 004c7090: CMP EBX,ESI
// 004c7092: JNZ 0x004c7084
//   XREF to: 004c7084 (CONDITIONAL_JUMP)
// 004c7094: MOV EBX,0x2d6cf68
//   XREF to: 02d6cf68 (PARAM)
// 004c7099: XOR ESI,ESI
// 004c709b: LEA EDI,[EBX + 0x4650]
//   XREF to: 02d715b8 (DATA)
// 004c70a1: TEST dword ptr [EBX],0x7fffffff
//   Label: LAB_004c70a1
//   XREF to: 02d6cf68 (READ)
//   XREF to: 02d6cf8c (READ)
// 004c70a7: JZ 0x004c70c0
//   XREF to: 004c70c0 (CONDITIONAL_JUMP)
// 004c70a9: TEST ESI,ESI
// 004c70ab: JNZ 0x004c70b7
//   XREF to: 004c70b7 (CONDITIONAL_JUMP)
// 004c70ad: CALL core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00
//   XREF to: 004c4b00 (UNCONDITIONAL_CALL)
// 004c70b2: MOV ESI,0x1
// 004c70b7: PUSH EBX
//   Label: LAB_004c70b7
//   XREF to: 02d6cf68 (DATA)
//   XREF to: 02d6cf8c (DATA)
// 004c70b8: CALL core_fire.cpp_CGunFlame_process_FUN_004c4f60
//   XREF to: 004c4f60 (UNCONDITIONAL_CALL)
// 004c70bd: ADD ESP,0x4
// 004c70c0: ADD EBX,0x24
//   Label: LAB_004c70c0
//   XREF to: 02d6cf8c (PARAM)
// 004c70c3: CMP EBX,EDI
// 004c70c5: JNZ 0x004c70a1
//   XREF to: 004c70a1 (CONDITIONAL_JUMP)
// 004c70c7: MOV EBX,0x2d715bc
//   XREF to: 02d715bc (PARAM)
// 004c70cc: LEA ESI,[EBX + 0x1b8]
//   XREF to: 02d71774 (DATA)
// 004c70d2: PUSH EBX
//   Label: LAB_004c70d2
//   XREF to: 02d715bc (DATA)
//   XREF to: 02d715e8 (DATA)
// 004c70d3: CALL core_fire.cpp_CLightningBolt_process_FUN_004c56e0
//   XREF to: 004c56e0 (UNCONDITIONAL_CALL)
// 004c70d8: ADD EBX,0x2c
//   XREF to: 02d715e8 (PARAM)
// 004c70db: ADD ESP,0x4
// 004c70de: CMP EBX,ESI
// 004c70e0: JNZ 0x004c70d2
//   XREF to: 004c70d2 (CONDITIONAL_JUMP)
// 004c70e2: MOV EBX,0x2d71778
//   XREF to: 02d71778 (PARAM)
// 004c70e7: LEA ESI,[EBX + 0xe10]
//   XREF to: 02d72588 (DATA)
// 004c70ed: PUSH EBX
//   Label: LAB_004c70ed
//   XREF to: 02d71778 (DATA)
//   XREF to: 02d7179c (DATA)
// 004c70ee: CALL core_fire.cpp_CTrail_process_FUN_004c5e40
//   XREF to: 004c5e40 (UNCONDITIONAL_CALL)
// 004c70f3: ADD EBX,0x24
//   XREF to: 02d7179c (PARAM)
// 004c70f6: ADD ESP,0x4
// 004c70f9: CMP EBX,ESI
// 004c70fb: JNZ 0x004c70ed
//   XREF to: 004c70ed (CONDITIONAL_JUMP)
// 004c70fd: MOV EBX,0x2d7258c
//   XREF to: 02d7258c (DATA)
// 004c7102: LEA ESI,[EBX + 0x1130]
//   XREF to: 02d736bc (DATA)
// 004c7108: PUSH EBX
//   Label: LAB_004c7108
//   XREF to: 02d7258c (DATA)
//   XREF to: 02d725e4 (DATA)
// 004c7109: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d725c0 (READ)
//   XREF to: 02d72618 (READ)
// 004c710c: CALL dword ptr [EAX + 0x4]
// 004c710f: ADD EBX,0x58
// 004c7112: ADD ESP,0x4
// 004c7115: CMP EBX,ESI
// 004c7117: JNZ 0x004c7108
//   XREF to: 004c7108 (CONDITIONAL_JUMP)
// 004c7119: MOV EBX,0x2d736c0
//   XREF to: 02d736c0 (DATA)
// 004c711e: LEA ESI,[EBX + 0x3800]
//   XREF to: 02d76ec0 (DATA)
// 004c7124: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c7124
//   XREF to: 02d736d8 (READ)
//   XREF to: 02d73710 (READ)
// 004c7127: FLDZ
// 004c7129: FCOMPP
// 004c712b: FNSTSW AX
// 004c712d: SAHF
// 004c712e: JNC 0x004c713a
//   XREF to: 004c713a (CONDITIONAL_JUMP)
// 004c7130: PUSH EBX
//   XREF to: 02d736c0 (DATA)
//   XREF to: 02d736f8 (DATA)
// 004c7131: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d736f4 (READ)
//   XREF to: 02d7372c (READ)
// 004c7134: CALL dword ptr [EAX + 0x4]
// 004c7137: ADD ESP,0x4
// 004c713a: ADD EBX,0x38
//   Label: LAB_004c713a
// 004c713d: CMP EBX,ESI
// 004c713f: JNZ 0x004c7124
//   XREF to: 004c7124 (CONDITIONAL_JUMP)
// 004c7141: MOV EBX,0x2d76ec4
//   XREF to: 02d76ec4 (DATA)
// 004c7146: LEA ESI,[EBX + 0x3800]
//   XREF to: 02d7a6c4 (DATA)
// 004c714c: FLD float ptr [EBX + 0x18]
//   Label: LAB_004c714c
//   XREF to: 02d76edc (READ)
//   XREF to: 02d76f14 (READ)
// 004c714f: FLDZ
// 004c7151: FCOMPP
// 004c7153: FNSTSW AX
// 004c7155: SAHF
// 004c7156: JNC 0x004c7162
//   XREF to: 004c7162 (CONDITIONAL_JUMP)
// 004c7158: PUSH EBX
//   XREF to: 02d76ec4 (DATA)
//   XREF to: 02d76efc (DATA)
// 004c7159: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d76ef8 (READ)
//   XREF to: 02d76f30 (READ)
// 004c715c: CALL dword ptr [EAX + 0x4]
// 004c715f: ADD ESP,0x4
// 004c7162: ADD EBX,0x38
//   Label: LAB_004c7162
// 004c7165: CMP EBX,ESI
// 004c7167: JNZ 0x004c714c
//   XREF to: 004c714c (CONDITIONAL_JUMP)
// 004c7169: MOV ESP,EBP
// 004c716b: POP EBP
// 004c716c: POP EDI
// 004c716d: POP ESI
// 004c716e: POP EBX
// 004c716f: RET
// 004c7170: PUSH EBX
//   Label: LAB_004c7170
//   XREF to: 02d141ec (DATA)
//   XREF to: 02d14218 (DATA)
// 004c7171: CALL core_fire.cpp_CSmokeParticle_process_FUN_004bf390
//   XREF to: 004bf390 (UNCONDITIONAL_CALL)
// 004c7176: ADD ESP,0x4
// 004c7179: JMP 0x004c6eeb
//   XREF to: 004c6eeb (UNCONDITIONAL_JUMP)
