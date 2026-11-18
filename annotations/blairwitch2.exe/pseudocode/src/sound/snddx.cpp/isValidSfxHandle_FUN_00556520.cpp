// Name: sound_snddx.cpp_isValidSfxHandle_FUN_00556520
// Address: 00556520
// Address Range: [[00556520, 00556546]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_00556520(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_00556520(int sfx_handle)

{
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) &&
     (g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9] != (IDirectSoundBuffer *)0x0)) {
    return 1;
  }
  return 0;
}
