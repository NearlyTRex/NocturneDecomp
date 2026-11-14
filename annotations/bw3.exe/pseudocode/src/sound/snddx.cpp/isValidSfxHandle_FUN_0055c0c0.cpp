// Name: sound_snddx.cpp_isValidSfxHandle_FUN_0055c0c0
// Address: 0055c0c0
// Address Range: [[0055c0c0, 0055c0e6]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0055c0c0(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_0055c0c0(int sfx_handle)

{
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) && (*(int *)(sfx_handle * 0x24 + 0x2cf500c) != 0)) {
    return 1;
  }
  return 0;
}
