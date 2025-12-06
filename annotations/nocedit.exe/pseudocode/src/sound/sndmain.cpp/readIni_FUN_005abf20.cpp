// Name: sound_sndmain.cpp_readIni_FUN_005abf20
// Address: 005abf20
// Address Range: [[005abf20, 005ac21a]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_readIni_FUN_005abf20(CIniFile * ini_file)

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
  int in_stack_00000058;
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
    *(uint *)pcVar4 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (ini_file,"DeviceName",SStack_278.device_name + 0xe4,0x100,in_stack_fffffc4c);
  iVar2 = 0;
  sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
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
      fStack00000014 = (float)sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
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
      iStack00000040 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,"Mute",&stack0x00000040);
      iVar2 = 0;
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(in_stack_00000044);
      if (0 < g_MaxSoundChannels) {
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(local_2c,"SfxChannel%dEnabled");
          in_stack_00000054 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(iVar2);
          engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,local_24,&stack0x00000054);
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(iVar2,in_stack_00000058);
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
