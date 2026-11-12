// Name: sound_sndmain.cpp_FUN_0055a560
// Address: 0055a560
// Address Range: [[0055a560, 0055a5c5]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_0055a560(char *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_0055a560(char *param_1)

{
  char local_404 [1024];
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(local_404,param_1,(va_list_t)&local_4);
  local_4 = (byte *)0x0;
  wincore_winrun_cpp_FUN_00581c70("SOUND: ");
  wincore_winrun_cpp_FUN_00581c70(local_404);
  wincore_winrun_cpp_FUN_00581c70(&DAT_005d3fbb);
  return;
}
