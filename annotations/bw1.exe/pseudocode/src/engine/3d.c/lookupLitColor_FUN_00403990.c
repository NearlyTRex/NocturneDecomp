// Name: engine_3d.c_lookupLitColor_FUN_00403990
// Address: 00403990
// Address Range: [[00403990, 004039c6]]
// Convention: __cdecl
// Signature: uint __cdecl engine_3d_c_lookupLitColor_FUN_00403990(int color_value,int lighting_value)

#include "nocturne.h"

uint __cdecl engine_3d_c_lookupLitColor_FUN_00403990(int color_value,int lighting_value)

{
  if (-1 < color_value) {
    return 0xffffffff;
  }
  return color_value * -0x1010101;
}
