// Name: sound_sndmain.cpp_FUN_00574380
// Address: 00574380
// Address Range: [[00574380, 005743dd]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00574380(char *param_1,int param_2)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00574380(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  if (param_2 != 0) {
    sound_sndmain_cpp_FUN_00574310(param_1);
  }
  iVar2 = 0;
  do {
    if (*(int *)(&g_SfxSamples[0].field_0x154 + iVar2) == 0) {
      iVar1 = _stricmp
                        ((char *)(&g_SfxSamples[0].field_0x0 + iVar2),param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020
                  ((CSfxSample *)(&g_SfxSamples[0].field_0x0 + iVar2));
      }
    }
    iVar2 = iVar2 + 0x1b0;
  } while (iVar2 != 0x6c00);
  sound_sndmain_cpp_FUN_00573e70();
  return;
}
