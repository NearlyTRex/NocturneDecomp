// Name: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
// Address: 00420320
// Address Range: [[00420320, 004204ef]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D *this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D *this_ptr)

{
  int iVar3;
  int iVar2;
  int iVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  SRenderVertex *pSVar3;
  int iVar7;
  CRect local_20;
  SRenderVertex *local_10;
  int local_c;
  int local_8;
  int iVar1;
  
  if (g_CurrentShadowLight != (CDemonLight *)0x0) {
    pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    local_c = g_Projection.center_x_fixed + g_Projection.half_width_fixed;
    iVar7 = g_Projection.center_x_fixed - g_Projection.half_width_fixed;
    iVar6 = g_Projection.center_y_fixed + g_Projection.neg_half_height_fixed;
    local_8 = g_Projection.center_y_fixed - g_Projection.neg_half_height_fixed;
    pSVar5 = pSVar3 + 8;
    do {
      if ((int)((pSVar3->projected_vertex).screen_x & -0x80000000) == 0) {
        iVar4 = (pSVar3->projected_vertex).screen_x;
        if (iVar4 < local_c) {
          local_c = iVar4;
        }
        iVar4 = (pSVar3->projected_vertex).screen_x;
        if (iVar7 < iVar4) {
          iVar7 = iVar4;
        }
        iVar4 = (pSVar3->projected_vertex).screen_y;
        if (iVar4 < local_8) {
          local_8 = iVar4;
        }
        iVar4 = (pSVar3->projected_vertex).screen_y;
        if (iVar6 < iVar4) {
          iVar6 = iVar4;
        }
      }
      else {
        iVar4 = (pSVar3->projected_vertex).transformed_x;
        if ((-(pSVar3->projected_vertex).transformed_z < iVar4) &&
           (iVar1 = (pSVar3->projected_vertex).transformed_z, iVar4 < iVar1)) {
          iVar2 = (int)(((longlong)(pSVar3->projected_vertex).transformed_x *
                        (longlong)g_Projection.half_width_fixed) / (longlong)iVar1) +
                  g_Projection.center_x_fixed;
          if (iVar7 < iVar2) {
            iVar7 = iVar2;
          }
          if (iVar2 < local_c) {
            local_c = iVar2;
          }
        }
        iVar4 = (pSVar3->projected_vertex).transformed_y;
        if ((-(pSVar3->projected_vertex).transformed_z < iVar4) &&
           (iVar3 = (pSVar3->projected_vertex).transformed_z, iVar4 < iVar3)) {
          iVar4 = (int)(((longlong)(pSVar3->projected_vertex).transformed_y *
                        (longlong)g_Projection.neg_half_height_fixed) / (longlong)iVar3) +
                  g_Projection.center_y_fixed;
          if (iVar6 < iVar4) {
            iVar6 = iVar4;
          }
          if (iVar4 < local_8) {
            local_8 = iVar4;
          }
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_x) {
          iVar7 = g_Projection.half_width_fixed + g_Projection.center_x_fixed;
        }
        if ((pSVar3->projected_vertex).transformed_x <= -(pSVar3->projected_vertex).transformed_z) {
          local_c = g_Projection.center_x_fixed - g_Projection.half_width_fixed;
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_y) {
          local_8 = g_Projection.neg_half_height_fixed + g_Projection.center_y_fixed;
        }
        if ((pSVar3->projected_vertex).transformed_y <= -(pSVar3->projected_vertex).transformed_z) {
          iVar6 = g_Projection.center_y_fixed - g_Projection.neg_half_height_fixed;
        }
      }
      pSVar3 = pSVar3 + 1;
    } while (pSVar3 != pSVar5);
    local_20.x_max = iVar7 >> 0x10;
    local_20.y_min = local_8 >> 0x10;
    local_20.y_max = iVar6 >> 0x10;
    local_20.x_min = local_c >> 0x10;
    iVar6 = core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00476000
                      (g_CurrentShadowLight,&local_20);
    return iVar6;
  }
  return 1;
}
