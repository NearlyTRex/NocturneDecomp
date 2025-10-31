// Name: sound_sndmain.cpp_ComputingDelay_FUN_005a7100
// Address: 005a7100
// Address Range: [[005a7100, 005a75dd]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_ComputingDelay_FUN_005a7100()
// Cross-references:
//   sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0 (005a9ae0) at 005a9b09 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CallComputingDelay_FUN_005a9b40 (005a9b40) at 005a9b63 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ComputingDelayBetweenLocks_FUN_005a9820 (005a9820) at 005a987a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a97e0 (005a97e0) at 005a97fc [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9910 (005a9910) at 005a993a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9970 (005a9970) at 005a99ca [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9a70 (005a9a70) at 005a9aa0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_2_FUN_005aca90 (005aca90) at 005acc5a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_FUN_005acdb0 (005acdb0) at 005acdf6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SoundDelayComputeThing_FUN_005a9a00 (005a9a00) at 005a9a30 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0 (005a98b0) at 005a98da [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a90fd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0065022e
//   TerminatedCString s_SfxSlot_compute_must_be__00650243
//   TerminatedCString s_SFXDBG_sample_s_00650266
//   TerminatedCString s_Killing_s_in_compute_0065027b
//   TerminatedCString s_auto_computing_delay_00650294
//   TerminatedCString s_delayRemaining_7_2fs_006502af
//   TerminatedCString s_freq_5_2f_006502ca
//   TerminatedCString s_distToEar_7_2fs_006502da
//   TerminatedCString s_doppler_5_2f_006502f0
//   TerminatedCString s_doppler_clamped_5_2f_00650303
//   TerminatedCString s_non_spatialized_00650320
//   TerminatedCString s_vol_5_2f_00650333
//   TerminatedCString s_channelVol_d_5_2f_00650342
//   TerminatedCString s_effFreq_5_2f_0065035c
//   undefined4 DAT_00663138
//   undefined4 DAT_00663140
//   undefined4 DAT_00663148
//   undefined4 DAT_0066314c
//   undefined4 DAT_00663150
//   CConsole* g_CConsolePtr = 0083b1a4
//   int g_AudioChannels = 0x2
//   undefined4 DAT_00681b30
//   CConsole g_ConsolePtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f68830
//   undefined4 DAT_03f68838
//   undefined4 DAT_03f68840
//   undefined4 DAT_03f68848
//   undefined4 DAT_03f68850
//   undefined4 DAT_03f68858
//   CSound* g_CSoundInstance
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_FUN_005a6d80
//   sound_sndmain.cpp_SfxSample_FUN_005a6ce0
//   sound_sndmain.cpp_SfxSlot_autoCalcDelayRemaining_FUN_005a7070
//   sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_SfxSlot_Something1_FUN_005a6f00
//   sound_sndmain.cpp_SfxSlot_Something2_FUN_005a6df0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_sndmain.cpp_ComputingDelay(undefined4 param_1, undefined4 param_2) */

