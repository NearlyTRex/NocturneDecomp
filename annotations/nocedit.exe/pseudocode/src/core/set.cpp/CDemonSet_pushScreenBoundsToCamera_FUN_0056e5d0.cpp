// Name: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0
// Address: 0056e5d0
// Address Range: [[0056e5d0, 0056e7b2]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0(CDemonSet *this_ptr,int vertex_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0(CDemonSet *this_ptr,int vertex_count)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  
  if (g_SkipClearBuffersSceneCamera != (CDemonCamera *)0x0) {
    pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    local_c = g_ViewportRightFixed - g_ViewportCenterXFixed;
    iVar5 = g_ViewportRightFixed + g_ViewportCenterXFixed;
    iVar3 = g_ViewportBottomFixed - g_ViewportCenterYFixed;
    local_8 = g_ViewportBottomFixed + g_ViewportCenterYFixed;
    local_10 = 0;
    if (0 < vertex_count) {
      do {
        if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar2 = (pSVar4->projected_vertex).screen_x;
          if (iVar2 < iVar5) {
            iVar5 = iVar2;
          }
          iVar2 = (pSVar4->projected_vertex).screen_x;
          if (local_c < iVar2) {
            local_c = iVar2;
          }
          iVar2 = (pSVar4->projected_vertex).screen_y;
          if (iVar2 < iVar3) {
            iVar3 = iVar2;
          }
          iVar2 = (pSVar4->projected_vertex).screen_y;
          if (local_8 < iVar2) {
            local_8 = iVar2;
          }
        }
        else {
          iVar2 = (pSVar4->projected_vertex).transformed_x;
          if ((-(pSVar4->projected_vertex).transformed_z < iVar2) &&
             (iVar1 = (pSVar4->projected_vertex).transformed_z, iVar2 < iVar1)) {
            iVar2 = (int)(((longlong)(pSVar4->projected_vertex).transformed_x *
                          (longlong)g_ViewportCenterXFixed) / (longlong)iVar1) +
                    g_ViewportRightFixed;
            if (local_c < iVar2) {
              local_c = iVar2;
            }
            if (iVar2 < iVar5) {
              iVar5 = iVar2;
            }
          }
          iVar2 = (pSVar4->projected_vertex).transformed_y;
          if ((-(pSVar4->projected_vertex).transformed_z < iVar2) &&
             (iVar1 = (pSVar4->projected_vertex).transformed_z, iVar2 < iVar1)) {
            iVar2 = (int)(((longlong)(pSVar4->projected_vertex).transformed_y *
                          (longlong)g_ViewportCenterYFixed) / (longlong)iVar1) +
                    g_ViewportBottomFixed;
            if (local_8 < iVar2) {
              local_8 = iVar2;
            }
            if (iVar2 < iVar3) {
              iVar3 = iVar2;
            }
          }
          if ((pSVar4->projected_vertex).transformed_z <= (pSVar4->projected_vertex).transformed_x)
          {
            local_c = g_ViewportCenterXFixed + g_ViewportRightFixed;
          }
          if ((pSVar4->projected_vertex).transformed_x <= -(pSVar4->projected_vertex).transformed_z)
          {
            iVar5 = g_ViewportRightFixed - g_ViewportCenterXFixed;
          }
          if ((pSVar4->projected_vertex).transformed_z <= (pSVar4->projected_vertex).transformed_y)
          {
            iVar3 = g_ViewportCenterYFixed + g_ViewportBottomFixed;
          }
          if ((pSVar4->projected_vertex).transformed_y <= -(pSVar4->projected_vertex).transformed_z)
          {
            local_8 = g_ViewportBottomFixed - g_ViewportCenterYFixed;
          }
        }
        local_10 = local_10 + 1;
        pSVar4 = pSVar4 + 1;
      } while (local_10 < vertex_count);
    }
    core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740
              (g_SkipClearBuffersSceneCamera,iVar5 >> 0x10,local_c >> 0x10,iVar3 >> 0x10,
               local_8 >> 0x10);
  }
  return;
}
