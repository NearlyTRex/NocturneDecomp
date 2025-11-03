// Name: core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0
// Address: 005eeaf0
// Address Range: [[005eeaf0, 005eec56] [005eec84, 005eede0] [005eee7c, 005eeeae]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0()
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e355e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_noLightningFlash_00657b84
//   TerminatedCString s_rain_wav_1_00657ba6
//   undefined4 DAT_00657bb4
//   undefined4 DAT_00657bc4
//   undefined4 DAT_00657bcc
//   undefined4 DAT_00657bd4
//   CEventList* g_CEventListPtr = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CSound* g_CSoundPtr = 03f6af64
//   CEventList g_CEventListInstance
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CGameInstance.delta_time_float
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 g_CDemonCameraInstance.corona_blend_factor
//   CSound g_CSoundInstance
//   CVector3f[200] DAT_03f95df8
//   undefined4 DAT_03f95dfc
//   undefined4 DAT_03f95e00
//   undefined4 DAT_03f95e08
//   undefined4 DAT_03f96758
//   undefined4 DAT_03f9675c
//   undefined1 DAT_03f96a78
//   undefined1 DAT_03f96a79
//   undefined4 DAT_03f96b40
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_fire.cpp_CFireEffect_FUN_004c9290
//   core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
//   core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_weather.cpp_CWeather_SomethingWithLightingThunder(CWeather* param_1)
    */

void core_weather_cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0(void)

{
  CEventList *this_ptr;
  float fVar1;
  undefined4 extraout_EAX;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int *in_stack_00000004;
  undefined8 local_30;
  float *pfStack_2c;
  float local_28;
  float local_18;
  float local_14;
  
  if (in_stack_00000004[9] != 0) {
    fVar1 = (float)in_stack_00000004[10] - g_CGamePtr->delta_time_float;
    in_stack_00000004[10] = (int)fVar1;
    if (0.0 <= fVar1) {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"noLightningFlash");
      if (iVar2 == 0) {
        local_14 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_00657bb4 -
                   local_18;
        if (local_14 < (float)in_stack_00000004[0xc]) {
          local_14 = (float)in_stack_00000004[0xc];
          in_stack_00000004[9] = 0;
          in_stack_00000004[10] = 0;
        }
        core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
                  (&g_CDemonCameraInstance,local_14);
        goto LAB_005eeb1c;
      }
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
              (&g_CDemonCameraInstance,(float)in_stack_00000004[0xc]);
    in_stack_00000004[9] = 0;
    in_stack_00000004[10] = 0;
  }
LAB_005eeb1c:
  if (*in_stack_00000004 == 0) {
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    return;
  }
  iVar3 = 0;
  iVar4 = 0;
  iVar2 = 0;
  do {
    (&DAT_03f96a78)[iVar3] = 0;
    fVar1 = *(float *)((int)&DAT_03f95df8[0].y + iVar2) - (float)in_stack_00000004[1] * local_28;
    *(float *)((int)&DAT_03f95df8[0].y + iVar2) = fVar1;
    if ((fVar1 < *(float *)((int)&DAT_03f96758 + iVar4)) &&
       (*(float *)((int)&DAT_03f95df8[0].y + iVar2) =
             *(float *)((int)&DAT_03f95df8[0].y + iVar2) + _DAT_00657bd4, *in_stack_00000004 == 1))
    {
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
      local_28 = 0.0;
      pfStack_2c = &local_14;
      core_fire_cpp_CFireEffect_FUN_004c9290(g_CFireEffectPtr);
    }
    iVar2 = iVar2 + 0xc;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 200);
  if (*in_stack_00000004 == 1) {
    fVar1 = (float)in_stack_00000004[8];
    in_stack_00000004[8] = (int)(fVar1 - local_28);
    if (fVar1 - local_28 < 0.0) {
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
      if (iVar2 == 0) {
        core_weather_cpp_CWeather_SomethingWithThunder_FUN_005ef140();
      }
      else {
        core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0();
      }
    }
    else {
      fVar1 = (float)in_stack_00000004[0xb];
      in_stack_00000004[0xb] = (int)(fVar1 - local_28);
      if (fVar1 - local_28 < 0.0) {
        fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,(float)in_stack_00000004[0xd]);
        this_ptr = g_CEventListPtr;
        in_stack_00000004[0xb] = (int)fVar1;
        iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (this_ptr,"noLightningFlash");
        if (iVar2 == 0) {
          in_stack_00000004[9] = 1;
          in_stack_00000004[0xc] =
               (int)((float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_00657bb4);
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.3);
          pfStack_2c = (float *)(local_14 + (float)pfStack_2c);
          if (1.0 < (float)pfStack_2c) {
            pfStack_2c = (float *)0x3f800000;
          }
          fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                            (0.01,(float)pfStack_2c * (float)_DAT_00657bbc);
          in_stack_00000004[10] = (int)fVar1;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
                    (&g_CDemonCameraInstance,local_28);
        }
      }
    }
    if ((float)_DAT_00657bc4 <= (float)in_stack_00000004[0xd]) {
      in_stack_00000004[0xd] = 0x41700000;
    }
    else {
      fVar7 = (float10)1;
      fVar5 = (float10)1.4426950408889634 *
              ((float10)local_28 * (float10)_DAT_00657bcc +
              (float10)0.6931471805599453 * (float10)(float)in_stack_00000004[0xd]);
      fVar6 = (float10)f2xm1(fVar5 - (fVar5 / fVar7) * fVar7);
      fVar7 = (float10)fscale(fVar6 + fVar7,fVar5);
      in_stack_00000004[0xd] = (int)(float)fVar7;
    }
    iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar2 == 0) {
      core_sound_cpp_CSound_playSfx_FUN_005b3a20
                (g_CSoundPtr,(int)in_stack_00000004,"rain.wav @ .1");
      DAT_03f96b40 = extraout_EAX;
      return;
    }
  }
  return;
}


