// Name: shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0
// Address: 005d44d0
// MANUAL RECONSTRUCTION
// Address Range: [[005d44d0, 005d46eb]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removeUnusedVertices_FUN_005d44d0(CObj *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeUnusedVertices_FUN_005d44d0(CObj *this_ptr)

{
  CPoly *poly;
  int *dest;
  CVert *pCVar5;
  CVert *dst_vert;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char local_7c [92];
  void *local_20;
  uint local_14;

  dest = (int *)shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->vertex_count << 2);
  iVar7 = 0;
  if (dest != (int *)0x0) {
    local_20 = (void *)0x0;
    if (1000 < (uint)this_ptr->vertex_count) {
      local_20 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
    }
    // Pass 1: mark used vertices
    memset(dest,0xff,this_ptr->vertex_count << 2);
    uVar5 = 0;
    if (this_ptr->poly_count != 0) {
      do {
        poly = &this_ptr->poly_array[uVar5];
        dest[poly->vertex_idx_0] = poly->vertex_idx_0;
        dest[poly->vertex_idx_1] = poly->vertex_idx_1;
        dest[poly->vertex_idx_2] = poly->vertex_idx_2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)this_ptr->poly_count);
    }
    // Pass 2: compute removal offsets (count unused before each index)
    iVar7 = 0;
    uVar6 = 0;
    if (this_ptr->vertex_count != 0) {
      do {
        if (dest[uVar6] == -1) {
          iVar7 = iVar7 + 1;
        }
        else {
          dest[uVar6] = iVar7;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)this_ptr->vertex_count);
    }
    // Pass 3: remap polygon vertex indices
    uVar5 = 0;
    if (this_ptr->poly_count != 0) {
      do {
        poly = &this_ptr->poly_array[uVar5];
        poly->vertex_idx_0 = poly->vertex_idx_0 - dest[poly->vertex_idx_0];
        poly->vertex_idx_1 = poly->vertex_idx_1 - dest[poly->vertex_idx_1];
        poly->vertex_idx_2 = poly->vertex_idx_2 - dest[poly->vertex_idx_2];
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)this_ptr->poly_count);
    }
    _sprintf(local_7c,"Deleting %d disjoing vertices",iVar7);
    // Pass 4: compact vertex array
    uVar6 = this_ptr->vertex_count - iVar7;
    local_14 = 0;
    if (uVar6 != 0) {
      int src_idx = 0;
      do {
        while (dest[src_idx] == -1) {
          src_idx = src_idx + 1;
        }
        pCVar5 = this_ptr->vertex_data + src_idx;
        dst_vert = this_ptr->vertex_data + local_14;
        *dst_vert = *pCVar5;
        src_idx = src_idx + 1;
        local_14 = local_14 + 1;
      } while (local_14 < uVar6);
    }
    CVert *pCVar4 = (CVert *)realloc(this_ptr->vertex_data,uVar6 * 0x38);
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
