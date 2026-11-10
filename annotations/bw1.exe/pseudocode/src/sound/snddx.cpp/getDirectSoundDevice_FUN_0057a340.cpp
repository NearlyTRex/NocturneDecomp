// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_0057a340
// Address: 0057a340
// Address Range: [[0057a340, 0057a56b]]
// Convention: __cdecl
// Signature: undefined * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0057a340(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0057a340(int param_1)

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
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_00577a90((CDirectSoundDevice *)&DAT_02c8283c)
  ;
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0057a290(param_1,local_148);
    if (iVar1 != 0) {
      lp_guid = (LPGUID)0x0;
      if (*(int *)(param_1 * 0x11c + 0x2c81044) == 0) {
        lp_guid = (LPGUID)(param_1 * 0x11c + 0x2c81048);
      }
      uVar2 = DirectSoundCreate(lp_guid,(LPDIRECTSOUND *)&DAT_02c81d94,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (**(code **)(*_DAT_02c81d94 + 0x18))(_DAT_02c81d94,_DAT_02c9be68,2);
        if (uVar2 == 0) {
          memset(&uStack_30,0,0x24);
          uStack_30 = 0x24;
          uStack_2c = 0x11;
          uVar2 = (**(code **)(*_DAT_02c81d94 + 0xc))(_DAT_02c81d94,&uStack_30,&DAT_02c81d98,0);
          if (uVar2 != 0) {
            sound_snddx_cpp_FUN_00577500(uVar2);
            _sprintf(acStack_788,"DirectSux: Unable to %s.  (%s)");
            sound_sndmain_cpp_FUN_005773f0(acStack_788);
            uStack_2c = uStack_2c & 0xffffffef;
            uVar2 = (**(code **)(*_DAT_02c81d94 + 0xc))(_DAT_02c81d94,&uStack_30,&DAT_02c81d98,0);
            if (uVar2 != 0) {
              sound_snddx_cpp_FUN_00577500(uVar2);
              _sprintf(acStack_468,"DirectSux: Unable to %s.  (%s)");
              pcVar3 = acStack_468;
              goto LAB_0057a3e1;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
          if ((1 < iVar1) && (1 < *(int *)(param_1 * 0x11c + 0x2c8115c))) {
            (**(code **)*_DAT_02c81d98)(_DAT_02c81d98,&DAT_00627880,&DAT_02c81da0);
          }
          return &DAT_02c8283c;
        }
        sound_snddx_cpp_FUN_00577500(uVar2);
        _sprintf(acStack_2d8,"DirectSux: Unable to %s.  (%s)");
        pcVar3 = acStack_2d8;
      }
      else {
        sound_snddx_cpp_FUN_00577500(uVar2);
        _sprintf(acStack_5f8,"DirectSux: Unable to %s.  (%s)");
        pcVar3 = acStack_5f8;
      }
LAB_0057a3e1:
      sound_sndmain_cpp_FUN_005773f0(pcVar3);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_00577a90((CDirectSoundDevice *)&DAT_02c8283c);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
