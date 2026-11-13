// Name: sound_snddx.cpp_isValidSfxHandle_FUN_00578f50
// Address: 00578f50
// Address Range: [[00578f50, 00578f76]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_00578f50(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_00578f50(int sfx_handle)

{
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) && (*(int *)(sfx_handle * 0x24 + 0x2c823e0) != 0)) {
    return 1;
  }
  return 0;
}
