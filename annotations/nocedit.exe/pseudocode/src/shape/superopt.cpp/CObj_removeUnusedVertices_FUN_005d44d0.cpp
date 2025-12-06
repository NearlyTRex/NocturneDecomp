// Name: shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0
// Address: 005d44d0
// Address Range: [[005d44d0, 005d46eb]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeUnusedVertices_FUN_005d44d0(CObj *this_ptr)

{
  CPoly *pCVar1;
  int *dest;
  int *piVar2;
  void *ptr;
  int *piVar3;
  CVert *pCVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar8;
  void *pvVar9;
  
  dest = (int *)crt_memory_c_malloc_FUN_006021da(this_ptr->vertex_count << 2);
  if (dest != (int *)0x0) {
    if (1000 < (uint)this_ptr->vertex_count) {
      shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
    }
    crt_memory_c_memset_FUN_005fde40(dest,0xff,this_ptr->vertex_count << 2);
    uVar5 = 0;
    if (this_ptr->poly_count != 0) {
      iVar8 = 0;
      do {
        pCVar1 = this_ptr->poly_array;
        dest[*(int *)((int)pCVar1->uv_coords + iVar8 + -0xc)] =
             *(int *)((int)pCVar1->uv_coords + iVar8 + -0xc);
        dest[*(int *)((int)pCVar1->uv_coords + iVar8 + -8)] =
             *(int *)((int)pCVar1->uv_coords + iVar8 + -8);
        iVar6 = *(int *)((int)pCVar1->uv_coords + iVar8 + -4);
        uVar5 = uVar5 + 1;
        dest[iVar6] = iVar6;
        iVar8 = iVar8 + 0x68;
      } while (uVar5 < (uint)this_ptr->poly_count);
    }
    iVar8 = 0;
    uVar5 = 0;
    piVar2 = dest;
    if (this_ptr->vertex_count != 0) {
      do {
        if (*piVar2 == -1) {
          iVar8 = iVar8 + 1;
        }
        else {
          *piVar2 = iVar8;
        }
        uVar5 = uVar5 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar5 < (uint)this_ptr->vertex_count);
    }
    uVar5 = 0;
    if (this_ptr->poly_count != 0) {
      iVar6 = 0;
      do {
        pCVar1 = this_ptr->poly_array;
        *(int *)((int)pCVar1->uv_coords + iVar6 + -0xc) =
             *(int *)((int)pCVar1->uv_coords + iVar6 + -0xc) -
             dest[*(int *)((int)pCVar1->uv_coords + iVar6 + -0xc)];
        *(int *)((int)pCVar1->uv_coords + iVar6 + -8) =
             *(int *)((int)pCVar1->uv_coords + iVar6 + -8) -
             dest[*(int *)((int)pCVar1->uv_coords + iVar6 + -8)];
        piVar2 = (int *)((int)pCVar1->uv_coords + iVar6 + -4);
        *piVar2 = *piVar2 - dest[*(int *)((int)pCVar1->uv_coords + iVar6 + -4)];
        iVar6 = iVar6 + 0x68;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)this_ptr->poly_count);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff90,"Deleting %d disjoing vertices",iVar8);
    ptr = (void *)(this_ptr->vertex_count - iVar8);
    pvVar9 = (void *)0x0;
    if (ptr != (void *)0x0) {
      unaff_ESI = 0;
      piVar2 = dest;
      do {
        do {
          piVar3 = piVar2;
          piVar2 = piVar3 + 1;
        } while (*piVar3 == -1);
        iVar8 = (int)piVar3 - (int)dest >> 0x1f;
        pCVar4 = this_ptr->vertex_data +
                 ((int)((((int)piVar3 - (int)dest) + iVar8 * -4) - (uint)(iVar8 << 1 < 0)) >> 2);
        pdVar7 = (double *)((int)&(this_ptr->vertex_data->position).x + unaff_ESI);
        *pdVar7 = (pCVar4->position).x;
        pdVar7[1] = (pCVar4->position).y;
        pdVar7[2] = (pCVar4->position).z;
        pdVar7[3] = (pCVar4->orig_position).x;
        pdVar7[4] = (pCVar4->orig_position).y;
        pdVar7[5] = (pCVar4->orig_position).z;
        *(uint *)(pdVar7 + 6) = pCVar4->attrib_flags;
        *(uint *)((int)pdVar7 + 0x34) = pCVar4->state_flags;
        pvVar9 = (void *)((int)pvVar9 + 1);
        unaff_ESI = unaff_ESI + 0x38;
      } while (pvVar9 < ptr);
    }
    pCVar4 = (CVert *)crt_memory_c_realloc_FUN_00601df0(this_ptr->vertex_data,(int)ptr * 0x38);
    if (pCVar4 != (CVert *)0x0) {
      this_ptr->vertex_data = pCVar4;
    }
    this_ptr->vertex_count = unaff_ESI;
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    crt_memory_c_free_FUN_005fe659(dest);
    dest = (int *)&DAT_00000001;
  }
  return (int)dest;
}
