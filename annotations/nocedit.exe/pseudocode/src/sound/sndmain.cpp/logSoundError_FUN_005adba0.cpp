// Name: sound_sndmain.cpp_logSoundError_FUN_005adba0
// Address: 005adba0
// Address Range: [[005adba0, 005add6d]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format, ...)
// Cross-references:
//   sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40 (005aef40) at 005af112 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410 (005af410) at 005af663 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60 (005afd60) at 005afe56 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660 (005ae660) at 005ae7b8 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0 (005afcc0) at 005afd4e [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030 (005b0030) at 005b0107 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220 (005af220) at 005af308 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50 (005aed50) at 005aedf9 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0 (005ae4b0) at 005ae5a3 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830 (005ae830) at 005aec61 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750 (005af750) at 005afc25 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_005afe80 (005afe80) at 005b0014 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340 (005ae340) at 005ae433 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_005af320 (005af320) at 005af3be [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_checkDirectSoundError_FUN_005adf90 (005adf90) at 005adfd4 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120 (005b0120) at 005b0321 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_fillStreamBuffer_FUN_005adff0 (005adff0) at 005ae161 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440 (005b0440) at 005b0600 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0 (005ae1c0) at 005ae24e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_FUN_005a6170 (005a6170) at 005a621b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0 (005a7fe0) at 005a806a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a80e0 (005a80e0) at 005a813a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a6a4a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_allocateHwSample_FUN_005a5620 (005a5620) at 005a5681 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 (005a4c80) at 005a4ef0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_killSoundThread_FUN_005abcb0 (005abcb0) at 005abd11 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_parseWavFile_FUN_005a3fe0 (005a3fe0) at 005a4264 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a951b [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70 (005b0d70) at 005b0df8 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavInDevice_poll_FUN_005b12e0 (005b12e0) at 005b145b [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavInDevice_reset_FUN_005b0f10 (005b0f10) at 005b0f5d [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavInDevice_setMode_FUN_005b0f70 (005b0f70) at 005b11c5 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavInDevice_start_FUN_005b0e20 (005b0e20) at 005b0eea [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840 (005b0840) at 005b08c8 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavOutDevice_poll_FUN_005b0c10 (005b0c10) at 005b0c78 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavOutDevice_reset_FUN_005b09c0 (005b09c0) at 005b0a16 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavOutDevice_setMode_FUN_005b0a30 (005b0a30) at 005b0bd4 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0 (005b0cc0) at 005b0d4c [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0 (005b06c0) at 005b0827 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_0065140c
//   TerminatedCString s_sound_sndmain_cpp_00651410
//   TerminatedCString s_at_00651425
//   TerminatedCString s_q_xfer_fletch_sounderr_t_00651428
//   TerminatedCString s_anon_00651445
//   TerminatedCString s_Msg_s_00651487
//   TerminatedCString s_Time_s_00651490
//   TerminatedCString s_USERNAME_00651499
//   TerminatedCString s_USERNAME_s_006514a2
//   TerminatedCString s_COMPUTERNAME_006514b0
//   TerminatedCString s_COMPUTERNAME_s_006514bd
//   TerminatedCString s_selectedDeviceIndex_d_006514cf
//   TerminatedCString s_Device_s_006514e8
//   TerminatedCString s_No_device_selected_006514f5
//   TerminatedCString s_Bits_d_0065150a
//   TerminatedCString s_Channels_d_00651514
//   TerminatedCString s_Hz_d_00651522
//   TerminatedCString s_sound_sndmain_cpp_0065152a
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   crt_time.c_asctime_FUN_00601768
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_time_with_rounding_FUN_006001f0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
//   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_logSoundError_FUN_005adba0(char *format,...)

