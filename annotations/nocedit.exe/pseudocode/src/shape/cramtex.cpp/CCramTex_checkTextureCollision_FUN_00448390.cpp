// Name: shape_cramtex.cpp_CCramTex_checkTextureCollision_FUN_00448390
// Address: 00448390
// Address Range: [[00448390, 004483d3]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_CCramTex_checkTextureCollision_FUN_00448390(CCramTex *this_ptr,CCramTex *other)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_CCramTex_checkTextureCollision_FUN_00448390(CCramTex *this_ptr,CCramTex *other)

{
  if ((((other->width == this_ptr->assigned_map_number) &&
       (this_ptr->placement_bottom < other->padded_height)) &&
      (this_ptr->working_right < other->assigned_map_number)) &&
     ((other->height < this_ptr->working_top && (other->padded_width < this_ptr->working_width)))) {
    return 1;
  }
  return 0;
}
