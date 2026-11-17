// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0
// Address: 0052bef0
// Address Range: [[0052bef0, 0052c11a]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(UINT device_id)

#include "nocturne.h"

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
  DSBUFFERDESC DStack_20;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(&g_CDirectSoundDeviceInstance);
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(device_id,&local_138);
    if (iVar1 != 0) {
      lp_guid = (LPGUID)0x0;
      if (g_DirectSoundDevices[device_id].is_primary_device == 0) {
        lp_guid = &g_DirectSoundDevices[device_id].device_guid;
      }
      uVar2 = DirectSoundCreate(lp_guid,&g_DirectSound,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (*g_DirectSound->vtable->SetCooperativeLevel)(g_DirectSound,g_MainWindowHandle,3);
        if (uVar2 == 0) {
          memset(&DStack_20,0,0x14);
          DStack_20.dwSize = 0x14;
          DStack_20.dwFlags = 0x11;
          uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                            (g_DirectSound,&DStack_20,&g_DirectSoundPrimaryBuffer,(LPUNKNOWN)0x0);
          if (uVar2 != 0) {
            pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
            _sprintf(acStack_778,"DirectSux: Unable to %s.  (%s)",
                       "Create the primary buffer",pcVar3);
            sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_778);
            DStack_20.dwFlags = DStack_20.dwFlags & 0xffffffef;
            uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                              (g_DirectSound,&DStack_20,&g_DirectSoundPrimaryBuffer,(LPUNKNOWN)0x0);
            if (uVar2 != 0) {
              pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
              _sprintf(acStack_458,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",pcVar3);
              pcVar3 = acStack_458;
              goto LAB_0052bf91;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
          if ((iVar1 != 0) && (g_DirectSoundDevices[device_id].has_hardware_mixing != 0)) {
            (*g_DirectSoundPrimaryBuffer->vtable->QueryInterface)
                      ((IUnknown *)g_DirectSoundPrimaryBuffer,&g_IID_IDirectSound3DListener,
                       &g_DirectSound3DListener);
          }
          return &g_CDirectSoundDeviceInstance;
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
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(&g_CDirectSoundDeviceInstance);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return (CDirectSoundDevice *)0x0;
}
