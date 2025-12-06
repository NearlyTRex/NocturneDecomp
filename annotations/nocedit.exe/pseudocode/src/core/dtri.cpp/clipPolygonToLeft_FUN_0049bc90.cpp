// Name: core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90
// Address: 0049bc90
// Address Range: [[0049bc90, 0049bdde]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90(float x_min)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToLeft_FUN_0049bc90(float x_min)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer3VertexCount) {
    point1_ptr = g_ClipBuffer3Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer3VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer3VertexCount;
      }
      point2_ptr = g_ClipBuffer3Vertices + uVar2;
      bVar1 = point1_ptr->x < x_min;
      if (point2_ptr->x < x_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != point1_ptr) {
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].x = point1_ptr->x;
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].y = point1_ptr->y;
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point2_ptr,point1_ptr,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,0.0,
                   0.0,(double)x_min);
        break;
      case 2:
        if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != point1_ptr) {
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].x = point1_ptr->x;
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].y = point1_ptr->y;
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].z = point1_ptr->z;
        }
        g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,point2_ptr,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,0.0,
                   0.0,(double)x_min);
        break;
      default:
        goto switchD_0049bd02_caseD_3;
      }
      g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
switchD_0049bd02_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer3VertexCount);
  }
  return;
}