{
  FILE *file;
  tm *timeptr;
  char *pcVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SSoundDeviceInfo *device_info;
  va_list_t local_10;
  undefined4 local_c;
  
  local_10 = &stack0x00000008;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xfffffad8,format,&local_10);
  local_c = 0;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n");
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("\\\\q\\xfer\\fletch\\sounderr.txt",(char *)0x0,"at",
                    "..\\sound\\sndmain.cpp",0x186e);
  if (file == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"----------------------------------------------------------------\n");
  crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&format);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Msg: %s\n");
  timeptr = crt_time_c_localtime_FUN_00600288((time_t *)&stack0x0000000c);
  crt_time_c_asctime_FUN_00601768(timeptr);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Time: %s");
  pcVar1 = crt_env_c_getenv_FUN_006013f0("USERNAME");
  if (pcVar1 != (char *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"USERNAME: %s\n");
  }
  pcVar1 = crt_env_c_getenv_FUN_006013f0("COMPUTERNAME");
  if (pcVar1 != (char *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"COMPUTERNAME: %s\n");
  }
  sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"selectedDeviceIndex: %d\n");
  iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
  if (iVar2 < 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"No device selected.\n");
  }
  else {
    device_info = (SSoundDeviceInfo *)0x5adce7;
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,device_info);
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"Device: %s.\n");
  }
  sound_sndmain_cpp_getAudioBitsPerSample_FUN_005ab250();
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Bits: %d\n");
  sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Channels: %d\n");
  sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Hz: %d\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\sound\\sndmain.cpp",0x188b);
  return;
}


