// Name: engine_clipper.c_clipPolygonRightPlane_FUN_00431b90
// Address: 00431b90
// Address Range: [[00431b90, 00431cbb]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_00431b90(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_00431b90(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

{
  SRenderVertex *v2;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SRenderVertex *v1;
  int local_18;
  SRenderVertex **local_14;
  
  iVar3 = 0;
  local_18 = 0;
  if (0 < vertex_count) {
    local_14 = input_vertices;
    iVar4 = iVar3;
    v1 = input_vertices[vertex_count + -1];
    do {
      iVar2 = DAT_00767b38;
      v2 = *local_14;
      bVar1 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((v2->projected_vertex).transformed_x <= -(v2->projected_vertex).transformed_z) {
        bVar1 = bVar1 | 2;
      }
      iVar3 = iVar4;
      switch(bVar1) {
      case 0:
        iVar3 = iVar4 + 1;
        output_vertices[iVar4] = v1;
        break;
      case 1:
        if (0xb < DAT_00767b38) {
          g_CurrentFilename = "..\\engine\\clipper.c";
          g_CurrentLineNumber = 94;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
        }
        iVar2 = DAT_00767b38 * 0x30;
        iVar3 = iVar4 + 1;
        DAT_00767b38 = DAT_00767b38 + 1;
        output_vertices[iVar4] = (SRenderVertex *)(&DAT_007678f8 + iVar2);
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                  (v2,v1,(SRenderVertex *)(&DAT_007678f8 + iVar2));
        break;
      case 2:
        output_vertices[iVar4] = v1;
        if (0xb < iVar2) {
          g_CurrentFilename = "..\\engine\\clipper.c";
          g_CurrentLineNumber = 94;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
        }
        iVar2 = DAT_00767b38 * 0x30;
        iVar3 = iVar4 + 2;
        DAT_00767b38 = DAT_00767b38 + 1;
        output_vertices[iVar4 + 1] = (SRenderVertex *)(&DAT_007678f8 + iVar2);
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                  (v1,v2,(SRenderVertex *)(&DAT_007678f8 + iVar2));
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      iVar4 = iVar3;
      v1 = v2;
    } while (local_18 < vertex_count);
  }
  return iVar3;
}
