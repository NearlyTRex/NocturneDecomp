// Name: sound_sndmain.cpp_FUN_00551950
// Address: 00551950
// Address Range: [[00551950, 005519ad]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00551950(char *param_1,int param_2)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00551950(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  if (param_2 != 0) {
    sound_sndmain_cpp_FUN_005518e0(param_1);
  }
  iVar2 = 0;
  do {
    if (*(int *)(&g_SfxSamples[0].field_0x154 + iVar2) == 0) {
      iVar1 = _stricmp
                        ((char *)(&g_SfxSamples[0].field_0x0 + iVar2),param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0
                  ((CSfxSample *)(&g_SfxSamples[0].field_0x0 + iVar2));
      }
    }
    iVar2 = iVar2 + 0x1ac;
  } while (iVar2 != 0x6b00);
  sound_sndmain_cpp_FUN_00551440();
  return;
}
