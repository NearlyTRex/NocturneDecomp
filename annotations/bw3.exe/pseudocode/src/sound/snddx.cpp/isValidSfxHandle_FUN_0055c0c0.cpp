// Name: sound_snddx.cpp_isValidSfxHandle_FUN_0055c0c0
// Address: 0055c0c0
// Address Range: [[0055c0c0, 0055c0e6]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0055c0c0(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0055c0c0(int sfx_handle)

{
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) &&
     (g_IDirectSoundBuffer_PTR_ARRAY_02cf500c[sfx_handle * 9] != (IDirectSoundBuffer *)0x0)) {
    return 1;
  }
  return 0;
}
