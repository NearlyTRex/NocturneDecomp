// Name: core_dtri.cpp_clipPolygonToTop_FUN_0049b860
// Address: 0049b860
// MANUAL RECONSTRUCTION
// Address Range: [[0049b860, 0049b9ac]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_0049b860(float y_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_0049b860(float y_max)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_ClipInputVertexCount) {
    point1_ptr = g_ClipInputVertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipInputVertexCount) {
        uVar2 = uVar2 ^ g_ClipInputVertexCount;
      }
      bVar1 = y_max < point1_ptr->y;
      if (y_max < g_ClipInputVertices[uVar2].y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != point1_ptr) {
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount] = *point1_ptr;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipInputVertices + uVar2,point1_ptr,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-y_max);
        break;
      case 2:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != point1_ptr) {
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount] = *point1_ptr;
        }
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,g_ClipInputVertices + uVar2,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-y_max);
        break;
      default:
        goto switchD_0049b8cc_caseD_3;
      }
      g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
switchD_0049b8cc_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipInputVertexCount);
  }
  return;
}
