// Name: shape_design.c_removeDuplicatePolygons_FUN_004651b0
// Address: 004651b0
// MANUAL RECONSTRUCTION
// Address Range: [[004651b0, 00465309]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)

#include "nocturne.h"

void __cdecl shape_design_c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)

{
  int local_24;
  int local_20;
  int local_18;
  uint local_14;
  
  for (local_20 = 0; local_20 < g_PolygonCount; local_20 = local_20 + 1) {
    local_24 = local_20 + 1;
    while (local_24 < g_PolygonCount) {
      if (g_ModelPolygonData[local_20].vertex_indices_count ==
          g_ModelPolygonData[local_24].vertex_indices_count) {
        if ((respect_part_assignments == 0) ||
           (g_ModelPolygonData[local_20].part_assignment ==
            g_ModelPolygonData[local_24].part_assignment)) {
          local_14 = 0;
          for (local_18 = 0; local_18 < (int)g_ModelPolygonData[local_20].vertex_indices_count;
              local_18 = local_18 + 1) {
            if (g_ModelPolygonData[local_20].vertex_indices[local_18] ==
                g_ModelPolygonData[local_24].vertex_indices[local_18]) {
              local_14 = local_14 + 1;
            }
          }
          if (local_14 == g_ModelPolygonData[local_20].vertex_indices_count) {
            for (local_18 = local_24; local_18 < g_PolygonCount + -1; local_18 = local_18 + 1) {
              g_ModelPolygonData[local_18] = g_ModelPolygonData[local_18 + 1];
            }
            g_PolygonCount = g_PolygonCount + -1;
          }
          else {
            local_24 = local_24 + 1;
          }
        }
        else {
          local_24 = local_24 + 1;
        }
      }
      else {
        local_24 = local_24 + 1;
      }
    }
  }
  return;
}
