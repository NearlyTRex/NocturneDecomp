// Name: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
// Address: 00420320
// Address Range: [[00420320, 004204ef]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D * this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  CRect local_20;
  SRenderVertex *local_10;
  int local_c;
  int local_8;
  
  if (g_CurrentShadowLight != (CDemonLight *)0x0) {
    pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    local_c = g_ViewportRightFixed + g_ViewportCenterXFixed;
    local_20.top = g_ViewportRightFixed - g_ViewportCenterXFixed;
    local_20.bottom = g_ViewportBottomFixed + g_ViewportCenterYFixed;
    local_8 = g_ViewportBottomFixed - g_ViewportCenterYFixed;
    local_10 = pSVar3 + 8;
    do {
      if ((int)((pSVar3->projected_vertex).screen_x & -0x80000000) == 0) {
        iVar2 = (pSVar3->projected_vertex).screen_x;
        if (iVar2 < local_c) {
          local_c = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_x;
        if (local_20.top < iVar2) {
          local_20.top = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_y;
        if (iVar2 < local_8) {
          local_8 = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_y;
        if (local_20.bottom < iVar2) {
          local_20.bottom = iVar2;
        }
      }
      else {
        iVar2 = (pSVar3->projected_vertex).transformed_x;
        if ((-(pSVar3->projected_vertex).transformed_z < iVar2) &&
           (iVar1 = (pSVar3->projected_vertex).transformed_z, iVar2 < iVar1)) {
          iVar2 = (int)(((longlong)(pSVar3->projected_vertex).transformed_x *
                        (longlong)g_ViewportCenterXFixed) / (longlong)iVar1) + g_ViewportRightFixed;
          if (local_20.top < iVar2) {
            local_20.top = iVar2;
          }
          if (iVar2 < local_c) {
            local_c = iVar2;
          }
        }
        iVar2 = (pSVar3->projected_vertex).transformed_y;
        if ((-(pSVar3->projected_vertex).transformed_z < iVar2) &&
           (iVar1 = (pSVar3->projected_vertex).transformed_z, iVar2 < iVar1)) {
          iVar2 = (int)(((longlong)(pSVar3->projected_vertex).transformed_y *
                        (longlong)g_ViewportCenterYFixed) / (longlong)iVar1) + g_ViewportBottomFixed
          ;
          if (local_20.bottom < iVar2) {
            local_20.bottom = iVar2;
          }
          if (iVar2 < local_8) {
            local_8 = iVar2;
          }
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_x) {
          local_20.top = g_ViewportCenterXFixed + g_ViewportRightFixed;
        }
        if ((pSVar3->projected_vertex).transformed_x <= -(pSVar3->projected_vertex).transformed_z) {
          local_c = g_ViewportRightFixed - g_ViewportCenterXFixed;
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_y) {
          local_8 = g_ViewportCenterYFixed + g_ViewportBottomFixed;
        }
        if ((pSVar3->projected_vertex).transformed_y <= -(pSVar3->projected_vertex).transformed_z) {
          local_20.bottom = g_ViewportBottomFixed - g_ViewportCenterYFixed;
        }
      }
      pSVar3 = pSVar3 + 1;
    } while (pSVar3 != local_10);
    local_20.top = local_20.top >> 0x10;
    local_20.right = local_8 >> 0x10;
    local_20.bottom = local_20.bottom >> 0x10;
    local_20.left = local_c >> 0x10;
    local_c = local_20.left;
    local_8 = local_20.right;
    iVar2 = core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00476000
                      (g_CurrentShadowLight,&local_20);
    return iVar2;
  }
  return 1;
}
