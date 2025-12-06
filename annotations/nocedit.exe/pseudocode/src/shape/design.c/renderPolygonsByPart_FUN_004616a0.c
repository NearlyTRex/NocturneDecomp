// Name: shape_design.c_renderPolygonsByPart_FUN_004616a0
// Address: 004616a0
// Address Range: [[004616a0, 004616ec]]
// Convention: __cdecl
// Signature: void shape_design.c_renderPolygonsByPart_FUN_004616a0(int part_id)

#include "nocturne.h"

void __cdecl shape_design_c_renderPolygonsByPart_FUN_004616a0(int part_id)

{
  int local_14;
  
  for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
    if (g_ModelPolygonData[local_14].part_assignment == part_id) {
      shape_design_c_renderSinglePolygon_FUN_0045ce20(local_14);
    }
  }
  return;
}