// Assembly code:
// 005eeaf0: PUSH EBX
//   Label: core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0
// 005eeaf1: PUSH ESI
// 005eeaf2: PUSH EDI
// 005eeaf3: PUSH EBP
// 005eeaf4: MOV EBP,ESP
// 005eeaf6: SUB ESP,0x28
// 005eeaf9: AND ESP,0xfffffff8
// 005eeafc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005eeb01: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005eeb07: MOV dword ptr [ESP + 0x1c],EAX
// 005eeb0b: MOV dword ptr [ESP + 0x8],EAX
// 005eeb0f: MOV EAX,dword ptr [EBP + 0x14]
// 005eeb12: CMP dword ptr [EAX + 0x24],0x0
// 005eeb16: JNZ 0x005eece7
//   XREF to: 005eece7 (CONDITIONAL_JUMP)
// 005eeb1c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005eeb1c
// 005eeb1f: CMP dword ptr [EAX],0x0
// 005eeb22: JZ 0x005eed92
//   XREF to: 005eed92 (CONDITIONAL_JUMP)
// 005eeb28: XOR ESI,ESI
// 005eeb2a: XOR EDI,EDI
// 005eeb2c: XOR EBX,EBX
// 005eeb2e: XOR AH,AH
//   Label: LAB_005eeb2e
// 005eeb30: MOV byte ptr [ESI + 0x3f96a78],AH
//   XREF to: 03f96a78 (WRITE)
//   XREF to: 03f96a79 (WRITE)
// 005eeb36: MOV EAX,dword ptr [EBP + 0x14]
// 005eeb39: FLD float ptr [EAX + 0x4]
// 005eeb3c: FMUL float ptr [ESP + 0x8]
// 005eeb40: FSUBR float ptr [EBX + 0x3f95dfc]
//   XREF to: 03f95dfc (READ)
//   XREF to: 03f95e08 (READ)
// 005eeb46: FST float ptr [EBX + 0x3f95dfc]
//   XREF to: 03f95dfc (WRITE)
//   XREF to: 03f95e08 (WRITE)
// 005eeb4c: FCOMP float ptr [EDI + 0x3f96758]
//   XREF to: 03f96758 (READ)
//   XREF to: 03f9675c (READ)
// 005eeb52: FNSTSW AX
// 005eeb54: SAHF
// 005eeb55: JNC 0x005eebf9
//   XREF to: 005eebf9 (CONDITIONAL_JUMP)
// 005eeb5b: FLD float ptr [EBX + 0x3f95dfc]
//   XREF to: 03f95dfc (READ)
//   XREF to: 03f95e08 (READ)
// 005eeb61: FADD float ptr [0x00657bd4]
//   XREF to: 00657bd4 (READ)
// 005eeb67: MOV EAX,dword ptr [EBP + 0x14]
// 005eeb6a: FSTP float ptr [EBX + 0x3f95dfc]
//   XREF to: 03f95dfc (WRITE)
//   XREF to: 03f95e08 (WRITE)
// 005eeb70: CMP dword ptr [EAX],0x1
// 005eeb73: JNZ 0x005eebf9
//   XREF to: 005eebf9 (CONDITIONAL_JUMP)
// 005eeb79: MOV EDX,0x3f95df8
//   XREF to: 03f95df8 (DATA)
// 005eeb7e: ADD EDX,EBX
//   XREF to: 03f95df8 (PARAM)
// 005eeb80: MOV EAX,dword ptr [EDX]
//   XREF to: 03f95df8 (READ)
// 005eeb82: MOV dword ptr [ESP + 0x10],EAX
// 005eeb86: LEA EAX,[EDX + 0x4]
//   XREF to: 03f95dfc (DATA)
// 005eeb89: MOV EAX,dword ptr [EAX]
//   XREF to: 03f95dfc (READ)
// 005eeb8b: MOV dword ptr [ESP + 0x14],EAX
// 005eeb8f: LEA EAX,[EDX + 0x8]
//   XREF to: 03f95e00 (DATA)
// 005eeb92: MOV EAX,dword ptr [EAX]
//   XREF to: 03f95e00 (READ)
// 005eeb94: MOV dword ptr [ESP + 0x18],EAX
// 005eeb98: MOV EAX,dword ptr [EDI + 0x3f96758]
//   XREF to: 03f96758 (READ)
// 005eeb9e: PUSH 0x0
// 005eeba0: MOV dword ptr [ESP + 0x18],EAX
// 005eeba4: LEA EAX,[ESP + 0x14]
// 005eeba8: PUSH EAX
// 005eeba9: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 005eebaf: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 005eebb0: CALL core_fire.cpp_CFireEffect_FUN_004c9290
//   XREF to: 004c9290 (UNCONDITIONAL_CALL)
// 005eebb5: ADD ESP,0xc
// 005eebb8: PUSH 0x0
// 005eebba: LEA EAX,[ESP + 0x14]
// 005eebbe: PUSH EAX
// 005eebbf: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 005eebc4: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 005eebc5: CALL core_fire.cpp_CFireEffect_FUN_004c9290
//   XREF to: 004c9290 (UNCONDITIONAL_CALL)
// 005eebca: ADD ESP,0xc
// 005eebcd: PUSH 0x0
// 005eebcf: LEA EAX,[ESP + 0x14]
// 005eebd3: PUSH EAX
// 005eebd4: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 005eebda: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 005eebdb: CALL core_fire.cpp_CFireEffect_FUN_004c9290
//   XREF to: 004c9290 (UNCONDITIONAL_CALL)
// 005eebe0: ADD ESP,0xc
// 005eebe3: PUSH 0x0
// 005eebe5: LEA EAX,[ESP + 0x14]
// 005eebe9: PUSH EAX
// 005eebea: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 005eebf0: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 005eebf1: CALL core_fire.cpp_CFireEffect_FUN_004c9290
//   XREF to: 004c9290 (UNCONDITIONAL_CALL)
// 005eebf6: ADD ESP,0xc
// 005eebf9: ADD EBX,0xc
//   Label: LAB_005eebf9
// 005eebfc: INC ESI
// 005eebfd: ADD EDI,0x4
// 005eec00: CMP ESI,0xc8
// 005eec06: JL 0x005eeb2e
//   XREF to: 005eeb2e (CONDITIONAL_JUMP)
// 005eec0c: MOV EAX,dword ptr [EBP + 0x14]
// 005eec0f: MOV EBX,dword ptr [EAX]
// 005eec11: CMP EBX,0x1
// 005eec14: JNZ 0x005eece0
//   XREF to: 005eece0 (CONDITIONAL_JUMP)
// 005eec1a: FLD float ptr [EAX + 0x20]
// 005eec1d: FSUB float ptr [ESP + 0x8]
// 005eec21: FST float ptr [EAX + 0x20]
// 005eec24: FLDZ
// 005eec26: FCOMPP
// 005eec28: FNSTSW AX
// 005eec2a: SAHF
// 005eec2b: JA 0x005eeda8
//   XREF to: 005eeda8 (CONDITIONAL_JUMP)
// 005eec31: MOV EAX,dword ptr [EBP + 0x14]
// 005eec34: FLD float ptr [EAX + 0x2c]
// 005eec37: FSUB float ptr [ESP + 0x8]
// 005eec3b: FST float ptr [EAX + 0x2c]
// 005eec3e: FLDZ
// 005eec40: FCOMPP
// 005eec42: FNSTSW AX
// 005eec44: SAHF
// 005eec45: JBE 0x005eec84
//   XREF to: 005eec84 (CONDITIONAL_JUMP)
// 005eec47: MOV EAX,dword ptr [EBP + 0x14]
// 005eec4a: PUSH dword ptr [EAX + 0x34]
// 005eec4d: PUSH 0x3dcccccd
// 005eec52: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005eec84: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005eec84
// 005eec87: FLD float ptr [EAX + 0x34]
// 005eec8a: FST double ptr [ESP]
// 005eec8d: FCOMP double ptr [0x00657bc4]
//   XREF to: 00657bc4 (READ)
// 005eec93: FNSTSW AX
// 005eec95: SAHF
// 005eec96: JNC 0x005eee7c
//   XREF to: 005eee7c (CONDITIONAL_JUMP)
// 005eec9c: FLD double ptr [ESP]
// 005eec9f: FLDLN2
// 005eeca1: FXCH
// 005eeca3: FYL2X
// 005eeca5: FLD float ptr [ESP + 0x8]
// 005eeca9: FMUL double ptr [0x00657bcc]
//   XREF to: 00657bcc (READ)
// 005eecaf: FADDP
// 005eecb1: FLD1
// 005eecb3: FLDL2E
// 005eecb5: FMUL ST2
// 005eecb7: FST ST2
// 005eecb9: FPREM
// 005eecbb: F2XM1
// 005eecbd: FADDP
// 005eecbf: FSCALE
// 005eecc1: FSTP ST1
// 005eecc3: MOV EAX,dword ptr [EBP + 0x14]
// 005eecc6: FSTP float ptr [EAX + 0x34]
// 005eecc9: MOV ECX,dword ptr [0x03f96b40]
//   Label: LAB_005eecc9
//   XREF to: 03f96b40 (READ)
// 005eeccf: PUSH ECX
// 005eecd0: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005eecd5: ADD ESP,0x4
// 005eecd8: TEST EAX,EAX
// 005eecda: JZ 0x005eee8b
//   XREF to: 005eee8b (CONDITIONAL_JUMP)
// 005eece0: MOV ESP,EBP
//   Label: LAB_005eece0
// 005eece2: POP EBP
// 005eece3: POP EDI
// 005eece4: POP ESI
// 005eece5: POP EBX
// 005eece6: RET
// 005eece7: FLD float ptr [EAX + 0x28]
//   Label: LAB_005eece7
// 005eecea: FSUB float ptr [ESP + 0x1c]
// 005eecee: FST float ptr [EAX + 0x28]
// 005eecf1: FLDZ
// 005eecf3: FCOMPP
// 005eecf5: FNSTSW AX
// 005eecf7: SAHF
// 005eecf8: JA 0x005eed69
//   XREF to: 005eed69 (CONDITIONAL_JUMP)
// 005eecfa: PUSH 0x657b84
//   XREF to: 00657b84 (DATA)
// 005eecff: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005eed05: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 005eed06: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005eed0b: ADD ESP,0x8
// 005eed0e: TEST EAX,EAX
// 005eed10: JNZ 0x005eed69
//   XREF to: 005eed69 (CONDITIONAL_JUMP)
// 005eed12: MOV EAX,[0x03276acc]
//   XREF to: 03276acc (READ)
// 005eed17: MOV dword ptr [ESP + 0x24],EAX
// 005eed1b: FILD dword ptr [ESP + 0x24]
// 005eed1f: FMUL double ptr [0x00657bb4]
//   XREF to: 00657bb4 (READ)
// 005eed25: FSUB float ptr [ESP + 0x1c]
// 005eed29: MOV EAX,dword ptr [EBP + 0x14]
// 005eed2c: FST float ptr [ESP + 0x20]
// 005eed30: FCOMP float ptr [EAX + 0x30]
// 005eed33: FNSTSW AX
// 005eed35: SAHF
// 005eed36: JNC 0x005eed53
//   XREF to: 005eed53 (CONDITIONAL_JUMP)
// 005eed38: MOV EAX,dword ptr [EBP + 0x14]
// 005eed3b: MOV EAX,dword ptr [EAX + 0x30]
// 005eed3e: MOV dword ptr [ESP + 0x20],EAX
// 005eed42: MOV EAX,dword ptr [EBP + 0x14]
// 005eed45: MOV dword ptr [EAX + 0x24],0x0
// 005eed4c: MOV dword ptr [EAX + 0x28],0x0
// 005eed53: PUSH dword ptr [ESP + 0x20]
//   Label: LAB_005eed53
// 005eed57: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 005eed5c: CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   XREF to: 004528e0 (UNCONDITIONAL_CALL)
// 005eed61: ADD ESP,0x8
// 005eed64: JMP 0x005eeb1c
//   XREF to: 005eeb1c (UNCONDITIONAL_JUMP)
// 005eed69: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005eed69
// 005eed6c: PUSH dword ptr [EAX + 0x30]
// 005eed6f: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 005eed74: CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   XREF to: 004528e0 (UNCONDITIONAL_CALL)
// 005eed79: ADD ESP,0x8
// 005eed7c: MOV EAX,dword ptr [EBP + 0x14]
// 005eed7f: MOV dword ptr [EAX + 0x24],0x0
// 005eed86: MOV dword ptr [EAX + 0x28],0x0
// 005eed8d: JMP 0x005eeb1c
//   XREF to: 005eeb1c (UNCONDITIONAL_JUMP)
// 005eed92: MOV ESI,dword ptr [0x03f96b40]
//   Label: LAB_005eed92
//   XREF to: 03f96b40 (READ)
// 005eed98: PUSH ESI
// 005eed99: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005eed9e: ADD ESP,0x4
// 005eeda1: MOV ESP,EBP
// 005eeda3: POP EBP
// 005eeda4: POP EDI
// 005eeda5: POP ESI
// 005eeda6: POP EBX
// 005eeda7: RET
// 005eeda8: PUSH 0x3ecccccd
//   Label: LAB_005eeda8
// 005eedad: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005eedb2: ADD ESP,0x4
// 005eedb5: TEST EAX,EAX
// 005eedb7: JZ 0x005eedd0
//   XREF to: 005eedd0 (CONDITIONAL_JUMP)
// 005eedb9: PUSH EBX
// 005eedba: MOV EDX,dword ptr [EBP + 0x14]
// 005eedbd: PUSH 0x3dcccccd
// 005eedc2: PUSH EDX
// 005eedc3: CALL core_weather.cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0
//   XREF to: 005eeeb0 (UNCONDITIONAL_CALL)
// 005eedc8: ADD ESP,0xc
// 005eedcb: JMP 0x005eec84
//   XREF to: 005eec84 (UNCONDITIONAL_JUMP)
// 005eedd0: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005eedd0
// 005eedd3: PUSH EAX
// 005eedd4: CALL core_weather.cpp_CWeather_SomethingWithThunder_FUN_005ef140
//   XREF to: 005ef140 (UNCONDITIONAL_CALL)
// 005eedd9: ADD ESP,0x4
// 005eeddc: JMP 0x005eec84
//   XREF to: 005eec84 (UNCONDITIONAL_JUMP)
// 005eee7c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005eee7c
// 005eee7f: MOV dword ptr [EAX + 0x34],0x41700000
// 005eee86: JMP 0x005eecc9
//   XREF to: 005eecc9 (UNCONDITIONAL_JUMP)
// 005eee8b: PUSH 0x657ba6
//   Label: LAB_005eee8b
//   XREF to: 00657ba6 (DATA)
// 005eee90: MOV EBX,dword ptr [EBP + 0x14]
// 005eee93: PUSH EBX
// 005eee94: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 005eee9a: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 005eee9b: CALL core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 005eeea0: ADD ESP,0xc
// 005eeea3: MOV [0x03f96b40],EAX
//   XREF to: 03f96b40 (WRITE)
// 005eeea8: MOV ESP,EBP
// 005eeeaa: POP EBP
// 005eeeab: POP EDI
// 005eeeac: POP ESI
// 005eeead: POP EBX
// 005eeeae: RET
