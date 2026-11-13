// Name: sound_snddx.cpp_FUN_005784b0
// Address: 005784b0
// Address Range: [[005784b0, 00578582]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_005784b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_005784b0(void)

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
  
  puStack_1a0 = (byte *)0x5784bc;
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
  if ((int)uVar1 < 1) {
    if (_DAT_02c81d9c != (int *)0x0) {
      puStack_1a0 = auStack_c;
      puStack_1a4 = auStack_8;
      piStack_1a8 = _DAT_02c81d9c;
      uVar1 = (**(code **)(*_DAT_02c81d9c + 0x10))();
      if (uVar1 != 0) {
        sound_snddx_cpp_FUN_00577500(uVar1);
        _sprintf((char *)&piStack_1a8,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0((char *)&piStack_1a8);
        return 0;
      }
      uVar1 = uStack_14 / _DAT_02c81db8;
      if (_DAT_02c81dbc <= (int)uVar1) {
        uVar1 = _DAT_02c81dbc - 1;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      do {
        if (uVar1 == _DAT_02c81dc0) {
          return 1;
        }
        iVar3 = sound_snddx_cpp_fillStreamBuffer_FUN_005776b0();
      } while (iVar3 != 0);
      return 0;
    }
    uVar2 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x5784da;
    sound_sndmain_cpp_pollAllSfxSlots_FUN_00576f40();
    uVar2 = 1;
  }
  return uVar2;
}
