// Name: sound_sndwav.cpp_CWavOutDevice_poll_FUN_0055dc40
// Address: 0055dc40
// Address Range: [[0055dc40, 0055dcb8]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_0055dc40(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_0055dc40(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int iVar2;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < _DAT_02cf5500) {
    iVar2 = 0;
    do {
      if ((*(int *)(iVar2 + 0x2cf5490) == 0) || (*(int *)(iVar2 + 0x2cf54d0) == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_0055a560("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((*(byte *)(*(int *)(iVar2 + 0x2cf5490) + 0x10) & 1) != 0) &&
         (iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(buffer_index), iVar1 == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_0055a560("WavOutDevice::poll - sendWavOutBuffer failed");
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar2 = iVar2 + 4;
    } while (buffer_index < _DAT_02cf5500);
  }
  return 1;
}
