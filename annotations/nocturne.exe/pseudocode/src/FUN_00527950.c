// Name: FUN_00527950
// Address: 00527950
// Address Range: [[00527950, 005279ad]]
// Convention: unknown
// Signature: void FUN_00527950(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00527950(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  if (param_2 != 0) {
    FUN_005278e0(param_1);
  }
  iVar2 = 0;
  do {
    if (*(int *)(iVar2 + 0x2dc2008) == 0) {
      iVar1 = _stricmp(iVar2 + 0x2dc1edc,param_1);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(iVar2 + 0x2dc1edc);
      }
    }
    iVar2 = iVar2 + 0x168;
  } while (iVar2 != 0x5a00);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
