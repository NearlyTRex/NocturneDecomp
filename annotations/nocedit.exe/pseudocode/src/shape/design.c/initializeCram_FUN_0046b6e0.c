// Name: shape_design.c_initializeCram_FUN_0046b6e0
// Address: 0046b6e0
// Address Range: [[0046b6e0, 0046b760]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_initializeCram_FUN_0046b6e0(SCram *cram)

#include "nocturne.h"

void __cdecl shape_design_c_initializeCram_FUN_0046b6e0(SCram *cram)

{
  memset(cram,0,0x74);
  cram->filename[0] = '\0';
  cram->atlas_dimension = 0;
  cram->padding_size = 2;
  cram->coverage_threshold = 0x5f;
  cram->min_atlas_size = 1;
  cram->num_maps = 1;
  cram->fill_gaps = 1;
  cram->enable_visualization = 1;
  cram->paint_borders = 1;
  cram->max_iterations = 0;
  return;
}
