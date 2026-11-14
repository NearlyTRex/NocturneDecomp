// Name: sound_sndmain.cpp_unlockSample_FUN_00557420
// Address: 00557420
// Address Range: [[00557420, 0055746d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_unlockSample_FUN_00557420(char *sample_name)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_unlockSample_FUN_00557420(char *sample_name)

{
  int iVar1;
  CSfxSample *this_ptr;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  this_ptr = g_SfxSamples;
  iVar2 = 0;
  do {
    iVar1 = _stricmp((char *)this_ptr,sample_name);
    if (iVar1 == 0) {
      if (this_ptr != (CSfxSample *)0x0) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(this_ptr);
        sound_sndmain_cpp_unlockSound_FUN_00556fd0();
        return;
      }
      break;
    }
    iVar2 = iVar2 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar2 < 0x40);
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
