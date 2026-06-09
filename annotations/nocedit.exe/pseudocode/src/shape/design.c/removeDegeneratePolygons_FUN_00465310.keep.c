// Name: shape_design.c_removeDegeneratePolygons_FUN_00465310
// Address: 00465310
// MANUAL RECONSTRUCTION
// Address Range: [[00465310, 004654d5]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_removeDegeneratePolygons_FUN_00465310(void)

#include "nocturne.h"

void __cdecl shape_design_c_removeDegeneratePolygons_FUN_00465310(void)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  uint local_14;
  uint uVar1;
  int iVar2;
  
  do {
    local_24 = 0;
    while( true ) {
      if (g_PolygonCount <= local_24) {
        return;
      }
      uVar1 = g_ModelPolygonData[local_24].vertex_indices_count;
      local_14 = 0xffffffff;
      for (local_20 = 0; iVar1 = local_20, local_20 < (int)(uVar1 - 1); local_20 = local_20 + 1) {
        while (local_1c = iVar1 + 1, local_1c < (int)uVar1) {
          iVar2 = iVar1 + 1;
          iVar1 = local_1c;
          if (g_ModelPolygonData[local_24].vertex_indices[local_20] ==
              g_ModelPolygonData[local_24].vertex_indices[iVar2]) {
            local_14 = g_ModelPolygonData[local_24].vertex_indices[local_20];
          }
        }
      }
      if (local_14 != 0xffffffff) break;
LAB_00465325:
      local_24 = local_24 + 1;
    }
    local_20 = 0;
    while( true ) {
      if ((int)uVar1 <= local_20) goto LAB_00465325;
      if (g_ModelPolygonData[local_24].vertex_indices[local_20] == local_14) break;
      local_20 = local_20 + 1;
    }
    for (local_1c = local_20; local_1c < (int)(uVar1 - 1); local_1c = local_1c + 1) {
      g_ModelPolygonData[local_24].vertex_indices[local_1c] =
           g_ModelPolygonData[local_24].vertex_indices[local_1c + 1];
    }
    g_ModelPolygonData[local_24].vertex_indices_count =
         g_ModelPolygonData[local_24].vertex_indices_count - 1;
    if ((int)g_ModelPolygonData[local_24].vertex_indices_count < 3) {
      for (local_20 = local_24; local_20 < g_PolygonCount + -1; local_20 = local_20 + 1) {
        g_ModelPolygonData[local_20] = g_ModelPolygonData[local_20 + 1];
      }
      g_PolygonCount = g_PolygonCount + -1;
    }
  } while( true );
}
