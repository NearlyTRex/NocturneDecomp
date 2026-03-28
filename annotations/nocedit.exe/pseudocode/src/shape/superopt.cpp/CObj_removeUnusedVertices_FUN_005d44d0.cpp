// Name: shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0
// Address: 005d44d0
// Address Range: [[005d44d0, 005d46eb]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removeUnusedVertices_FUN_005d44d0(CObj *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeUnusedVertices_FUN_005d44d0(CObj *this_ptr)

{
  CPoly *pCVar2;
  int *piVar4;
  int *dest;
  int *piVar2;
  int *piVar3;
  CVert *pCVar5;
  CVert *pCVar4;
  uint uVar5;
  uint uVar6;
  int iVar6;
  double *pdVar7;
  int iVar8;
  int iVar7;
  char local_7c [92];
  void *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  CPoly *pCVar1;
  
  dest = shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->vertex_count << 2);
  iVar7 = 0;
  if (dest != (int *)0x0) {
    local_20 = (void *)0x0;
    if (1000 < (uint)this_ptr->vertex_count) {
      local_20 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
    }
    memset(dest,0xff,this_ptr->vertex_count << 2);
    uVar5 = 0;
    if (this_ptr->poly_count != 0) {
      iVar8 = 0;
      do {
        pCVar1 = this_ptr->poly_array;
        dest[*(int *)((int)pCVar1->uv_coords + iVar8 + -0xc)] =
             *(int *)((int)pCVar1->uv_coords + iVar8 + -0xc);
        dest[*(int *)((int)pCVar1->uv_coords + iVar8 + -8)] =
             *(int *)((int)pCVar1->uv_coords + iVar8 + -8);
        iVar7 = *(int *)((int)pCVar1->uv_coords + iVar8 + -4);
        uVar5 = uVar5 + 1;
        dest[iVar7] = iVar7;
        iVar8 = iVar8 + 0x68;
      } while (uVar5 < (uint)this_ptr->poly_count);
    }
    iVar7 = 0;
    uVar6 = 0;
    piVar2 = dest;
    if (this_ptr->vertex_count != 0) {
      do {
        if (*piVar2 == -1) {
          iVar7 = iVar7 + 1;
        }
        else {
          *piVar2 = iVar7;
        }
        uVar6 = uVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar6 < (uint)this_ptr->vertex_count);
    }
    local_10 = 0;
    if (this_ptr->poly_count != 0) {
      iVar6 = 0;
      do {
        pCVar2 = this_ptr->poly_array;
        *(int *)((int)pCVar2->uv_coords + iVar6 + -0xc) =
             *(int *)((int)pCVar2->uv_coords + iVar6 + -0xc) -
             dest[*(int *)((int)pCVar2->uv_coords + iVar6 + -0xc)];
        *(int *)((int)pCVar2->uv_coords + iVar6 + -8) =
             *(int *)((int)pCVar2->uv_coords + iVar6 + -8) -
             dest[*(int *)((int)pCVar2->uv_coords + iVar6 + -8)];
        piVar4 = (int *)((int)pCVar2->uv_coords + iVar6 + -4);
        *piVar4 = *piVar4 - dest[*(int *)((int)pCVar2->uv_coords + iVar6 + -4)];
        iVar6 = iVar6 + 0x68;
        local_10 = local_10 + 1;
      } while (local_10 < (uint)this_ptr->poly_count);
    }
    _sprintf(local_7c,"Deleting %d disjoing vertices",iVar7);
    uVar6 = this_ptr->vertex_count - iVar7;
    local_14 = 0;
    if (uVar6 != 0) {
      local_18 = 0;
      piVar4 = dest;
      do {
        do {
          piVar3 = piVar4;
          piVar4 = piVar3 + 1;
        } while (*piVar3 == -1);
        iVar7 = (int)piVar3 - (int)dest >> 0x1f;
        pCVar5 = this_ptr->vertex_data +
                 ((int)((((int)piVar3 - (int)dest) + iVar7 * -4) - (uint)(iVar7 << 1 < 0)) >> 2);
        pdVar7 = (double *)((int)&(this_ptr->vertex_data->position).x + local_18);
        *pdVar7 = (pCVar5->position).x;
        pdVar7[1] = (pCVar5->position).y;
        pdVar7[2] = (pCVar5->position).z;
        pdVar7[3] = (pCVar5->orig_position).x;
        pdVar7[4] = (pCVar5->orig_position).y;
        pdVar7[5] = (pCVar5->orig_position).z;
        *(uint *)(pdVar7 + 6) = pCVar5->attrib_flags;
        *(uint *)((int)pdVar7 + 0x34) = pCVar5->state_flags;
        local_14 = local_14 + 1;
        local_18 = local_18 + 0x38;
      } while (local_14 < uVar6);
    }
    pCVar4 = realloc(this_ptr->vertex_data,uVar6 * 0x38);
    if (pCVar4 != (CVert *)0x0) {
      this_ptr->vertex_data = pCVar4;
    }
    this_ptr->vertex_count = uVar6;
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(local_20);
    shape_memdbg_cpp_free_FUN_005fe659(dest);
    iVar7 = 1;
  }
  return iVar7;
}