// Assembly code:
// 005adba0: PUSH EBX
//   Label: sound_sndmain.cpp_logSoundError_FUN_005adba0
// 005adba1: PUSH ESI
// 005adba2: SUB ESP,0x520
// 005adba8: LEA EAX,[ESP + 0x530]
//   XREF to: Stack[0x8] (DATA)
// 005adbaf: MOV dword ptr [ESP + 0x518],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005adbb6: LEA EAX,[ESP + 0x518]
//   XREF to: Stack[-0x10] (DATA)
// 005adbbd: PUSH EAX
// 005adbbe: MOV EDX,dword ptr [ESP + 0x530]
//   XREF to: Stack[0x4] (READ)
// 005adbc5: PUSH EDX
// 005adbc6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x528] (DATA)
// 005adbca: PUSH EAX
// 005adbcb: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 005adbd0: ADD ESP,0xc
// 005adbd3: MOV EAX,ESP
// 005adbd5: PUSH EAX
// 005adbd6: PUSH 0x65140c
//   XREF to: 0065140c (DATA)
// 005adbdb: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005adbe1: XOR ECX,ECX
// 005adbe3: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005adbe4: MOV dword ptr [ESP + 0x524],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005adbeb: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005adbf0: ADD ESP,0xc
// 005adbf3: PUSH 0x186e
// 005adbf8: PUSH 0x651410
//   XREF to: 00651410 (DATA)
// 005adbfd: PUSH 0x651425
//   XREF to: 00651425 (DATA)
// 005adc02: PUSH 0x0
// 005adc04: PUSH 0x651428
//   XREF to: 00651428 (DATA)
// 005adc09: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005adc0e: MOV ESI,EAX
// 005adc10: ADD ESP,0x14
// 005adc13: MOV EBX,EAX
// 005adc15: TEST EAX,EAX
// 005adc17: JNZ 0x005adc22
//   XREF to: 005adc22 (CONDITIONAL_JUMP)
// 005adc19: ADD ESP,0x520
// 005adc1f: POP ESI
// 005adc20: POP EBX
// 005adc21: RET
// 005adc22: PUSH 0x651445
//   Label: LAB_005adc22
//   XREF to: 00651445 (DATA)
// 005adc27: PUSH EAX
// 005adc28: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005adc2d: ADD ESP,0x8
// 005adc30: LEA EAX,[ESP + 0x51c]
//   XREF to: Stack[-0xc] (DATA)
// 005adc37: PUSH EAX
// 005adc38: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 005adc3d: ADD ESP,0x4
// 005adc40: MOV EAX,ESP
// 005adc42: PUSH EAX
// 005adc43: PUSH 0x651487
//   XREF to: 00651487 (DATA)
// 005adc48: PUSH ESI
// 005adc49: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005adc4e: ADD ESP,0xc
// 005adc51: LEA EAX,[ESP + 0x51c]
//   XREF to: Stack[-0xc] (DATA)
// 005adc58: PUSH EAX
// 005adc59: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 005adc5e: ADD ESP,0x4
// 005adc61: PUSH EAX
// 005adc62: CALL crt_time.c_asctime_FUN_00601768
//   XREF to: 00601768 (UNCONDITIONAL_CALL)
// 005adc67: ADD ESP,0x4
// 005adc6a: PUSH EAX
// 005adc6b: PUSH 0x651490
//   XREF to: 00651490 (DATA)
// 005adc70: PUSH ESI
// 005adc71: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005adc76: ADD ESP,0xc
// 005adc79: PUSH 0x651499
//   XREF to: 00651499 (DATA)
// 005adc7e: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 005adc83: ADD ESP,0x4
// 005adc86: TEST EAX,EAX
// 005adc88: JZ 0x005adc99
//   XREF to: 005adc99 (CONDITIONAL_JUMP)
// 005adc8a: PUSH EAX
// 005adc8b: PUSH 0x6514a2
//   XREF to: 006514a2 (DATA)
// 005adc90: PUSH ESI
// 005adc91: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005adc96: ADD ESP,0xc
// 005adc99: PUSH 0x6514b0
//   Label: LAB_005adc99
//   XREF to: 006514b0 (DATA)
// 005adc9e: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 005adca3: ADD ESP,0x4
// 005adca6: TEST EAX,EAX
// 005adca8: JZ 0x005adcb9
//   XREF to: 005adcb9 (CONDITIONAL_JUMP)
// 005adcaa: PUSH EAX
// 005adcab: PUSH 0x6514bd
//   XREF to: 006514bd (DATA)
// 005adcb0: PUSH EBX
// 005adcb1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005adcb6: ADD ESP,0xc
// 005adcb9: CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
//   Label: LAB_005adcb9
//   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)
// 005adcbe: PUSH EAX
// 005adcbf: PUSH 0x6514cf
//   XREF to: 006514cf (DATA)
// 005adcc4: PUSH EBX
// 005adcc5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005adcca: ADD ESP,0xc
// 005adccd: CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
//   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)
// 005adcd2: TEST EAX,EAX
// 005adcd4: JL 0x005add5e
//   XREF to: 005add5e (CONDITIONAL_JUMP)
// 005adcda: LEA EAX,[ESP + 0x400]
//   XREF to: Stack[-0x128] (DATA)
// 005adce1: PUSH EAX
// 005adce2: CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
//   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)
// 005adce7: PUSH EAX
// 005adce8: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 005adced: ADD ESP,0x8
// 005adcf0: LEA EAX,[ESP + 0x400]
//   XREF to: Stack[-0x128] (DATA)
// 005adcf7: PUSH EAX
// 005adcf8: PUSH 0x6514e8
//   XREF to: 006514e8 (DATA)
// 005adcfd: PUSH EBX
// 005adcfe: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005add03: ADD ESP,0xc
// 005add06: CALL sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   Label: LAB_005add06
//   XREF to: 005ab250 (UNCONDITIONAL_CALL)
// 005add0b: PUSH EAX
// 005add0c: PUSH 0x65150a
//   XREF to: 0065150a (DATA)
// 005add11: PUSH EBX
// 005add12: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005add17: ADD ESP,0xc
// 005add1a: CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   XREF to: 005ab270 (UNCONDITIONAL_CALL)
// 005add1f: PUSH EAX
// 005add20: PUSH 0x651514
//   XREF to: 00651514 (DATA)
// 005add25: PUSH EBX
// 005add26: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005add2b: ADD ESP,0xc
// 005add2e: CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   XREF to: 005ab260 (UNCONDITIONAL_CALL)
// 005add33: PUSH EAX
// 005add34: PUSH 0x651522
//   XREF to: 00651522 (DATA)
// 005add39: PUSH EBX
// 005add3a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005add3f: ADD ESP,0xc
// 005add42: PUSH 0x188b
// 005add47: PUSH 0x65152a
//   XREF to: 0065152a (DATA)
// 005add4c: PUSH EBX
// 005add4d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005add52: ADD ESP,0xc
// 005add55: ADD ESP,0x520
// 005add5b: POP ESI
// 005add5c: POP EBX
// 005add5d: RET
// 005add5e: PUSH 0x6514f5
//   Label: LAB_005add5e
//   XREF to: 006514f5 (DATA)
// 005add63: PUSH EBX
// 005add64: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005add69: ADD ESP,0x8
// 005add6c: JMP 0x005add06
//   XREF to: 005add06 (UNCONDITIONAL_JUMP)
