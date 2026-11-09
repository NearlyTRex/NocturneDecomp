// Name: sound_sndmain.cpp_FUN_005549c0
// Address: 005549c0
// Address Range: [[005549c0, 00554a25]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005549c0(undefined4 param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005549c0(uint param_1)

{
  byte local_404 [1024];
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(local_404,param_1,&local_4);
  local_4 = (byte *)0x0;
  wincore_winrun_cpp_FUN_0058ffc0("SOUND: ");
  wincore_winrun_cpp_FUN_0058ffc0(local_404);
  wincore_winrun_cpp_FUN_0058ffc0(&DAT_005e94c7);
  return;
}
