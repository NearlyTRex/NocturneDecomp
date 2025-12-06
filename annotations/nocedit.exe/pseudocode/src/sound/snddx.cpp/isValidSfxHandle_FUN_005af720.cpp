// Name: sound_snddx.cpp_isValidSfxHandle_FUN_005af720
// Address: 005af720
// Address Range: [[005af720, 005af748]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_isValidSfxHandle_FUN_005af720(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_005af720(int sfx_handle)

{
  if ((((0 < sfx_handle) && (sfx_handle < 0x1f)) &&
      (g_DirectSoundHardwareSfxBuffers[sfx_handle] != (IDirectSoundBuffer *)0x0)) &&
     (g_DirectSound3DBufferInterfaces[sfx_handle] != (IDirectSound3DBuffer *)0x0)) {
    return 1;
  }
  return 0;
}
