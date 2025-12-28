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
  BADSPACEBASE *in_ESP;
  double *pdVar7;
  double *pdVar8;
  byte bVar9;
  uint uStack_100;
  char acStack_fc [92];
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  int iStack_28;
  void *pvStack_24;
  int iStack_20;
  int iStack_1c;
  double *pdStack_18;
  uint uStack_14;
  
  bVar9 = 0;
  (*this_ptr->vtable->clearStateFlags)(this_ptr,0x8000);
  iStack_1c = 0;
  pvStack_24 = (void *)0x0;
  if (1000 < (uint)this_ptr->vertex_count) {
    pvStack_24 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  uStack_14 = 0;
  if (this_ptr->vertex_count != 0) {
    iStack_20 = 0;
    do {
      if ((pvStack_24 != (void *)0x0) && ((char)uStack_14 == '\0')) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_fc,"Welding vertices (%d removed so far)",iStack_1c);
      }
      pdVar4 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_20);
      pdStack_18 = pdVar4;
      if ((*(byte *)((int)pdVar4 + 0x35) & 0x80) == 0) {
        dVar2 = (double)CONCAT44 /* combine 2-byte values */(uStack_100,weld_tolerance._4_4_);
        dStack_58 = *pdVar4 - dVar2;
        dStack_50 = pdVar4[1] - dVar2;
        dStack_48 = pdVar4[2] - dVar2;
        pdVar7 = &dStack_58;
        pdVar8 = &dStack_a0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pdVar8 = *(uint *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar9 * -8 + 4);
        }
        dStack_88 = *pdVar4 + dVar2;
        dStack_80 = pdVar4[1] + dVar2;
        dStack_78 = pdVar4[2] + dVar2;
        pdVar7 = &dStack_88;
        pdVar8 = &dStack_70;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pdVar8 = *(uint *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar9 * -8 + 4);
        }
        *(byte *)((int)pdVar4 + 0x35) = *(byte *)((int)pdVar4 + 0x35) | 0x80;
        uVar5 = uStack_14 + 1;
        if (uVar5 < (uint)this_ptr->vertex_count) {
          iStack_28 = uVar5 * 0x38;
          do {
            pdVar4 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_28);
            if ((*(byte *)((int)pdVar4 + 0x35) & 0x80) == 0) {
              if (((uStack_100 & 0x7fffffff) == 0) && (weld_tolerance._4_4_ == 0)) {
                if (((*pdStack_18 == *pdVar4) && (pdStack_18[1] == pdVar4[1])) &&
                   (pdStack_18[2] == pdVar4[2])) {
LAB_005d43a8:
                  uVar6 = 0;
                  if (this_ptr->poly_count != 0) {
                    iVar3 = 0;
                    do {
                      pCVar1 = this_ptr->poly_array;
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -0xc)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -0xc) = uStack_14;
                      }
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -8)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -8) = uStack_14;
                      }
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -4)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -4) = uStack_14;
                      }
                      uVar6 = uVar6 + 1;
                      iVar3 = iVar3 + 0x68;
                    } while (uVar6 < (uint)this_ptr->poly_count);
                  }
                  iStack_1c = iStack_1c + 1;
                  *(byte *)((int)pdVar4 + 0x35) = *(byte *)((int)pdVar4 + 0x35) | 0x80;
                }
              }
              else if (((dStack_a0 <= *pdVar4) &&
                       ((((*pdVar4 <= dStack_70 && (dStack_98 <= pdVar4[1])) &&
                         (pdVar4[1] <= dStack_68)) &&
                        ((dStack_90 <= pdVar4[2] && (pdVar4[2] <= dStack_60)))))) &&
                      (SQRT((pdVar4[2] - pdStack_18[2]) * (pdVar4[2] - pdStack_18[2]) +
                            (pdVar4[1] - pdStack_18[1]) * (pdVar4[1] - pdStack_18[1]) +
                            (*pdVar4 - *pdStack_18) * (*pdVar4 - *pdStack_18)) <=
                       (double)CONCAT44 /* combine 2-byte values */(uStack_100,weld_tolerance._4_4_))) goto LAB_005d43a8;
            }
            iStack_28 = iStack_28 + 0x38;
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)this_ptr->vertex_count);
        }
      }
      uStack_14 = uStack_14 + 1;
      iStack_20 = iStack_20 + 0x38;
    } while (uStack_14 < (uint)this_ptr->vertex_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(pvStack_24);
  if (remove_degenerate != 0) {
    iVar3 = (*this_ptr->vtable->removeUnusedVertices)(this_ptr);
    return iVar3;
  }
  return 1;
}
