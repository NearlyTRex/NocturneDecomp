// Name: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_00555a80
// Address: 00555a80
// Address Range: [[00555a80, 00555b52]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_00555a80(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_00555a80(CDirectSoundDevice *this_ptr)

{
  uint uVar1;
  int iVar2;
  char acStack_19c [400];
  DWORD DStack_c;
  uint uStack_8;
  
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
  if ((int)uVar1 < 1) {
    if (g_IDirectSoundBuffer_PTR_0264a5cc != (IDirectSoundBuffer *)0x0) {
      uVar1 = (*g_IDirectSoundBuffer_PTR_0264a5cc->vtable->GetCurrentPosition)
                        (g_IDirectSoundBuffer_PTR_0264a5cc,&uStack_8,&DStack_c);
      if (uVar1 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
        _sprintf(acStack_19c,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_19c);
        return 0;
      }
      uVar1 = uStack_8 / (uint)g_INT_0264a5e8;
      if (g_INT_0264a5ec <= (int)uVar1) {
        uVar1 = g_INT_0264a5ec - 1;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      do {
        if (uVar1 == g_INT_0264a5f0) {
          return 1;
        }
        iVar2 = sound_snddx_cpp_fillStreamBuffer_FUN_00554c80();
      } while (iVar2 != 0);
      return 0;
    }
    iVar2 = 0;
  }
  else {
    sound_sndmain_cpp_pollAllSfxSlots_FUN_00554510();
    iVar2 = 1;
  }
  return iVar2;
}
