// Name: sound_sndmain.cpp_writeIni_FUN_005ac220
// Address: 005ac220
// Address Range: [[005ac220, 005ac3fa]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_writeIni_FUN_005ac220(CIniFile * ini_file)
// Cross-references:
//   core_inivar.cpp_writeIniData_FUN_004fc510 (004fc510) at 004fc6bf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DeviceName_00650fad
//   TerminatedCString s_Bits_00650fb8
//   TerminatedCString s_Channels_00650fbd
//   TerminatedCString s_Hz_00650fc6
//   TerminatedCString s_HwMixingEnabled_00650fc9
//   TerminatedCString s_MaxSwLatency_00650fd9
//   TerminatedCString s_Mute_00650fe6
//   TerminatedCString s_SfxChannel_dEnabled_00650feb
//   TerminatedCString s_SfxChannel_dVol_00650fff
//   int g_MaxSoundChannels = 0x20
//   int g_CurrentSoundDevice = -0x1
//   char[256] g_DefaultDeviceName
//   undefined4 s__00681c64
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
//   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
//   sound_sndmain.cpp_getAudioFormat_FUN_005ab210
//   sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_writeIni_FUN_005ac220(CIniFile *ini_file)

{
  char cVar1;
  float value;
  int iVar2;
  int unaff_EBX;
  int channel_index;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar3;
  int unaff_EDI;
  undefined4 *puVar4;
  char *pcVar5;
  float fStack00000014;
  undefined4 local_184 [2];
  char acStack_17c [300];
  char acStack_50 [8];
  char acStack_48 [4];
  char acStack_44 [8];
  char acStack_3c [40];
  int local_14;
  
  pcVar5 = g_DefaultDeviceName;
  puVar4 = local_184;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    puVar4 = puVar4 + 1;
  }
  if (-1 < g_CurrentSoundDevice) {
    iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
    if (g_CurrentSoundDevice < iVar2) {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370
                (g_CurrentSoundDevice,(SSoundDeviceInfo *)&stack0xfffffd68);
      pcVar3 = &stack0xfffffd6c;
      pcVar5 = acStack_17c;
      do {
        cVar1 = *pcVar3;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
  }
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(ini_file,"DeviceName",acStack_17c);
  sound_sndmain_cpp_getAudioFormat_FUN_005ab210
            ((int *)&stack0xfffffff4,&local_14,(int *)&stack0xfffffff0);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Bits",unaff_ESI);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Channels",unaff_EDI);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Hz",unaff_EBX);
  iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"HwMixingEnabled",iVar2);
  fStack00000014 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
  engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30
            (ini_file,"MaxSwLatency",fStack00000014);
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  channel_index = 0;
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Mute",iVar2);
  if (0 < g_MaxSoundChannels) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_50,"SfxChannel%dEnabled");
      iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(channel_index);
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,acStack_48,iVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_44,"SfxChannel%dVol");
      value = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(ini_file,acStack_3c,value);
    } while (channel_index < g_MaxSoundChannels);
  }
  return;
}


