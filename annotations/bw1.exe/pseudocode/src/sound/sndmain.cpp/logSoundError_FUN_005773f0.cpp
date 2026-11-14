// Name: sound_sndmain.cpp_logSoundError_FUN_005773f0
// Address: 005773f0
// Address Range: [[005773f0, 00577455]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_logSoundError_FUN_005773f0(char *format,...)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_logSoundError_FUN_005773f0(char *format,...)

{
  char local_404 [1024];
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(local_404,format,(va_list_t)&local_4);
  local_4 = (byte *)0x0;
  wincore_winrun_cpp_FUN_005b3a90("SOUND: ");
  wincore_winrun_cpp_FUN_005b3a90(local_404);
  wincore_winrun_cpp_FUN_005b3a90(&DAT_005f46c1);
  return;
}
