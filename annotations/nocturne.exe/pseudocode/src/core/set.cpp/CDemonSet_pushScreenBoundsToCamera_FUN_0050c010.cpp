// Name: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010
// Address: 0050c010
// Address Range: [[0050c010, 0050c1f2]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010(CDemonSet *this_ptr,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010(CDemonSet *this_ptr,int vertex_count)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  
  if (_DAT_007f7374 != (CDemonCamera *)0x0) {
    pSVar4 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
    local_c = g_Projection.center_x_fixed - g_Projection.half_width_fixed;
    iVar5 = g_Projection.center_x_fixed + g_Projection.half_width_fixed;
    iVar3 = g_Projection.center_y_fixed - g_Projection.neg_half_height_fixed;
    local_8 = g_Projection.center_y_fixed + g_Projection.neg_half_height_fixed;
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
                          (longlong)g_Projection.half_width_fixed) / (longlong)iVar1) +
                    g_Projection.center_x_fixed;
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
                          (longlong)g_Projection.neg_half_height_fixed) / (longlong)iVar1) +
                    g_Projection.center_y_fixed;
            if (local_8 < iVar2) {
              local_8 = iVar2;
            }
            if (iVar2 < iVar3) {
              iVar3 = iVar2;
            }
          }
          if ((pSVar4->projected_vertex).transformed_z <= (pSVar4->projected_vertex).transformed_x)
          {
            local_c = g_Projection.half_width_fixed + g_Projection.center_x_fixed;
          }
          if ((pSVar4->projected_vertex).transformed_x <= -(pSVar4->projected_vertex).transformed_z)
          {
            iVar5 = g_Projection.center_x_fixed - g_Projection.half_width_fixed;
          }
          if ((pSVar4->projected_vertex).transformed_z <= (pSVar4->projected_vertex).transformed_y)
          {
            iVar3 = g_Projection.neg_half_height_fixed + g_Projection.center_y_fixed;
          }
          if ((pSVar4->projected_vertex).transformed_y <= -(pSVar4->projected_vertex).transformed_z)
          {
            local_8 = g_Projection.center_y_fixed - g_Projection.neg_half_height_fixed;
          }
        }
        local_10 = local_10 + 1;
        pSVar4 = pSVar4 + 1;
      } while (local_10 < vertex_count);
    }
    core_dcamera_cpp_CDemonCamera_pushRect_FUN_004405d0
              (_DAT_007f7374,iVar5 >> 0x10,local_c >> 0x10,iVar3 >> 0x10,local_8 >> 0x10);
  }
  return;
}
