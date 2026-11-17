// Name: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005784b0
// Address: 005784b0
// Address Range: [[005784b0, 00578582]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_005784b0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_005784b0(CDirectSoundDevice *this_ptr)

{
  uint uVar1;
  int iVar2;
  char acStack_19c [400];
  DWORD DStack_c;
  uint uStack_8;
  
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
  if ((int)uVar1 < 1) {
    if (g_IDirectSoundBuffer_PTR_02c81d9c != (IDirectSoundBuffer *)0x0) {
      uVar1 = (*g_IDirectSoundBuffer_PTR_02c81d9c->vtable->GetCurrentPosition)
                        (g_IDirectSoundBuffer_PTR_02c81d9c,&uStack_8,&DStack_c);
      if (uVar1 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar1);
        _sprintf(acStack_19c,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_19c);
        return 0;
      }
      uVar1 = uStack_8 / (uint)g_INT_02c81db8;
      if (g_INT_02c81dbc <= (int)uVar1) {
        uVar1 = g_INT_02c81dbc - 1;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      do {
        if (uVar1 == g_INT_02c81dc0) {
          return 1;
        }
        iVar2 = sound_snddx_cpp_fillStreamBuffer_FUN_005776b0();
      } while (iVar2 != 0);
      return 0;
    }
    iVar2 = 0;
  }
  else {
    sound_sndmain_cpp_pollAllSfxSlots_FUN_00576f40();
    iVar2 = 1;
  }
  return iVar2;
}
