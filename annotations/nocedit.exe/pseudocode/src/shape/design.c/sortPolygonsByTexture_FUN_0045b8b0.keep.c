// Name: shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
// Address: 0045b8b0
// MANUAL RECONSTRUCTION
// Address Range: [[0045b8b0, 0045b985]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_sortPolygonsByTexture_FUN_0045b8b0(void)

#include "nocturne.h"

void __cdecl shape_design_c_sortPolygonsByTexture_FUN_0045b8b0(void)

{
  int iVar1;
  SShapeEditorPolygon local_19c;
  int local_18;
  int local_14;

  local_18 = g_PolygonCount;
  while (local_18 = local_18 + -1, -1 < local_18) {
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      iVar1 = shape_design_c_polygonTextureNameComparator_FUN_0045b850
                        (g_ModelPolygonData + local_14,g_ModelPolygonData + local_14 + 1);
      if (0 < iVar1) {
        local_19c = g_ModelPolygonData[local_14];
        g_ModelPolygonData[local_14] = g_ModelPolygonData[local_14 + 1];
        g_ModelPolygonData[local_14 + 1] = local_19c;
      }
    }
  }
  return;
}
