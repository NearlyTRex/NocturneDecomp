// Name: sound_sndmain.cpp_freeSampleByName_FUN_005574e0
// Address: 005574e0
// Address Range: [[005574e0, 0055753d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_005574e0(char *sample_name,int kill_active_slots)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_005574e0(char *sample_name,int kill_active_slots)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  if (kill_active_slots != 0) {
    sound_sndmain_cpp_killSfxByName_FUN_00557470(sample_name);
  }
  iVar2 = 0;
  do {
    if (*(int *)((int)g_SfxSamples[0].loop_destinations + iVar2 + 0x18) == 0) {
      this_ptr = (CSfxSample *)(g_SfxSamples[0].sample_info.name + iVar2);
      iVar1 = _stricmp((char *)this_ptr,sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr);
      }
    }
    iVar2 = iVar2 + 0x1b0;
  } while (iVar2 != 0x6c00);
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
