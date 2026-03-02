// Name: shape_superopt.cpp_CComplexPolygon_removedSharedEdges_FUN_005c8160
// Address: 005c8160
// Address Range: [[005c8160, 005c8273]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_removedSharedEdges_FUN_005c8160(CComplexPolygon *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_removedSharedEdges_FUN_005c8160(CComplexPolygon *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *src;
  int *dest;
  uint uVar7;
  int *local_28;
  uint local_14;
  
  piVar1 = this_ptr->expanded_edges;
  do {
    bVar4 = true;
    local_14 = 0;
    local_28 = piVar1;
    if (this_ptr->expanded_edge_count != 0) {
      do {
        if (!bVar4) break;
        iVar2 = *local_28;
        iVar3 = local_28[1];
        uVar7 = local_14 + 1;
        if (uVar7 < (uint)this_ptr->expanded_edge_count) {
          iVar5 = uVar7 * 0x18;
          dest = piVar1 + uVar7 * 0x18;
          src = piVar1 + uVar7 * 0x18 + 0x18;
          do {
            if (!bVar4) break;
            if ((*dest == iVar3) && (dest[1] == iVar2)) {
              memmove
                        (dest,src,((this_ptr->expanded_edge_count - uVar7) + -1) * 0x60);
              iVar6 = this_ptr->expanded_edge_count + -1;
              this_ptr->expanded_edge_count = iVar6;
              memmove
                        (local_28,piVar1 + iVar5,((iVar6 - local_14) + -1) * 0x60);
              bVar4 = false;
              this_ptr->expanded_edge_count = this_ptr->expanded_edge_count + -1;
            }
            dest = dest + 0x18;
            uVar7 = uVar7 + 1;
            src = src + 0x18;
          } while (uVar7 < (uint)this_ptr->expanded_edge_count);
        }
        local_14 = local_14 + 1;
        local_28 = local_28 + 0x18;
      } while (local_14 < (uint)this_ptr->expanded_edge_count);
    }
    if (bVar4) {
      return;
    }
  } while( true );
}
