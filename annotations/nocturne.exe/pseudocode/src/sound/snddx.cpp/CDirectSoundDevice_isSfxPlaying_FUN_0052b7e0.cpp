// Name: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0
// Address: 0052b7e0
// Address Range: [[0052b7e0, 0052b87e]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0(undefined4 param_1,int param_2)

#include "nocturne.h"

uint sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piStack_19c;
  byte *puStack_198;
  byte bStack_c;
  byte local_4 [4];
  
  iVar1 = *(int *)(param_2 + 0x6c);
  if ((((0 < iVar1) && (iVar1 < 0x1f)) && (*(int *)(iVar1 * 4 + 0x2dc92a8) != 0)) &&
     (*(int *)(iVar1 * 4 + 0x2dc9324) != 0)) {
    puStack_198 = local_4;
    piStack_19c = *(int **)(iVar1 * 4 + 0x2dc92a8);
    iVar1 = (**(code **)(*piStack_19c + 0x24))();
    if (iVar1 != 0) {
      uVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar1);
      _sprintf(&piStack_19c,"DirectSux: Unable to %s.  (%s)",
                 "Get active sfx secondary buffer status",uVar2);
      FUN_00529980(&piStack_19c);
      return 0;
    }
    if ((bStack_c & 1) != 0) {
      return 1;
    }
  }
  return 0;
}
