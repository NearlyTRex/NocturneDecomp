// Name: core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
// Address: 00420680
// Address Range: [[00420680, 0042083e]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D * this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D *this_ptr)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint corner_index;
  int iVar5;
  int iVar6;
  int local_94 [24];
  CVector3f local_34;
  CVector3i local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar4 = 0xff;
  corner_index = 0;
  iVar6 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr,&local_34,corner_index);
    local_28.x = (int)ROUND(local_34.x * 256.0f);
    local_28.y = (int)ROUND(local_34.y * 256.0f);
    local_28.z = (int)ROUND(local_34.z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar6),&local_28);
    if ((*(byte *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x +
                  iVar6 + 3) & 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 & *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                      screen_x + iVar6);
    }
    corner_index = corner_index + 1;
    iVar6 = iVar6 + 0x30;
  } while ((int)corner_index < 8);
  if (uVar4 == 0) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
      iVar2 = *(int *)((int)&(pSVar1->projected_vertex).transformed_x + iVar5);
      local_18 = *(int *)((int)&(pSVar1->projected_vertex).transformed_y + iVar5);
      local_14 = *(int *)((int)&(pSVar1->projected_vertex).transformed_z + iVar5);
      local_1c = iVar2;
      *(uint *)((int)local_94 + iVar6) =
           ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_14) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_14) >> 0x20) << 0x10
           ) + ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar2) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar2) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_18) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_18) >>
                            0x20) << 0x10) + g_CameraOriginX;
      iVar3 = local_1c;
      *(uint *)((int)local_94 + iVar6 + 4) =
           ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_14) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_14) >> 0x20) << 0x10
           ) + ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar2) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar2) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_18) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_18) >>
                            0x20) << 0x10) + g_CameraOriginY;
      iVar5 = iVar5 + 0x30;
      *(uint *)((int)local_94 + iVar6 + 8) =
           ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_14) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_14) >> 0x20) << 0x10
           ) + ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_18) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_18) >>
                            0x20) << 0x10) + g_CameraOriginZ;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 != 0x180);
    iVar6 = (*((g_CurrentSceneCamera->base).vtable)->isVisible)();
    return iVar6;
  }
  return 0;
}
