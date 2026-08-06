// Name: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0
// Address: 0041cce0
// Address Range: [[0041cce0, 0041ceaf]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  CRect local_20;
  SRenderVertex *local_10;
  int local_c;
  int local_8;
  
  if (_DAT_014b9920 != (CDemonLight *)0x0) {
    pSVar3 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
    local_c = _DAT_01c00c50 + _DAT_01c00c48;
    local_20.x_max = _DAT_01c00c50 - _DAT_01c00c48;
    local_20.y_max = _DAT_01c00c54 + _DAT_01c00c4c;
    local_8 = _DAT_01c00c54 - _DAT_01c00c4c;
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
                        (longlong)_DAT_01c00c48) / (longlong)iVar1) + _DAT_01c00c50;
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
                        (longlong)_DAT_01c00c4c) / (longlong)iVar1) + _DAT_01c00c54;
          if (local_20.y_max < iVar2) {
            local_20.y_max = iVar2;
          }
          if (iVar2 < local_8) {
            local_8 = iVar2;
          }
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_x) {
          local_20.x_max = _DAT_01c00c48 + _DAT_01c00c50;
        }
        if ((pSVar3->projected_vertex).transformed_x <= -(pSVar3->projected_vertex).transformed_z) {
          local_c = _DAT_01c00c50 - _DAT_01c00c48;
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_y) {
          local_8 = _DAT_01c00c4c + _DAT_01c00c54;
        }
        if ((pSVar3->projected_vertex).transformed_y <= -(pSVar3->projected_vertex).transformed_z) {
          local_20.y_max = _DAT_01c00c54 - _DAT_01c00c4c;
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
    iVar2 = core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0(_DAT_014b9920,&local_20);
    return iVar2;
  }
  return 1;
}
