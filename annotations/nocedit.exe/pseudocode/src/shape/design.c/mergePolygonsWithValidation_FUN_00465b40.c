// Name: shape_design.c_mergePolygonsWithValidation_FUN_00465b40
// Address: 00465b40
// Address Range: [[00465b40, 00465c4c]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_mergePolygonsWithValidation_FUN_00465b40(int polygon1_index,int polygon2_index,float tolerance,int enforce_part_match)

#include "nocturne.h"

void __cdecl shape_design_c_mergePolygonsWithValidation_FUN_00465b40(int polygon1_index,int polygon2_index,float tolerance,int enforce_part_match)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)fcos((float10)tolerance * (float10)0.01745329252);
  iVar1 = shape_design_c_validatePolygonNormals_FUN_00461d80
                    (g_ModelPolygonData + polygon1_index,g_ModelPolygonData + polygon2_index,
                     (double)(float)fVar2);
  if (((iVar1 != 0) &&
      (iVar1 = shape_design_c_findVertexMatches_FUN_00461ae0
                         ((int *)g_ModelPolygonData[polygon1_index].vertex_indices,
                          (int *)g_ModelPolygonData[polygon2_index].vertex_indices,
                          g_ModelPolygonData[polygon1_index].vertex_indices_count,
                          g_ModelPolygonData[polygon2_index].vertex_indices_count), iVar1 != 0)) &&
     (iVar1 = _strcmp
                        (g_ModelPolygonData[polygon1_index].lightmap_name,
                         g_ModelPolygonData[polygon2_index].lightmap_name), iVar1 == 0)) {
    if ((enforce_part_match != 0) &&
       (g_ModelPolygonData[polygon1_index].part_assignment !=
        g_ModelPolygonData[polygon2_index].part_assignment)) {
      return;
    }
    shape_design_c_mergeAdjacentPolygons_FUN_00462b70(polygon1_index,polygon2_index);
  }
  shape_design_c_removeUnusedVertices_FUN_00463830();
  return;
}
