// Name: shape_superopt.cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20
// Address: 005c7b20
// Address Range: [[005c7b20, 005c7db3]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20(CComplexPolygon *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20(CComplexPolygon *this_ptr)

{
  int iVar1;
  int iVar3;
  int *piVar3;
  int iVar4;
  uint local_14;
  int local_10;
  int iVar2;
  CVert *pCVar1;
  
  if ((this_ptr->polygon_count != 0) && (this_ptr->polygon_list != (CPoly **)0x0)) {
    this_ptr->expanded_edge_count = this_ptr->polygon_count * 3;
    piVar3 = shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->polygon_count * 0x120);
    this_ptr->expanded_edges = (SExpandedEdge *)piVar3;
    if (piVar3 != (int *)0x0) {
      local_14 = 0;
      pCVar1 = (*this_ptr->polygon_list)->parent_obj->vertex_data;
      if (this_ptr->polygon_count != 0) {
        local_10 = 0;
        do {
          iVar1 = *(int *)((int)this_ptr->polygon_list + local_10);
          iVar2 = *(int *)(iVar1 + 4);
          *piVar3 = iVar2;
          piVar3[4] = *(int *)&pCVar1[iVar2].position.x;
          piVar3[5] = *(int *)((int)&pCVar1[iVar2].position.x + 4);
          piVar3[6] = *(int *)&pCVar1[iVar2].position.y;
          piVar3[7] = *(int *)((int)&pCVar1[iVar2].position.y + 4);
          piVar3[8] = *(int *)&pCVar1[iVar2].position.z;
          piVar3[9] = *(int *)((int)&pCVar1[iVar2].position.z + 4);
          piVar3[0x10] = *(int *)(iVar1 + 0x10);
          piVar3[0x11] = *(int *)(iVar1 + 0x14);
          piVar3[0x12] = *(int *)(iVar1 + 0x18);
          piVar3[0x13] = *(int *)(iVar1 + 0x1c);
          iVar3 = *(int *)(iVar1 + 8);
          piVar3[1] = iVar3;
          piVar3[10] = *(int *)&pCVar1[iVar3].position.x;
          piVar3[0xb] = *(int *)((int)&pCVar1[iVar3].position.x + 4);
          piVar3[0xc] = *(int *)&pCVar1[iVar3].position.y;
          piVar3[0xd] = *(int *)((int)&pCVar1[iVar3].position.y + 4);
          *(double *)(piVar3 + 0xe) = pCVar1[iVar3].position.z;
          piVar3[0x14] = *(int *)(iVar1 + 0x20);
          piVar3[0x15] = *(int *)(iVar1 + 0x24);
          piVar3[0x16] = *(int *)(iVar1 + 0x28);
          piVar3[0x17] = *(int *)(iVar1 + 0x2c);
          iVar3 = *(int *)(iVar1 + 8);
          piVar3[0x18] = iVar3;
          *(double *)(piVar3 + 0x1c) = pCVar1[iVar3].position.x;
          *(double *)(piVar3 + 0x1e) = pCVar1[iVar3].position.y;
          *(double *)(piVar3 + 0x20) = pCVar1[iVar3].position.z;
          piVar3[0x28] = *(int *)(iVar1 + 0x20);
          piVar3[0x29] = *(int *)(iVar1 + 0x24);
          piVar3[0x2a] = *(int *)(iVar1 + 0x28);
          piVar3[0x2b] = *(int *)(iVar1 + 0x2c);
          iVar3 = *(int *)(iVar1 + 0xc);
          piVar3[0x19] = iVar3;
          piVar3[0x22] = *(int *)&pCVar1[iVar3].position.x;
          piVar3[0x23] = *(int *)((int)&pCVar1[iVar3].position.x + 4);
          piVar3[0x24] = *(int *)&pCVar1[iVar3].position.y;
          piVar3[0x25] = *(int *)((int)&pCVar1[iVar3].position.y + 4);
          *(double *)(piVar3 + 0x26) = pCVar1[iVar3].position.z;
          piVar3[0x2c] = *(int *)(iVar1 + 0x30);
          piVar3[0x2d] = *(int *)(iVar1 + 0x34);
          piVar3[0x2e] = *(int *)(iVar1 + 0x38);
          piVar3[0x2f] = *(int *)(iVar1 + 0x3c);
          iVar3 = *(int *)(iVar1 + 0xc);
          piVar3[0x30] = iVar3;
          *(double *)(piVar3 + 0x34) = pCVar1[iVar3].position.x;
          *(double *)(piVar3 + 0x36) = pCVar1[iVar3].position.y;
          *(double *)(piVar3 + 0x38) = pCVar1[iVar3].position.z;
          piVar3[0x40] = *(int *)(iVar1 + 0x30);
          piVar3[0x41] = *(int *)(iVar1 + 0x34);
          piVar3[0x42] = *(int *)(iVar1 + 0x38);
          piVar3[0x43] = *(int *)(iVar1 + 0x3c);
          iVar3 = *(int *)(iVar1 + 4);
          piVar3[0x31] = iVar3;
          piVar3[0x3a] = *(int *)&pCVar1[iVar3].position.x;
          piVar3[0x3b] = *(int *)((int)&pCVar1[iVar3].position.x + 4);
          piVar3[0x3c] = *(int *)&pCVar1[iVar3].position.y;
          piVar3[0x3d] = *(int *)((int)&pCVar1[iVar3].position.y + 4);
          piVar3[0x3e] = *(int *)&pCVar1[iVar3].position.z;
          piVar3[0x3f] = *(int *)((int)&pCVar1[iVar3].position.z + 4);
          *(ulonglong *)(piVar3 + 0x44) = *(ulonglong *)(iVar1 + 0x10);
          piVar3[0x46] = *(int *)(iVar1 + 0x18);
          piVar3[0x47] = *(int *)(iVar1 + 0x1c);
          local_14 = local_14 + 1;
          local_10 = local_10 + 4;
          piVar3 = piVar3 + 0x48;
        } while (local_14 < (uint)this_ptr->polygon_count);
      }
      shape_superopt_cpp_CComplexPolygon_removedSharedEdges_FUN_005c8160(this_ptr);
      shape_superopt_cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0(this_ptr);
      iVar4 = shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
                        (this_ptr,this_ptr->expanded_edges,this_ptr->expanded_edge_count);
      if (iVar4 == 0) {
        shape_memdbg_cpp_free_FUN_005fe659(this_ptr->expanded_edges);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
