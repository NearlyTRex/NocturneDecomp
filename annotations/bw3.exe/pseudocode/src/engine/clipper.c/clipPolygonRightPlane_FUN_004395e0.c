// Name: engine_clipper.c_clipPolygonRightPlane_FUN_004395e0
// Address: 004395e0
// Address Range: [[004395e0, 00439705]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_004395e0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_004395e0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

{
  SRenderVertex *v2;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SRenderVertex *v1;
  int iStack_18;
  SRenderVertex **ppSStack_14;
  
  iVar3 = 0;
  iStack_18 = 0;
  if (0 < vertex_count) {
    ppSStack_14 = input_vertices;
    iVar4 = iVar3;
    v1 = input_vertices[vertex_count + -1];
    do {
      iVar2 = DAT_007e4d50;
      v2 = *ppSStack_14;
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if ((v2->projected_vertex).transformed_z <= (v2->projected_vertex).transformed_x) {
        bVar1 = bVar1 | 2;
      }
      iVar3 = iVar4;
      switch(bVar1) {
      case 0:
        iVar3 = iVar4 + 1;
        output_vertices[iVar4] = v1;
        break;
      case 1:
        if (0xb < DAT_007e4d50) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar2 = DAT_007e4d50 * 0x30;
        iVar3 = iVar4 + 1;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        output_vertices[iVar4] = (SRenderVertex *)(&DAT_007e4b10 + iVar2);
        engine_clipper_c_interpolateVertexRightClip_FUN_004390c0
                  (v2,v1,(SRenderVertex *)(&DAT_007e4b10 + iVar2));
        break;
      case 2:
        output_vertices[iVar4] = v1;
        if (0xb < iVar2) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar2 = DAT_007e4d50 * 0x30;
        iVar3 = iVar4 + 2;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        output_vertices[iVar4 + 1] = (SRenderVertex *)(&DAT_007e4b10 + iVar2);
        engine_clipper_c_interpolateVertexRightClip_FUN_004390c0
                  (v1,v2,(SRenderVertex *)(&DAT_007e4b10 + iVar2));
      }
      ppSStack_14 = ppSStack_14 + 1;
      iStack_18 = iStack_18 + 1;
      iVar4 = iVar3;
      v1 = v2;
    } while (iStack_18 < vertex_count);
  }
  return iVar3;
}
