// Name: sound_sndmain.cpp_readIni_FUN_005abf20
// Address: 005abf20
// Address Range: [[005abf20, 005ac21a]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_readIni_FUN_005abf20(CIniFile * ini_file)
// Cross-references:
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fbfd9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DeviceName_00650f37
//   TerminatedCString s_RecordingDeviceName_00650f42
//   TerminatedCString s_HwMixingEnabled_00650f56
//   TerminatedCString s_MaxSwLatency_00650f66
//   TerminatedCString s_Bits_00650f73
//   TerminatedCString s_Channels_00650f78
//   TerminatedCString s_Hz_00650f81
//   TerminatedCString s_Mute_00650f84
//   TerminatedCString s_SfxChannel_dEnabled_00650f89
//   TerminatedCString s_SfxChannel_dVol_00650f9d
//   int g_MaxSoundChannels = 0x20
//   char[256] g_DefaultRecordingDeviceName
//   undefined4 s__00681b64
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
//   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   engine_ini.cpp_CIniFile_getString_FUN_004fbb20
//   sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   sound_sndmain.cpp_FUN_005ab660
//   sound_sndmain.cpp_getAudioFormat_FUN_005ab210
//   sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
//   sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
//   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
//   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
//   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
//   sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_readIni_FUN_005abf20(CIniFile *ini_file)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  float fStack00000010;
  float fStack00000014;
  int in_stack_00000018;
  float fStack0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int iStack00000040;
  int in_stack_00000044;
  int in_stack_00000054;
  float in_stack_00000068;
  float in_stack_0000006c;
  char *in_stack_fffffc4c;
  char *in_stack_fffffc64;
  SRecordingDeviceInfo SStack_278;
  char acStack_16c [320];
  char local_2c [8];
  char local_24 [8];
  char local_1c [8];
  char local_14 [4];
  
  pcVar3 = g_DefaultRecordingDeviceName;
  pcVar4 = SStack_278.device_name + 0xe4;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (ini_file,"DeviceName",SStack_278.device_name + 0xe4,0x100,in_stack_fffffc4c);
  iVar2 = 0;
  sound_sndmain_cpp_FUN_005ab660();
  while( true ) {
    iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
    if (iVar1 <= iVar2) break;
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,(SSoundDeviceInfo *)&stack0xfffffc58);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xfffffc5c,SStack_278.device_name + 0xf4);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar2);
      break;
    }
    iVar2 = iVar2 + 1;
  }
  SStack_278.device_name[0xfc] = '\0';
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (ini_file,"RecordingDeviceName",SStack_278.device_name + 0xfc,0x100,
             in_stack_fffffc64);
  iVar2 = 0;
  sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930();
  do {
    iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720();
    if (iVar1 <= iVar2) {
LAB_005ac012:
      fStack00000014 = (float)sound_sndmain_cpp_getHardwareMixingEnabled_FUN_005ab590();
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
                (ini_file,"HwMixingEnabled",(int *)&stack0x00000014);
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550(in_stack_00000018);
      fStack00000010 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
      fStack0000002c = fStack00000010;
      engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0
                (ini_file,"MaxSwLatency",&stack0x00000010);
      sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005abeb0(fStack00000014);
      sound_sndmain_cpp_getAudioFormat_FUN_005ab210
                ((int *)&stack0x00000024,(int *)&stack0x0000001c,(int *)&stack0x00000020);
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
                (ini_file,"Bits",(int *)&stack0x00000028);
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
                (ini_file,"Channels",(int *)&stack0x00000024);
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
                (ini_file,"Hz",(int *)&stack0x0000002c);
      sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170
                (in_stack_00000034,(int)fStack0000002c,in_stack_00000030);
      iStack00000040 = sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,"Mute",&stack0x00000040);
      iVar2 = 0;
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(in_stack_00000044);
      if (0 < g_MaxSoundChannels) {
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(local_2c,"SfxChannel%dEnabled");
          in_stack_00000054 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(iVar2);
          engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,local_24,&stack0x00000054);
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(iVar2);
          crt_stdio_c_sprintf_FUN_005fdbd0(local_1c,"SfxChannel%dVol");
          in_stack_00000068 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(iVar2);
          in_stack_0000006c = in_stack_00000068;
          engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(ini_file,local_14,&stack0x00000068);
          sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(iVar2,in_stack_0000006c);
          iVar2 = iVar2 + 1;
        } while (iVar2 < g_MaxSoundChannels);
      }
      return;
    }
    sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780(iVar2,&SStack_278);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(SStack_278.device_name + 4,acStack_16c);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectRecordingDevice_FUN_005ab860(iVar2);
      goto LAB_005ac012;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


