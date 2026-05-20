// Name: core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0
// Address: 0049bdf0
// MANUAL RECONSTRUCTION
// Address Range: [[0049bdf0, 0049bf40]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_0049bdf0(float z_near)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_0049bdf0(float z_near)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer4VertexCount) {
    point1_ptr = g_ClipBuffer4Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer4VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer4VertexCount;
      }
      bVar1 = point1_ptr->z < z_near;
      if (g_ClipBuffer4Vertices[uVar2].z < z_near) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != point1_ptr) {
          g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount] = *point1_ptr;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipBuffer4Vertices + uVar2,point1_ptr,
                   g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,(double)z_near);
        break;
      case 2:
        if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != point1_ptr) {
          g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount] = *point1_ptr;
        }
        g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,g_ClipBuffer4Vertices + uVar2,
                   g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,(double)z_near);
        break;
      default:
        goto switchD_0049be64_caseD_3;
      }
      g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
switchD_0049be64_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer4VertexCount);
  }
  return;
}
