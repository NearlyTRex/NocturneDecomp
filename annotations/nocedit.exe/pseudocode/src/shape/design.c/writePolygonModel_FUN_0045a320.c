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
  uint extraout_EDX;
  char *pcVar3;
  float10 fVar4;
  double dVar5;
  int iVar6;
  FILE *pFVar7;
  uint uVar8;
  char *pcVar9;
  byte *puVar10;
  int iVar11;
  
  shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon_index);
  fVar4 = (float10)g_ModelPolygonData[polygon_index].normal.x * (float10)65535f;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,polygon_index * 0x184));
  iVar11 = (int)ROUND(fVar4);
  fVar4 = (float10)g_ModelPolygonData[polygon_index].normal.y * (float10)65535f;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
  iVar6 = (int)ROUND(fVar4);
  fVar4 = (float10)g_ModelPolygonData[polygon_index].normal.z * (float10)65535f;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
  pFVar7 = (FILE *)(int)ROUND(fVar4);
  fVar4 = (float10)scale_factor *
          (float10)g_ModelPolygonData[polygon_index].plane_distance * (float10)65535 *
          (float10)256;
  crt_math_c_round_FUN_005fe6b0
            ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),polygon_index * 0x184));
  pcVar9 = (char *)(int)ROUND(fVar4);
  if (g_ModelPolygonData[polygon_index].polygon_type == 1) {
    if (g_EditorColorIndex != g_ModelPolygonData[polygon_index].material_id) {
      pcVar9 = "\tCOLOR\t%d\n";
      iVar6 = 0x45a3fe;
      pFVar7 = output_file;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tCOLOR\t%d\n",g_ModelPolygonData[polygon_index].material_id);
      g_EditorColorIndex = g_ModelPolygonData[polygon_index].material_id;
    }
    crt_stdio_c_fprintf_FUN_005fe6d0
              (output_file,"\tFACET%d\t%d,%d,%d,%d",
               g_ModelPolygonData[polygon_index].vertex_indices_count,iVar11,iVar6,pFVar7,pcVar9);
    puVar10 = (byte *)0x0;
    while ((int)puVar10 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count) {
      pFVar7 = output_file;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%d",
                 g_ModelPolygonData[polygon_index].vertex_indices[(int)puVar10]);
      puVar10 = (byte *)((int)&pFVar7->_ptr + 1);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\n");
  }
  else {
    pcVar9 = g_TempTextureName;
    uVar8 = 0x45a4c0;
    iVar2 = crt_string_c_strcmp_FUN_005fef20
                      (g_TempTextureName,g_ModelPolygonData[polygon_index].texture_name);
    if (iVar2 != 0) {
      pcVar9 = g_ModelPolygonData[polygon_index].texture_name;
      pcVar3 = g_TempTextureName;
      do {
        cVar1 = *pcVar9;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      uVar8 = 0x45a50c;
      pcVar9 = (char *)output_file;
      crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\tTEXTURE\t'%s'\n",g_TempTextureName);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0
              (output_file,"\tFACET%dTMAP\t%d,%d,%d,%d",
               g_ModelPolygonData[polygon_index].vertex_indices_count,iVar11,iVar6,uVar8,pcVar9);
    for (iVar11 = 0; iVar11 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        iVar11 = iVar11 + 1) {
      iVar6 = 0x45a587;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%d",g_ModelPolygonData[polygon_index].vertex_indices[iVar11]);
      iVar11 = 0x45a5b4;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%f",
                 SUB84 /* extract 2-byte value */((double)g_ModelPolygonData[polygon_index].uv_u[iVar6],0),
                 (int)((ulonglong)(double)g_ModelPolygonData[polygon_index].uv_u[iVar6] >> 0x20));
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,",%f",
                 SUB84 /* extract 2-byte value */((double)g_ModelPolygonData[polygon_index].uv_v[iVar11],0));
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"\n");
  }
  return;
}
