// Name: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0
// Address: 004205e0
// Address Range: [[004205e0, 004207af]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  CRect local_20;
  SRenderVertex *local_10;
  int local_c;
  int local_8;
  
  if (g_CurrentShadowLight != (CDemonLight *)0x0) {
    pSVar3 = g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr;
    local_c = g_INT_01c4f000 + g_INT_01c4eff8;
    local_20.x_max = g_INT_01c4f000 - g_INT_01c4eff8;
    local_20.y_max = g_INT_01c4f004 + g_INT_01c4effc;
    local_8 = g_INT_01c4f004 - g_INT_01c4effc;
    local_10 = pSVar3 + 8;
    do {
      if ((int)((pSVar3->projected_vertex).screen_x & -0x80000000) == 0) {
        iVar2 = (pSVar3->projected_vertex).screen_x;
        if (iVar2 < local_c) {
          local_c = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_x;
        if (local_20.x_max < iVar2) {
          local_20.x_max = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_y;
        if (iVar2 < local_8) {
          local_8 = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_y;
        if (local_20.y_max < iVar2) {
          local_20.y_max = iVar2;
        }
      }
      else {
        iVar2 = (pSVar3->projected_vertex).transformed_x;
        if ((-(pSVar3->projected_vertex).transformed_z < iVar2) &&
           (iVar1 = (pSVar3->projected_vertex).transformed_z, iVar2 < iVar1)) {
          iVar2 = (int)(((longlong)(pSVar3->projected_vertex).transformed_x *
                        (longlong)g_INT_01c4eff8) / (longlong)iVar1) + g_INT_01c4f000;
          if (local_20.x_max < iVar2) {
            local_20.x_max = iVar2;
          }
          if (iVar2 < local_c) {
            local_c = iVar2;
          }
        }
        iVar2 = (pSVar3->projected_vertex).transformed_y;
        if ((-(pSVar3->projected_vertex).transformed_z < iVar2) &&
           (iVar1 = (pSVar3->projected_vertex).transformed_z, iVar2 < iVar1)) {
          iVar2 = (int)(((longlong)(pSVar3->projected_vertex).transformed_y *
                        (longlong)g_INT_01c4effc) / (longlong)iVar1) + g_INT_01c4f004;
          if (local_20.y_max < iVar2) {
            local_20.y_max = iVar2;
          }
          if (iVar2 < local_8) {
            local_8 = iVar2;
          }
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_x) {
          local_20.x_max = g_INT_01c4eff8 + g_INT_01c4f000;
        }
        if ((pSVar3->projected_vertex).transformed_x <= -(pSVar3->projected_vertex).transformed_z) {
          local_c = g_INT_01c4f000 - g_INT_01c4eff8;
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_y) {
          local_8 = g_INT_01c4effc + g_INT_01c4f004;
        }
        if ((pSVar3->projected_vertex).transformed_y <= -(pSVar3->projected_vertex).transformed_z) {
          local_20.y_max = g_INT_01c4f004 - g_INT_01c4effc;
        }
      }
      pSVar3 = pSVar3 + 1;
    } while (pSVar3 != local_10);
    local_20.x_max = local_20.x_max >> 0x10;
    local_20.y_min = local_8 >> 0x10;
    local_20.y_max = local_20.y_max >> 0x10;
    local_20.x_min = local_c >> 0x10;
    local_c = local_20.x_min;
    local_8 = local_20.y_min;
    iVar2 = core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_004657c0
                      (g_CurrentShadowLight,&local_20);
    return iVar2;
  }
  return 1;
}
