// Name: sound_snddx.cpp_FUN_00555fb0
// Address: 00555fb0
// Address Range: [[00555fb0, 00555fe3]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_00555fb0(int param_1)

#include "nocturne.h"

uint sound_snddx_cpp_FUN_00555fb0(int param_1)

{
  if ((((0 < param_1) && (param_1 < 0x41)) && (*(int *)(param_1 * 0x18 + 0x264a5f4) != 0)) &&
     (0 < *(int *)(param_1 * 0x18 + 0x264a5fc))) {
    return 1;
  }
  return 0;
}