// Assembly code:
// 005abf20: PUSH EBX
//   Label: sound_sndmain.cpp_readIni_FUN_005abf20
// 005abf21: PUSH ESI
// 005abf22: PUSH EDI
// 005abf23: PUSH EBP
// 005abf24: SUB ESP,0x3a4
// 005abf2a: MOV EBP,dword ptr [ESP + 0x3b8]
//   XREF to: Stack[0x4] (READ)
// 005abf31: PUSH 0x100
// 005abf36: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0x194] (DATA)
// 005abf3d: PUSH EAX
// 005abf3e: MOV ECX,0x40
// 005abf43: PUSH 0x650f37
//   XREF to: 00650f37 (DATA)
// 005abf48: LEA EDI,[ESP + 0x22c]
//   XREF to: Stack[-0x194] (DATA)
// 005abf4f: MOV ESI,0x681b60
//   XREF to: 00681b60 (DATA)
// 005abf54: PUSH EBP
// 005abf55: MOVSD.REP ES:EDI,ESI
//   XREF to: 00681b60 (READ)
//   XREF to: 00681b64 (READ)
// 005abf57: CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20
//   XREF to: 004fbb20 (UNCONDITIONAL_CALL)
// 005abf5c: ADD ESP,0x10
// 005abf5f: XOR EBX,EBX
// 005abf61: CALL sound_sndmain.cpp_FUN_005ab660
//   XREF to: 005ab660 (UNCONDITIONAL_CALL)
// 005abf66: CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   Label: LAB_005abf66
//   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)
// 005abf6b: CMP EBX,EAX
// 005abf6d: JL 0x005abfd6
//   XREF to: 005abfd6 (CONDITIONAL_JUMP)
// 005abf6f: XOR AH,AH
//   Label: LAB_005abf6f
// 005abf71: PUSH 0x100
// 005abf76: MOV byte ptr [ESP + 0x224],AH
//   XREF to: Stack[-0x194] (WRITE)
// 005abf7d: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0x194] (DATA)
// 005abf84: PUSH EAX
// 005abf85: PUSH 0x650f42
//   XREF to: 00650f42 (DATA)
// 005abf8a: PUSH EBP
// 005abf8b: CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20
//   XREF to: 004fbb20 (UNCONDITIONAL_CALL)
// 005abf90: ADD ESP,0x10
// 005abf93: XOR EBX,EBX
// 005abf95: CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
//   XREF to: 005ab930 (UNCONDITIONAL_CALL)
// 005abf9a: CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
//   Label: LAB_005abf9a
//   XREF to: 005ab720 (UNCONDITIONAL_CALL)
// 005abf9f: CMP EBX,EAX
// 005abfa1: JGE 0x005ac012
//   XREF to: 005ac012 (CONDITIONAL_JUMP)
// 005abfa3: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x29c] (DATA)
// 005abfaa: PUSH EAX
// 005abfab: PUSH EBX
// 005abfac: CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
//   XREF to: 005ab780 (UNCONDITIONAL_CALL)
// 005abfb1: ADD ESP,0x8
// 005abfb4: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x194] (DATA)
// 005abfbb: PUSH EAX
// 005abfbc: LEA EAX,[ESP + 0x11c]
//   XREF to: Stack[-0x29c] (DATA)
// 005abfc3: PUSH EAX
// 005abfc4: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005abfc9: ADD ESP,0x8
// 005abfcc: TEST EAX,EAX
// 005abfce: JZ 0x005ac009
//   XREF to: 005ac009 (CONDITIONAL_JUMP)
// 005abfd0: INC EBX
// 005abfd1: JMP 0x005abf9a
//   XREF to: 005abf9a (UNCONDITIONAL_JUMP)
// 005abfd3: INC EBX
//   Label: LAB_005abfd3
// 005abfd4: JMP 0x005abf66
//   XREF to: 005abf66 (UNCONDITIONAL_JUMP)
// 005abfd6: MOV EAX,ESP
//   Label: LAB_005abfd6
// 005abfd8: PUSH EAX
// 005abfd9: PUSH EBX
// 005abfda: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 005abfdf: ADD ESP,0x8
// 005abfe2: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x194] (DATA)
// 005abfe9: PUSH EAX
// 005abfea: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 005abfee: PUSH EAX
// 005abfef: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005abff4: ADD ESP,0x8
// 005abff7: TEST EAX,EAX
// 005abff9: JNZ 0x005abfd3
//   XREF to: 005abfd3 (CONDITIONAL_JUMP)
// 005abffb: PUSH EBX
// 005abffc: CALL sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
//   XREF to: 005ab4c0 (UNCONDITIONAL_CALL)
// 005ac001: ADD ESP,0x4
// 005ac004: JMP 0x005abf6f
//   XREF to: 005abf6f (UNCONDITIONAL_JUMP)
// 005ac009: PUSH EBX
//   Label: LAB_005ac009
// 005ac00a: CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
//   XREF to: 005ab860 (UNCONDITIONAL_CALL)
// 005ac00f: ADD ESP,0x4
// 005ac012: CALL sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
//   Label: LAB_005ac012
//   XREF to: 005ab590 (UNCONDITIONAL_CALL)
// 005ac017: MOV dword ptr [ESP + 0x394],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005ac01e: LEA EAX,[ESP + 0x394]
//   XREF to: Stack[-0x20] (DATA)
// 005ac025: PUSH EAX
// 005ac026: PUSH 0x650f56
//   XREF to: 00650f56 (DATA)
// 005ac02b: PUSH EBP
// 005ac02c: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005ac031: ADD ESP,0xc
// 005ac034: MOV EDX,dword ptr [ESP + 0x394]
//   XREF to: Stack[-0x20] (READ)
// 005ac03b: PUSH EDX
// 005ac03c: CALL sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
//   XREF to: 005ab550 (UNCONDITIONAL_CALL)
// 005ac041: ADD ESP,0x4
// 005ac044: CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   XREF to: 005abea0 (UNCONDITIONAL_CALL)
// 005ac049: MOV dword ptr [ESP + 0x3a0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ac050: LEA EAX,[ESP + 0x384]
//   XREF to: Stack[-0x30] (DATA)
// 005ac057: PUSH EAX
// 005ac058: PUSH 0x650f66
//   XREF to: 00650f66 (DATA)
// 005ac05d: FLD float ptr [ESP + 0x3a8]
//   XREF to: Stack[-0x14] (READ)
// 005ac064: PUSH EBP
// 005ac065: FSTP float ptr [ESP + 0x390]
//   XREF to: Stack[-0x30] (WRITE)
// 005ac06c: CALL engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
//   XREF to: 004fbcd0 (UNCONDITIONAL_CALL)
// 005ac071: ADD ESP,0xc
// 005ac074: PUSH dword ptr [ESP + 0x384]
//   XREF to: Stack[-0x30] (READ)
// 005ac07b: CALL sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0
//   XREF to: 005abeb0 (UNCONDITIONAL_CALL)
// 005ac080: ADD ESP,0x4
// 005ac083: LEA EAX,[ESP + 0x38c]
//   XREF to: Stack[-0x28] (DATA)
// 005ac08a: PUSH EAX
// 005ac08b: LEA EAX,[ESP + 0x38c]
//   XREF to: Stack[-0x2c] (DATA)
// 005ac092: PUSH EAX
// 005ac093: LEA EAX,[ESP + 0x398]
//   XREF to: Stack[-0x24] (DATA)
// 005ac09a: PUSH EAX
// 005ac09b: CALL sound_sndmain.cpp_getAudioFormat_FUN_005ab210
//   XREF to: 005ab210 (UNCONDITIONAL_CALL)
// 005ac0a0: ADD ESP,0xc
// 005ac0a3: LEA EAX,[ESP + 0x390]
//   XREF to: Stack[-0x24] (DATA)
// 005ac0aa: PUSH EAX
// 005ac0ab: PUSH 0x650f73
//   XREF to: 00650f73 (DATA)
// 005ac0b0: PUSH EBP
// 005ac0b1: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005ac0b6: ADD ESP,0xc
// 005ac0b9: LEA EAX,[ESP + 0x388]
//   XREF to: Stack[-0x2c] (DATA)
// 005ac0c0: PUSH EAX
// 005ac0c1: PUSH 0x650f78
//   XREF to: 00650f78 (DATA)
// 005ac0c6: PUSH EBP
// 005ac0c7: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005ac0cc: ADD ESP,0xc
// 005ac0cf: LEA EAX,[ESP + 0x38c]
//   XREF to: Stack[-0x28] (DATA)
// 005ac0d6: PUSH EAX
// 005ac0d7: PUSH 0x650f81
//   XREF to: 00650f81 (DATA)
// 005ac0dc: PUSH EBP
// 005ac0dd: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005ac0e2: ADD ESP,0xc
// 005ac0e5: MOV ECX,dword ptr [ESP + 0x38c]
//   XREF to: Stack[-0x28] (READ)
// 005ac0ec: PUSH ECX
// 005ac0ed: MOV EBX,dword ptr [ESP + 0x38c]
//   XREF to: Stack[-0x2c] (READ)
// 005ac0f4: PUSH EBX
// 005ac0f5: MOV ESI,dword ptr [ESP + 0x398]
//   XREF to: Stack[-0x24] (READ)
// 005ac0fc: PUSH ESI
// 005ac0fd: CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   XREF to: 005ab170 (UNCONDITIONAL_CALL)
// 005ac102: ADD ESP,0xc
// 005ac105: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 005ac10a: MOV dword ptr [ESP + 0x394],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005ac111: LEA EAX,[ESP + 0x394]
//   XREF to: Stack[-0x20] (DATA)
// 005ac118: PUSH EAX
// 005ac119: PUSH 0x650f84
//   XREF to: 00650f84 (DATA)
// 005ac11e: PUSH EBP
// 005ac11f: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005ac124: ADD ESP,0xc
// 005ac127: MOV EDI,dword ptr [ESP + 0x394]
//   XREF to: Stack[-0x20] (READ)
// 005ac12e: PUSH EDI
// 005ac12f: XOR EBX,EBX
// 005ac131: CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   XREF to: 005a96c0 (UNCONDITIONAL_CALL)
// 005ac136: MOV EAX,[0x00681b10]
//   XREF to: 00681b10 (READ)
// 005ac13b: ADD ESP,0x4
// 005ac13e: TEST EAX,EAX
// 005ac140: JLE 0x005ac210
//   XREF to: 005ac210 (CONDITIONAL_JUMP)
// 005ac146: PUSH EBX
//   Label: LAB_005ac146
// 005ac147: PUSH 0x650f89
//   XREF to: 00650f89 (DATA)
// 005ac14c: LEA EAX,[ESP + 0x328]
//   XREF to: Stack[-0x94] (DATA)
// 005ac153: PUSH EAX
// 005ac154: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ac159: ADD ESP,0xc
// 005ac15c: PUSH EBX
// 005ac15d: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 005ac162: ADD ESP,0x4
// 005ac165: MOV dword ptr [ESP + 0x398],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ac16c: LEA EAX,[ESP + 0x398]
//   XREF to: Stack[-0x1c] (DATA)
// 005ac173: PUSH EAX
// 005ac174: LEA EAX,[ESP + 0x324]
//   XREF to: Stack[-0x94] (DATA)
// 005ac17b: PUSH EAX
// 005ac17c: PUSH EBP
// 005ac17d: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005ac182: ADD ESP,0xc
// 005ac185: MOV EDX,dword ptr [ESP + 0x398]
//   XREF to: Stack[-0x1c] (READ)
// 005ac18c: PUSH EDX
// 005ac18d: PUSH EBX
// 005ac18e: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005ac193: ADD ESP,0x8
// 005ac196: PUSH EBX
// 005ac197: PUSH 0x650f9d
//   XREF to: 00650f9d (DATA)
// 005ac19c: LEA EAX,[ESP + 0x328]
//   XREF to: Stack[-0x94] (DATA)
// 005ac1a3: PUSH EAX
// 005ac1a4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ac1a9: ADD ESP,0xc
// 005ac1ac: PUSH EBX
// 005ac1ad: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005ac1b2: MOV dword ptr [ESP + 0x3a4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ac1b9: FLD float ptr [ESP + 0x3a4]
//   XREF to: Stack[-0x14] (READ)
// 005ac1c0: ADD ESP,0x4
// 005ac1c3: LEA EAX,[ESP + 0x39c]
//   XREF to: Stack[-0x18] (DATA)
// 005ac1ca: PUSH EAX
// 005ac1cb: LEA EAX,[ESP + 0x324]
//   XREF to: Stack[-0x94] (DATA)
// 005ac1d2: PUSH EAX
// 005ac1d3: PUSH EBP
// 005ac1d4: FSTP float ptr [ESP + 0x3a8]
//   XREF to: Stack[-0x18] (WRITE)
// 005ac1db: CALL engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
//   XREF to: 004fbcd0 (UNCONDITIONAL_CALL)
// 005ac1e0: ADD ESP,0xc
// 005ac1e3: PUSH dword ptr [ESP + 0x39c]
//   XREF to: Stack[-0x18] (READ)
// 005ac1ea: PUSH EBX
// 005ac1eb: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 005ac1f0: MOV ECX,dword ptr [0x00681b10]
//   XREF to: 00681b10 (READ)
// 005ac1f6: INC EBX
// 005ac1f7: ADD ESP,0x8
// 005ac1fa: CMP EBX,ECX
// 005ac1fc: JL 0x005ac146
//   XREF to: 005ac146 (CONDITIONAL_JUMP)
// 005ac202: LEA EAX,[EAX]
// 005ac208: LEA EDX,[EDX]
// 005ac20e: MOV EAX,EAX
// 005ac210: ADD ESP,0x3a4
//   Label: LAB_005ac210
// 005ac216: POP EBP
// 005ac217: POP EDI
// 005ac218: POP ESI
// 005ac219: POP EBX
// 005ac21a: RET
