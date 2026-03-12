// Name: shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
// Address: 0045b8b0
// Address Range: [[0045b8b0, 0045b985]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_sortPolygonsByTexture_FUN_0045b8b0(void)

#include "nocturne.h"

void __cdecl shape_design_c_sortPolygonsByTexture_FUN_0045b8b0(void)

{
  int iVar1;
  int iVar2;
  SShapeEditorPolygon *pSVar3;
  SShapeEditorPolygon *pSVar2;
  uint *puVar3;
  uint *puVar4;
  SShapeEditorPolygon *pSVar4;
  byte bVar5;
  uint local_19c [97];
  int local_18;
  int local_14;
  
  bVar5 = 0;
  local_18 = g_PolygonCount;
  while (local_18 = local_18 + -1, -1 < local_18) {
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      iVar1 = shape_design_c_polygonTextureNameComparator_FUN_0045b850
                        (g_ModelPolygonData + local_14,g_ModelPolygonData + local_14 + 1);
      if (0 < iVar1) {
        pSVar3 = g_ModelPolygonData + local_14;
        puVar4 = local_19c;
        for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = pSVar3->polygon_type;
          pSVar3 = (SShapeEditorPolygon *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        pSVar2 = g_ModelPolygonData + local_14 + 1;
        pSVar4 = g_ModelPolygonData + local_14;
        for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
          pSVar4 = (SShapeEditorPolygon *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
          pSVar2 = (SShapeEditorPolygon *)((int)pSVar2 + (uint)bVar5 * -8 + 4);
          pSVar4->polygon_type = pSVar2->polygon_type;
          pSVar2 = pSVar2;
          pSVar4 = pSVar4;
        }
        puVar3 = local_19c;
        pSVar3 = g_ModelPolygonData + local_14 + 1;
        for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          pSVar3->polygon_type = *puVar3;
          puVar3 = puVar3;
          pSVar3 = (SShapeEditorPolygon *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
    }
  }
  return;
}
