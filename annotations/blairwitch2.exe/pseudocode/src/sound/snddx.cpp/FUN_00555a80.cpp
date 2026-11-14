// Name: sound_snddx.cpp_FUN_00555a80
// Address: 00555a80
// Address Range: [[00555a80, 00555b52]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_00555a80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_00555a80(void)

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
  
  puStack_1a0 = (byte *)0x555a8c;
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
  if ((int)uVar1 < 1) {
    if (_DAT_0264a5cc != (int *)0x0) {
      puStack_1a0 = auStack_c;
      puStack_1a4 = auStack_8;
      piStack_1a8 = _DAT_0264a5cc;
      uVar1 = (**(code **)(*_DAT_0264a5cc + 0x10))();
      if (uVar1 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar1);
        _sprintf((char *)&piStack_1a8,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005549c0((char *)&piStack_1a8);
        return 0;
      }
      uVar1 = uStack_14 / _DAT_0264a5e8;
      if (_DAT_0264a5ec <= (int)uVar1) {
        uVar1 = _DAT_0264a5ec - 1;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      do {
        if (uVar1 == _DAT_0264a5f0) {
          return 1;
        }
        iVar3 = sound_snddx_cpp_fillStreamBuffer_FUN_00554c80();
      } while (iVar3 != 0);
      return 0;
    }
    uVar2 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x555aaa;
    sound_sndmain_cpp_pollAllSfxSlots_FUN_00554510();
    uVar2 = 1;
  }
  return uVar2;
}
