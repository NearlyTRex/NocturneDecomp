// Name: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0055b620
// Address: 0055b620
// Address Range: [[0055b620, 0055b6f2]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0055b620(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0055b620(CDirectSoundDevice *this_ptr)

{
  uint uVar1;
  int iVar2;
  char acStack_19c [400];
  DWORD DStack_c;
  uint uStack_8;
  
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
  if ((int)uVar1 < 1) {
    if (g_IDirectSoundBuffer_PTR_02cf49cc != (IDirectSoundBuffer *)0x0) {
      uVar1 = (*g_IDirectSoundBuffer_PTR_02cf49cc->vtable->GetCurrentPosition)
                        (g_IDirectSoundBuffer_PTR_02cf49cc,&uStack_8,&DStack_c);
      if (uVar1 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
        _sprintf(acStack_19c,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_19c);
        return 0;
      }
      uVar1 = uStack_8 / (uint)g_INT_02cf49e8;
      if (g_INT_02cf49ec <= (int)uVar1) {
        uVar1 = g_INT_02cf49ec - 1;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      do {
        if (uVar1 == g_INT_02cf49f0) {
          return 1;
        }
        iVar2 = sound_snddx_cpp_fillStreamBuffer_FUN_0055a820();
      } while (iVar2 != 0);
      return 0;
    }
    iVar2 = 0;
  }
  else {
    sound_sndmain_cpp_pollAllSfxSlots_FUN_0055a0b0();
    iVar2 = 1;
  }
  return iVar2;
}
