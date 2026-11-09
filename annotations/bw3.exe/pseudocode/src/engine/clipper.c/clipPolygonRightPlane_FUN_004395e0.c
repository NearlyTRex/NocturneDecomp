// Name: engine_clipper.c_clipPolygonRightPlane_FUN_004395e0
// Address: 004395e0
// Address Range: [[004395e0, 00439705]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_004395e0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_004395e0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

{
  SRenderVertex *pSVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  int iStack_18;
  SRenderVertex **ppSStack_14;
  
  iVar4 = 0;
  iStack_18 = 0;
  if (0 < vertex_count) {
    ppSStack_14 = input_vertices;
    iVar5 = iVar4;
    pSVar6 = input_vertices[vertex_count + -1];
    do {
      iVar3 = DAT_007e4d50;
      pSVar1 = *ppSStack_14;
      bVar2 = *(int *)(pSVar6 + 8) <= *(int *)pSVar6;
      if (*(int *)(pSVar1 + 8) <= *(int *)pSVar1) {
        bVar2 = bVar2 | 2;
      }
      iVar4 = iVar5;
      switch(bVar2) {
      case 0:
        iVar4 = iVar5 + 1;
        output_vertices[iVar5] = pSVar6;
        break;
      case 1:
        if (0xb < DAT_007e4d50) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar3 = DAT_007e4d50 * 0x30;
        iVar4 = iVar5 + 1;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        output_vertices[iVar5] = (SRenderVertex *)(&DAT_007e4b10 + iVar3);
        engine_clipper_c_interpolateVertexRightClip_FUN_004390c0
                  (pSVar1,pSVar6,(SRenderVertex *)(&DAT_007e4b10 + iVar3));
        break;
      case 2:
        output_vertices[iVar5] = pSVar6;
        if (0xb < iVar3) {
          _DAT_01d71de0 = "..\\engine\\clipper.c";
          _DAT_01d71de4 = 0x5e;
          core_main_c_FUN_004e4330("Ran out of clipped verts!");
        }
        iVar3 = DAT_007e4d50 * 0x30;
        iVar4 = iVar5 + 2;
        DAT_007e4d50 = DAT_007e4d50 + 1;
        output_vertices[iVar5 + 1] = (SRenderVertex *)(&DAT_007e4b10 + iVar3);
        engine_clipper_c_interpolateVertexRightClip_FUN_004390c0
                  (pSVar6,pSVar1,(SRenderVertex *)(&DAT_007e4b10 + iVar3));
      }
      ppSStack_14 = ppSStack_14 + 1;
      iStack_18 = iStack_18 + 1;
      iVar5 = iVar4;
      pSVar6 = pSVar1;
    } while (iStack_18 < vertex_count);
  }
  return iVar4;
}
