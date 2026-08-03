// Name: sound_sndmain.cpp_FUN_00527950
// Address: 00527950
// Address Range: [[00527950, 005279ad]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00527950(char *param_1,int param_2)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00527950(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  if (param_2 != 0) {
    sound_sndmain_cpp_killSfxByName_FUN_005278e0(param_1);
  }
  iVar2 = 0;
  do {
    if (*(int *)((int)(&g_CSfxSample_ARRAY_02dc1edc[0].sample_info + 1) + iVar2 + 0xc) == 0) {
      this_ptr = (CSfxSample *)(g_CSfxSample_ARRAY_02dc1edc[0].sample_info.name + iVar2);
      iVar1 = _stricmp((char *)this_ptr,param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(this_ptr);
      }
    }
    iVar2 = iVar2 + 0x168;
  } while (iVar2 != 0x5a00);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
