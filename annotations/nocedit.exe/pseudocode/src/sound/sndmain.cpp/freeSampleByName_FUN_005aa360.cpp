// Name: sound_sndmain.cpp_freeSampleByName_FUN_005aa360
// Address: 005aa360
// Address Range: [[005aa360, 005aa3bd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_005aa360(char *sample_name,int kill_active_slots)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_freeSampleByName_FUN_005aa360(char *sample_name,int kill_active_slots)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (kill_active_slots != 0) {
    sound_sndmain_cpp_killSfxByName_FUN_005aa2f0(sample_name);
  }
  iVar2 = 0;
  do {
    if (*(int *)((int)g_SfxSamples[0].loop_markers + iVar2 + 0x18) == 0) {
      this_ptr = (CSfxSample *)(g_SfxSamples[0].sample_info.name + iVar2);
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)this_ptr,sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
      }
    }
    iVar2 = iVar2 + 0x180;
  } while (iVar2 != 0x6000);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}
