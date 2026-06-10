// Name: shape_superopt.cpp_CObj_computeCoplanarAdjacency_FUN_005d3960
// Address: 005d3960
// MANUAL RECONSTRUCTION
// Address Range: [[005d3960, 005d3da1]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_computeCoplanarAdjacency_FUN_005d3960(CObj *this_ptr,int update_adjacency)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_computeCoplanarAdjacency_FUN_005d3960(CObj *this_ptr,int update_adjacency)

{
  uint uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  CPoly *pCVar12;
  uint uVar14;
  uint uVar16;
  void *local_68;
  uint local_5c;
  CPoly *local_54;
  CPoly *poly_j;
  uint uStack_2c;
  int iVar1;
  int iVar2;
  int iVar3;
  
  local_68 = (void *)0x0;
  pCVar12 = this_ptr->poly_array;
  if (2000 < (uint)this_ptr->poly_count) {
    local_68 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  uVar14 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      (*pCVar12->vtable->computeNormal)(pCVar12);
      if (update_adjacency != 0) {
        pCVar12->adjacency_flags = 7;
      }
      uVar14 = uVar14 + 1;
      pCVar12 = pCVar12 + 1;
    } while (uVar14 < (uint)this_ptr->poly_count);
  }
  if (update_adjacency != 0) {
    local_54 = this_ptr->poly_array;
    local_5c = 0;
    if (this_ptr->poly_count != 0) {
      do {
        if ((local_54->adjacency_flags & 0x38U) != 0x38) {
          iVar1 = local_54->vertex_idx_0;
          iVar2 = local_54->vertex_idx_1;
          iVar3 = local_54->vertex_idx_2;
          uStack_2c = local_5c + 1;
          if (uStack_2c < (uint)this_ptr->poly_count) {
            poly_j = this_ptr->poly_array + uStack_2c;
            do {
              if (((poly_j->adjacency_flags & 0x38) != 0x38) &&
                 (0.9999 <= (local_54->normal.impl).z * poly_j->normal.impl.z +
                            (local_54->normal.impl).x * poly_j->normal.impl.x +
                            (local_54->normal.impl).y * poly_j->normal.impl.y)) {
                uVar2 = (uint)(iVar1 == poly_j->vertex_idx_0) * 2;
                uVar4 = (uint)(iVar2 == poly_j->vertex_idx_0) << 2;
                uVar5 = (uint)(iVar3 == poly_j->vertex_idx_0) << 3;
                uVar6 = (uint)(iVar1 == poly_j->vertex_idx_1) << 4;
                uVar7 = (uint)(iVar2 == poly_j->vertex_idx_1) << 5;
                uVar8 = (uint)(iVar3 == poly_j->vertex_idx_1) << 6;
                uVar16 = (uint)(iVar1 == poly_j->vertex_idx_2) << 7;
                uVar9 = (uint)(iVar2 == poly_j->vertex_idx_2) << 8;
                uVar10 = (uint)(iVar3 == poly_j->vertex_idx_2) << 9;
                if ((uVar4 | uVar6) == 0x14) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xf6) | 8;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xf6) | 8;
                }
                else if ((uVar16 | uVar7) == 0xa0) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xf6) | 8;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xed) | 0x10;
                }
                else if ((uVar2 | uVar9) == 0x102) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xf6) | 8;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xdb) | 0x20;
                }
                if ((uVar8 | uVar9) == 0x140) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xed) | 0x10;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xed) | 0x10;
                }
                else if ((uVar10 | uVar4) == 0x204) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xed) | 0x10;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xdb) | 0x20;
                }
                else if ((uVar5 | uVar7) == 0x28) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xed) | 0x10;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xf6) | 8;
                }
                if ((uVar16 | uVar5) == 0x88) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xdb) | 0x20;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xdb) | 0x20;
                }
                else if ((uVar8 | uVar2) == 0x42) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xdb) | 0x20;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xf6) | 8;
                }
                else if ((uVar10 | uVar6) == 0x210) {
                  local_54->adjacency_flags = (local_54->adjacency_flags & 0xdb) | 0x20;
                  poly_j->adjacency_flags = (poly_j->adjacency_flags & 0xed) | 0x10;
                }
              }
              uStack_2c = uStack_2c + 1;
              poly_j = poly_j + 1;
            } while (uStack_2c < (uint)this_ptr->poly_count);
          }
        }
        local_54->adjacency_flags = local_54->adjacency_flags & 7;
        local_54 = local_54 + 1;
        local_5c = local_5c + 1;
      } while (local_5c < (uint)this_ptr->poly_count);
    }
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(local_68);
  return;
}
