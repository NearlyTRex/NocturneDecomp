// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_0057a340
// Address: 0057a340
// Address Range: [[0057a340, 0057a56b]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0057a340(UINT device_id)

#include "nocturne.h"

CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0057a340(UINT device_id)

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
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_00577a90(&g_CDirectSoundDevice_02c8283c);
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0057a290(device_id,&local_148);
    if (iVar1 != 0) {
      lp_guid = (LPGUID)0x0;
      if (*(int *)(device_id * 0x11c + 0x2c81044) == 0) {
        lp_guid = (LPGUID)(device_id * 0x11c + 0x2c81048);
      }
      uVar2 = DirectSoundCreate(lp_guid,&g_IDirectSound_PTR_02c81d94,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (*g_IDirectSound_PTR_02c81d94->vtable->SetCooperativeLevel)
                          (g_IDirectSound_PTR_02c81d94,g_HWND_02c9be68,2);
        if (uVar2 == 0) {
          memset(&DStack_30,0,0x24);
          DStack_30.dwSize = 0x24;
          DStack_30.dwFlags = 0x11;
          uVar2 = (*g_IDirectSound_PTR_02c81d94->vtable->CreateSoundBuffer)
                            (g_IDirectSound_PTR_02c81d94,&DStack_30,
                             &g_IDirectSoundBuffer_PTR_02c81d98,(LPUNKNOWN)0x0);
          if (uVar2 != 0) {
            sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar2);
            _sprintf(acStack_788,"DirectSux: Unable to %s.  (%s)");
            sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_788);
            DStack_30.dwFlags = DStack_30.dwFlags & 0xffffffef;
            uVar2 = (*g_IDirectSound_PTR_02c81d94->vtable->CreateSoundBuffer)
                              (g_IDirectSound_PTR_02c81d94,&DStack_30,
                               &g_IDirectSoundBuffer_PTR_02c81d98,(LPUNKNOWN)0x0);
            if (uVar2 != 0) {
              sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar2);
              _sprintf(acStack_468,"DirectSux: Unable to %s.  (%s)");
              format = acStack_468;
              goto LAB_0057a3e1;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
          if ((1 < iVar1) && (1 < g_INT_ARRAY_02c8115c[device_id * 0x47])) {
            (*g_IDirectSoundBuffer_PTR_02c81d98->vtable->QueryInterface)
                      ((IUnknown *)g_IDirectSoundBuffer_PTR_02c81d98,&g_IID_IDirectSound3DListener,
                       (void **)&DAT_02c81da0);
          }
          return &g_CDirectSoundDevice_02c8283c;
        }
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar2);
        _sprintf(acStack_2d8,"DirectSux: Unable to %s.  (%s)");
        format = acStack_2d8;
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar2);
        _sprintf(acStack_5f8,"DirectSux: Unable to %s.  (%s)");
        format = acStack_5f8;
      }
LAB_0057a3e1:
      sound_sndmain_cpp_logSoundError_FUN_005773f0(format);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_00577a90(&g_CDirectSoundDevice_02c8283c);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return (CDirectSoundDevice *)0x0;
}
