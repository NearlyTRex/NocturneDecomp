// Name: shape_design.c_removeDegenerateTriangles_FUN_00463a20
// Address: 00463a20
// Address Range: [[00463a20, 00463b2b]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_removeDegenerateTriangles_FUN_00463a20(void)

#include "nocturne.h"

void __cdecl shape_design_c_removeDegenerateTriangles_FUN_00463a20(void)

{
  int iVar2;
  SShapeEditorPolygon *pSVar3;
  SShapeEditorPolygon *pSVar4;
  int local_20;
  int local_1c;
  bool bVar1;
  
  do {
    bVar1 = false;
    for (local_20 = 0; local_20 < g_PolygonCount; local_20 = local_20 + 1) {
      if (g_ModelPolygonData[local_20].vertex_indices_count == 3) {
        if (g_ModelPolygonData[local_20].vertex_indices[0] ==
            g_ModelPolygonData[local_20].vertex_indices[1]) {
          bVar1 = true;
        }
        if (g_ModelPolygonData[local_20].vertex_indices[0] ==
            g_ModelPolygonData[local_20].vertex_indices[2]) {
          bVar1 = true;
        }
        if (g_ModelPolygonData[local_20].vertex_indices[1] ==
            g_ModelPolygonData[local_20].vertex_indices[2]) {
          bVar1 = true;
        }
      }
      if (bVar1) break;
    }
    if (!bVar1) {
      return;
    }
    for (local_1c = local_20; local_1c < g_PolygonCount + -1; local_1c = local_1c + 1) {
      pSVar3 = g_ModelPolygonData + local_1c + 1;
      pSVar4 = g_ModelPolygonData + local_1c;
      for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
        pSVar4->polygon_type = pSVar3->polygon_type;
        pSVar3 = (SShapeEditorPolygon *)pSVar3->texture_name;
        pSVar4 = (SShapeEditorPolygon *)pSVar4->texture_name;
      }
    }
    g_PolygonCount = g_PolygonCount + -1;
    if (g_PolygonCount < 1) {
      return;
    }
  } while( true );
}
