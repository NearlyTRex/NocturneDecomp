// Name: shape_superopt.cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0
// Address: 005d36b0
// Address Range: [[005d36b0, 005d375f]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0(CObj * this_ptr, uint mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0(CObj *this_ptr,uint mask)

{
  bool bVar1;
  CPoly *pCVar2;
  int iVar3;
  CPoly *pCVar4;
  uint local_1c;
  int *local_18;
  
  pCVar4 = this_ptr->poly_array;
  bVar1 = true;
  local_1c = 0;
  if (this_ptr->poly_count != 0) {
    local_18 = &pCVar4->vertex_idx_2;
    do {
      iVar3 = 0;
      pCVar2 = pCVar4;
      do {
        if ((this_ptr->vertex_data[pCVar2->vertex_idx_0].state_flags & mask) != mask) break;
        pCVar2 = (CPoly *)&pCVar2->vertex_idx_0;
        iVar3 = iVar3 + 1;
      } while (pCVar2 < local_18);
      if (iVar3 == 3) {
        pCVar4->flags = pCVar4->flags | mask;
      }
      else {
        pCVar4->flags = pCVar4->flags & ~mask;
        bVar1 = false;
      }
      pCVar4 = pCVar4 + 1;
      local_1c = local_1c + 1;
      local_18 = local_18 + 0x1a;
    } while (local_1c < (uint)this_ptr->poly_count);
  }
  if (!bVar1) {
    this_ptr->flags = this_ptr->flags & ~mask;
    return;
  }
  this_ptr->flags = this_ptr->flags | mask;
  return;
}
