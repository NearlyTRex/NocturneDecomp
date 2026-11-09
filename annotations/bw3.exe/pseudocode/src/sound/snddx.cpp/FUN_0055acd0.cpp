// Name: sound_snddx.cpp_FUN_0055acd0
// Address: 0055acd0
// Address Range: [[0055acd0, 0055ae35]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_0055acd0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_0055acd0(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  byte *puVar4;
  int iVar5;
  byte auStack_330 [400];
  byte auStack_1a0 [400];
  float fStack_10;
  
  if (_DAT_02cf49cc == (int *)0x0) {
    fStack_10 = 0.1;
  }
  else {
    _DAT_02cf49e8 =
         ((int)((_DAT_02cf49d8 + (_DAT_02cf49d8 >> 0x1f) * -8) -
               (uint)((_DAT_02cf49d8 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf49e4 * _DAT_02cf49e0;
    fStack_10 = ((float)_DAT_02cf49e4 / (float)_DAT_02cf49dc) * _DAT_005d45e9;
    iVar5 = 0;
    _DAT_02cf49f0 = 0;
    if (0 < _DAT_02cf49ec) {
      do {
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_0055a820();
        if (iVar1 == 0) goto LAB_0055adcf;
        iVar5 = iVar5 + 1;
      } while (iVar5 < _DAT_02cf49ec);
    }
  }
  iVar5 = sound_sndmain_cpp_FUN_00558d70(fStack_10);
  if (iVar5 != 0) {
    if (_DAT_02cf49cc == (int *)0x0) {
      return 1;
    }
    puVar4 = auStack_330;
    uVar2 = (**(code **)(*_DAT_02cf49cc + 0x34))(_DAT_02cf49cc,0);
    if (uVar2 == 0) {
      uVar2 = (**(code **)(*_DAT_02cf49cc + 0x30))(_DAT_02cf49cc,0,0,1);
      if (uVar2 == 0) {
        return 1;
      }
      pcVar3 = sound_snddx_cpp_FUN_0055a670(uVar2);
      FUN_005a28c0
                (auStack_1a0,"DirectSux: Unable to %s.  (%s)","Play the secondary buffer",
                 pcVar3);
      puVar4 = auStack_1a0;
    }
    else {
      pcVar3 = sound_snddx_cpp_FUN_0055a670(uVar2);
      FUN_005a28c0
                (auStack_330,"DirectSux: Unable to %s.  (%s)",
                 "@Position secondary buffer to 0" + 1,pcVar3);
    }
    sound_sndmain_cpp_FUN_0055a560(puVar4);
  }
LAB_0055adcf:
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}
