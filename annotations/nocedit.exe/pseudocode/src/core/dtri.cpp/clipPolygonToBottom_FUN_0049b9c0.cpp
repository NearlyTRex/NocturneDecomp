// Name: core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0
// Address: 0049b9c0
// Address Range: [[0049b9c0, 0049bb10]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0(float y_min)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_0049b9c0(float y_min)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer1VertexCount) {
    point1_ptr = g_ClipBuffer1Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer1VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer1VertexCount;
      }
      bVar1 = point1_ptr->y < y_min;
      if (g_ClipBuffer1Vertices[uVar2].y < y_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != point1_ptr) {
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].x = point1_ptr->x;
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].y = point1_ptr->y;
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipBuffer1Vertices + uVar2,point1_ptr,
                   g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)y_min);
        break;
      case 2:
        if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != point1_ptr) {
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].x = point1_ptr->x;
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].y = point1_ptr->y;
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].z = point1_ptr->z;
        }
        g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,g_ClipBuffer1Vertices + uVar2,
                   g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)y_min);
        break;
      default:
        goto switchD_0049ba34_caseD_3;
      }
      g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
switchD_0049ba34_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer1VertexCount);
  }
  return;
}
