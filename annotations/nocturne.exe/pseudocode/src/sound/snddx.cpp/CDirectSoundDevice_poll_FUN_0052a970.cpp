// Name: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970
// Address: 0052a970
// Address Range: [[0052a970, 0052aa3f]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0052a970(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0052a970(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piStack_1a8;
  byte *puStack_1a4;
  byte *puStack_1a0;
  uint uStack_18;
  byte local_c [4];
  byte local_8 [4];
  
  if (_DAT_02dc9220 == 0) {
    if (_DAT_02dc921c != (int *)0x0) {
      puStack_1a0 = local_8;
      puStack_1a4 = local_c;
      piStack_1a8 = _DAT_02dc921c;
      iVar2 = (**(code **)(*_DAT_02dc921c + 0x10))();
      if (iVar2 != 0) {
        uVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar2);
        _sprintf(&piStack_1a8,"DirectSux: Unable to %s.  (%s)",
                   "Get position of secondary buffer",uVar1);
        sound_sndmain_cpp_FUN_00529980(&piStack_1a8);
        return 0;
      }
      uVar3 = uStack_18 / _DAT_02dc9238;
      if (_DAT_02dc923c <= (int)uVar3) {
        uVar3 = _DAT_02dc923c - 1;
      }
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      do {
        if (uVar3 == _DAT_02dc9240) {
          return 1;
        }
        iVar2 = sound_snddx_cpp_fillStreamBuffer_FUN_00529c10();
      } while (iVar2 != 0);
      return 0;
    }
    uVar1 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x52a999;
    sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810();
    uVar1 = 1;
  }
  return uVar1;
}
