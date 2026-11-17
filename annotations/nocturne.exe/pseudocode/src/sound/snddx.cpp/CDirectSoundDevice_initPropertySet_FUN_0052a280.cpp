// Name: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280
// Address: 0052a280
// Address Range: [[0052a280, 0052a440]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280(CDirectSoundDevice *this_ptr)

{
  uint error_code;
  char *pcVar1;
  char acStack_1d0 [400];
  DSBUFFERDESC DStack_40;
  byte local_2c [12];
  uint *puStack_20;
  IDirectSoundBuffer *local_18;
  uint local_14;
  
  if (g_IKsPropertySet_PTR_02dc9224 != (IKsPropertySet *)0x0) {
    (*g_IKsPropertySet_PTR_02dc9224->vtable->Release)((IUnknown *)g_IKsPropertySet_PTR_02dc9224);
    g_IKsPropertySet_PTR_02dc9224 = (IKsPropertySet *)0x0;
  }
  local_18 = (IDirectSoundBuffer *)0x0;
  local_14 = 0;
  memset(local_2c,0,0x12);
  local_2c._0_4_ = (int *)0x10001;
  local_2c._4_4_ = 0x5622;
  puStack_20 = (uint *)0x100002;
  local_2c._8_4_ = (int *)0xac44;
  memset(&DStack_40,0,0x14);
  DStack_40.dwSize = 0x14;
  DStack_40.dwFlags = 0x12;
  DStack_40.lpwfxFormat = (LPWAVEFORMATEX)local_2c;
  DStack_40.dwBufferBytes = 0x400;
  error_code = (*g_IDirectSound_PTR_02dc9214->vtable->CreateSoundBuffer)
                         (g_IDirectSound_PTR_02dc9214,&DStack_40,&local_18,(LPUNKNOWN)0x0);
  if (error_code == 0) {
    (*local_18->vtable->QueryInterface)(local_18,&g_IID_IDirectSound3DBuffer,&local_14);
    if (puStack_20 == (uint *)0x0) {
      if ((int *)local_2c._8_4_ != (int *)0x0) {
        (**(code **)(*(int *)local_2c._8_4_ + 8))(local_2c._8_4_);
      }
    }
    else {
      (**(code **)*puStack_20)(puStack_20,&g_IID_IKsPropertySet,&g_IKsPropertySet_PTR_02dc9224);
      if (DStack_40.lpwfxFormat != (LPWAVEFORMATEX)0x0) {
        (**(code **)(*(int *)DStack_40.lpwfxFormat + 8))(DStack_40.lpwfxFormat);
        DStack_40.lpwfxFormat = (LPWAVEFORMATEX)0x0;
      }
      if ((int *)local_2c._0_4_ != (int *)0x0) {
        (**(code **)(*(int *)local_2c._0_4_ + 8))(local_2c._0_4_);
        return;
      }
    }
  }
  else {
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf(acStack_1d0,"DirectSux: Unable to %s.  (%s)","Create temp secondary buffer for property set creation",
               pcVar1);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1d0);
  }
  return;
}
