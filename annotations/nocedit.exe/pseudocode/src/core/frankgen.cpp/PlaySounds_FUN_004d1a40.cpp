// Name: core_frankgen.cpp_PlaySounds_FUN_004d1a40
// Address: 004d1a40
// Address Range: [[004d1a40, 004d1eb0]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_PlaySounds_FUN_004d1a40()
// Globals:
//   void* switchdataD_004d1a18 = 004d1ab2
//   TerminatedCString s_frankx_bed1_wav_0062a9d8
//   TerminatedCString s_frankx_bed2_wav_0062a9e8
//   TerminatedCString s_frankx_bed3_wav_0062a9f8
//   TerminatedCString s_frankx_bed4_wav_0062aa08
//   TerminatedCString s_frankx_water_dip_wav_0062aa18
//   TerminatedCString s_frankx_big_ramp_bed5_wav_0062aa2d
//   TerminatedCString s_frankx_crane1_wav_0062aa46
//   TerminatedCString s_frankx_crane2_wav_0062aa58
//   TerminatedCString s_frankx_crane3_wav_0062aa6a
//   TerminatedCString s_frankx_arm_wav_0062aa7c
//   TerminatedCString s_frankx_flap_up_wav_0062aa8b
//   TerminatedCString s_frankx_flap_down_wav_0062aa9e
//   TerminatedCString s_frankx_big_ramp_wav_0062aab3
//   TerminatedCString s_core_frankgen_cpp_0062aac7
//   TerminatedCString s_WTF_0062aadc
//   float FLOAT_0062aae1 = 1580
//   double DOUBLE_0062aae5 = 0.0100000000000000
//   double DOUBLE_0062aaed = 50
//   float FLOAT_0062aaf5 = -1380
//   double DOUBLE_0062aafd = 30
//   float FLOAT_0062ab05 = 20
//   undefined4 DAT_0065e66c
//   undefined4 DAT_0065e670
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
//   undefined4 DAT_02d7b7f0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
//   core_frankgen.cpp_FUN_004d1ec0
//   core_frankgen.cpp_LoadModel_FUN_004d2190
//   core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_frankgen.cpp_PlaySounds(undefined4 param_1, undefined4
   param_2) */

void core_frankgen_cpp_PlaySounds_FUN_004d1a40
               (undefined4 param_1,undefined4 param_2,CFireEffect *unaff_EBX,undefined4 param_4,
               CDemonActor *param_5,undefined4 param_6,float param_7)

