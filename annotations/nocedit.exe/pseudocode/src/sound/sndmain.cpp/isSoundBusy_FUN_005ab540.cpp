// Name: sound_sndmain.cpp_isSoundBusy_FUN_005ab540
// Address: 005ab540
// Address Range: [[005ab540, 005ab54e]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isSoundBusy_FUN_005ab540(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_005ab540(void)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar1 != 0) {
    uVar1 = g_SoundBusyFlag;
  }
  return uVar1;
}
