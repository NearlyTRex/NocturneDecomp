// Name: engine_3d.c_makeGrayscaleColor_FUN_004039c0
// Address: 004039c0
// Address Range: [[004039c0, 004039f6]]
// Convention: __cdecl
// Signature: uint __cdecl engine_3d_c_makeGrayscaleColor_FUN_004039c0(int intensity)

#include "nocturne.h"

uint __cdecl engine_3d_c_makeGrayscaleColor_FUN_004039c0(int intensity)

{
  if (-1 < intensity) {
    return 0xffffffff;
  }
  return intensity * -0x1010101;
}
