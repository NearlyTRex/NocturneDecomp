// Name: shape_design.c_writePolygonModel_FUN_0045a320
// Address: 0045a320
// Address Range: [[0045a320, 0045a601]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_writePolygonModel_FUN_0045a320(int polygon_index,_FILE *output_file,float scale_factor)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_writePolygonModel_FUN_0045a320(int polygon_index,_FILE *output_file,float scale_factor)

{
  char cVar1;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int local_14;
  int iVar3;
  char cVar4;
  int iVar1;
  int iVar2;
  
  shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon_index);
  iVar1 = (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.x * 65535.0f));
  iVar2 = (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.y * 65535.0f));
  iVar3 = (int)ROUND(ROUND(g_ModelPolygonData[polygon_index].normal.z * 65535.0f));
  if (g_ModelPolygonData[polygon_index].polygon_type == 1) {
    if (g_EditorColorIndex != g_ModelPolygonData[polygon_index].material_id) {
      _fprintf(output_file,"\tCOLOR\t%d\n");
      g_EditorColorIndex = g_ModelPolygonData[polygon_index].material_id;
    }
    _fprintf(output_file,"\tFACET%d\t%d,%d,%d,%d",
               g_ModelPolygonData[polygon_index].vertex_indices_count,iVar1,iVar2,iVar3);
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_14 = local_14 + 1) {
      _fprintf(output_file,",%d");
    }
    _fprintf(output_file,"\n");
  }
  else {
    iVar5 = _strcmp
                      (g_TempTextureName,g_ModelPolygonData[polygon_index].texture_name);
    if (iVar5 != 0) {
      pcVar6 = g_ModelPolygonData[polygon_index].texture_name;
      pcVar7 = g_TempTextureName;
      do {
        cVar4 = *pcVar6;
        *pcVar7 = cVar4;
        if (cVar4 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      _fprintf(output_file,"\tTEXTURE\t'%s'\n");
    }
    _fprintf(output_file,"\tFACET%dTMAP\t%d,%d,%d,%d",
               g_ModelPolygonData[polygon_index].vertex_indices_count,iVar1,iVar2,iVar3);
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_14 = local_14 + 1) {
      _fprintf(output_file,",%d");
      _fprintf(output_file,",%f",(double)g_ModelPolygonData[polygon_index].uv_u[local_14]);
      _fprintf(output_file,",%f",(double)g_ModelPolygonData[polygon_index].uv_v[local_14]);
    }
    _fprintf(output_file,"\n");
  }
  return;
}