{
  CDemonActor *pCVar1;
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float *unaff_EDI;
  float in_stack_ffffff90;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_3c [8];
  CVector3f CStack_34;
  undefined1 auStack_20 [12];
  CVector3f CStack_14;
  
  _DAT_02d7b7f0 = *(float *)(param_5[1].actor_name + 4);
  pCVar1 = (CDemonActor *)core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  if (pCVar1 == param_5) {
    fVar3 = param_7 * _DAT_0065e66c + *(float *)(param_5[1].actor_name + 4);
    *(float *)(param_5[1].actor_name + 4) = fVar3;
    if (_DAT_0065e670 <= fVar3) {
      *(float *)(param_5[1].actor_name + 4) = *(float *)(param_5[1].actor_name + 4) - _DAT_0065e670;
    }
  }
  else {
    *(undefined4 *)(param_5[1].actor_name + 4) = *(undefined4 *)(pCVar1[1].actor_name + 4);
  }
  if (*(float *)(param_5[1].actor_name + 4) < _DAT_02d7b7f0) {
    _DAT_02d7b7f0 = _DAT_02d7b7f0 - _DAT_0065e670;
  }
  core_frankgen_cpp_LoadModel_FUN_004d2190();
  switch(*(undefined4 *)param_5[1].actor_name) {
  case 0:
    if ((0x44ac8000 < *(int *)(param_5[1].actor_name + 4)) &&
       (*(int *)(param_5[1].actor_name + 4) < 0x44c58000)) {
      iVar2 = core_frankgen_cpp_FUN_004d1ec0();
      iVar5 = 0;
      (*param_5->vtable->getBoundingBox)(param_5,(CBoundingBox3D *)&stack0xffffff8c);
      auStack_3c._0_4_ = 0.0;
      auStack_3c._4_4_ = (CFireEffect *)0x40800000;
      CStack_34.x = 0.0;
      if (0 < iVar2) {
        do {
          auStack_20._0_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_60,fStack_54);
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.4);
          auStack_20._8_4_ = (1.0 - fVar3) * fStack_54 + fStack_48 * fVar3;
          CStack_14.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_50,fStack_44);
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (param_5,(CVector3f *)auStack_3c,(CVector3f *)(auStack_20 + 8));
          if (&CStack_14 != pCVar4) {
            CStack_14.x = pCVar4->x;
            CStack_14.y = pCVar4->y;
            CStack_14.z = pCVar4->z;
          }
          pCVar4 = (CVector3f *)0xffff;
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.5);
          unaff_EDI = &CStack_14.y;
          iVar5 = iVar5 + 1;
          unaff_EBX = g_CFireEffectPtr;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,(CVector3f *)unaff_EDI,fVar3,pCVar4,(int)in_stack_ffffff90);
        } while (iVar5 < iVar2);
      }
    }
    if ((0x44e10000 < *(int *)(param_5[1].actor_name + 4)) &&
       (*(int *)(param_5[1].actor_name + 4) < 0x44ed8000)) {
      pCVar1 = param_5;
      (*param_5->vtable->getBoundingBox)(param_5,(CBoundingBox3D *)&stack0xffffff88);
      auStack_3c._0_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10((float)pCVar1,(float)unaff_EDI);
      auStack_3c._4_4_ = unaff_EBX;
      CStack_14.y = (float)auStack_3c._0_4_;
      CStack_34.y = core_actor_cpp_getRandomFloat_FUN_0040cc10((float)unaff_EDI,in_stack_ffffff90);
      CStack_14.z = CStack_34.y;
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (param_5,(CVector3f *)auStack_20,(CVector3f *)(auStack_3c + 4));
      if (&CStack_34 != pCVar4) {
        CStack_34.x = pCVar4->x;
        CStack_34.y = pCVar4->y;
        CStack_34.z = pCVar4->z;
      }
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    }
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
switchD_004d1aab_caseD_7:
    return;
  case 1:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 2:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 3:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 4:
  case 7:
    goto switchD_004d1aab_caseD_7;
  case 5:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 6:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 8:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x13e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
    return;
  }
}


