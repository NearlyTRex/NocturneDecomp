// Name: shape_superopt.cpp_CObj_weldVertices_FUN_005d4160
// Address: 005d4160
// Address Range: [[005d4160, 005d44cc]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_weldVertices_FUN_005d4160(CObj * this_ptr, double weld_tolerance, int remove_degenerate)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CObj_weldVertices_FUN_005d4160
          (CObj *this_ptr,double weld_tolerance,int remove_degenerate)

{
  CPoly *pCVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  byte bVar9;
  int iStack_100;
  uint uStack_fc;
  char acStack_f8 [92];
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
  double dStack_44;
  int iStack_24;
  void *pvStack_20;
  int iStack_1c;
  int iStack_18;
  double *pdStack_14;
  uint uVar10;
  
  bVar9 = 0;
  (*this_ptr->vtable->clearStateFlags)(this_ptr,0x8000);
  iStack_18 = 0;
  pvStack_20 = (void *)0x0;
  if (1000 < (uint)this_ptr->vertex_count) {
    pvStack_20 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  uVar10 = 0;
  if (this_ptr->vertex_count != 0) {
    iStack_1c = 0;
    do {
      if ((pvStack_20 != (void *)0x0) && ((char)uVar10 == '\0')) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_f8,"Welding vertices (%d removed so far)",iStack_18);
      }
      pdVar4 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_1c);
      pdStack_14 = pdVar4;
      if ((*(byte *)((int)pdVar4 + 0x35) & 0x80) == 0) {
        dVar2 = (double)CONCAT44 /* combine 2-byte values */(uStack_fc,iStack_100);
        dStack_54 = *pdVar4 - dVar2;
        dStack_4c = pdVar4[1] - dVar2;
        dStack_44 = pdVar4[2] - dVar2;
        pdVar7 = &dStack_54;
        pdVar8 = &dStack_9c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pdVar8 = *(uint *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar9 * -8 + 4);
        }
        dStack_84 = *pdVar4 + dVar2;
        dStack_7c = pdVar4[1] + dVar2;
        dStack_74 = pdVar4[2] + dVar2;
        pdVar7 = &dStack_84;
        pdVar8 = &dStack_6c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pdVar8 = *(uint *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar9 * -8 + 4);
        }
        *(byte *)((int)pdVar4 + 0x35) = *(byte *)((int)pdVar4 + 0x35) | 0x80;
        uVar5 = uVar10 + 1;
        if (uVar5 < (uint)this_ptr->vertex_count) {
          iStack_24 = uVar5 * 0x38;
          do {
            pdVar4 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_24);
            if ((*(byte *)((int)pdVar4 + 0x35) & 0x80) == 0) {
              if (((uStack_fc & 0x7fffffff) == 0) && (iStack_100 == 0)) {
                if (((*pdStack_14 == *pdVar4) && (pdStack_14[1] == pdVar4[1])) &&
                   (pdStack_14[2] == pdVar4[2])) {
LAB_005d43a8:
                  uVar6 = 0;
                  if (this_ptr->poly_count != 0) {
                    iVar3 = 0;
                    do {
                      pCVar1 = this_ptr->poly_array;
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -0xc)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -0xc) = uVar10;
                      }
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -8)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -8) = uVar10;
                      }
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -4)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -4) = uVar10;
                      }
                      uVar6 = uVar6 + 1;
                      iVar3 = iVar3 + 0x68;
                    } while (uVar6 < (uint)this_ptr->poly_count);
                  }
                  iStack_18 = iStack_18 + 1;
                  *(byte *)((int)pdVar4 + 0x35) = *(byte *)((int)pdVar4 + 0x35) | 0x80;
                }
              }
              else if (((dStack_9c <= *pdVar4) &&
                       ((((*pdVar4 <= dStack_6c && (dStack_94 <= pdVar4[1])) &&
                         (pdVar4[1] <= dStack_64)) &&
                        ((dStack_8c <= pdVar4[2] && (pdVar4[2] <= dStack_5c)))))) &&
                      (SQRT((pdVar4[2] - pdStack_14[2]) * (pdVar4[2] - pdStack_14[2]) +
                            (pdVar4[1] - pdStack_14[1]) * (pdVar4[1] - pdStack_14[1]) +
                            (*pdVar4 - *pdStack_14) * (*pdVar4 - *pdStack_14)) <=
                       (double)CONCAT44 /* combine 2-byte values */(uStack_fc,iStack_100))) goto LAB_005d43a8;
            }
            iStack_24 = iStack_24 + 0x38;
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)this_ptr->vertex_count);
        }
      }
      uVar10 = uVar10 + 1;
      iStack_1c = iStack_1c + 0x38;
    } while (uVar10 < (uint)this_ptr->vertex_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(pvStack_20);
  if (remove_degenerate != 0) {
    iVar3 = (*this_ptr->vtable->removeUnusedVertices)(this_ptr);
    return iVar3;
  }
  return 1;
}
