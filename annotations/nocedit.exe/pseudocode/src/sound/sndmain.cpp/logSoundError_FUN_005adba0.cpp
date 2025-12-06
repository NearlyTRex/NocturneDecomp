// Name: sound_sndmain.cpp_logSoundError_FUN_005adba0
// Address: 005adba0
// Address Range: [[005adba0, 005add6d]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format, ...)

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
  uint local_c;
  
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
  sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Bits: %d\n");
  sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Channels: %d\n");
  sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Hz: %d\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\sound\\sndmain.cpp",0x188b);
  return;
}
