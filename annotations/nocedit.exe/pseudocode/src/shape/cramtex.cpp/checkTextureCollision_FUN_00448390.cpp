// Name: shape_cramtex.cpp_checkTextureCollision_FUN_00448390
// Address: 00448390
// Address Range: [[00448390, 004483d3]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_checkTextureCollision_FUN_00448390 (SCramWorkingEntry *placed_texture,SCramWorkingEntry *test_texture)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_checkTextureCollision_FUN_00448390
          (SCramWorkingEntry *placed_texture,SCramWorkingEntry *test_texture)

{
  if ((((test_texture->width == placed_texture->assigned_map_number) &&
       (placed_texture->placement_bottom < test_texture->padded_height)) &&
      (placed_texture->working_right < test_texture->assigned_map_number)) &&
     ((test_texture->height < placed_texture->working_top &&
      (test_texture->padded_width < placed_texture->working_width)))) {
    return 1;
  }
  return 0;
}