// Assembly code:
// 004d1a40: PUSH ESI
//   Label: core_frankgen.cpp_PlaySounds_FUN_004d1a40
// 004d1a41: PUSH EBP
// 004d1a42: SUB ESP,0x78
// 004d1a45: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x4] (READ)
// 004d1a4c: MOV EAX,dword ptr [ESI + 0x15c]
// 004d1a52: MOV [0x02d7b7f0],EAX
//   XREF to: 02d7b7f0 (WRITE)
// 004d1a57: CALL core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
//   XREF to: 004d2330 (UNCONDITIONAL_CALL)
// 004d1a5c: CMP EAX,ESI
// 004d1a5e: JZ 0x004d1d83
//   XREF to: 004d1d83 (CONDITIONAL_JUMP)
// 004d1a64: MOV EDX,dword ptr [EAX + 0x15c]
// 004d1a6a: MOV dword ptr [ESI + 0x15c],EDX
// 004d1a70: FLD float ptr [0x02d7b7f0]
//   Label: LAB_004d1a70
//   XREF to: 02d7b7f0 (READ)
// 004d1a76: FCOMP float ptr [ESI + 0x15c]
// 004d1a7c: FNSTSW AX
// 004d1a7e: SAHF
// 004d1a7f: JBE 0x004d1a93
//   XREF to: 004d1a93 (CONDITIONAL_JUMP)
// 004d1a81: FLD float ptr [0x0065e670]
//   XREF to: 0065e670 (READ)
// 004d1a87: FSUBR float ptr [0x02d7b7f0]
//   XREF to: 02d7b7f0 (READ)
// 004d1a8d: FSTP float ptr [0x02d7b7f0]
//   XREF to: 02d7b7f0 (WRITE)
// 004d1a93: PUSH ESI
//   Label: LAB_004d1a93
// 004d1a94: CALL core_frankgen.cpp_LoadModel_FUN_004d2190
//   XREF to: 004d2190 (UNCONDITIONAL_CALL)
// 004d1a99: MOV EAX,dword ptr [ESI + 0x158]
// 004d1a9f: ADD ESP,0x4
// 004d1aa2: CMP EAX,0x8
// 004d1aa5: JA 0x004d1e88
//   XREF to: 004d1e88 (CONDITIONAL_JUMP)
// 004d1aab: JMP dword ptr [EAX*0x4 + 0x4d1a18]
//   Label: switchD
//   XREF to: 004d1ab2 (COMPUTED_JUMP)
//   XREF to: 004d1ddf (COMPUTED_JUMP)
//   XREF to: 004d1df8 (COMPUTED_JUMP)
//   XREF to: 004d1e11 (COMPUTED_JUMP)
//   XREF to: 004d1d7d (COMPUTED_JUMP)
//   XREF to: 004d1e2a (COMPUTED_JUMP)
//   XREF to: 004d1e43 (COMPUTED_JUMP)
//   XREF to: 004d1e6f (COMPUTED_JUMP)
//   XREF to: 004d1a18 (DATA)
// 004d1ab2: PUSH EDI
//   Label: caseD_0
// 004d1ab3: PUSH EBX
// 004d1ab4: MOV EBX,dword ptr [ESI + 0x15c]
// 004d1aba: CMP EBX,0x44ac8000
// 004d1ac0: JLE 0x004d1c37
//   XREF to: 004d1c37 (CONDITIONAL_JUMP)
// 004d1ac6: CMP EBX,0x44c58000
// 004d1acc: JGE 0x004d1c37
//   XREF to: 004d1c37 (CONDITIONAL_JUMP)
// 004d1ad2: CMP EBX,0x44b90000
// 004d1ad8: JGE 0x004d1dc2
//   XREF to: 004d1dc2 (CONDITIONAL_JUMP)
// 004d1ade: FLD float ptr [ESI + 0x15c]
// 004d1ae4: FADD float ptr [0x0062aaf5]
//   XREF to: 0062aaf5 (READ)
// 004d1aea: FMUL double ptr [0x0062aae5]
//   XREF to: 0062aae5 (READ)
// 004d1af0: FMUL double ptr [0x0062aafd]
//   XREF to: 0062aafd (READ)
// 004d1af6: FADD float ptr [0x0062ab05]
//   XREF to: 0062ab05 (READ)
// 004d1afc: FSTP float ptr [ESP + 0x78]
//   Label: LAB_004d1afc
//   XREF to: Stack[-0x10] (WRITE)
// 004d1b00: PUSH dword ptr [ESP + 0x90]
//   XREF to: Stack[0x8] (READ)
// 004d1b07: PUSH dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x10] (READ)
// 004d1b0b: PUSH ESI
// 004d1b0c: CALL core_frankgen.cpp_FUN_004d1ec0
//   XREF to: 004d1ec0 (UNCONDITIONAL_CALL)
// 004d1b11: ADD ESP,0xc
// 004d1b14: LEA EDX,[ESP + 0x20]
//   XREF to: Stack[-0x68] (DATA)
// 004d1b18: MOV EBP,EAX
// 004d1b1a: PUSH EDX
// 004d1b1b: MOV EDI,EAX
// 004d1b1d: MOV EAX,dword ptr [ESI + 0x154]
// 004d1b23: PUSH ESI
// 004d1b24: XOR EBX,EBX
// 004d1b26: CALL dword ptr [EAX + 0x14]
// 004d1b29: ADD ESP,0x8
// 004d1b2c: XOR EAX,EAX
// 004d1b2e: MOV EDX,0x40800000
// 004d1b33: MOV dword ptr [ESP + 0x44],EAX
// 004d1b37: MOV dword ptr [ESP + 0x48],EDX
// 004d1b3b: MOV dword ptr [ESP + 0x4c],EAX
// 004d1b3f: TEST EBP,EBP
// 004d1b41: JLE 0x004d1c37
//   XREF to: 004d1c37 (CONDITIONAL_JUMP)
// 004d1b47: PUSH dword ptr [ESP + 0x2c]
//   Label: LAB_004d1b47
// 004d1b4b: PUSH dword ptr [ESP + 0x24]
// 004d1b4f: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d1b54: MOV dword ptr [ESP + 0x84],EAX
// 004d1b5b: FLD float ptr [ESP + 0x84]
// 004d1b62: ADD ESP,0x8
// 004d1b65: PUSH 0x3ecccccd
// 004d1b6a: PUSH 0x0
// 004d1b6c: FSTP float ptr [ESP + 0x64]
// 004d1b70: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d1b75: MOV dword ptr [ESP + 0x84],EAX
// 004d1b7c: FLD float ptr [ESP + 0x84]
// 004d1b83: ADD ESP,0x8
// 004d1b86: FLD1
// 004d1b88: FSUB ST0,ST1
// 004d1b8a: FMUL float ptr [ESP + 0x24]
// 004d1b8e: FLD float ptr [ESP + 0x30]
// 004d1b92: FMULP ST2
// 004d1b94: PUSH dword ptr [ESP + 0x34]
// 004d1b98: FADDP
// 004d1b9a: PUSH dword ptr [ESP + 0x2c]
// 004d1b9e: FSTP float ptr [ESP + 0x68]
// 004d1ba2: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d1ba7: MOV dword ptr [ESP + 0x84],EAX
// 004d1bae: FLD float ptr [ESP + 0x84]
// 004d1bb5: ADD ESP,0x8
// 004d1bb8: LEA EAX,[ESP + 0x5c]
// 004d1bbc: PUSH EAX
// 004d1bbd: LEA EAX,[ESP + 0x3c]
// 004d1bc1: PUSH EAX
// 004d1bc2: PUSH ESI
// 004d1bc3: FSTP float ptr [ESP + 0x70]
// 004d1bc7: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d1bcc: MOV EDX,EAX
// 004d1bce: LEA EAX,[ESP + 0x68]
// 004d1bd2: ADD ESP,0xc
// 004d1bd5: CMP EAX,EDX
// 004d1bd7: JZ 0x004d1bed
//   XREF to: 004d1bed (CONDITIONAL_JUMP)
// 004d1bd9: MOV EAX,dword ptr [EDX]
// 004d1bdb: MOV dword ptr [ESP + 0x5c],EAX
// 004d1bdf: MOV EAX,dword ptr [EDX + 0x4]
// 004d1be2: MOV dword ptr [ESP + 0x60],EAX
// 004d1be6: MOV EAX,dword ptr [EDX + 0x8]
// 004d1be9: MOV dword ptr [ESP + 0x64],EAX
// 004d1bed: PUSH 0xffff
//   Label: LAB_004d1bed
// 004d1bf2: PUSH 0x0
// 004d1bf4: PUSH 0x3fc00000
// 004d1bf9: PUSH 0x3f000000
// 004d1bfe: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d1c03: MOV dword ptr [ESP + 0x8c],EAX
// 004d1c0a: FLD float ptr [ESP + 0x8c]
// 004d1c11: ADD ESP,0x8
// 004d1c14: SUB ESP,0x4
// 004d1c17: LEA EAX,[ESP + 0x68]
// 004d1c1b: FSTP float ptr [ESP]
// 004d1c1e: PUSH EAX
// 004d1c1f: MOV EBP,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004d1c25: PUSH EBP
//   XREF to: 02d12db0 (DATA)
// 004d1c26: INC EBX
// 004d1c27: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 004d1c2c: ADD ESP,0x14
// 004d1c2f: CMP EBX,EDI
// 004d1c31: JL 0x004d1b47
//   XREF to: 004d1b47 (CONDITIONAL_JUMP)
// 004d1c37: MOV EAX,dword ptr [ESI + 0x15c]
//   Label: LAB_004d1c37
// 004d1c3d: CMP EAX,0x44e10000
// 004d1c42: JLE 0x004d1d09
//   XREF to: 004d1d09 (CONDITIONAL_JUMP)
// 004d1c48: CMP EAX,0x44ed8000
// 004d1c4d: JGE 0x004d1d09
//   XREF to: 004d1d09 (CONDITIONAL_JUMP)
// 004d1c53: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x80] (DATA)
// 004d1c57: PUSH EAX
// 004d1c58: MOV EDX,dword ptr [ESI + 0x154]
// 004d1c5e: PUSH ESI
// 004d1c5f: CALL dword ptr [EDX + 0x14]
// 004d1c62: ADD ESP,0x8
// 004d1c65: PUSH dword ptr [ESP + 0x14]
// 004d1c69: PUSH dword ptr [ESP + 0xc]
// 004d1c6d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d1c72: MOV dword ptr [ESP + 0x84],EAX
// 004d1c79: FLD float ptr [ESP + 0x84]
// 004d1c80: ADD ESP,0x8
// 004d1c83: PUSH dword ptr [ESP + 0x1c]
// 004d1c87: FSTP float ptr [ESP + 0x54]
// 004d1c8b: MOV EAX,dword ptr [ESP + 0x10]
// 004d1c8f: PUSH dword ptr [ESP + 0x14]
// 004d1c93: MOV dword ptr [ESP + 0x5c],EAX
// 004d1c97: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d1c9c: MOV dword ptr [ESP + 0x84],EAX
// 004d1ca3: FLD float ptr [ESP + 0x84]
// 004d1caa: ADD ESP,0x8
// 004d1cad: LEA EAX,[ESP + 0x50]
// 004d1cb1: PUSH EAX
// 004d1cb2: LEA EAX,[ESP + 0x6c]
// 004d1cb6: PUSH EAX
// 004d1cb7: PUSH ESI
// 004d1cb8: FSTP float ptr [ESP + 0x64]
// 004d1cbc: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d1cc1: MOV EDX,EAX
// 004d1cc3: LEA EAX,[ESP + 0x5c]
// 004d1cc7: ADD ESP,0xc
// 004d1cca: CMP EAX,EDX
// 004d1ccc: JZ 0x004d1ce2
//   XREF to: 004d1ce2 (CONDITIONAL_JUMP)
// 004d1cce: MOV EAX,dword ptr [EDX]
// 004d1cd0: MOV dword ptr [ESP + 0x50],EAX
// 004d1cd4: MOV EAX,dword ptr [EDX + 0x4]
// 004d1cd7: MOV dword ptr [ESP + 0x54],EAX
// 004d1cdb: MOV EAX,dword ptr [EDX + 0x8]
// 004d1cde: MOV dword ptr [ESP + 0x58],EAX
// 004d1ce2: PUSH 0xffff
//   Label: LAB_004d1ce2
// 004d1ce7: PUSH 0x0
// 004d1ce9: PUSH 0x10000
// 004d1cee: PUSH 0x4000
// 004d1cf3: PUSH 0x0
// 004d1cf5: LEA EAX,[ESP + 0x64]
// 004d1cf9: PUSH EAX
// 004d1cfa: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004d1d00: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004d1d01: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004d1d06: ADD ESP,0x1c
// 004d1d09: PUSH 0x62a9d8
//   Label: LAB_004d1d09
//   XREF to: 0062a9d8 (DATA)
// 004d1d0e: PUSH 0x3f800000
// 004d1d13: PUSH ESI
// 004d1d14: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1d19: ADD ESP,0xc
// 004d1d1c: PUSH 0x62a9e8
//   XREF to: 0062a9e8 (DATA)
// 004d1d21: PUSH 0x43ed8000
// 004d1d26: PUSH ESI
// 004d1d27: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1d2c: ADD ESP,0xc
// 004d1d2f: PUSH 0x62a9f8
//   XREF to: 0062a9f8 (DATA)
// 004d1d34: PUSH 0x444a4000
// 004d1d39: PUSH ESI
// 004d1d3a: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1d3f: ADD ESP,0xc
// 004d1d42: PUSH 0x62aa08
//   XREF to: 0062aa08 (DATA)
// 004d1d47: PUSH 0x44834000
// 004d1d4c: PUSH ESI
// 004d1d4d: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1d52: ADD ESP,0xc
// 004d1d55: PUSH 0x62aa18
//   XREF to: 0062aa18 (DATA)
// 004d1d5a: PUSH 0x44ac8000
// 004d1d5f: PUSH ESI
// 004d1d60: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1d65: ADD ESP,0xc
// 004d1d68: PUSH 0x62aa2d
//   XREF to: 0062aa2d (DATA)
// 004d1d6d: PUSH 0x44ff0000
// 004d1d72: PUSH ESI
// 004d1d73: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1d78: ADD ESP,0xc
// 004d1d7b: POP EBX
// 004d1d7c: POP EDI
// 004d1d7d: ADD ESP,0x78
//   Label: caseD_7
// 004d1d80: POP EBP
// 004d1d81: POP ESI
// 004d1d82: RET
// 004d1d83: FLD float ptr [ESP + 0x88]
//   Label: LAB_004d1d83
//   XREF to: Stack[0x8] (READ)
// 004d1d8a: FMUL float ptr [0x0065e66c]
//   XREF to: 0065e66c (READ)
// 004d1d90: FADD float ptr [ESI + 0x15c]
// 004d1d96: FST float ptr [ESI + 0x15c]
// 004d1d9c: FCOMP float ptr [0x0065e670]
//   XREF to: 0065e670 (READ)
// 004d1da2: FNSTSW AX
// 004d1da4: SAHF
// 004d1da5: JC 0x004d1a70
//   XREF to: 004d1a70 (CONDITIONAL_JUMP)
// 004d1dab: FLD float ptr [0x0065e670]
//   XREF to: 0065e670 (READ)
// 004d1db1: FSUBR float ptr [ESI + 0x15c]
// 004d1db7: FSTP float ptr [ESI + 0x15c]
// 004d1dbd: JMP 0x004d1a70
//   XREF to: 004d1a70 (UNCONDITIONAL_JUMP)
// 004d1dc2: FLD float ptr [0x0062aae1]
//   Label: LAB_004d1dc2
//   XREF to: 0062aae1 (READ)
// 004d1dc8: FSUB float ptr [ESI + 0x15c]
// 004d1dce: FMUL double ptr [0x0062aae5]
//   XREF to: 0062aae5 (READ)
// 004d1dd4: FMUL double ptr [0x0062aaed]
//   XREF to: 0062aaed (READ)
// 004d1dda: JMP 0x004d1afc
//   XREF to: 004d1afc (UNCONDITIONAL_JUMP)
// 004d1ddf: PUSH 0x62aa46
//   Label: caseD_1
//   XREF to: 0062aa46 (DATA)
// 004d1de4: PUSH 0x43030000
// 004d1de9: PUSH ESI
// 004d1dea: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1def: ADD ESP,0xc
// 004d1df2: ADD ESP,0x78
// 004d1df5: POP EBP
// 004d1df6: POP ESI
// 004d1df7: RET
// 004d1df8: PUSH 0x62aa58
//   Label: caseD_2
//   XREF to: 0062aa58 (DATA)
// 004d1dfd: PUSH 0x4403c000
// 004d1e02: PUSH ESI
// 004d1e03: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1e08: ADD ESP,0xc
// 004d1e0b: ADD ESP,0x78
// 004d1e0e: POP EBP
// 004d1e0f: POP ESI
// 004d1e10: RET
// 004d1e11: PUSH 0x62aa6a
//   Label: caseD_3
//   XREF to: 0062aa6a (DATA)
// 004d1e16: PUSH 0x44882000
// 004d1e1b: PUSH ESI
// 004d1e1c: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1e21: ADD ESP,0xc
// 004d1e24: ADD ESP,0x78
// 004d1e27: POP EBP
// 004d1e28: POP ESI
// 004d1e29: RET
// 004d1e2a: PUSH 0x62aa7c
//   Label: caseD_5
//   XREF to: 0062aa7c (DATA)
// 004d1e2f: PUSH 0x44580000
// 004d1e34: PUSH ESI
// 004d1e35: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1e3a: ADD ESP,0xc
// 004d1e3d: ADD ESP,0x78
// 004d1e40: POP EBP
// 004d1e41: POP ESI
// 004d1e42: RET
// 004d1e43: PUSH 0x62aa8b
//   Label: caseD_6
//   XREF to: 0062aa8b (DATA)
// 004d1e48: PUSH 0x44d4c000
// 004d1e4d: PUSH ESI
// 004d1e4e: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1e53: ADD ESP,0xc
// 004d1e56: PUSH 0x62aa9e
//   XREF to: 0062aa9e (DATA)
// 004d1e5b: PUSH 0x44eb2000
// 004d1e60: PUSH ESI
// 004d1e61: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1e66: ADD ESP,0xc
// 004d1e69: ADD ESP,0x78
// 004d1e6c: POP EBP
// 004d1e6d: POP ESI
// 004d1e6e: RET
// 004d1e6f: PUSH 0x62aab3
//   Label: caseD_8
//   XREF to: 0062aab3 (DATA)
// 004d1e74: PUSH 0x44f3c000
// 004d1e79: PUSH ESI
// 004d1e7a: CALL core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
//   XREF to: 004d1f20 (UNCONDITIONAL_CALL)
// 004d1e7f: ADD ESP,0xc
// 004d1e82: ADD ESP,0x78
// 004d1e85: POP EBP
// 004d1e86: POP ESI
// 004d1e87: RET
// 004d1e88: MOV EDX,0x62aac7
//   Label: default
//   XREF to: 0062aac7 (DATA)
// 004d1e8d: MOV ECX,0x13e
// 004d1e92: PUSH 0x62aadc
//   XREF to: 0062aadc (DATA)
// 004d1e97: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004d1e9d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004d1ea3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004d1ea8: ADD ESP,0x4
// 004d1eab: ADD ESP,0x78
// 004d1eae: POP EBP
// 004d1eaf: POP ESI
// 004d1eb0: RET
