// Name: core_dtri.cpp_clipPolygonToFar_FUN_0047a210
// Address: 0047a210
// Address Range: [[0047a210, 0047a360]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0047a210(float z_far)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0047a210(float z_far)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer5VertexCount) {
    point1_ptr = g_ClipBuffer5Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer5VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer5VertexCount;
      }
      bVar1 = z_far < point1_ptr->z;
      if (z_far < g_ClipBuffer5Vertices[uVar2].z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (&g_CVector3f_01c59e78 + g_ClipOutputVertexCount != point1_ptr) {
          (&g_CVector3f_01c59e78)[g_ClipOutputVertexCount].x = point1_ptr->x;
          (&g_CVector3f_01c59e78)[g_ClipOutputVertexCount].y = point1_ptr->y;
          (&g_CVector3f_01c59e78)[g_ClipOutputVertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (g_ClipBuffer5Vertices + uVar2,point1_ptr,
                   &g_CVector3f_01c59e78 + g_ClipOutputVertexCount,0.0,0.0,-1.0,(double)z_far);
        break;
      case 2:
        if (&g_CVector3f_01c59e78 + g_ClipOutputVertexCount != point1_ptr) {
          (&g_CVector3f_01c59e78)[g_ClipOutputVertexCount].x = point1_ptr->x;
          (&g_CVector3f_01c59e78)[g_ClipOutputVertexCount].y = point1_ptr->y;
          (&g_CVector3f_01c59e78)[g_ClipOutputVertexCount].z = point1_ptr->z;
        }
        g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point1_ptr,g_ClipBuffer5Vertices + uVar2,
                   &g_CVector3f_01c59e78 + g_ClipOutputVertexCount,0.0,0.0,-1.0,(double)z_far);
        break;
      default:
        goto switchD_0047a284_caseD_3;
      }
      g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
switchD_0047a284_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer5VertexCount);
  }
  return;
}