undefined4 sound_sndmain_cpp_ComputingDelay_FUN_005a7100(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  SfxSlot *pSVar14;
  SfxSlot *in_stack_00000004;
  float in_stack_00000008;
  undefined8 local_60;
  undefined4 local_38;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x96a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::compute - must be locked!");
  }
  if (in_stack_00000004->sample == (SfxSample *)0x0) {
    return 0;
  }
  bVar11 = false;
  if (in_stack_00000004->is_active == 1) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"SFXDBG: sample = %s\n");
  }
  if ((in_stack_00000004->field_116 != 0) &&
     (0.0 <= *(double *)(in_stack_00000004->field_20 + 0x4c))) {
    if ((0.0 < in_stack_00000008) && (0.0 <= *(float *)(in_stack_00000004->field_124 + 0x94))) {
      if (*(float *)(in_stack_00000004->field_124 + 0x94) <= in_stack_00000008) {
        if ((*(uint *)(in_stack_00000004->field_124 + 0x98) & 0x7fffffff) != 0) goto LAB_005a73d3;
        *(undefined4 *)(in_stack_00000004->field_20 + 0x30) =
             *(undefined4 *)(in_stack_00000004->field_124 + 0x90);
      }
      else {
        fVar1 = *(float *)(in_stack_00000004->field_20 + 0x30);
        fVar2 = *(float *)(in_stack_00000004->field_124 + 0x94);
        fVar3 = *(float *)(in_stack_00000004->field_20 + 0x30);
        *(float *)(in_stack_00000004->field_124 + 0x94) =
             *(float *)(in_stack_00000004->field_124 + 0x94) - in_stack_00000008;
        *(float *)(in_stack_00000004->field_20 + 0x30) =
             (in_stack_00000008 / fVar2) * (*(float *)(in_stack_00000004->field_124 + 0x90) - fVar1)
             + fVar3;
      }
      bVar11 = true;
    }
    sound_sndmain_cpp_SfxSample_FUN_005a6ce0();
    if (*(double *)(in_stack_00000004->field_20 + 0x38) == _DAT_00663138) {
      if (in_stack_00000004->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  auto computing delay...\n");
      }
      sound_sndmain_cpp_SfxSlot_autoCalcDelayRemaining_FUN_005a7070();
    }
    if (in_stack_00000004->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"  delayRemaining = %7.2fs\n",
                 *(undefined4 *)(in_stack_00000004->field_20 + 0x38));
    }
    *(undefined4 *)in_stack_00000004->field_124 =
         *(undefined4 *)(in_stack_00000004->field_20 + 0x34);
    if (in_stack_00000004->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"  freq = %5.2f\n",(double)*(float *)in_stack_00000004->field_124);
    }
    if ((in_stack_00000004->field_20[0x48] & 1U) == 0) {
      dVar7 = *(double *)&in_stack_00000004->sample_data - _DAT_03f68830;
      dVar5 = *(double *)&in_stack_00000004->position - _DAT_03f68838;
      dVar6 = *(double *)in_stack_00000004->field_20 - _DAT_03f68840;
      dVar4 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7);
      if (in_stack_00000004->is_active == 1) {
        local_38 = SUB84(dVar4,0);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  distToEar = %7.2fs\n",local_38,(int)((ulonglong)dVar4 >> 0x20)
                  );
      }
      dVar8 = _DAT_03f68848 - *(double *)(in_stack_00000004->field_20 + 0x10);
      dVar9 = _DAT_03f68850 - *(double *)(in_stack_00000004->field_20 + 0x18);
      dVar10 = _DAT_03f68858 - *(double *)(in_stack_00000004->field_20 + 0x20);
      if (dVar4 <= 0.0) {
        dVar4 = SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8);
      }
      else {
        dVar4 = (dVar6 * dVar10 + dVar5 * dVar9 + dVar7 * dVar8) / dVar4;
      }
      local_60 = (dVar4 * _DAT_00681b30 + _DAT_00663140) / _DAT_00663140;
      if (in_stack_00000004->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  doppler = %5.2f\n",(undefined4)local_60,
                   (int)((ulonglong)local_60 >> 0x20));
      }
      dVar4 = 1.0 / (double)CONCAT44(DAT_0066314c,DAT_00663148);
      if (local_60 < dVar4) {
        local_60 = dVar4;
      }
      if ((double)CONCAT44(DAT_0066314c,DAT_00663148) < local_60) {
        local_60 = (double)CONCAT44(DAT_0066314c,DAT_00663148);
      }
      if (in_stack_00000004->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  doppler (clamped) = %5.2f\n",(undefined4)local_60,
                   (int)((ulonglong)local_60 >> 0x20));
      }
      *(float *)in_stack_00000004->field_124 =
           *(float *)in_stack_00000004->field_124 * (float)local_60;
    }
    else if (in_stack_00000004->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"  non spatialized\n");
    }
    sound_sndmain_cpp_FUN_005a6d80();
    sound_sndmain_cpp_SfxSlot_Something2_FUN_005a6df0();
    if (in_stack_00000004->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"  vol = %5.2f\n",
                 (double)*(float *)(in_stack_00000004->field_20 + 0x30));
    }
    sound_sndmain_cpp_SfxSlot_Something1_FUN_005a6f00();
    if ((in_stack_00000004->is_active == 1) &&
       (iVar12 = 0, pSVar14 = in_stack_00000004, 0 < g_AudioChannels)) {
      do {
        iVar13 = iVar12 + 1;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  channelVol[%d] = %5.2f\n",iVar12,
                   (double)((float)(1 << ((char)*(undefined4 *)
                                                 (in_stack_00000004->sample->field1_0x4 + 0x100) -
                                          1U & 0x1f)) * *(float *)(pSVar14->field_124 + 0x24)));
        iVar12 = iVar13;
        pSVar14 = (SfxSlot *)&pSVar14->sample_data;
      } while (iVar13 < g_AudioChannels);
    }
    if (*(float *)in_stack_00000004->field_124 < (float)(1.0 / _DAT_00663150)) {
      *(float *)in_stack_00000004->field_124 = (float)(1.0 / _DAT_00663150);
    }
    if ((float)_DAT_00663150 < *(float *)in_stack_00000004->field_124) {
      *(float *)in_stack_00000004->field_124 = (float)_DAT_00663150;
    }
    if (in_stack_00000004->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"  effFreq = %5.2f\n",
                 (double)*(float *)in_stack_00000004->field_124);
    }
    if (((bVar11) && (g_CSoundInstance != (CSound *)0x0)) &&
       (in_stack_00000004->dsound_buffer != (void *)0x0)) {
      (*(code *)g_CSoundInstance->vtable[1].func2)();
    }
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Killing %s in compute()\n");
LAB_005a73d3:
  sound_sndmain_cpp_SfxSlot_kill_FUN_005a7e60(in_stack_00000004);
  return 0;
}


