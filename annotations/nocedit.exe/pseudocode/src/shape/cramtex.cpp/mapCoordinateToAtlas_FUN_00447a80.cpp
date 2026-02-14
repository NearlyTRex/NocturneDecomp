// Name: shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80
// Address: 00447a80
// Address Range: [[00447a80, 00447aae]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord,int max_coord,int pixel_offset)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_mapCoordinateToAtlas_FUN_00447a80(int min_coord,int max_coord,int pixel_offset)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  __STK();
  return ((in_stack_00000008 - in_stack_00000004) * min_coord) / g_CramCurrentAcceptableSize +
         in_stack_00000004;
}
