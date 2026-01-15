// Name: shape_design.c_writePolygonModel_FUN_0045a320
// Address: 0045a320
// Address Range: [[0045a320, 0045a601]]
// Convention: __cdecl
// Signature: void shape_design.c_writePolygonModel_FUN_0045a320(int polygon_index, FILE * output_file, float scale_factor)

#include "nocturne.h"

void __cdecl
shape_design_c_writePolygonModel_FUN_0045a320
          (int polygon_index,FILE *output_file,float scale_factor)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int local_14;
  
  shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon_index);
  uVar8 = 0x45a35b;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)(g_ModelPolygonData[polygon_index].normal.x * 65535f));
  uVar10 = CONCAT44 /* combine 2-byte values */(uVar8,0x45a376);
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)(g_ModelPolygonData[polygon_index].normal.y * 65535f));
  uVar9 = 0x45a391;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)(g_ModelPolygonData[polygon_index].normal.z * 65535f));
  uVar8 = 0x45a3b7;
  crt_math_c_round_FUN_005fe6b0
            ((double)(scale_factor *
                     g_ModelPolygonData[polygon_index].plane_distance * (float)65535 *
                     (float)256));
  if (g_ModelPolygonData[polygon_index].polygon_type == 1) {
    if (g_EditorColorIndex != g_ModelPolygonData[polygon_index].material_id) {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tCOLOR\t%d\n",g_ModelPolygonData[polygon_index].material_id,uVar8,
                 uVar9,uVar10);
      g_EditorColorIndex = g_ModelPolygonData[polygon_index].material_id;
    }
    crt_stdio_c_fprintf_FUN_005fe6d0
              (output_file,"\tFACET%d\t%d,%d,%d,%d",
               g_ModelPolygonData[polygon_index].vertex_indices_count,(int)ROUND(dVar5),
               (int)ROUND(dVar6),(int)ROUND(dVar7));
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_14 = local_14 + 1) {
      crt_stdio_c_fprintf_FUN_005fe6d0(output_file,",%d");
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\n");
  }
  else {
    iVar2 = crt_string_c_strcmp_FUN_005fef20
                      (g_TempTextureName,g_ModelPolygonData[polygon_index].texture_name);
    if (iVar2 != 0) {
      pcVar3 = g_ModelPolygonData[polygon_index].texture_name;
      pcVar4 = g_TempTextureName;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\tTEXTURE\t'%s'\n");
    }
    crt_stdio_c_fprintf_FUN_005fe6d0
              (output_file,"\tFACET%dTMAP\t%d,%d,%d,%d",
               g_ModelPolygonData[polygon_index].vertex_indices_count,(int)ROUND(dVar5),
               (int)ROUND(dVar6),(int)ROUND(dVar7));
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_14 = local_14 + 1) {
      crt_stdio_c_fprintf_FUN_005fe6d0(output_file,",%d");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%f",(double)g_ModelPolygonData[polygon_index].uv_u[local_14]);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%f",(double)g_ModelPolygonData[polygon_index].uv_v[local_14]);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\n");
  }
  return;
}
