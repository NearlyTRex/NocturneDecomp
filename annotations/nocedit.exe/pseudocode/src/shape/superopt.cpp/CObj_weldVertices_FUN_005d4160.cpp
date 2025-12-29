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
  void *unaff_EBP;
  int unaff_ESI;
  double *pdVar7;
  double *pdVar8;
  byte bVar9;
  uint uVar10;
  int in_stack_ffffff10;
  uint uStack_ec;
  char acStack_e8 [92];
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
  double dStack_3c;
  double dStack_34;
  int iStack_14;
  int iVar11;
  
  bVar9 = 0;
  (*this_ptr->vtable->clearStateFlags)(this_ptr,0x8000);
  iStack_14 = 0;
  if (1000 < (uint)this_ptr->vertex_count) {
    unaff_EBP = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  uVar10 = 0;
  if (this_ptr->vertex_count != 0) {
    iVar11 = 0;
    do {
      if ((unaff_EBP != (void *)0x0) && ((char)uVar10 == '\0')) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_e8,"Welding vertices (%d removed so far)",
                   "Welding vertices (%d removed so far)",unaff_ESI);
      }
      pdVar4 = (double *)((int)&(this_ptr->vertex_data->position).x + iVar11);
      if ((*(byte *)((int)pdVar4 + 0x35) & 0x80) == 0) {
        dVar2 = (double)CONCAT44 /* combine 2-byte values */(uStack_ec,in_stack_ffffff10);
        dStack_44 = *pdVar4 - dVar2;
        dStack_3c = pdVar4[1] - dVar2;
        dStack_34 = pdVar4[2] - dVar2;
        pdVar7 = &dStack_44;
        pdVar8 = &dStack_8c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pdVar8 = *(uint *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar9 * -8 + 4);
        }
        dStack_74 = *pdVar4 + dVar2;
        dStack_6c = pdVar4[1] + dVar2;
        dStack_64 = pdVar4[2] + dVar2;
        pdVar7 = &dStack_74;
        pdVar8 = &dStack_5c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pdVar8 = *(uint *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar9 * -8 + 4);
        }
        *(byte *)((int)pdVar4 + 0x35) = *(byte *)((int)pdVar4 + 0x35) | 0x80;
        uVar5 = uVar10 + 1;
        if (uVar5 < (uint)this_ptr->vertex_count) {
          iStack_14 = uVar5 * 0x38;
          do {
            pdVar7 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_14);
            if ((*(byte *)((int)pdVar7 + 0x35) & 0x80) == 0) {
              if (((uStack_ec & 0x7fffffff) == 0) && (in_stack_ffffff10 == 0)) {
                if (((*pdVar4 == *pdVar7) && (pdVar4[1] == pdVar7[1])) && (pdVar4[2] == pdVar7[2]))
                {
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
                  unaff_ESI = unaff_ESI + 1;
                  *(byte *)((int)pdVar7 + 0x35) = *(byte *)((int)pdVar7 + 0x35) | 0x80;
                }
              }
              else if (((dStack_8c <= *pdVar7) &&
                       ((((*pdVar7 <= dStack_5c && (dStack_84 <= pdVar7[1])) &&
                         (pdVar7[1] <= dStack_54)) &&
                        ((dStack_7c <= pdVar7[2] && (pdVar7[2] <= dStack_4c)))))) &&
                      (SQRT((pdVar7[2] - pdVar4[2]) * (pdVar7[2] - pdVar4[2]) +
                            (pdVar7[1] - pdVar4[1]) * (pdVar7[1] - pdVar4[1]) +
                            (*pdVar7 - *pdVar4) * (*pdVar7 - *pdVar4)) <=
                       (double)CONCAT44 /* combine 2-byte values */(uStack_ec,in_stack_ffffff10))) goto LAB_005d43a8;
            }
            iStack_14 = iStack_14 + 0x38;
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)this_ptr->vertex_count);
        }
      }
      iVar11 = iVar11 + 0x38;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)this_ptr->vertex_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(unaff_EBP);
  if (remove_degenerate != 0) {
    iVar11 = (*this_ptr->vtable->removeUnusedVertices)(this_ptr);
    return iVar11;
  }
  return 1;
}
