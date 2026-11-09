// Name: sound_sndmain.cpp_FUN_005574e0
// Address: 005574e0
// Address Range: [[005574e0, 0055753d]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005574e0(char *param_1,int param_2)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005574e0(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_FUN_00558e90();
  if (param_2 != 0) {
    sound_sndmain_cpp_FUN_00557470(param_1);
  }
  iVar2 = 0;
  do {
    if (*(int *)(&g_SfxSamples[0].field_0x154 + iVar2) == 0) {
      iVar1 = _stricmp
                        ((char *)(&g_SfxSamples[0].field_0x0 + iVar2),param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520
                  ((CSfxSample *)(&g_SfxSamples[0].field_0x0 + iVar2));
      }
    }
    iVar2 = iVar2 + 0x1b0;
  } while (iVar2 != 0x6c00);
  sound_sndmain_cpp_FUN_00556fd0();
  return;
}
