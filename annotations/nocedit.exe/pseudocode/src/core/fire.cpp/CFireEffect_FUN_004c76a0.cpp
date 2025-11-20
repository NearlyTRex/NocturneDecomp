// Name: core_fire.cpp_CFireEffect_FUN_004c76a0
// Address: 004c76a0
// Address Range: [[004c76a0, 004c77f1] [004c7800, 004c79c1]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c76a0(CFireEffect * this_ptr)
// Cross-references:
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0b0a [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de323 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3c5e [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004c7644 = 004c7800
//   void* switchdataD_004c766c = 004c7823
//   TerminatedCString s_ric_s_wav_0062a003
//   TerminatedCString s_ric_s_wav_0062a010
//   TerminatedCString s_ric_s_wav_0062a01d
//   TerminatedCString s_ric_s_wav_0062a02a
//   double DOUBLE_0062a03b = 0.200000000000000
//   double DOUBLE_0062a043 = -0.200000000000000
//   double DOUBLE_0062a04b = 0.0578000000000000
//   undefined4 DAT_0067aeb8
//   undefined2 DAT_0067aebc
//   CSound* g_CSoundPtr = 03f6af64
//   int g_SmokeParticleAllocIndex
//   CSmokeParticle[2048] g_SmokeParticlePool
//   int g_BulletHoleActiveCount
//   CBulletHole[256] g_BulletHolePool
//   undefined4 DAT_02d2a1f8
//   undefined4 g_BulletHolePool[0].position.z
//   undefined4 DAT_02d2a230
//   undefined4 DAT_02d2a234
//   undefined4 DAT_02d2a238
//   CDemonCamera g_CDemonCameraInstance
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730
//   core_fire.cpp_allocateBulletHole_FUN_004c6c10
//   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
//   core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   core_sound.cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c76a0(CFireEffect *this_ptr)

{
  int iVar1;
  int iVar2;
  CSmokeParticle *this_ptr_00;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CBulletHole *pCVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  undefined4 in_stack_00000010;
  CDemonActor *in_stack_00000014;
  char cVar8;
  undefined4 in_stack_ffffffb0;
  char acStack_48 [4];
  char acStack_44 [36];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  if ((in_stack_0000000c->y < (float)DOUBLE_0062a03b) &&
     (DOUBLE_0062a043 < (double)in_stack_0000000c->y)) {
    pCVar4 = g_BulletHolePool;
    local_14 = 1.4013e-45;
    if ((in_stack_00000014 == (CDemonActor *)0x0) ||
       (iVar2 = (*in_stack_00000014->vtable->allowBulletHoles)(in_stack_00000014), iVar2 != 0)) {
      if ((unaff_ESI != 0) && (iVar2 = 0, 0 < g_BulletHoleActiveCount)) {
        do {
          local_14 = in_stack_00000008->x - (pCVar4->position).x;
          if (&local_20 != &local_14) {
            local_20 = local_14;
            local_1c = in_stack_00000008->y - (pCVar4->position).y;
            local_18 = in_stack_00000008->z - (pCVar4->position).z;
          }
          if (local_18 * local_18 + local_20 * local_20 + local_1c * local_1c <
              (float)DOUBLE_0062a04b) goto LAB_004c7785;
          iVar2 = iVar2 + 1;
          pCVar4 = pCVar4 + 1;
        } while (iVar2 < g_BulletHoleActiveCount);
      }
      if (unaff_ESI != 0) {
        pCVar4 = core_fire_cpp_allocateBulletHole_FUN_004c6c10();
        core_fire_cpp_CBulletHole_ctor_FUN_004bf7f0
                  (pCVar4,in_stack_00000008,in_stack_0000000c,in_stack_00000014);
      }
    }
  }
LAB_004c7785:
  iVar2 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00452730
                    (&g_CDemonCameraInstance,in_stack_00000008,0.5);
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = g_SmokeParticleAllocIndex + 1;
      this_ptr_00 = g_SmokeParticlePool + g_SmokeParticleAllocIndex;
      g_SmokeParticleAllocIndex = iVar1;
      if (0x7ff < iVar1) {
        g_SmokeParticleAllocIndex = 0;
      }
      iVar2 = iVar2 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_004bf2f0
                (this_ptr_00,in_stack_00000008,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar2 < 8);
    switch(in_stack_00000010) {
    case 2:
    case 5:
    case 8:
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_FUN_004c79d0(this_ptr);
      } while (iVar2 < 8);
    }
  }
  puVar5 = &DAT_0067aeb8;
  puVar6 = (undefined4 *)&stack0xffffffb0;
  for (iVar2 = 0xc; cVar8 = (char)in_stack_ffffffb0, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  switch(in_stack_00000010) {
  case 2:
  case 8:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar2 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(2);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_48,"ric-%s!?.wav",pcVar3);
      if (acStack_44[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 3:
  case 4:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar2 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(3);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_48,"ric-%s.wav",pcVar3);
      if (acStack_44[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 5:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar2 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(5);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_48,"ric-%s!?.wav",pcVar3);
      if (acStack_44[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 7:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar2 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(7);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_48,"ric-%s!?.wav",pcVar3);
      if (acStack_44[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
  }
  if (cVar8 == '\0') {
    return;
  }
LAB_004c79a0:
  core_sound_cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0
            (g_CSoundPtr,(CDemonActor *)0x0,acStack_44,in_stack_00000008,0.17);
  return;
}


// Assembly code:
// 004c76a0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c76a0
// 004c76a1: PUSH ESI
// 004c76a2: PUSH EDI
// 004c76a3: PUSH EBP
// 004c76a4: MOV EBP,ESP
// 004c76a6: SUB ESP,0x58
// 004c76a9: AND ESP,0xfffffff8
// 004c76ac: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004c76af: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c76b2: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c76b5: FLD float ptr [EAX + 0x4]
// 004c76b8: FST double ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 004c76bb: FCOMP double ptr [0x0062a03b]
//   XREF to: 0062a03b (READ)
// 004c76c1: FNSTSW AX
// 004c76c3: SAHF
// 004c76c4: JNC 0x004c7785
//   XREF to: 004c7785 (CONDITIONAL_JUMP)
// 004c76ca: FLD double ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 004c76cd: FCOMP double ptr [0x0062a043]
//   XREF to: 0062a043 (READ)
// 004c76d3: FNSTSW AX
// 004c76d5: SAHF
// 004c76d6: JBE 0x004c7785
//   XREF to: 004c7785 (CONDITIONAL_JUMP)
// 004c76dc: MOV EDX,0x1
// 004c76e1: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c76e4: MOV ESI,0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004c76e9: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004c76ed: TEST ECX,ECX
// 004c76ef: JZ 0x004c7706
//   XREF to: 004c7706 (CONDITIONAL_JUMP)
// 004c76f1: PUSH ECX
// 004c76f2: MOV EAX,dword ptr [ECX + 0x154]
// 004c76f8: CALL dword ptr [EAX + 0x44]
// 004c76fb: ADD ESP,0x4
// 004c76fe: TEST EAX,EAX
// 004c7700: JZ 0x004c7785
//   XREF to: 004c7785 (CONDITIONAL_JUMP)
// 004c7706: CMP dword ptr [ESP + 0x54],0x0
//   Label: LAB_004c7706
//   XREF to: Stack[-0x14] (READ)
// 004c770b: JZ 0x004c7847
//   XREF to: 004c7847 (CONDITIONAL_JUMP)
// 004c7711: MOV EAX,[0x02d2a1ec]
//   XREF to: 02d2a1ec (READ)
// 004c7716: XOR EDX,EDX
// 004c7718: TEST EAX,EAX
// 004c771a: JLE 0x004c7847
//   XREF to: 004c7847 (CONDITIONAL_JUMP)
// 004c7720: FLD float ptr [EBX]
//   Label: LAB_004c7720
// 004c7722: FSUB float ptr [ESI]
//   XREF to: 02d2a1f4 (READ)
//   XREF to: 02d2a230 (READ)
// 004c7724: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (WRITE)
// 004c7728: FLD float ptr [EBX + 0x4]
// 004c772b: FSUB float ptr [ESI + 0x4]
//   XREF to: 02d2a1f8 (READ)
//   XREF to: 02d2a234 (READ)
// 004c772e: LEA ECX,[ESP + 0x48]
//   XREF to: Stack[-0x20] (DATA)
// 004c7732: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (WRITE)
// 004c7736: FLD float ptr [EBX + 0x8]
// 004c7739: FSUB float ptr [ESI + 0x8]
//   XREF to: 02d2a1fc (READ)
//   XREF to: 02d2a238 (READ)
// 004c773c: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x2c] (DATA)
// 004c7740: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (WRITE)
// 004c7744: CMP EAX,ECX
// 004c7746: JZ 0x004c7760
//   XREF to: 004c7760 (CONDITIONAL_JUMP)
// 004c7748: MOV EAX,dword ptr [ESP + 0x48]
// 004c774c: MOV dword ptr [ESP + 0x3c],EAX
// 004c7750: MOV EAX,dword ptr [ESP + 0x4c]
// 004c7754: MOV dword ptr [ESP + 0x40],EAX
// 004c7758: MOV EAX,dword ptr [ESP + 0x50]
// 004c775c: MOV dword ptr [ESP + 0x44],EAX
// 004c7760: FLD float ptr [ESP + 0x40]
//   Label: LAB_004c7760
// 004c7764: FMUL ST0
// 004c7766: FLD float ptr [ESP + 0x3c]
// 004c776a: FMUL ST0
// 004c776c: FADDP
// 004c776e: FLD float ptr [ESP + 0x44]
// 004c7772: FMUL ST0
// 004c7774: FADDP
// 004c7776: FCOMP double ptr [0x0062a04b]
//   XREF to: 0062a04b (READ)
// 004c777c: FNSTSW AX
// 004c777e: SAHF
// 004c777f: JNC 0x004c7835
//   XREF to: 004c7835 (CONDITIONAL_JUMP)
// 004c7785: PUSH 0x3f000000
//   Label: LAB_004c7785
// 004c778a: PUSH EBX
// 004c778b: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 004c7790: CALL core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730
//   XREF to: 00452730 (UNCONDITIONAL_CALL)
// 004c7795: ADD ESP,0xc
// 004c7798: TEST EAX,EAX
// 004c779a: JZ 0x004c7800
//   XREF to: 004c7800 (CONDITIONAL_JUMP)
// 004c779c: XOR ESI,ESI
// 004c779e: MOV EDX,dword ptr [0x02d141e8]
//   Label: LAB_004c779e
//   XREF to: 02d141e8 (READ)
// 004c77a4: IMUL EAX,EDX,0x2c
// 004c77a7: LEA ECX,[EDX + 0x1]
// 004c77aa: ADD EAX,0x2d141ec
//   XREF to: 02d141ec (PARAM)
// 004c77af: MOV dword ptr [0x02d141e8],ECX
//   XREF to: 02d141e8 (WRITE)
// 004c77b5: CMP ECX,0x800
// 004c77bb: JL 0x004c77c5
//   XREF to: 004c77c5 (CONDITIONAL_JUMP)
// 004c77bd: XOR ECX,ECX
// 004c77bf: MOV dword ptr [0x02d141e8],ECX
//   XREF to: 02d141e8 (WRITE)
// 004c77c5: PUSH 0xffff
//   Label: LAB_004c77c5
// 004c77ca: PUSH 0x0
// 004c77cc: PUSH 0x3e99999a
// 004c77d1: PUSH EBX
// 004c77d2: PUSH EAX
//   XREF to: 02d141ec (DATA)
// 004c77d3: INC ESI
// 004c77d4: CALL core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
//   XREF to: 004bf2f0 (UNCONDITIONAL_CALL)
// 004c77d9: ADD ESP,0x14
// 004c77dc: CMP ESI,0x8
// 004c77df: JL 0x004c779e
//   XREF to: 004c779e (CONDITIONAL_JUMP)
// 004c77e1: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c77e4: CMP ESI,0x9
// 004c77e7: JA 0x004c7800
//   XREF to: 004c7800 (CONDITIONAL_JUMP)
// 004c77e9: MOV EAX,ESI
// 004c77eb: JMP dword ptr [EAX*0x4 + 0x4c7644]
//   Label: switchD
//   XREF to: 004c7800 (COMPUTED_JUMP)
//   XREF to: 004c786e (COMPUTED_JUMP)
//   XREF to: 004c7644 (DATA)
// 004c7800: MOV ECX,0xc
//   Label: caseD_9
// 004c7805: LEA EDI,[ESP + 0x8]
// 004c7809: MOV ESI,0x67aeb8
//   XREF to: 0067aeb8 (DATA)
// 004c780e: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067aeb8 (READ)
//   XREF to: 0067aebc (READ)
// 004c7810: MOVSW ES:EDI,ESI
//   XREF to: 0067aeb8 (READ)
//   XREF to: 0067aebc (READ)
// 004c7812: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c7815: CMP EDI,0x9
// 004c7818: JA 0x004c7823
//   XREF to: 004c7823 (CONDITIONAL_JUMP)
// 004c781a: MOV EAX,EDI
// 004c781c: JMP dword ptr [EAX*0x4 + 0x4c766c]
//   Label: switchD
//   XREF to: 004c7823 (COMPUTED_JUMP)
//   XREF to: 004c7898 (COMPUTED_JUMP)
//   XREF to: 004c78dc (COMPUTED_JUMP)
//   XREF to: 004c7920 (COMPUTED_JUMP)
//   XREF to: 004c7960 (COMPUTED_JUMP)
//   XREF to: 004c766c (DATA)
// 004c7823: CMP byte ptr [ESP + 0x8],0x0
//   Label: caseD_9
// 004c7828: JNZ 0x004c79a0
//   XREF to: 004c79a0 (CONDITIONAL_JUMP)
// 004c782e: MOV ESP,EBP
// 004c7830: POP EBP
// 004c7831: POP EDI
// 004c7832: POP ESI
// 004c7833: POP EBX
// 004c7834: RET
// 004c7835: MOV ECX,dword ptr [0x02d2a1ec]
//   Label: LAB_004c7835
//   XREF to: 02d2a1ec (READ)
// 004c783b: INC EDX
// 004c783c: ADD ESI,0x3c
// 004c783f: CMP EDX,ECX
// 004c7841: JL 0x004c7720
//   XREF to: 004c7720 (CONDITIONAL_JUMP)
// 004c7847: CMP dword ptr [ESP + 0x54],0x0
//   Label: LAB_004c7847
// 004c784c: JZ 0x004c7785
//   XREF to: 004c7785 (CONDITIONAL_JUMP)
// 004c7852: CALL core_fire.cpp_allocateBulletHole_FUN_004c6c10
//   XREF to: 004c6c10 (UNCONDITIONAL_CALL)
// 004c7857: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c785a: PUSH EDX
// 004c785b: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c785e: PUSH ECX
// 004c785f: PUSH EBX
// 004c7860: PUSH EAX
// 004c7861: CALL core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0
//   XREF to: 004bf7f0 (UNCONDITIONAL_CALL)
// 004c7866: ADD ESP,0x10
// 004c7869: JMP 0x004c7785
//   XREF to: 004c7785 (UNCONDITIONAL_JUMP)
// 004c786e: XOR ESI,ESI
//   Label: caseD_8
// 004c7870: PUSH 0xffff
//   Label: LAB_004c7870
// 004c7875: PUSH 0x0
// 004c7877: PUSH 0x10000
// 004c787c: PUSH 0x20000
// 004c7881: PUSH 0x0
// 004c7883: PUSH EBX
// 004c7884: PUSH EDI
// 004c7885: INC ESI
// 004c7886: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c788b: ADD ESP,0x1c
// 004c788e: CMP ESI,0x8
// 004c7891: JL 0x004c7870
//   XREF to: 004c7870 (CONDITIONAL_JUMP)
// 004c7893: JMP 0x004c7800
//   XREF to: 004c7800 (UNCONDITIONAL_JUMP)
// 004c7898: PUSH 0x3e2aaaab
//   Label: caseD_8
// 004c789d: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004c78a2: ADD ESP,0x4
// 004c78a5: TEST EAX,EAX
// 004c78a7: JZ 0x004c7823
//   XREF to: 004c7823 (CONDITIONAL_JUMP)
// 004c78ad: PUSH 0x2
// 004c78af: CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   XREF to: 004eece0 (UNCONDITIONAL_CALL)
// 004c78b4: ADD ESP,0x4
// 004c78b7: PUSH EAX
// 004c78b8: PUSH 0x62a003
//   XREF to: 0062a003 (DATA)
// 004c78bd: LEA EAX,[ESP + 0x10]
// 004c78c1: PUSH EAX
// 004c78c2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004c78c7: ADD ESP,0xc
// 004c78ca: CMP byte ptr [ESP + 0x8],0x0
// 004c78cf: JNZ 0x004c79a0
//   XREF to: 004c79a0 (CONDITIONAL_JUMP)
// 004c78d5: MOV ESP,EBP
// 004c78d7: POP EBP
// 004c78d8: POP EDI
// 004c78d9: POP ESI
// 004c78da: POP EBX
// 004c78db: RET
// 004c78dc: PUSH 0x3e2aaaab
//   Label: caseD_5
// 004c78e1: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004c78e6: ADD ESP,0x4
// 004c78e9: TEST EAX,EAX
// 004c78eb: JZ 0x004c7823
//   XREF to: 004c7823 (CONDITIONAL_JUMP)
// 004c78f1: PUSH 0x5
// 004c78f3: CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   XREF to: 004eece0 (UNCONDITIONAL_CALL)
// 004c78f8: ADD ESP,0x4
// 004c78fb: PUSH EAX
// 004c78fc: PUSH 0x62a010
//   XREF to: 0062a010 (DATA)
// 004c7901: LEA EAX,[ESP + 0x10]
// 004c7905: PUSH EAX
// 004c7906: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004c790b: ADD ESP,0xc
// 004c790e: CMP byte ptr [ESP + 0x8],0x0
// 004c7913: JNZ 0x004c79a0
//   XREF to: 004c79a0 (CONDITIONAL_JUMP)
// 004c7919: MOV ESP,EBP
// 004c791b: POP EBP
// 004c791c: POP EDI
// 004c791d: POP ESI
// 004c791e: POP EBX
// 004c791f: RET
// 004c7920: PUSH 0x3e2aaaab
//   Label: caseD_7
// 004c7925: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004c792a: ADD ESP,0x4
// 004c792d: TEST EAX,EAX
// 004c792f: JZ 0x004c7823
//   XREF to: 004c7823 (CONDITIONAL_JUMP)
// 004c7935: PUSH 0x7
// 004c7937: CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   XREF to: 004eece0 (UNCONDITIONAL_CALL)
// 004c793c: ADD ESP,0x4
// 004c793f: PUSH EAX
// 004c7940: PUSH 0x62a01d
//   XREF to: 0062a01d (DATA)
// 004c7945: LEA EAX,[ESP + 0x10]
// 004c7949: PUSH EAX
// 004c794a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004c794f: ADD ESP,0xc
// 004c7952: CMP byte ptr [ESP + 0x8],0x0
// 004c7957: JNZ 0x004c79a0
//   XREF to: 004c79a0 (CONDITIONAL_JUMP)
// 004c7959: MOV ESP,EBP
// 004c795b: POP EBP
// 004c795c: POP EDI
// 004c795d: POP ESI
// 004c795e: POP EBX
// 004c795f: RET
// 004c7960: PUSH 0x3e2aaaab
//   Label: caseD_4
// 004c7965: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004c796a: ADD ESP,0x4
// 004c796d: TEST EAX,EAX
// 004c796f: JZ 0x004c7823
//   XREF to: 004c7823 (CONDITIONAL_JUMP)
// 004c7975: PUSH 0x3
// 004c7977: CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   XREF to: 004eece0 (UNCONDITIONAL_CALL)
// 004c797c: ADD ESP,0x4
// 004c797f: PUSH EAX
// 004c7980: PUSH 0x62a02a
//   XREF to: 0062a02a (DATA)
// 004c7985: LEA EAX,[ESP + 0x10]
// 004c7989: PUSH EAX
// 004c798a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004c798f: ADD ESP,0xc
// 004c7992: CMP byte ptr [ESP + 0x8],0x0
// 004c7997: JNZ 0x004c79a0
//   XREF to: 004c79a0 (CONDITIONAL_JUMP)
// 004c7999: MOV ESP,EBP
// 004c799b: POP EBP
// 004c799c: POP EDI
// 004c799d: POP ESI
// 004c799e: POP EBX
// 004c799f: RET
// 004c79a0: PUSH 0x3e2e147b
//   Label: LAB_004c79a0
// 004c79a5: PUSH EBX
// 004c79a6: LEA EAX,[ESP + 0x10]
// 004c79aa: PUSH EAX
// 004c79ab: PUSH 0x0
// 004c79ad: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004c79b2: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004c79b3: CALL core_sound.cpp_CSound_playActorSoundWithDelay_FUN_005b3ae0
//   XREF to: 005b3ae0 (UNCONDITIONAL_CALL)
// 004c79b8: ADD ESP,0x14
// 004c79bb: MOV ESP,EBP
// 004c79bd: POP EBP
// 004c79be: POP EDI
// 004c79bf: POP ESI
// 004c79c0: POP EBX
// 004c79c1: RET
