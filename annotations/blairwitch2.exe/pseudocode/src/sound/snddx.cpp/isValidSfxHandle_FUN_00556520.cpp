// Name: sound_snddx.cpp_isValidSfxHandle_FUN_00556520
// Address: 00556520
// Address Range: [[00556520, 00556546]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_00556520(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_00556520(int sfx_handle)

{
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) && (*(int *)(sfx_handle * 0x24 + 0x264ac10) != 0)) {
    return 1;
  }
  return 0;
}
