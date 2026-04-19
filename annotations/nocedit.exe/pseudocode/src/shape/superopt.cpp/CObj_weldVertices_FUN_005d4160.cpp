// Name: shape_superopt.cpp_CObj_weldVertices_FUN_005d4160
// Address: 005d4160
// Address Range: [[005d4160, 005d44cc]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_weldVertices_FUN_005d4160(CObj *this_ptr,double weld_tolerance,int remove_degenerate)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_weldVertices_FUN_005d4160(CObj *this_ptr,double weld_tolerance,int remove_degenerate)

{
  int iVar2;
  int iVar1;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar2;
  double *pdVar6;
  double *pdVar4;
  double *pdVar7;
  byte bVar8;
  int local_108;
  char acStack_100 [92];
  double dStack_a4;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  double dStack_74;
  double dStack_6c;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
  int iStack_2c;
  void *pvStack_28;
  int iStack_24;
  int iStack_20;
  double *pdStack_1c;
  uint uStack_18;
  CPoly *pCVar1;
  
  bVar8 = 0;
  (*this_ptr->vtable->clearStateFlags)(this_ptr,0x8000);
  iStack_20 = 0;
  pvStack_28 = (void *)0x0;
  if (1000 < (uint)this_ptr->vertex_count) {
    pvStack_28 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  uStack_18 = 0;
  if (this_ptr->vertex_count != 0) {
    iStack_24 = 0;
    do {
      if ((pvStack_28 != (void *)0x0) && ((char)uStack_18 == '\0')) {
        _sprintf(acStack_100,"Welding vertices (%d removed so far)",iStack_20);
      }
      local_108 = SUB84(weld_tolerance,0);
      pdVar3 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_24);
      pdStack_1c = pdVar3;
      if ((*(byte *)((int)pdVar3 + 0x35) & 0x80) == 0) {
        dStack_5c = *pdVar3 - weld_tolerance;
        dStack_54 = pdVar3[1] - weld_tolerance;
        dStack_4c = pdVar3[2] - weld_tolerance;
        pdVar2 = &dStack_5c;
        pdVar4 = &dStack_a4;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(uint *)pdVar4 = *(uint *)pdVar2;
          pdVar2 = (double *)((int)pdVar2 + (uint)bVar8 * -8 + 4);
          pdVar4 = (double *)((int)pdVar4 + (uint)bVar8 * -8 + 4);
        }
        dStack_8c = *pdVar3 + weld_tolerance;
        dStack_84 = pdVar3[1] + weld_tolerance;
        dStack_7c = pdVar3[2] + weld_tolerance;
        pdVar6 = &dStack_8c;
        pdVar7 = &dStack_74;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar8 * -8 + 4);
          pdVar6 = (double *)((int)pdVar6 + (uint)bVar8 * -8 + 4);
          *(uint *)pdVar7 = *(uint *)pdVar6;
          pdVar6 = pdVar6;
          pdVar7 = pdVar7;
        }
        *(byte *)((int)pdVar3 + 0x35) = *(byte *)((int)pdVar3 + 0x35) | 0x80;
        uVar4 = uStack_18 + 1;
        if (uVar4 < (uint)this_ptr->vertex_count) {
          iStack_2c = uVar4 * 0x38;
          do {
            pdVar2 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_2c);
            if ((*(byte *)((int)pdVar2 + 0x35) & 0x80) == 0) {
              if ((((ulonglong)weld_tolerance & 0x7fffffff00000000) == 0) && (local_108 == 0)) {
                if (((*pdStack_1c == *pdVar2) && (pdStack_1c[1] == pdVar2[1])) &&
                   (pdStack_1c[2] == pdVar2[2])) {
LAB_005d43a8:
                  uVar5 = 0;
                  if (this_ptr->poly_count != 0) {
                    iVar1 = 0;
                    do {
                      pCVar1 = this_ptr->poly_array;
                      if (uVar4 == *(uint *)((int)pCVar1->uv_coords + iVar1 + -0xc)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar1 + -0xc) = uStack_18;
                      }
                      if (uVar4 == *(uint *)((int)pCVar1->uv_coords + iVar1 + -8)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar1 + -8) = uStack_18;
                      }
                      if (uVar4 == *(uint *)((int)pCVar1->uv_coords + iVar1 + -4)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar1 + -4) = uStack_18;
                      }
                      uVar5 = uVar5 + 1;
                      iVar1 = iVar1 + 0x68;
                    } while (uVar5 < (uint)this_ptr->poly_count);
                  }
                  iStack_20 = iStack_20 + 1;
                  *(byte *)((int)pdVar2 + 0x35) = *(byte *)((int)pdVar2 + 0x35) | 0x80;
                }
              }
              else if (((dStack_a4 <= *pdVar2) &&
                       ((((*pdVar2 <= dStack_74 && (dStack_9c <= pdVar2[1])) &&
                         (pdVar2[1] <= dStack_6c)) &&
                        ((dStack_94 <= pdVar2[2] && (pdVar2[2] <= dStack_64)))))) &&
                      (SQRT((pdVar2[2] - pdStack_1c[2]) * (pdVar2[2] - pdStack_1c[2]) +
                            (pdVar2[1] - pdStack_1c[1]) * (pdVar2[1] - pdStack_1c[1]) +
                            (*pdVar2 - *pdStack_1c) * (*pdVar2 - *pdStack_1c)) <= weld_tolerance))
              goto LAB_005d43a8;
            }
            iStack_2c = iStack_2c + 0x38;
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)this_ptr->vertex_count);
        }
      }
      uStack_18 = uStack_18 + 1;
      iStack_24 = iStack_24 + 0x38;
    } while (uStack_18 < (uint)this_ptr->vertex_count);
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pvStack_28);
  if (remove_degenerate != 0) {
    iVar2 = (*this_ptr->vtable->removeUnusedVertices)(this_ptr);
    return iVar2;
  }
  return 1;
}
