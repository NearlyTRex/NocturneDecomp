// Name: sound_snddx.cpp_isValidSfxHandle_FUN_0055651c
// Address: 0055651c
// Address Range: [[0055651c, 00556546]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0055651c(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0055651c(int sfx_handle)

{
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) && (*(int *)(sfx_handle * 0x24 + 0x264ac10) != 0)) {
    return 1;
  }
  return 0;
}
