// Name: sound_sndwav.cpp_CWavOutDevice_poll_FUN_005580e0
// Address: 005580e0
// Address Range: [[005580e0, 00558158]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_005580e0(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_005580e0(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < g_INT_0264b104) {
    iVar2 = 0;
    do {
      if ((*(int *)(iVar2 + 0x264b094) == 0) || (*(int *)(iVar2 + 0x264b0d4) == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_005549c0("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((*(byte *)(*(int *)(iVar2 + 0x264b094) + 0x10) & 1) != 0) &&
         (iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_00557b90(buffer_index), iVar1 == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_005549c0("WavOutDevice::poll - sendWavOutBuffer failed");
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar2 = iVar2 + 4;
    } while (buffer_index < g_INT_0264b104);
  }
  return 1;
}
