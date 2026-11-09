// Name: sound_snddx.cpp_FUN_00577b60
// Address: 00577b60
// Address Range: [[00577b60, 00577cc5]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_00577b60(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_00577b60(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  byte *puVar4;
  int iVar5;
  byte auStack_330 [400];
  byte auStack_1a0 [400];
  float fStack_10;
  
  if (_DAT_02c81d9c == (int *)0x0) {
    fStack_10 = 0.1;
  }
  else {
    _DAT_02c81db8 =
         ((int)((_DAT_02c81da8 + (_DAT_02c81da8 >> 0x1f) * -8) -
               (uint)((_DAT_02c81da8 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02c81db4 * _DAT_02c81db0;
    fStack_10 = ((float)_DAT_02c81db4 / (float)_DAT_02c81dac) * _DAT_005f4cef;
    iVar5 = 0;
    _DAT_02c81dc0 = 0;
    if (0 < _DAT_02c81dbc) {
      do {
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_005776b0();
        if (iVar1 == 0) goto LAB_00577c5f;
        iVar5 = iVar5 + 1;
      } while (iVar5 < _DAT_02c81dbc);
    }
  }
  iVar5 = sound_sndmain_cpp_FUN_00575c00(fStack_10);
  if (iVar5 != 0) {
    if (_DAT_02c81d9c == (int *)0x0) {
      return 1;
    }
    puVar4 = auStack_330;
    uVar2 = (**(code **)(*_DAT_02c81d9c + 0x34))(_DAT_02c81d9c,0);
    if (uVar2 == 0) {
      uVar2 = (**(code **)(*_DAT_02c81d9c + 0x30))(_DAT_02c81d9c,0,0,1);
      if (uVar2 == 0) {
        return 1;
      }
      pcVar3 = sound_snddx_cpp_FUN_00577500(uVar2);
      FUN_005bfb40
                (auStack_1a0,"DirectSux: Unable to %s.  (%s)","Play the secondary buffer",
                 pcVar3);
      puVar4 = auStack_1a0;
    }
    else {
      pcVar3 = sound_snddx_cpp_FUN_00577500(uVar2);
      FUN_005bfb40
                (auStack_330,"DirectSux: Unable to %s.  (%s)",
                 "@Position secondary buffer to 0" + 1,pcVar3);
    }
    sound_sndmain_cpp_FUN_005773f0(puVar4);
  }
LAB_00577c5f:
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}
