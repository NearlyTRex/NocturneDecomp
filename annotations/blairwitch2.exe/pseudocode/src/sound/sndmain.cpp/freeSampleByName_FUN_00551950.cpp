// Name: sound_sndmain.cpp_freeSampleByName_FUN_00551950
// Address: 00551950
// Address Range: [[00551950, 005519ad]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_00551950(char *sample_name,int kill_active_slots)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_00551950(char *sample_name,int kill_active_slots)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  if (kill_active_slots != 0) {
    sound_sndmain_cpp_killSfxByName_FUN_005518e0(sample_name);
  }
  iVar2 = 0;
  do {
    if (*(int *)((int)g_SfxSamples[0].loop_destinations + iVar2 + 0x18) == 0) {
      this_ptr = (CSfxSample *)(g_SfxSamples[0].sample_info.name + iVar2);
      iVar1 = _stricmp((char *)this_ptr,sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
      }
    }
    iVar2 = iVar2 + 0x1ac;
  } while (iVar2 != 0x6b00);
  sound_sndmain_cpp_FUN_00551440();
  return;
}
