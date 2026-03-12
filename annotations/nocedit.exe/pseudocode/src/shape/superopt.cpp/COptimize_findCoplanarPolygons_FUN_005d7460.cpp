// Name: shape_superopt.cpp_COptimize_findCoplanarPolygons_FUN_005d7460
// Address: 005d7460
// Address Range: [[005d7460, 005d7688]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_COptimize_findCoplanarPolygons_FUN_005d7460(COptimize *this_ptr,CPoly *polygon,COptimize *search_obj)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_findCoplanarPolygons_FUN_005d7460(COptimize *this_ptr,CPoly *polygon,COptimize *search_obj)

{
  double dVar1;
  int iVar5;
  int iVar6;
  int iVar2;
  int iVar3;
  int iVar7;
  int iVar8;
  uint uVar9;
  double dStack_40;
  uint local_30;
  int local_2c;
  uint uStack_24;
  int iStack_1c;
  int iStack_14;
  double dVar2;
  double dVar3;
  bool bVar4;
  byte *pbVar1;
  
  pbVar1 = (byte *)((int)&polygon->flags + 1);
  *pbVar1 = *pbVar1 | 0x20;
  dVar2 = this_ptr->coplanar_angle_threshold;
  do {
    local_30 = 0;
    bVar4 = true;
    if ((search_obj->base).poly_count != 0) {
      local_2c = 0;
      do {
        iVar7 = (int)&((CPoly *)(((search_obj->base).poly_array)->uv_coords + -1))->parent_obj +
                local_2c;
        if (((*(byte *)(iVar7 + 0x61) & 0x80) == 0) && ((*(byte *)(iVar7 + 0x61) & 0x20) != 0)) {
          dVar3 = (double)(**(code **)(*(int *)(iVar7 + 100) + 0x84))(iVar7);
          uStack_24 = 0;
          if ((search_obj->base).poly_count != 0) {
            iStack_1c = 0;
            do {
              iVar8 = (int)&((CPoly *)(((search_obj->base).poly_array)->uv_coords + -1))->parent_obj
                      + iStack_1c;
              if ((((*(byte *)(iVar8 + 0x61) & 0xa0) == 0) &&
                  (*(int *)(iVar8 + 0x5c) == *(int *)(iVar7 + 0x5c))) &&
                 (1.0 - dVar2 <=
                  *(double *)(iVar8 + 0x50) * *(double *)(iVar7 + 0x50) +
                  *(double *)(iVar8 + 0x40) * *(double *)(iVar7 + 0x40) +
                  *(double *)(iVar8 + 0x48) * *(double *)(iVar7 + 0x48))) {
                dVar1 = (double)(**(code **)(*(int *)(iVar8 + 100) + 0x84))(iVar8);
                dStack_40 = dVar1 - dVar3;
                if (dStack_40 < 0.0) {
                  dStack_40 = -dStack_40;
                }
                if ((dStack_40 <= this_ptr->coplanar_distance_threshold) &&
                   (iVar5 = (**(code **)(*(int *)(iVar7 + 100) + 0x74))(iVar7,iVar8), iVar5 != 0)) {
                  uVar9 = 0;
                  if ((search_obj->base).poly_count != 0) {
                    iStack_14 = 0;
                    do {
                      iVar3 = (int)&((CPoly *)(((search_obj->base).poly_array)->uv_coords + -1))->
                                    parent_obj + iStack_14;
                      if ((((*(byte *)(iVar3 + 0x61) & 0x80) == 0) &&
                          ((*(byte *)(iVar3 + 0x61) & 0x20) != 0)) &&
                         ((iVar6 = (**(code **)(*(int *)(iVar8 + 100) + 0x7c))(iVar8,iVar3),
                          iVar6 != 0 ||
                          ((iVar2 = (**(code **)(*(int *)(iVar8 + 100) + 0x78))(iVar8,iVar3),
                           iVar2 != 0 ||
                           (iVar3 = (**(code **)(*(int *)(iVar8 + 100) + 0x80))(iVar8,iVar3),
                           iVar3 != 0)))))) break;
                      iStack_14 = iStack_14 + 0x68;
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < (uint)(search_obj->base).poly_count);
                  }
                  if (uVar9 == (search_obj->base).poly_count) {
                    bVar4 = false;
                    *(byte *)(iVar8 + 0x61) = *(byte *)(iVar8 + 0x61) | 0x20;
                  }
                }
              }
              uStack_24 = uStack_24 + 1;
              iStack_1c = iStack_1c + 0x68;
            } while (uStack_24 < (uint)(search_obj->base).poly_count);
          }
        }
        local_2c = local_2c + 0x68;
        local_30 = local_30 + 1;
      } while (local_30 < (uint)(search_obj->base).poly_count);
    }
    if (bVar4) {
      return;
    }
  } while( true );
}
