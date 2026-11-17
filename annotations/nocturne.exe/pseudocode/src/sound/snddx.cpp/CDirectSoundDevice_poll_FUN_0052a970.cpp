// Name: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970
// Address: 0052a970
// Address Range: [[0052a970, 0052aa3f]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0052a970(CDirectSoundDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0052a970(CDirectSoundDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char acStack_19c [400];
  uint local_c;
  DWORD local_8;
  
  if (g_IDirectSound3DListener_PTR_02dc9220 == (IDirectSound3DListener *)0x0) {
    if (g_IDirectSoundBuffer_PTR_02dc921c != (IDirectSoundBuffer *)0x0) {
      uVar2 = (*g_IDirectSoundBuffer_PTR_02dc921c->vtable->GetCurrentPosition)
                        (g_IDirectSoundBuffer_PTR_02dc921c,&local_c,&local_8);
      if (uVar2 != 0) {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
        _sprintf(acStack_19c,"DirectSux: Unable to %s.  (%s)",
                   "Get position of secondary buffer",pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_19c);
        return 0;
      }
      uVar2 = local_c / (uint)g_INT_02dc9238;
      if (g_INT_02dc923c <= (int)uVar2) {
        uVar2 = g_INT_02dc923c - 1;
      }
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      do {
        if (uVar2 == g_INT_02dc9240) {
          return 1;
        }
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_00529c10();
      } while (iVar1 != 0);
      return 0;
    }
    iVar1 = 0;
  }
  else {
    sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810();
    iVar1 = 1;
  }
  return iVar1;
}
