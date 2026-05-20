// Name: core_dtri.cpp_clipPolygonToRight_FUN_0049bb30
// Address: 0049bb30
// MANUAL RECONSTRUCTION
// Address Range: [[0049bb30, 0049bc7a]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_0049bb30(float x_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_0049bb30(float x_max)

{
  byte bVar1;
  CVector3f *point2_ptr;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer2VertexCount) {
    point1_ptr = g_ClipBuffer2Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer2VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer2VertexCount;
      }
      point2_ptr = g_ClipBuffer2Vertices + uVar2;
      bVar1 = x_max < point1_ptr->x;
      if (x_max < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != point1_ptr) {
          g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount] = *point1_ptr;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point2_ptr,point1_ptr,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,
                   0.0,(double)-x_max);
        break;
      case 2:
        if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != point1_ptr) {
          g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount] = *point1_ptr;
        }
        g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,point2_ptr,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,
                   0.0,(double)-x_max);
        break;
      default:
        goto switchD_0049bb9a_caseD_3;
      }
      g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
switchD_0049bb9a_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer2VertexCount);
  }
  return;
}
