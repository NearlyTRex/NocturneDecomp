// Name: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0
// Address: 00531ca0
// Address Range: [[00531ca0, 00531e82]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0(CDemonSet *this_ptr,int vertex_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0(CDemonSet *this_ptr,int vertex_count)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  
  if (g_CDemonCamera_PTR_0083c7d0 != (CDemonCamera *)0x0) {
    pSVar4 = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
    local_c = g_INT_01c35e40 - g_INT_01c35e38;
    iVar5 = g_INT_01c35e40 + g_INT_01c35e38;
    iVar3 = g_INT_01c35e44 - g_INT_01c35e3c;
    local_8 = g_INT_01c35e44 + g_INT_01c35e3c;
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
                          (longlong)g_INT_01c35e38) / (longlong)iVar1) + g_INT_01c35e40;
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
                          (longlong)g_INT_01c35e3c) / (longlong)iVar1) + g_INT_01c35e44;
            if (local_8 < iVar2) {
              local_8 = iVar2;
            }
            if (iVar2 < iVar3) {
              iVar3 = iVar2;
            }
          }
          if ((pSVar4->projected_vertex).transformed_z <= (pSVar4->projected_vertex).transformed_x)
          {
            local_c = g_INT_01c35e38 + g_INT_01c35e40;
          }
          if ((pSVar4->projected_vertex).transformed_x <= -(pSVar4->projected_vertex).transformed_z)
          {
            iVar5 = g_INT_01c35e40 - g_INT_01c35e38;
          }
          if ((pSVar4->projected_vertex).transformed_z <= (pSVar4->projected_vertex).transformed_y)
          {
            iVar3 = g_INT_01c35e3c + g_INT_01c35e44;
          }
          if ((pSVar4->projected_vertex).transformed_y <= -(pSVar4->projected_vertex).transformed_z)
          {
            local_8 = g_INT_01c35e44 - g_INT_01c35e3c;
          }
        }
        local_10 = local_10 + 1;
        pSVar4 = pSVar4 + 1;
      } while (local_10 < vertex_count);
    }
    core_dcamera_cpp_CDemonCamera_pushRect_FUN_0043bb10
              (g_CDemonCamera_PTR_0083c7d0,iVar5 >> 0x10,local_c >> 0x10,iVar3 >> 0x10,
               local_8 >> 0x10);
  }
  return;
}
