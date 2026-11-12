// Name: sound_sndmain.cpp_FUN_005742c0
// Address: 005742c0
// Address Range: [[005742c0, 0057430d]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005742c0(char *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005742c0(char *param_1)

{
  int iVar1;
  CSfxSample *this_ptr;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  this_ptr = g_SfxSamples;
  iVar2 = 0;
  do {
    iVar1 = _stricmp((char *)this_ptr,param_1);
    if (iVar1 == 0) {
      if (this_ptr != (CSfxSample *)0x0) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(this_ptr);
        sound_sndmain_cpp_FUN_00573e70();
        return;
      }
      break;
    }
    iVar2 = iVar2 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar2 < 0x40);
  sound_sndmain_cpp_FUN_00573e70();
  return;
}
