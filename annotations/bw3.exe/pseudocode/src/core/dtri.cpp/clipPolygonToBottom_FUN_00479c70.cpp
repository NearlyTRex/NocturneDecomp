// Name: core_dtri.cpp_clipPolygonToBottom_FUN_00479c70
// Address: 00479c70
// Address Range: [[00479c70, 00479dc0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00479c70(float y_min)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00479c70(float y_min)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01c59aa0) {
    point1_ptr = g_ClipBuffer1Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c59aa0) {
        uVar2 = uVar2 ^ g_INT_01c59aa0;
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
        core_dtri_cpp_clipLineToPlane_FUN_00479970
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
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point1_ptr,g_ClipBuffer1Vertices + uVar2,
                   g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)y_min);
        break;
      default:
        goto switchD_00479ce4_caseD_3;
      }
      g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
switchD_00479ce4_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c59aa0);
  }
  return;
}
