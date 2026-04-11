// Name: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50
// Address: 005aed50
// MANUAL RECONSTRUCTION
// Address Range: [[005aed50, 005aee1f]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_005aed50(CDirectSoundDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_005aed50(CDirectSoundDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  uint uVar2;
  uint uVar1;
  char *pcVar3;
  int iVar2;
  char acStack_19c [400];
  DWORD local_c;
  DWORD local_8;
  
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
      uVar2 = (*g_DirectSoundSecondaryBuffer->vtable->GetCurrentPosition)
                        (g_DirectSoundSecondaryBuffer,&local_c,&local_8);
      if (uVar2 != 0) {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
        _sprintf
                  (acStack_19c,"DirectSux: Unable to %s.  (%s)",
                   "Get position of secondary buffer",pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_19c);
        return 0;
      }
      uVar1 = local_c / (uint)g_StreamBlockSizeBytes;
      if (g_StreamBlockCount <= (int)uVar1) {
        uVar1 = g_StreamBlockCount - 1;
      }
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      do {
        if (uVar1 == g_StreamCurrentBlock) {
          return 1;
        }
        iVar2 = sound_snddx_cpp_fillStreamBuffer_FUN_005adff0();
      } while (iVar2 != 0);
      return 0;
    }
    iVar1 = 0;
  }
  else {
    sound_sndmain_cpp_pollAllSfxSlots_FUN_005acdb0();
    iVar1 = 1;
  }
  return iVar1;
}
