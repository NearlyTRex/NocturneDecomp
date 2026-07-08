// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440
// Address: 005b0440
// MANUAL RECONSTRUCTION
// Address Range: [[005b0440, 005b066a]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id)

#include "nocturne.h"

CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id)

{
  int iVar1;
  int iVar2;
  uint uVar2;
  char *pcVar3;
  uint uVar3;
  char *pcVar4;
  LPGUID lpGuid;
  char acStack_778 [400];
  char acStack_5e8 [400];
  char acStack_458 [400];
  char acStack_2c8 [400];
  SSoundDeviceInfo local_138;
  DSBUFFERDESC DStack_20;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(&g_CDirectSoundDeviceInstance);
  if (iVar1 != 0) {
    iVar2 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390(device_id,&local_138);
    if (iVar2 != 0) {
      lpGuid = (LPGUID)0x0;
      if (g_DirectSoundDevices[device_id].is_primary_device == 0) {
        lpGuid = &g_DirectSoundDevices[device_id].device_guid;
      }
      uVar2 = DirectSoundCreate(lpGuid,&g_DirectSound,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar3 = (*g_DirectSound->vtable->SetCooperativeLevel)(g_DirectSound,g_MainWindowHandle,2);
        if (uVar3 == 0) {
          memset(&DStack_20,0,sizeof(DStack_20));
          DStack_20.dwSize = sizeof(DStack_20);
          DStack_20.dwFlags = 0x11;
          uVar3 = (*g_DirectSound->vtable->CreateSoundBuffer)
                            (g_DirectSound,&DStack_20,&g_DirectSoundPrimaryBuffer,(LPUNKNOWN)0x0);
          if (uVar3 != 0) {
            pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
            _sprintf
                      (acStack_778,"DirectSux: Unable to %s.  (%s)",
                       "Create the primary buffer",pcVar4);
            sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_778);
            DStack_20.dwFlags = DStack_20.dwFlags & 0xffffffef;
            uVar3 = (*g_DirectSound->vtable->CreateSoundBuffer)
                              (g_DirectSound,&DStack_20,&g_DirectSoundPrimaryBuffer,(LPUNKNOWN)0x0);
            if (uVar3 != 0) {
              pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
              _sprintf
                        (acStack_458,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",pcVar4);
              pcVar4 = acStack_458;
              goto LAB_005b04e1;
            }
          }
          iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
          if ((iVar2 != 0) && (g_DirectSoundDevices[device_id].has_hardware_mixing != 0)) {
            (*g_DirectSoundPrimaryBuffer->vtable->QueryInterface)
                      ((IUnknown *)g_DirectSoundPrimaryBuffer,&GUID_00686d58,
                       (void **)&g_DirectSound3DListener);
          }
          return &g_CDirectSoundDeviceInstance;
        }
        pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
        _sprintf
                  (acStack_2c8,"DirectSux: Unable to %s.  (%s)","Set cooperative level",
                   pcVar4);
        pcVar4 = acStack_2c8;
      }
      else {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
        _sprintf
                  (acStack_5e8,"DirectSux: Unable to %s.  (%s)",
                   "create DirectSound object",pcVar3);
        pcVar4 = acStack_5e8;
      }
LAB_005b04e1:
      sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar4);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(&g_CDirectSoundDeviceInstance);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return (CDirectSoundDevice *)0x0;
}
