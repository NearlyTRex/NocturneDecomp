// Name: sound_sndmain.cpp_logSoundError_FUN_005adba0
// Address: 005adba0
// Address Range: [[005adba0, 005add6d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_logSoundError_FUN_005adba0(char *format,...)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_logSoundError_FUN_005adba0(char *format,...)

{
  _FILE *file;
  _tm *timeptr;
  char *pcVar1;
  int iVar2;
  SSoundDeviceInfo *device_info;
  char local_528 [1024];
  SSoundDeviceInfo local_128;
  byte *local_10;
  time_t local_c;
  
  local_10 = &stack0x00000008;
  _vsprintf(local_528,format,(va_list_t)&local_10);
  local_10 = (byte *)0x0;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n",local_528);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("\\\\q\\xfer\\fletch\\sounderr.txt",(char *)0x0,"at",
                    "..\\sound\\sndmain.cpp",0x186e);
  if (file == (_FILE *)0x0) {
    return;
  }
  _fprintf(file,"----------------------------------------------------------------\n");
  _time(&local_c);
  _fprintf(file,"Msg: %s\n",local_528);
  timeptr = _localtime(&local_c);
  pcVar1 = _asctime(timeptr);
  _fprintf(file,"Time: %s",pcVar1);
  pcVar1 = getenv("USERNAME");
  if (pcVar1 != (char *)0x0) {
    _fprintf(file,"USERNAME: %s\n",pcVar1);
  }
  pcVar1 = getenv("COMPUTERNAME");
  if (pcVar1 != (char *)0x0) {
    _fprintf(file,"COMPUTERNAME: %s\n",pcVar1);
  }
  iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
  _fprintf(file,"selectedDeviceIndex: %d\n",iVar2);
  iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
  if (iVar2 < 0) {
    _fprintf(file,"No device selected.\n");
  }
  else {
    device_info = &local_128;
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,device_info);
    _fprintf(file,"Device: %s.\n",&local_128);
  }
  iVar2 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
  _fprintf(file,"Bits: %d\n",iVar2);
  iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
  _fprintf(file,"Channels: %d\n",iVar2);
  iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
  _fprintf(file,"Hz: %d\n",iVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\sound\\sndmain.cpp",0x188b);
  return;
}
