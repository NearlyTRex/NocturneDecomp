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
  int iVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  byte bVar8;
  int local_104;
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
  
  bVar8 = 0;
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
      local_104 = SUB84 /* extract 2-byte value */(weld_tolerance,0);
      pdVar3 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_20);
      pdStack_18 = pdVar3;
      if ((*(byte *)((int)pdVar3 + 0x35) & 0x80) == 0) {
        dStack_58 = *pdVar3 - weld_tolerance;
        dStack_50 = pdVar3[1] - weld_tolerance;
        dStack_48 = pdVar3[2] - weld_tolerance;
        pdVar6 = &dStack_58;
        pdVar7 = &dStack_a0;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pdVar7 = *(uint *)pdVar6;
          pdVar6 = (double *)((int)pdVar6 + (uint)bVar8 * -8 + 4);
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar8 * -8 + 4);
        }
        dStack_88 = *pdVar3 + weld_tolerance;
        dStack_80 = pdVar3[1] + weld_tolerance;
        dStack_78 = pdVar3[2] + weld_tolerance;
        pdVar6 = &dStack_88;
        pdVar7 = &dStack_70;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pdVar7 = *(uint *)pdVar6;
          pdVar6 = (double *)((int)pdVar6 + (uint)bVar8 * -8 + 4);
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar8 * -8 + 4);
        }
        *(byte *)((int)pdVar3 + 0x35) = *(byte *)((int)pdVar3 + 0x35) | 0x80;
        uVar4 = uStack_14 + 1;
        if (uVar4 < (uint)this_ptr->vertex_count) {
          iStack_28 = uVar4 * 0x38;
          do {
            pdVar3 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_28);
            if ((*(byte *)((int)pdVar3 + 0x35) & 0x80) == 0) {
              if ((((ulonglong)weld_tolerance & 0x7fffffff00000000) == 0) && (local_104 == 0)) {
                if (((*pdStack_18 == *pdVar3) && (pdStack_18[1] == pdVar3[1])) &&
                   (pdStack_18[2] == pdVar3[2])) {
LAB_005d43a8:
                  uVar5 = 0;
                  if (this_ptr->poly_count != 0) {
                    iVar2 = 0;
                    do {
                      pCVar1 = this_ptr->poly_array;
                      if (uVar4 == *(uint *)((int)pCVar1->uv_coords + iVar2 + -0xc)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar2 + -0xc) = uStack_14;
                      }
                      if (uVar4 == *(uint *)((int)pCVar1->uv_coords + iVar2 + -8)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar2 + -8) = uStack_14;
                      }
                      if (uVar4 == *(uint *)((int)pCVar1->uv_coords + iVar2 + -4)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar2 + -4) = uStack_14;
                      }
                      uVar5 = uVar5 + 1;
                      iVar2 = iVar2 + 0x68;
                    } while (uVar5 < (uint)this_ptr->poly_count);
                  }
                  iStack_1c = iStack_1c + 1;
                  *(byte *)((int)pdVar3 + 0x35) = *(byte *)((int)pdVar3 + 0x35) | 0x80;
                }
              }
              else if (((dStack_a0 <= *pdVar3) &&
                       ((((*pdVar3 <= dStack_70 && (dStack_98 <= pdVar3[1])) &&
                         (pdVar3[1] <= dStack_68)) &&
                        ((dStack_90 <= pdVar3[2] && (pdVar3[2] <= dStack_60)))))) &&
                      (SQRT((pdVar3[2] - pdStack_18[2]) * (pdVar3[2] - pdStack_18[2]) +
                            (pdVar3[1] - pdStack_18[1]) * (pdVar3[1] - pdStack_18[1]) +
                            (*pdVar3 - *pdStack_18) * (*pdVar3 - *pdStack_18)) <= weld_tolerance))
              goto LAB_005d43a8;
            }
            iStack_28 = iStack_28 + 0x38;
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)this_ptr->vertex_count);
        }
      }
      uStack_14 = uStack_14 + 1;
      iStack_20 = iStack_20 + 0x38;
    } while (uStack_14 < (uint)this_ptr->vertex_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(pvStack_24);
  if (remove_degenerate != 0) {
    iVar2 = (*this_ptr->vtable->removeUnusedVertices)(this_ptr);
    return iVar2;
  }
  return 1;
}
