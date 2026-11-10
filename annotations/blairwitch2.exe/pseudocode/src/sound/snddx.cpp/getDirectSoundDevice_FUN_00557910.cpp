// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_00557910
// Address: 00557910
// Address Range: [[00557910, 00557b3b]]
// Convention: __cdecl
// Signature: undefined * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_00557910(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_00557910(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  LPGUID lp_guid;
  char acStack_778 [400];
  char acStack_5e8 [400];
  char acStack_458 [400];
  char acStack_2c8 [400];
  byte local_138 [280];
  uint uStack_20;
  uint uStack_1c;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_00555060((CDirectSoundDevice *)&DAT_0264b06c)
  ;
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_00557860(param_1,local_138);
    if (iVar1 != 0) {
      lp_guid = (LPGUID)0x0;
      if (*(int *)(param_1 * 0x11c + 0x2649874) == 0) {
        lp_guid = (LPGUID)(param_1 * 0x11c + 0x2649878);
      }
      uVar2 = DirectSoundCreate(lp_guid,(LPDIRECTSOUND *)&DAT_0264a5c4,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (**(code **)(*_DAT_0264a5c4 + 0x18))(_DAT_0264a5c4,_DAT_02664628,2);
        if (uVar2 == 0) {
          memset(&uStack_20,0,0x14);
          uStack_20 = 0x14;
          uStack_1c = 0x11;
          uVar2 = (**(code **)(*_DAT_0264a5c4 + 0xc))(_DAT_0264a5c4,&uStack_20,&DAT_0264a5c8,0);
          if (uVar2 != 0) {
            sound_snddx_cpp_FUN_00554ad0(uVar2);
            _sprintf(acStack_778,"DirectSux: Unable to %s.  (%s)");
            sound_sndmain_cpp_FUN_005549c0(acStack_778);
            uStack_1c = uStack_1c & 0xffffffef;
            uVar2 = (**(code **)(*_DAT_0264a5c4 + 0xc))(_DAT_0264a5c4,&uStack_20,&DAT_0264a5c8,0);
            if (uVar2 != 0) {
              sound_snddx_cpp_FUN_00554ad0(uVar2);
              _sprintf(acStack_458,"DirectSux: Unable to %s.  (%s)");
              pcVar3 = acStack_458;
              goto LAB_005579b1;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00552b40();
          if ((1 < iVar1) && (1 < *(int *)(param_1 * 0x11c + 0x264998c))) {
            (**(code **)*_DAT_0264a5c8)(_DAT_0264a5c8,&DAT_00621060,&DAT_0264a5d0);
          }
          return &DAT_0264b06c;
        }
        sound_snddx_cpp_FUN_00554ad0(uVar2);
        _sprintf(acStack_2c8,"DirectSux: Unable to %s.  (%s)");
        pcVar3 = acStack_2c8;
      }
      else {
        sound_snddx_cpp_FUN_00554ad0(uVar2);
        _sprintf(acStack_5e8,"DirectSux: Unable to %s.  (%s)");
        pcVar3 = acStack_5e8;
      }
LAB_005579b1:
      sound_sndmain_cpp_FUN_005549c0(pcVar3);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_00555060((CDirectSoundDevice *)&DAT_0264b06c);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
