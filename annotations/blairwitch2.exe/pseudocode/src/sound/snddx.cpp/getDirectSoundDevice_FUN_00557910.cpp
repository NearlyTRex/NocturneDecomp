// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_00557910
// Address: 00557910
// Address Range: [[00557910, 00557b3b]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_00557910(UINT device_id)

#include "nocturne.h"

CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_00557910(UINT device_id)

{
  int iVar1;
  uint uVar2;
  char *format;
  LPGUID lp_guid;
  char acStack_778 [400];
  char acStack_5e8 [400];
  char acStack_458 [400];
  char acStack_2c8 [400];
  SSoundDeviceInfo local_138;
  DSBUFFERDESC DStack_20;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_00555060(&g_CDirectSoundDevice_0264b06c);
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_00557860(device_id,&local_138);
    if (iVar1 != 0) {
      lp_guid = (LPGUID)0x0;
      if (g_SDirectSoundDeviceInfo_ARRAY_02649874[device_id].is_primary_device == 0) {
        lp_guid = &g_SDirectSoundDeviceInfo_ARRAY_02649874[device_id].device_guid;
      }
      uVar2 = DirectSoundCreate(lp_guid,&g_IDirectSound_PTR_0264a5c4,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (*g_IDirectSound_PTR_0264a5c4->vtable->SetCooperativeLevel)
                          (g_IDirectSound_PTR_0264a5c4,g_HWND_02664628,2);
        if (uVar2 == 0) {
          memset(&DStack_20,0,0x14);
          DStack_20.dwSize = 0x14;
          DStack_20.dwFlags = 0x11;
          uVar2 = (*g_IDirectSound_PTR_0264a5c4->vtable->CreateSoundBuffer)
                            (g_IDirectSound_PTR_0264a5c4,&DStack_20,
                             &g_IDirectSoundBuffer_PTR_0264a5c8,(LPUNKNOWN)0x0);
          if (uVar2 != 0) {
            sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
            _sprintf(acStack_778,"DirectSux: Unable to %s.  (%s)");
            sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_778);
            DStack_20.dwFlags = DStack_20.dwFlags & 0xffffffef;
            uVar2 = (*g_IDirectSound_PTR_0264a5c4->vtable->CreateSoundBuffer)
                              (g_IDirectSound_PTR_0264a5c4,&DStack_20,
                               &g_IDirectSoundBuffer_PTR_0264a5c8,(LPUNKNOWN)0x0);
            if (uVar2 != 0) {
              sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
              _sprintf(acStack_458,"DirectSux: Unable to %s.  (%s)");
              format = acStack_458;
              goto LAB_005579b1;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00552b40();
          if ((1 < iVar1) &&
             (1 < (int)g_SDirectSoundDeviceInfo_ARRAY_02649874[device_id].has_hardware_mixing)) {
            (*g_IDirectSoundBuffer_PTR_0264a5c8->vtable->QueryInterface)
                      ((IUnknown *)g_IDirectSoundBuffer_PTR_0264a5c8,&g_IID_IDirectSound3DListener,
                       &g_IDirectSound3DListener_PTR_0264a5d0);
          }
          return &g_CDirectSoundDevice_0264b06c;
        }
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
        _sprintf(acStack_2c8,"DirectSux: Unable to %s.  (%s)");
        format = acStack_2c8;
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
        _sprintf(acStack_5e8,"DirectSux: Unable to %s.  (%s)");
        format = acStack_5e8;
      }
LAB_005579b1:
      sound_sndmain_cpp_logSoundError_FUN_005549c0(format);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_00555060(&g_CDirectSoundDevice_0264b06c);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return (CDirectSoundDevice *)0x0;
}