// Assembly code:
// 005a7100: PUSH EBX
//   Label: sound_sndmain.cpp_ComputingDelay_FUN_005a7100
// 005a7101: PUSH ESI
// 005a7102: PUSH EDI
// 005a7103: PUSH EBP
// 005a7104: MOV EBP,ESP
// 005a7106: SUB ESP,0x68
// 005a7109: AND ESP,0xfffffff8
// 005a710c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a710f: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a7116: JLE 0x005a738a
//   XREF to: 005a738a (CONDITIONAL_JUMP)
// 005a711c: MOV EDI,dword ptr [ESI + 0x78]
//   Label: LAB_005a711c
// 005a711f: TEST EDI,EDI
// 005a7121: JZ 0x005a73b2
//   XREF to: 005a73b2 (CONDITIONAL_JUMP)
// 005a7127: XOR EAX,EAX
// 005a7129: MOV EDX,dword ptr [ESI + 0x118]
// 005a712f: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a7133: CMP EDX,0x1
// 005a7136: JNZ 0x005a714d
//   XREF to: 005a714d (CONDITIONAL_JUMP)
// 005a7138: PUSH EDI
// 005a7139: PUSH 0x650266
//   XREF to: 00650266 (DATA)
// 005a713e: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a7144: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005a7145: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a714a: ADD ESP,0xc
// 005a714d: CMP dword ptr [ESI + 0x74],0x0
//   Label: LAB_005a714d
// 005a7151: JZ 0x005a73bb
//   XREF to: 005a73bb (CONDITIONAL_JUMP)
// 005a7157: FLDZ
// 005a7159: FCOMP double ptr [ESI + 0x60]
// 005a715c: FNSTSW AX
// 005a715e: SAHF
// 005a715f: JA 0x005a73bb
//   XREF to: 005a73bb (CONDITIONAL_JUMP)
// 005a7165: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a7168: FLDZ
// 005a716a: FCOMPP
// 005a716c: FNSTSW AX
// 005a716e: SAHF
// 005a716f: JNC 0x005a71c3
//   XREF to: 005a71c3 (CONDITIONAL_JUMP)
// 005a7171: FLD float ptr [ESI + 0x110]
// 005a7177: FLDZ
// 005a7179: FCOMPP
// 005a717b: FNSTSW AX
// 005a717d: SAHF
// 005a717e: JA 0x005a71c3
//   XREF to: 005a71c3 (CONDITIONAL_JUMP)
// 005a7180: FLD float ptr [ESI + 0x110]
// 005a7186: FCOMP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a7189: FNSTSW AX
// 005a718b: SAHF
// 005a718c: JBE 0x005a73e5
//   XREF to: 005a73e5 (CONDITIONAL_JUMP)
// 005a7192: FLD float ptr [ESI + 0x10c]
// 005a7198: FSUB float ptr [ESI + 0x44]
// 005a719b: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a719e: FLD ST0
// 005a71a0: FDIV float ptr [ESI + 0x110]
// 005a71a6: FMULP ST2
// 005a71a8: FSUBR float ptr [ESI + 0x110]
// 005a71ae: FXCH
// 005a71b0: FADD float ptr [ESI + 0x44]
// 005a71b3: FXCH
// 005a71b5: FSTP float ptr [ESI + 0x110]
// 005a71bb: FSTP float ptr [ESI + 0x44]
// 005a71be: OR byte ptr [ESP + 0x60],0x8
//   Label: LAB_005a71be
//   XREF to: Stack[-0x18] (READ_WRITE)
// 005a71c3: PUSH ESI
//   Label: LAB_005a71c3
// 005a71c4: CALL sound_sndmain.cpp_SfxSample_FUN_005a6ce0
//   XREF to: 005a6ce0 (UNCONDITIONAL_CALL)
// 005a71c9: FLD double ptr [ESI + 0x4c]
// 005a71cc: ADD ESP,0x4
// 005a71cf: FCOMP double ptr [0x00663138]
//   XREF to: 00663138 (READ)
// 005a71d5: FNSTSW AX
// 005a71d7: SAHF
// 005a71d8: JZ 0x005a73ff
//   XREF to: 005a73ff (CONDITIONAL_JUMP)
// 005a71de: CMP dword ptr [ESI + 0x118],0x1
//   Label: LAB_005a71de
// 005a71e5: JNZ 0x005a7203
//   XREF to: 005a7203 (CONDITIONAL_JUMP)
// 005a71e7: MOV EDI,dword ptr [ESI + 0x50]
// 005a71ea: PUSH EDI
// 005a71eb: MOV EAX,dword ptr [ESI + 0x4c]
// 005a71ee: PUSH EAX
// 005a71ef: PUSH 0x6502af
//   XREF to: 006502af (DATA)
// 005a71f4: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a71fa: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005a71fb: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a7200: ADD ESP,0x10
// 005a7203: FLD float ptr [ESI + 0x48]
//   Label: LAB_005a7203
// 005a7206: MOV ECX,dword ptr [ESI + 0x118]
// 005a720c: FSTP float ptr [ESI + 0x7c]
// 005a720f: CMP ECX,0x1
// 005a7212: JNZ 0x005a7231
//   XREF to: 005a7231 (CONDITIONAL_JUMP)
// 005a7214: SUB ESP,0x8
// 005a7217: FLD float ptr [ESI + 0x7c]
// 005a721a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005a721d: PUSH 0x6502ca
//   XREF to: 006502ca (DATA)
// 005a7222: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a7228: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005a7229: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a722e: ADD ESP,0x10
// 005a7231: TEST byte ptr [ESI + 0x5c],0x1
//   Label: LAB_005a7231
// 005a7235: JZ 0x005a742a
//   XREF to: 005a742a (CONDITIONAL_JUMP)
// 005a723b: CMP dword ptr [ESI + 0x118],0x1
// 005a7242: JNZ 0x005a7258
//   XREF to: 005a7258 (CONDITIONAL_JUMP)
// 005a7244: PUSH 0x650320
//   XREF to: 00650320 (DATA)
// 005a7249: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a724f: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005a7250: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a7255: ADD ESP,0x8
// 005a7258: PUSH ESI
//   Label: LAB_005a7258
// 005a7259: CALL sound_sndmain.cpp_FUN_005a6d80
//   XREF to: 005a6d80 (UNCONDITIONAL_CALL)
// 005a725e: ADD ESP,0x4
// 005a7261: PUSH ESI
// 005a7262: CALL sound_sndmain.cpp_SfxSlot_Something2_FUN_005a6df0
//   XREF to: 005a6df0 (UNCONDITIONAL_CALL)
// 005a7267: MOV EBX,dword ptr [ESI + 0x118]
// 005a726d: ADD ESP,0x4
// 005a7270: CMP EBX,0x1
// 005a7273: JNZ 0x005a7292
//   XREF to: 005a7292 (CONDITIONAL_JUMP)
// 005a7275: SUB ESP,0x8
// 005a7278: FLD float ptr [ESI + 0x44]
// 005a727b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005a727e: PUSH 0x650333
//   XREF to: 00650333 (DATA)
// 005a7283: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005a7289: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005a728a: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a728f: ADD ESP,0x10
// 005a7292: PUSH ESI
//   Label: LAB_005a7292
// 005a7293: CALL sound_sndmain.cpp_SfxSlot_Something1_FUN_005a6f00
//   XREF to: 005a6f00 (UNCONDITIONAL_CALL)
// 005a7298: MOV EAX,dword ptr [ESI + 0x118]
// 005a729e: ADD ESP,0x4
// 005a72a1: CMP EAX,0x1
// 005a72a4: JNZ 0x005a7300
//   XREF to: 005a7300 (CONDITIONAL_JUMP)
// 005a72a6: MOV EDX,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a72ac: XOR EBX,EBX
// 005a72ae: TEST EDX,EDX
// 005a72b0: JLE 0x005a7300
//   XREF to: 005a7300 (CONDITIONAL_JUMP)
// 005a72b2: MOV EDI,ESI
// 005a72b4: MOV ECX,dword ptr [ESI + 0x78]
//   Label: LAB_005a72b4
// 005a72b7: MOV ECX,dword ptr [ECX + 0x104]
// 005a72bd: MOV EAX,0x1
// 005a72c2: DEC ECX
// 005a72c3: SHL EAX,CL
// 005a72c5: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a72c9: FILD dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 005a72cd: FMUL float ptr [EDI + 0xa0]
// 005a72d3: SUB ESP,0x8
// 005a72d6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005a72d9: PUSH EBX
// 005a72da: PUSH 0x650342
//   XREF to: 00650342 (DATA)
// 005a72df: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a72e4: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005a72e5: ADD EDI,0x4
// 005a72e8: INC EBX
// 005a72e9: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a72ee: MOV EDX,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a72f4: ADD ESP,0x14
// 005a72f7: CMP EBX,EDX
// 005a72f9: JL 0x005a72b4
//   XREF to: 005a72b4 (CONDITIONAL_JUMP)
// 005a72fb: LEA EAX,[EAX]
// 005a72fe: MOV ECX,ECX
// 005a7300: FLD float ptr [ESI + 0x7c]
//   Label: LAB_005a7300
// 005a7303: FLD1
// 005a7305: FDIV double ptr [0x00663150]
//   XREF to: 00663150 (READ)
// 005a730b: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (WRITE)
// 005a730f: FCOMP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 005a7313: FNSTSW AX
// 005a7315: SAHF
// 005a7316: JNC 0x005a731f
//   XREF to: 005a731f (CONDITIONAL_JUMP)
// 005a7318: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 005a731c: FSTP float ptr [ESI + 0x7c]
// 005a731f: FLD float ptr [ESI + 0x7c]
//   Label: LAB_005a731f
// 005a7322: FCOMP double ptr [0x00663150]
//   XREF to: 00663150 (READ)
// 005a7328: FNSTSW AX
// 005a732a: SAHF
// 005a732b: JBE 0x005a7336
//   XREF to: 005a7336 (CONDITIONAL_JUMP)
// 005a732d: FLD double ptr [0x00663150]
//   XREF to: 00663150 (READ)
// 005a7333: FSTP float ptr [ESI + 0x7c]
// 005a7336: CMP dword ptr [ESI + 0x118],0x1
//   Label: LAB_005a7336
// 005a733d: JNZ 0x005a735c
//   XREF to: 005a735c (CONDITIONAL_JUMP)
// 005a733f: SUB ESP,0x8
// 005a7342: FLD float ptr [ESI + 0x7c]
// 005a7345: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005a7348: PUSH 0x65035c
//   XREF to: 0065035c (DATA)
// 005a734d: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a7353: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005a7354: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a7359: ADD ESP,0x10
// 005a735c: MOV EDI,dword ptr [ESP + 0x60]
//   Label: LAB_005a735c
//   XREF to: Stack[-0x18] (READ)
// 005a7360: TEST EDI,EDI
// 005a7362: JZ 0x005a737e
//   XREF to: 005a737e (CONDITIONAL_JUMP)
// 005a7364: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a7369: TEST EAX,EAX
// 005a736b: JZ 0x005a737e
//   XREF to: 005a737e (CONDITIONAL_JUMP)
// 005a736d: CMP dword ptr [ESI + 0x70],0x0
// 005a7371: JZ 0x005a737e
//   XREF to: 005a737e (CONDITIONAL_JUMP)
// 005a7373: PUSH EDI
// 005a7374: PUSH ESI
// 005a7375: MOV ECX,dword ptr [EAX]
// 005a7377: PUSH EAX
// 005a7378: CALL dword ptr [ECX + 0x40]
// 005a737b: ADD ESP,0xc
// 005a737e: MOV EAX,0x1
//   Label: LAB_005a737e
// 005a7383: MOV ESP,EBP
// 005a7385: POP EBP
// 005a7386: POP EDI
// 005a7387: POP ESI
// 005a7388: POP EBX
// 005a7389: RET
// 005a738a: MOV ECX,0x65022e
//   Label: LAB_005a738a
//   XREF to: 0065022e (PARAM)
// 005a738f: MOV EBX,0x96a
// 005a7394: PUSH 0x650243
//   XREF to: 00650243 (DATA)
// 005a7399: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a739f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a73a5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a73aa: ADD ESP,0x4
// 005a73ad: JMP 0x005a711c
//   XREF to: 005a711c (UNCONDITIONAL_JUMP)
// 005a73b2: XOR EAX,EAX
//   Label: LAB_005a73b2
// 005a73b4: MOV ESP,EBP
// 005a73b6: POP EBP
// 005a73b7: POP EDI
// 005a73b8: POP ESI
// 005a73b9: POP EBX
// 005a73ba: RET
// 005a73bb: MOV ECX,dword ptr [ESI + 0x78]
//   Label: LAB_005a73bb
// 005a73be: PUSH ECX
// 005a73bf: PUSH 0x65027b
//   XREF to: 0065027b (DATA)
// 005a73c4: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a73ca: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005a73cb: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a73d0: ADD ESP,0xc
// 005a73d3: PUSH ESI
//   Label: LAB_005a73d3
// 005a73d4: CALL sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a73d9: ADD ESP,0x4
// 005a73dc: XOR EAX,EAX
// 005a73de: MOV ESP,EBP
// 005a73e0: POP EBP
// 005a73e1: POP EDI
// 005a73e2: POP ESI
// 005a73e3: POP EBX
// 005a73e4: RET
// 005a73e5: TEST dword ptr [ESI + 0x114],0x7fffffff
//   Label: LAB_005a73e5
// 005a73ef: JNZ 0x005a73d3
//   XREF to: 005a73d3 (CONDITIONAL_JUMP)
// 005a73f1: MOV EAX,dword ptr [ESI + 0x10c]
// 005a73f7: MOV dword ptr [ESI + 0x44],EAX
// 005a73fa: JMP 0x005a71be
//   XREF to: 005a71be (UNCONDITIONAL_JUMP)
// 005a73ff: CMP dword ptr [ESI + 0x118],0x1
//   Label: LAB_005a73ff
// 005a7406: JNZ 0x005a741c
//   XREF to: 005a741c (CONDITIONAL_JUMP)
// 005a7408: PUSH 0x650294
//   XREF to: 00650294 (DATA)
// 005a740d: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a7413: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005a7414: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a7419: ADD ESP,0x8
// 005a741c: PUSH ESI
//   Label: LAB_005a741c
// 005a741d: CALL sound_sndmain.cpp_SfxSlot_autoCalcDelayRemaining_FUN_005a7070
//   XREF to: 005a7070 (UNCONDITIONAL_CALL)
// 005a7422: ADD ESP,0x4
// 005a7425: JMP 0x005a71de
//   XREF to: 005a71de (UNCONDITIONAL_JUMP)
// 005a742a: FLD double ptr [ESI + 0xc]
//   Label: LAB_005a742a
// 005a742d: FLD double ptr [ESI + 0x4]
// 005a7430: FSUB double ptr [0x03f68830]
//   XREF to: 03f68830 (READ)
// 005a7436: FXCH
// 005a7438: FSUB double ptr [0x03f68838]
//   XREF to: 03f68838 (READ)
// 005a743e: FXCH
// 005a7440: FST double ptr [ESP + 0x38]
//   XREF to: Stack[-0x40] (WRITE)
// 005a7444: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0x40] (READ)
// 005a7448: FXCH
// 005a744a: FST double ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (WRITE)
// 005a744e: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 005a7452: FLD double ptr [ESI + 0x14]
// 005a7455: FSUB double ptr [0x03f68840]
//   XREF to: 03f68840 (READ)
// 005a745b: FXCH
// 005a745d: FADDP ST2,ST0
// 005a745f: FST double ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (WRITE)
// 005a7463: FMUL double ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 005a7467: FADDP
// 005a7469: FSQRT
// 005a746b: MOV EDI,dword ptr [ESI + 0x118]
// 005a7471: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x38] (WRITE)
// 005a7475: CMP EDI,0x1
// 005a7478: JNZ 0x005a7498
//   XREF to: 005a7498 (CONDITIONAL_JUMP)
// 005a747a: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x34] (READ)
// 005a747e: PUSH EAX
// 005a747f: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x38] (READ)
// 005a7483: PUSH EDX
// 005a7484: PUSH 0x6502da
//   XREF to: 006502da (DATA)
// 005a7489: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a748f: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005a7490: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a7495: ADD ESP,0x10
// 005a7498: FLDZ
//   Label: LAB_005a7498
// 005a749a: FLD double ptr [0x03f68848]
//   XREF to: 03f68848 (READ)
// 005a74a0: FLD double ptr [0x03f68850]
//   XREF to: 03f68850 (READ)
// 005a74a6: FLD double ptr [0x03f68858]
//   XREF to: 03f68858 (READ)
// 005a74ac: FXCH ST2
// 005a74ae: FSUB double ptr [ESI + 0x24]
// 005a74b1: FXCH
// 005a74b3: FSUB double ptr [ESI + 0x2c]
// 005a74b6: FXCH ST2
// 005a74b8: FSUB double ptr [ESI + 0x34]
// 005a74bb: FXCH
// 005a74bd: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x48] (WRITE)
// 005a74c1: FXCH
// 005a74c3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 005a74c6: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (WRITE)
// 005a74ca: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x38] (READ)
// 005a74ce: FNSTSW AX
// 005a74d0: SAHF
// 005a74d1: JNC 0x005a75c2
//   XREF to: 005a75c2 (CONDITIONAL_JUMP)
// 005a74d7: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x40] (READ)
// 005a74db: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x48] (READ)
// 005a74df: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 005a74e3: FMUL double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 005a74e6: FADDP
// 005a74e8: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 005a74ec: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (READ)
// 005a74f0: FADDP
// 005a74f2: FDIV double ptr [ESP + 0x40]
//   XREF to: Stack[-0x38] (READ)
// 005a74f6: FSTP double ptr [ESP + 0x10]
//   Label: LAB_005a74f6
//   XREF to: Stack[-0x68] (WRITE)
// 005a74fa: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (READ)
// 005a74fe: FMUL double ptr [0x00681b30]
//   XREF to: 00681b30 (READ)
// 005a7504: FLD double ptr [0x00663140]
//   XREF to: 00663140 (READ)
// 005a750a: FXCH
// 005a750c: FADD ST0,ST1
// 005a750e: FDIVRP
// 005a7510: MOV EBX,dword ptr [ESI + 0x118]
// 005a7516: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (WRITE)
// 005a751a: CMP EBX,0x1
// 005a751d: JNZ 0x005a753d
//   XREF to: 005a753d (CONDITIONAL_JUMP)
// 005a751f: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5c] (READ)
// 005a7523: PUSH EDI
// 005a7524: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x60] (READ)
// 005a7528: PUSH EAX
// 005a7529: PUSH 0x6502f0
//   XREF to: 006502f0 (DATA)
// 005a752e: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a7534: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005a7535: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a753a: ADD ESP,0x10
// 005a753d: FLD1
//   Label: LAB_005a753d
// 005a753f: FDIV double ptr [0x00663148]
//   XREF to: 00663148 (READ)
// 005a7545: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (READ)
// 005a7549: FXCH
// 005a754b: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (WRITE)
// 005a754f: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 005a7553: FNSTSW AX
// 005a7555: SAHF
// 005a7556: JNC 0x005a7568
//   XREF to: 005a7568 (CONDITIONAL_JUMP)
// 005a7558: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 005a755c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005a7560: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x54] (READ)
// 005a7564: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005a7568: FLD double ptr [ESP + 0x18]
//   Label: LAB_005a7568
//   XREF to: Stack[-0x60] (READ)
// 005a756c: FCOMP double ptr [0x00663148]
//   XREF to: 00663148 (READ)
// 005a7572: FNSTSW AX
// 005a7574: SAHF
// 005a7575: JBE 0x005a7589
//   XREF to: 005a7589 (CONDITIONAL_JUMP)
// 005a7577: MOV EAX,[0x00663148]
//   XREF to: 00663148 (READ)
// 005a757c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005a7580: MOV EAX,[0x0066314c]
//   XREF to: 0066314c (READ)
// 005a7585: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005a7589: CMP dword ptr [ESI + 0x118],0x1
//   Label: LAB_005a7589
// 005a7590: JNZ 0x005a75af
//   XREF to: 005a75af (CONDITIONAL_JUMP)
// 005a7592: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5c] (READ)
// 005a7596: PUSH EBX
// 005a7597: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x60] (READ)
// 005a759b: PUSH EDI
// 005a759c: PUSH 0x650303
//   XREF to: 00650303 (DATA)
// 005a75a1: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a75a6: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005a75a7: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a75ac: ADD ESP,0x10
// 005a75af: FLD float ptr [ESI + 0x7c]
//   Label: LAB_005a75af
// 005a75b2: FLD ST0
// 005a75b4: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (READ)
// 005a75b8: FSTP ST1
// 005a75ba: FSTP float ptr [ESI + 0x7c]
// 005a75bd: JMP 0x005a7258
//   XREF to: 005a7258 (UNCONDITIONAL_JUMP)
// 005a75c2: FLD double ptr [ESP + 0x30]
//   Label: LAB_005a75c2
//   XREF to: Stack[-0x48] (READ)
// 005a75c6: FMUL ST0
// 005a75c8: FLD double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 005a75cb: FMUL ST0
// 005a75cd: FADDP
// 005a75cf: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (READ)
// 005a75d3: FMUL ST0
// 005a75d5: FADDP
// 005a75d7: FSQRT
// 005a75d9: JMP 0x005a74f6
//   XREF to: 005a74f6 (UNCONDITIONAL_JUMP)
