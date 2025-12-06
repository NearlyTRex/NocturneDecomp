// Name: shape_superopt.cpp_CObj_computeCoplanarAdjacency_FUN_005d3960
// Address: 005d3960
// Address Range: [[005d3960, 005d3da1]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_computeCoplanarAdjacency_FUN_005d3960(CObj * this_ptr, int update_adjacency)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_computeCoplanarAdjacency_FUN_005d3960(CObj *this_ptr,int update_adjacency)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar11;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  CPoly *pCVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  void *local_64;
  int iStack_60;
  CVector3d *local_5c;
  uint local_58;
  int *local_54;
  CPoly *pCStack_50;
  uint uStack_28;
  double *pdStack_18;
  
  pCVar12 = this_ptr->poly_array;
  if (2000 < (uint)this_ptr->poly_count) {
    local_64 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
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
    pCStack_50 = this_ptr->poly_array;
    local_58 = 0;
    if (this_ptr->poly_count != 0) {
      iStack_60 = 0x68;
      local_5c = &pCStack_50->normal;
      local_54 = &pCStack_50->adjacency_flags;
      do {
        if ((*local_54 & 0x38U) != 0x38) {
          pCVar12 = this_ptr->poly_array;
          iVar1 = pCStack_50->vertex_idx_0;
          iVar2 = pCStack_50->vertex_idx_1;
          iVar3 = pCStack_50->vertex_idx_2;
          uStack_28 = local_58 + 1;
          if (uStack_28 < (uint)this_ptr->poly_count) {
            puVar13 = (uint *)((int)(pCVar12->uv_coords + 4) + iStack_60 + 8);
            pdStack_18 = (double *)((int)&((CVector3d *)(pCVar12->uv_coords + 3))->x + iStack_60);
            piVar15 = (int *)((int)pCVar12->uv_coords + iStack_60 + -0xc);
            do {
              if (((*puVar13 & 0x38) != 0x38) &&
                 (0.9999 <= local_5c->z * pdStack_18[2] +
                            local_5c->x * *pdStack_18 + local_5c->y * pdStack_18[1])) {
                uVar14 = (uint)(iVar1 == *piVar15) * 2;
                uVar4 = (uint)(iVar2 == *piVar15) << 2;
                uVar5 = (uint)(iVar3 == *piVar15) << 3;
                uVar6 = (uint)(iVar1 == piVar15[1]) << 4;
                uVar7 = (uint)(iVar2 == piVar15[1]) << 5;
                uVar8 = (uint)(iVar3 == piVar15[1]) << 6;
                uVar16 = (uint)(iVar1 == piVar15[2]) << 7;
                uVar9 = (uint)(iVar2 == piVar15[2]) << 8;
                uVar10 = (uint)(iVar3 == piVar15[2]) << 9;
                if ((uVar4 | uVar6) == 0x14) {
                  *(byte *)local_54 = (byte)*local_54 & 0xf6;
                  *(byte *)local_54 = (byte)*local_54 | 8;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xf6;
                  *(byte *)puVar13 = (byte)*puVar13 | 8;
                }
                else if ((uVar16 | uVar7) == 0xa0) {
                  *(byte *)local_54 = (byte)*local_54 & 0xf6;
                  *(byte *)local_54 = (byte)*local_54 | 8;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xed;
                  *(byte *)puVar13 = (byte)*puVar13 | 0x10;
                }
                else if ((uVar14 | uVar9) == 0x102) {
                  *(byte *)local_54 = (byte)*local_54 & 0xf6;
                  *(byte *)local_54 = (byte)*local_54 | 8;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xdb;
                  *(byte *)puVar13 = (byte)*puVar13 | 0x20;
                }
                if ((uVar8 | uVar9) == 0x140) {
                  *(byte *)local_54 = (byte)*local_54 & 0xed;
                  *(byte *)local_54 = (byte)*local_54 | 0x10;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xed;
                  *(byte *)puVar13 = (byte)*puVar13 | 0x10;
                }
                else if ((uVar10 | uVar4) == 0x204) {
                  *(byte *)local_54 = (byte)*local_54 & 0xed;
                  *(byte *)local_54 = (byte)*local_54 | 0x10;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xdb;
                  *(byte *)puVar13 = (byte)*puVar13 | 0x20;
                }
                else if ((uVar5 | uVar7) == 0x28) {
                  *(byte *)local_54 = (byte)*local_54 & 0xed;
                  *(byte *)local_54 = (byte)*local_54 | 0x10;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xf6;
                  *(byte *)puVar13 = (byte)*puVar13 | 8;
                }
                if ((uVar16 | uVar5) == 0x88) {
                  bVar11 = (byte)*local_54 & 0xdb;
                  *(byte *)local_54 = bVar11;
                  *(byte *)local_54 = bVar11 | 0x20;
                  bVar11 = (byte)*puVar13 & 0xdb;
                  *(byte *)puVar13 = bVar11;
                  *(byte *)puVar13 = bVar11 | 0x20;
                }
                else if ((uVar8 | uVar14) == 0x42) {
                  bVar11 = (byte)*local_54 & 0xdb;
                  *(byte *)local_54 = bVar11;
                  *(byte *)local_54 = bVar11 | 0x20;
                  bVar11 = (byte)*puVar13 & 0xf6;
                  *(byte *)puVar13 = bVar11;
                  *(byte *)puVar13 = bVar11 | 8;
                }
                else if ((uVar10 | uVar6) == 0x210) {
                  bVar11 = (byte)*local_54 & 0xdb;
                  *(byte *)local_54 = bVar11;
                  *(byte *)local_54 = bVar11 | 0x20;
                  bVar11 = (byte)*puVar13 & 0xed;
                  *(byte *)puVar13 = bVar11;
                  *(byte *)puVar13 = bVar11 | 0x10;
                }
              }
              puVar13 = puVar13 + 0x1a;
              uStack_28 = uStack_28 + 1;
              pdStack_18 = pdStack_18 + 0xd;
              piVar15 = piVar15 + 0x1a;
            } while (uStack_28 < (uint)this_ptr->poly_count);
          }
        }
        iStack_60 = iStack_60 + 0x68;
        local_5c = (CVector3d *)((int)(local_5c + 4) + 8);
        *local_54 = *local_54 & 7;
        pCStack_50 = pCStack_50 + 1;
        local_58 = local_58 + 1;
        local_54 = local_54 + 0x1a;
      } while (local_58 < (uint)this_ptr->poly_count);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(local_64);
  return;
}
