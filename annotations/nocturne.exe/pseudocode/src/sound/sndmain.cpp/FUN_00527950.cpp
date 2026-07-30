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
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  if (param_2 != 0) {
    sound_sndmain_cpp_killSfxByName_FUN_005278e0(param_1);
  }
  iVar2 = 0;
  do {
    if (*(int *)(iVar2 + 0x2dc2008) == 0) {
      iVar1 = _stricmp((char *)(&DAT_02dc1edc + iVar2),param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60((CSfxSample *)(&DAT_02dc1edc + iVar2));
      }
    }
    iVar2 = iVar2 + 0x168;
  } while (iVar2 != 0x5a00);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
