// Name: sound_snddx.cpp_FUN_005784b0
// Address: 005784b0
// Address Range: [[005784b0, 00578582]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_005784b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_005784b0(void)

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
  
  puStack_1a0 = (byte *)0x5784bc;
  sound_sndmain_cpp_FUN_00575560(in_stack_fffffe64);
  if (extraout_EAX < 1) {
    if (_DAT_02c81d9c != (int *)0x0) {
      puStack_1a0 = auStack_c;
      puStack_1a4 = auStack_8;
      piStack_1a8 = _DAT_02c81d9c;
      uVar2 = (**(code **)(*_DAT_02c81d9c + 0x10))();
      if (uVar2 != 0) {
        pcVar3 = sound_snddx_cpp_FUN_00577500(uVar2);
        FUN_005bfb40
                  (&piStack_1a8,"DirectSux: Unable to %s.  (%s)",
                   "Get position of secondary buffer",pcVar3);
        sound_sndmain_cpp_FUN_005773f0(&piStack_1a8);
        return 0;
      }
      uVar2 = uStack_14 / _DAT_02c81db8;
      if (_DAT_02c81dbc <= (int)uVar2) {
        uVar2 = _DAT_02c81dbc - 1;
      }
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      do {
        if (uVar2 == _DAT_02c81dc0) {
          return 1;
        }
        iVar4 = sound_snddx_cpp_fillStreamBuffer_FUN_005776b0();
      } while (iVar4 != 0);
      return 0;
    }
    uVar1 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x5784da;
    sound_sndmain_cpp_FUN_00576f40();
    uVar1 = 1;
  }
  return uVar1;
}
