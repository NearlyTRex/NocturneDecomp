// Name: core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
// Address: 00420680
// MANUAL RECONSTRUCTION
// Address Range: [[00420680, 0042083e]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D *this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int iVar4;
  int iVar7;
  int iVar8;
  uint uVar4;
  uint corner_index;
  CVector3i local_94 [8];
  CVector3f local_34;
  CVector3i local_28;
  SRenderVertex *pSVar1;

  uVar4 = 0xff;
  corner_index = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr,&local_34,corner_index);
    local_28.x = (int)ROUND(local_34.x * 256.0f);
    local_28.y = (int)ROUND(local_34.y * 256.0f);
    local_28.z = (int)ROUND(local_34.z * 256.0f);
    pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pSVar1[corner_index].projected_vertex,&local_28);
    if (0 <= pSVar1[corner_index].projected_vertex.screen_x) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 & pSVar1[corner_index].projected_vertex.screen_x;
    }
    corner_index = corner_index + 1;
  } while ((int)corner_index < 8);
  if (uVar4 == 0) {
    for (iVar8 = 0; iVar8 < 8; iVar8 = iVar8 + 1) {
      pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      iVar1 = pSVar1[iVar8].projected_vertex.transformed_x;
      iVar4 = pSVar1[iVar8].projected_vertex.transformed_y;
      iVar7 = pSVar1[iVar8].projected_vertex.transformed_z;
      local_94[iVar8].x =
           ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar7) >> 0x20) << 0x10) +
           ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar1) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar1) >> 0x20) << 0x10) +
           ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar4) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar4) >> 0x20) << 0x10) +
           g_CameraOriginX;
      local_94[iVar8].y =
           ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)iVar7) >> 0x20) << 0x10) +
           ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar1) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar1) >> 0x20) << 0x10) +
           ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar4) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)iVar4) >> 0x20) << 0x10) +
           g_CameraOriginY;
      local_94[iVar8].z =
           ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)iVar7) >> 0x20) << 0x10) +
           ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar1) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar1) >> 0x20) << 0x10) +
           ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar4) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)iVar4) >> 0x20) << 0x10) +
           g_CameraOriginZ;
    }
    iVar8 = (*((g_CurrentSceneCamera->base).vtable)->testVisibility)(g_CurrentSceneCamera,local_94);
    return iVar8;
  }
  return 0;
}
