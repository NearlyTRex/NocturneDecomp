// Name: sound_snddx.cpp_fillStreamBuffer_FUN_0055a820
// Address: 0055a820
// Address Range: [[0055a820, 0055a9e6]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_0055a820(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_0055a820(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piStack_380;
  int iStack_37c;
  int iStack_378;
  byte *puStack_374;
  byte *puStack_370;
  byte *puStack_36c;
  byte *puStack_368;
  uint uStack_364;
  char acStack_204 [420];
  LPVOID apvStack_60 [8];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  byte local_20 [4];
  byte local_1c [4];
  byte local_18 [4];
  byte local_14 [4];
  
  if (_DAT_02cf49cc != (int *)0x0) {
    uStack_364 = 0;
    puStack_368 = local_14;
    puStack_36c = local_20;
    puStack_370 = local_18;
    puStack_374 = local_1c;
    iStack_37c = _DAT_02cf49f0 * _DAT_02cf49e8;
    iStack_378 = _DAT_02cf49e8;
    piStack_380 = _DAT_02cf49cc;
    uVar1 = (**(code **)(*_DAT_02cf49cc + 0x2c))();
    if (uVar1 != 0) {
      sound_snddx_cpp_FUN_0055a670(uVar1);
      _sprintf((char *)&piStack_380,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560((char *)&piStack_380);
      return 0;
    }
    if ((iStack_40 == 0) && (iStack_38 == _DAT_02cf49e8)) {
      iVar2 = (int)((_DAT_02cf49d8 + (_DAT_02cf49d8 >> 0x1f) * -8) -
                   (uint)((_DAT_02cf49d8 >> 0x1f) << 2 < 0)) >> 3;
      iVar3 = 0;
      iVar4 = iStack_3c;
      if (0 < _DAT_02cf49e0 * 4) {
        do {
          *(int *)((int)apvStack_60 + iVar3) = iVar4;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + iVar2;
        } while (iVar3 < _DAT_02cf49e0 * 4);
      }
      sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90
                (apvStack_60,_DAT_02cf49d8,_DAT_02cf49e0,_DAT_02cf49dc,_DAT_02cf49e4,
                 iVar2 * _DAT_02cf49e0);
      _DAT_02cf49f0 = _DAT_02cf49f0 + 1;
      if (_DAT_02cf49ec <= _DAT_02cf49f0) {
        _DAT_02cf49f0 = 0;
      }
      uVar1 = (**(code **)(*_DAT_02cf49cc + 0x4c))
                        (_DAT_02cf49cc,iStack_3c,iStack_38,iStack_40,uStack_34);
      if (uVar1 != 0) {
        sound_snddx_cpp_FUN_0055a670(uVar1);
        _sprintf(acStack_204,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_204);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
