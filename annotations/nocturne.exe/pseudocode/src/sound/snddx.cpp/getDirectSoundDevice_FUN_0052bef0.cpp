// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0
// Address: 0052bef0
// Address Range: [[0052bef0, 0052c11a]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(UINT device_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(UINT device_id)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  LPGUID lp_guid;
  char acStack_778 [400];
  char acStack_5e8 [400];
  char acStack_458 [400];
  char acStack_2c8 [400];
  SSoundDeviceInfo local_138;
  uint uStack_20;
  uint uStack_1c;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90((CDirectSoundDevice *)&DAT_02dc93a0)
  ;
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(device_id,&local_138);
    if (iVar1 != 0) {
      lp_guid = (LPGUID)0x0;
      if (*(int *)(device_id * 0x11c + 0x2dc84c4) == 0) {
        lp_guid = (LPGUID)(device_id * 0x11c + 0x2dc84c8);
      }
      uVar2 = DirectSoundCreate(lp_guid,(LPDIRECTSOUND *)&DAT_02dc9214,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (**(code **)(*_DAT_02dc9214 + 0x18))(_DAT_02dc9214,g_HWND_02de2098,3);
        if (uVar2 == 0) {
          memset(&uStack_20,0,0x14);
          uStack_20 = 0x14;
          uStack_1c = 0x11;
          uVar2 = (**(code **)(*_DAT_02dc9214 + 0xc))(_DAT_02dc9214,&uStack_20,&DAT_02dc9218,0);
          if (uVar2 != 0) {
            pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
            _sprintf(acStack_778,"DirectSux: Unable to %s.  (%s)",
                       "Create the primary buffer",pcVar3);
            sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_778);
            uStack_1c = uStack_1c & 0xffffffef;
            uVar2 = (**(code **)(*_DAT_02dc9214 + 0xc))(_DAT_02dc9214,&uStack_20,&DAT_02dc9218,0);
            if (uVar2 != 0) {
              pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
              _sprintf(acStack_458,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",pcVar3);
              pcVar3 = acStack_458;
              goto LAB_0052bf91;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
          if ((iVar1 != 0) && (*(int *)(device_id * 0x11c + 0x2dc85dc) != 0)) {
            (**(code **)*_DAT_02dc9218)(_DAT_02dc9218,&DAT_005c3908,&DAT_02dc9220);
          }
          return (CDirectSoundDevice *)&DAT_02dc93a0;
        }
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
        _sprintf(acStack_2c8,"DirectSux: Unable to %s.  (%s)","Set cooperative level",
                   pcVar3);
        pcVar3 = acStack_2c8;
      }
      else {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
        _sprintf(acStack_5e8,"DirectSux: Unable to %s.  (%s)",
                   "create DirectSound object",pcVar3);
        pcVar3 = acStack_5e8;
      }
LAB_0052bf91:
      sound_sndmain_cpp_logSoundError_FUN_00529980(pcVar3);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90((CDirectSoundDevice *)&DAT_02dc93a0);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return (CDirectSoundDevice *)0x0;
}
