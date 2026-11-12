// Name: sound_sndmain.cpp_FUN_00551890
// Address: 00551890
// Address Range: [[00551890, 005518dd]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00551890(char *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00551890(char *param_1)

{
  int iVar1;
  CSfxSample *this_ptr;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  this_ptr = g_SfxSamples;
  iVar2 = 0;
  do {
    iVar1 = _stricmp((char *)this_ptr,param_1);
    if (iVar1 == 0) {
      if (this_ptr != (CSfxSample *)0x0) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(this_ptr);
        sound_sndmain_cpp_FUN_00551440();
        return;
      }
      break;
    }
    iVar2 = iVar2 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar2 < 0x40);
  sound_sndmain_cpp_FUN_00551440();
  return;
}
