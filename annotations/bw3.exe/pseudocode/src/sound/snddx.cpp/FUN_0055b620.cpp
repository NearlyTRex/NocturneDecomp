// Name: sound_snddx.cpp_FUN_0055b620
// Address: 0055b620
// Address Range: [[0055b620, 0055b6f2]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_0055b620(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_0055b620(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piStack_1a8;
  byte *puStack_1a4;
  byte *puStack_1a0;
  uint uStack_14;
  byte auStack_c [4];
  byte auStack_8 [4];
  
  puStack_1a0 = (byte *)0x55b62c;
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
  if ((int)uVar1 < 1) {
    if (_DAT_02cf49cc != (int *)0x0) {
      puStack_1a0 = auStack_c;
      puStack_1a4 = auStack_8;
      piStack_1a8 = _DAT_02cf49cc;
      uVar1 = (**(code **)(*_DAT_02cf49cc + 0x10))();
      if (uVar1 != 0) {
        sound_snddx_cpp_FUN_0055a670(uVar1);
        _sprintf((char *)&piStack_1a8,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560((char *)&piStack_1a8);
        return 0;
      }
      uVar1 = uStack_14 / _DAT_02cf49e8;
      if (_DAT_02cf49ec <= (int)uVar1) {
        uVar1 = _DAT_02cf49ec - 1;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      do {
        if (uVar1 == _DAT_02cf49f0) {
          return 1;
        }
        iVar3 = sound_snddx_cpp_fillStreamBuffer_FUN_0055a820();
      } while (iVar3 != 0);
      return 0;
    }
    uVar2 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x55b64a;
    sound_sndmain_cpp_pollAllSfxSlots_FUN_0055a0b0();
    uVar2 = 1;
  }
  return uVar2;
}
