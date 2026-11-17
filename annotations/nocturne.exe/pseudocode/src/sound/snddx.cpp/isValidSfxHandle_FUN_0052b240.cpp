// Name: sound_snddx.cpp_isValidSfxHandle_FUN_0052b240
// Address: 0052b240
// Address Range: [[0052b240, 0052b268]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0052b240(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0052b240(int sfx_handle)

{
  if ((((0 < sfx_handle) && (sfx_handle < 0x1f)) &&
      (g_DirectSoundHardwareSfxBuffers[sfx_handle] != (IDirectSoundBuffer *)0x0)) &&
     (g_INT_ARRAY_02dc9324[sfx_handle] != 0)) {
    return 1;
  }
  return 0;
}
