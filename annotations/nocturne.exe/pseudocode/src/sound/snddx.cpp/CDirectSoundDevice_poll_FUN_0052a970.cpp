// Name: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970
// Address: 0052a970
// Address Range: [[0052a970, 0052aa3f]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0052a970(CDirectSoundDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0052a970(CDirectSoundDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
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
      uVar2 = (**(code **)(*_DAT_02dc921c + 0x10))();
      if (uVar2 != 0) {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
        _sprintf((char *)&piStack_1a8,"DirectSux: Unable to %s.  (%s)",
                   "Get position of secondary buffer",pcVar3);
        sound_sndmain_cpp_FUN_00529980(&piStack_1a8);
        return 0;
      }
      uVar2 = uStack_18 / _DAT_02dc9238;
      if (_DAT_02dc923c <= (int)uVar2) {
        uVar2 = _DAT_02dc923c - 1;
      }
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      do {
        if (uVar2 == _DAT_02dc9240) {
          return 1;
        }
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_00529c10();
      } while (iVar1 != 0);
      return 0;
    }
    iVar1 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x52a999;
    sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810();
    iVar1 = 1;
  }
  return iVar1;
}