// Assembly code:
// 005ac220: PUSH EBX
//   Label: sound_sndmain.cpp_writeIni_FUN_005ac220
// 005ac221: PUSH ESI
// 005ac222: PUSH EDI
// 005ac223: PUSH EBP
// 005ac224: SUB ESP,0x28c
// 005ac22a: MOV EBP,dword ptr [ESP + 0x2a0]
//   XREF to: Stack[0x4] (READ)
// 005ac231: MOV ECX,0x40
// 005ac236: LEA EDI,[ESP + 0x118]
//   XREF to: Stack[-0x184] (DATA)
// 005ac23d: MOV ESI,0x681c60
//   XREF to: 00681c60 (DATA)
// 005ac242: MOV EDX,dword ptr [0x00681b24]
//   XREF to: 00681b24 (READ)
// 005ac248: MOVSD.REP ES:EDI,ESI
//   XREF to: 00681c60 (READ)
//   XREF to: 00681c64 (READ)
// 005ac24a: TEST EDX,EDX
// 005ac24c: JL 0x005ac28c
//   XREF to: 005ac28c (CONDITIONAL_JUMP)
// 005ac24e: CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)
// 005ac253: MOV ECX,dword ptr [0x00681b24]
//   XREF to: 00681b24 (READ)
// 005ac259: CMP EAX,ECX
// 005ac25b: JLE 0x005ac28c
//   XREF to: 005ac28c (CONDITIONAL_JUMP)
// 005ac25d: MOV EAX,ESP
// 005ac25f: PUSH EAX
// 005ac260: PUSH ECX
// 005ac261: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 005ac266: ADD ESP,0x8
// 005ac269: MOV ESI,ESP
// 005ac26b: LEA EDI,[ESP + 0x118]
//   XREF to: Stack[-0x184] (DATA)
// 005ac272: PUSH EDI
// 005ac273: MOV AL,byte ptr [ESI]
//   Label: LAB_005ac273
//   XREF to: Stack[-0x29c] (DATA)
// 005ac275: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x184] (DATA)
// 005ac277: CMP AL,0x0
// 005ac279: JZ 0x005ac28b
//   XREF to: 005ac28b (CONDITIONAL_JUMP)
// 005ac27b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x29b] (READ)
// 005ac27e: ADD ESI,0x2
// 005ac281: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x183] (WRITE)
// 005ac284: ADD EDI,0x2
// 005ac287: CMP AL,0x0
// 005ac289: JNZ 0x005ac273
//   XREF to: 005ac273 (CONDITIONAL_JUMP)
// 005ac28b: POP EDI
//   Label: LAB_005ac28b
// 005ac28c: LEA EAX,[ESP + 0x118]
//   Label: LAB_005ac28c
//   XREF to: Stack[-0x184] (DATA)
// 005ac293: PUSH EAX
// 005ac294: PUSH 0x650fad
//   XREF to: 00650fad (DATA)
// 005ac299: PUSH EBP
// 005ac29a: CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
//   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)
// 005ac29f: ADD ESP,0xc
// 005ac2a2: LEA EAX,[ESP + 0x280]
//   XREF to: Stack[-0x1c] (DATA)
// 005ac2a9: PUSH EAX
// 005ac2aa: LEA EAX,[ESP + 0x280]
//   XREF to: Stack[-0x20] (DATA)
// 005ac2b1: PUSH EAX
// 005ac2b2: LEA EAX,[ESP + 0x28c]
//   XREF to: Stack[-0x18] (DATA)
// 005ac2b9: PUSH EAX
// 005ac2ba: CALL sound_sndmain.cpp_getAudioFormat_FUN_005ab210
//   XREF to: 005ab210 (UNCONDITIONAL_CALL)
// 005ac2bf: ADD ESP,0xc
// 005ac2c2: MOV ESI,dword ptr [ESP + 0x284]
//   XREF to: Stack[-0x18] (READ)
// 005ac2c9: PUSH ESI
// 005ac2ca: PUSH 0x650fb8
//   XREF to: 00650fb8 (DATA)
// 005ac2cf: PUSH EBP
// 005ac2d0: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 005ac2d5: ADD ESP,0xc
// 005ac2d8: MOV EDI,dword ptr [ESP + 0x27c]
//   XREF to: Stack[-0x20] (READ)
// 005ac2df: PUSH EDI
// 005ac2e0: PUSH 0x650fbd
//   XREF to: 00650fbd (DATA)
// 005ac2e5: PUSH EBP
// 005ac2e6: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 005ac2eb: ADD ESP,0xc
// 005ac2ee: MOV EAX,dword ptr [ESP + 0x280]
//   XREF to: Stack[-0x1c] (READ)
// 005ac2f5: PUSH EAX
// 005ac2f6: PUSH 0x650fc6
//   XREF to: 00650fc6 (DATA)
// 005ac2fb: PUSH EBP
// 005ac2fc: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 005ac301: ADD ESP,0xc
// 005ac304: CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590
//   XREF to: 005ab590 (UNCONDITIONAL_CALL)
// 005ac309: PUSH EAX
// 005ac30a: PUSH 0x650fc9
//   XREF to: 00650fc9 (DATA)
// 005ac30f: PUSH EBP
// 005ac310: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 005ac315: ADD ESP,0xc
// 005ac318: CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   XREF to: 005abea0 (UNCONDITIONAL_CALL)
// 005ac31d: MOV dword ptr [ESP + 0x288],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ac324: FLD float ptr [ESP + 0x288]
//   XREF to: Stack[-0x14] (READ)
// 005ac32b: SUB ESP,0x4
// 005ac32e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x2a0] (DATA)
// 005ac331: PUSH 0x650fd9
//   XREF to: 00650fd9 (DATA)
// 005ac336: PUSH EBP
// 005ac337: CALL engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
//   XREF to: 004fbd30 (UNCONDITIONAL_CALL)
// 005ac33c: ADD ESP,0xc
// 005ac33f: CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 005ac344: PUSH EAX
// 005ac345: PUSH 0x650fe6
//   XREF to: 00650fe6 (DATA)
// 005ac34a: PUSH EBP
// 005ac34b: XOR EBX,EBX
// 005ac34d: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 005ac352: MOV EDX,dword ptr [0x00681b10]
//   XREF to: 00681b10 (READ)
// 005ac358: ADD ESP,0xc
// 005ac35b: TEST EDX,EDX
// 005ac35d: JLE 0x005ac3f0
//   XREF to: 005ac3f0 (CONDITIONAL_JUMP)
// 005ac363: PUSH EBX
//   Label: LAB_005ac363
// 005ac364: PUSH 0x650feb
//   XREF to: 00650feb (DATA)
// 005ac369: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x84] (DATA)
// 005ac370: PUSH EAX
// 005ac371: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ac376: ADD ESP,0xc
// 005ac379: PUSH EBX
// 005ac37a: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 005ac37f: ADD ESP,0x4
// 005ac382: PUSH EAX
// 005ac383: LEA EAX,[ESP + 0x21c]
//   XREF to: Stack[-0x84] (DATA)
// 005ac38a: PUSH EAX
// 005ac38b: PUSH EBP
// 005ac38c: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 005ac391: ADD ESP,0xc
// 005ac394: PUSH EBX
// 005ac395: PUSH 0x650fff
//   XREF to: 00650fff (DATA)
// 005ac39a: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x84] (DATA)
// 005ac3a1: PUSH EAX
// 005ac3a2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ac3a7: ADD ESP,0xc
// 005ac3aa: PUSH EBX
// 005ac3ab: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005ac3b0: MOV dword ptr [ESP + 0x28c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ac3b7: FLD float ptr [ESP + 0x28c]
//   XREF to: Stack[-0x14] (READ)
// 005ac3be: ADD ESP,0x4
// 005ac3c1: SUB ESP,0x4
// 005ac3c4: LEA EAX,[ESP + 0x21c]
//   XREF to: Stack[-0x84] (DATA)
// 005ac3cb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x2a0] (DATA)
// 005ac3ce: PUSH EAX
// 005ac3cf: PUSH EBP
// 005ac3d0: INC EBX
// 005ac3d1: CALL engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
//   XREF to: 004fbd30 (UNCONDITIONAL_CALL)
// 005ac3d6: MOV ECX,dword ptr [0x00681b10]
//   XREF to: 00681b10 (READ)
// 005ac3dc: ADD ESP,0xc
// 005ac3df: CMP EBX,ECX
// 005ac3e1: JL 0x005ac363
//   XREF to: 005ac363 (CONDITIONAL_JUMP)
// 005ac3e3: LEA EAX,[EAX]
// 005ac3e9: LEA EDX,[EDX]
// 005ac3ef: NOP
// 005ac3f0: ADD ESP,0x28c
//   Label: LAB_005ac3f0
// 005ac3f6: POP EBP
// 005ac3f7: POP EDI
// 005ac3f8: POP ESI
// 005ac3f9: POP EBX
// 005ac3fa: RET
