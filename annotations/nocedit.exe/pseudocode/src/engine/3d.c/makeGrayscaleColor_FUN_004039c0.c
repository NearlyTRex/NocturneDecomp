// Name: engine_3d.c_makeGrayscaleColor_FUN_004039c0
// Address: 004039c0
// Address Range: [[004039c0, 004039f6]]
// Convention: __cdecl
// Signature: uint __cdecl engine_3d_c_makeGrayscaleColor_FUN_004039c0(int color_value,int lighting_value)

#include "nocturne.h"

uint __cdecl engine_3d_c_makeGrayscaleColor_FUN_004039c0(int color_value,int lighting_value)

{
  if (-1 < color_value) {
    return 0xffffffff;
  }
  return color_value * -0x1010101;
}
