// Name: shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80
// Address: 00447a80
// Address Range: [[00447a80, 00447aae]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord, int max_coord, int pixel_offset)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord,int max_coord,int pixel_offset)

{
  crt_stack_c_stack_probe_FUN_005ff9f3(0xc);
  return ((max_coord - min_coord) * pixel_offset) / g_CramCurrentAcceptableSize + min_coord;
}
