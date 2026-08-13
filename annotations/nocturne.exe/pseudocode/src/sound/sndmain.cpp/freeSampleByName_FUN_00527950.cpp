// Name: sound_sndmain.cpp_freeSampleByName_FUN_00527950
// Address: 00527950
// Address Range: [[00527950, 005279ad]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_00527950(char *sample_name,int kill_active_slots)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_00527950(char *sample_name,int kill_active_slots)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  if (kill_active_slots != 0) {
    sound_sndmain_cpp_killSfxByName_FUN_005278e0(sample_name);
  }
  iVar2 = 0;
  do {
    if (*(int *)((int)(&g_CSfxSample_ARRAY_02dc1edc[0].sample_info + 1) + iVar2 + 0xc) == 0) {
      this_ptr = (CSfxSample *)(g_CSfxSample_ARRAY_02dc1edc[0].sample_info.name + iVar2);
      iVar1 = _stricmp((char *)this_ptr,sample_name);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(this_ptr);
      }
    }
    iVar2 = iVar2 + 0x168;
  } while (iVar2 != 0x5a00);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
