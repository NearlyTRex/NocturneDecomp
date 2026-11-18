// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_0055d470
// Address: 0055d470
// Address Range: [[0055d470, 0055d69b]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0055d470(UINT device_id)

#include "nocturne.h"

CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0055d470(UINT device_id)

{
  int iVar1;
  uint uVar2;
  char *format;
  LPGUID lp_guid;
  char acStack_788 [400];
  char acStack_5f8 [400];
  char acStack_468 [400];
  char acStack_2d8 [400];
  SSoundDeviceInfo local_148;
  DSBUFFERDESC DStack_30;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_0055ac00(&g_CDirectSoundDeviceInstance);
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(device_id,&local_148);
    if (iVar1 != 0) {
      lp_guid = (LPGUID)0x0;
      if (g_DirectSoundDevices[device_id].is_primary_device == 0) {
        lp_guid = &g_DirectSoundDevices[device_id].device_guid;
      }
      uVar2 = DirectSoundCreate(lp_guid,&g_DirectSound,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (*g_DirectSound->vtable->SetCooperativeLevel)(g_DirectSound,g_MainWindowHandle,2);
        if (uVar2 == 0) {
          memset(&DStack_30,0,0x24);
          DStack_30.dwSize = 0x24;
          DStack_30.dwFlags = 0x11;
          uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                            (g_DirectSound,&DStack_30,&g_DirectSoundPrimaryBuffer,(LPUNKNOWN)0x0);
          if (uVar2 != 0) {
            sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar2);
            _sprintf(acStack_788,"DirectSux: Unable to %s.  (%s)");
            sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_788);
            DStack_30.dwFlags = DStack_30.dwFlags & 0xffffffef;
            uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                              (g_DirectSound,&DStack_30,&g_DirectSoundPrimaryBuffer,(LPUNKNOWN)0x0);
            if (uVar2 != 0) {
              sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar2);
              _sprintf(acStack_468,"DirectSux: Unable to %s.  (%s)");
              format = acStack_468;
              goto LAB_0055d511;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005586e0();
          if ((1 < iVar1) && (1 < (int)g_DirectSoundDevices[device_id].has_hardware_mixing)) {
            (*g_DirectSoundPrimaryBuffer->vtable->QueryInterface)
                      ((IUnknown *)g_DirectSoundPrimaryBuffer,&g_IID_IDirectSound3DListener,
                       &g_DirectSound3DListener);
          }
          return &g_CDirectSoundDeviceInstance;
        }
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar2);
        _sprintf(acStack_2d8,"DirectSux: Unable to %s.  (%s)");
        format = acStack_2d8;
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar2);
        _sprintf(acStack_5f8,"DirectSux: Unable to %s.  (%s)");
        format = acStack_5f8;
      }
LAB_0055d511:
      sound_sndmain_cpp_logSoundError_FUN_0055a560(format);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_0055ac00(&g_CDirectSoundDeviceInstance);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return (CDirectSoundDevice *)0x0;
}
