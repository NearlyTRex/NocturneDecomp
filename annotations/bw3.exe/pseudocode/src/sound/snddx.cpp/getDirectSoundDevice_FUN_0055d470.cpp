// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_0055d470
// Address: 0055d470
// Address Range: [[0055d470, 0055d69b]]
// Convention: __cdecl
// Signature: undefined * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0055d470(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0055d470(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  LPGUID lp_guid;
  char acStack_788 [400];
  char acStack_5f8 [400];
  char acStack_468 [400];
  char acStack_2d8 [400];
  byte local_148 [280];
  uint uStack_30;
  uint uStack_2c;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_0055ac00((CDirectSoundDevice *)&DAT_02cf5468)
  ;
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(param_1,local_148);
    if (iVar1 != 0) {
      lp_guid = (LPGUID)0x0;
      if (*(int *)(param_1 * 0x11c + 0x2cf3c74) == 0) {
        lp_guid = (LPGUID)(param_1 * 0x11c + 0x2cf3c78);
      }
      uVar2 = DirectSoundCreate(lp_guid,(LPDIRECTSOUND *)&DAT_02cf49c4,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (**(code **)(*_DAT_02cf49c4 + 0x18))(_DAT_02cf49c4,_DAT_02d21b78,2);
        if (uVar2 == 0) {
          memset(&uStack_30,0,0x24);
          uStack_30 = 0x24;
          uStack_2c = 0x11;
          uVar2 = (**(code **)(*_DAT_02cf49c4 + 0xc))(_DAT_02cf49c4,&uStack_30,&DAT_02cf49c8,0);
          if (uVar2 != 0) {
            sound_snddx_cpp_FUN_0055a670(uVar2);
            _sprintf(acStack_788,"DirectSux: Unable to %s.  (%s)");
            sound_sndmain_cpp_FUN_0055a560(acStack_788);
            uStack_2c = uStack_2c & 0xffffffef;
            uVar2 = (**(code **)(*_DAT_02cf49c4 + 0xc))(_DAT_02cf49c4,&uStack_30,&DAT_02cf49c8,0);
            if (uVar2 != 0) {
              sound_snddx_cpp_FUN_0055a670(uVar2);
              _sprintf(acStack_468,"DirectSux: Unable to %s.  (%s)");
              pcVar3 = acStack_468;
              goto LAB_0055d511;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005586e0();
          if ((1 < iVar1) && (1 < *(int *)(param_1 * 0x11c + 0x2cf3d8c))) {
            (**(code **)*_DAT_02cf49c8)(_DAT_02cf49c8,&DAT_00608bc8,&DAT_02cf49d0);
          }
          return &DAT_02cf5468;
        }
        sound_snddx_cpp_FUN_0055a670(uVar2);
        _sprintf(acStack_2d8,"DirectSux: Unable to %s.  (%s)");
        pcVar3 = acStack_2d8;
      }
      else {
        sound_snddx_cpp_FUN_0055a670(uVar2);
        _sprintf(acStack_5f8,"DirectSux: Unable to %s.  (%s)");
        pcVar3 = acStack_5f8;
      }
LAB_0055d511:
      sound_sndmain_cpp_FUN_0055a560(pcVar3);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_0055ac00((CDirectSoundDevice *)&DAT_02cf5468);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
