// Name: sound_snddx.cpp_FUN_0055b620
// Address: 0055b620
// Address Range: [[0055b620, 0055b6f2]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_0055b620(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_0055b620(void)

{
  int extraout_EAX;
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int *piStack_1a8;
  byte *puStack_1a4;
  byte *puStack_1a0;
  int in_stack_fffffe64;
  uint uStack_14;
  byte auStack_c [4];
  byte auStack_8 [4];
  
  puStack_1a0 = (byte *)0x55b62c;
  sound_sndmain_cpp_FUN_005586d0(in_stack_fffffe64);
  if (extraout_EAX < 1) {
    if (_DAT_02cf49cc != (int *)0x0) {
      puStack_1a0 = auStack_c;
      puStack_1a4 = auStack_8;
      piStack_1a8 = _DAT_02cf49cc;
      uVar2 = (**(code **)(*_DAT_02cf49cc + 0x10))();
      if (uVar2 != 0) {
        pcVar3 = sound_snddx_cpp_FUN_0055a670(uVar2);
        FUN_005a28c0
                  (&piStack_1a8,"DirectSux: Unable to %s.  (%s)",
                   "Get position of secondary buffer",pcVar3);
        sound_sndmain_cpp_FUN_0055a560(&piStack_1a8);
        return 0;
      }
      uVar2 = uStack_14 / _DAT_02cf49e8;
      if (_DAT_02cf49ec <= (int)uVar2) {
        uVar2 = _DAT_02cf49ec - 1;
      }
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      do {
        if (uVar2 == _DAT_02cf49f0) {
          return 1;
        }
        iVar4 = sound_snddx_cpp_fillStreamBuffer_FUN_0055a820();
      } while (iVar4 != 0);
      return 0;
    }
    uVar1 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x55b64a;
    sound_sndmain_cpp_FUN_0055a0b0();
    uVar1 = 1;
  }
  return uVar1;
}
