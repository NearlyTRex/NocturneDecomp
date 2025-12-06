// Name: shape_cramtex.cpp_setupTextureForPlacement_FUN_004483e0
// Address: 004483e0
// Address Range: [[004483e0, 00448434]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_setupTextureForPlacement_FUN_004483e0(SCramWorkingEntry * destination, SCramWorkingEntry * source)

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_setupTextureForPlacement_FUN_004483e0
          (SCramWorkingEntry *destination,SCramWorkingEntry *source)

{
  int iVar1;
  
  destination->assigned_map_number = source->width;
  destination->placement_flags = source->effective_width;
  destination->placement_bottom = source->height;
  destination->working_right = source->padded_width;
  if (destination->placement_flags == 0) {
    destination->effective_width = destination->padded_width;
    iVar1 = destination->padded_height;
  }
  else {
    destination->effective_width = destination->padded_height;
    iVar1 = destination->padded_width;
  }
  destination->effective_height = iVar1;
  destination->working_top = destination->placement_bottom + destination->effective_width;
  destination->working_width = destination->working_right + destination->effective_height;
  return;
}
