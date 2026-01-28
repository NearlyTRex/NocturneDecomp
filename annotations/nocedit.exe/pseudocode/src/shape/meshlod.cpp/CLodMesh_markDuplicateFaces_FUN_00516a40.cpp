// Name: shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40
// Address: 00516a40
// Address Range: [[00516a40, 00516b37]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(CLodMesh *this_ptr)

{
  CLodFace *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  if (0 < this_ptr->tri_count) {
    local_28 = 0;
    do {
      iVar3 = (int)this_ptr->tri_data->attribute_indices + local_28;
      if ((*(int *)(iVar3 + 0x40) == 0) && (local_1c = local_24 + 1, local_1c < this_ptr->tri_count)
         ) {
        local_20 = local_1c * 0x8c;
        do {
          pCVar1 = this_ptr->tri_data;
          if (*(int *)((int)pCVar1->edge_perpendiculars + local_20 + -0x14) == 0) {
            iVar5 = 0;
            do {
              iVar4 = 0;
              iVar2 = iVar5;
              iVar6 = iVar3;
              do {
                if (*(int *)(iVar6 + 0x10) !=
                    *(int *)((int)pCVar1->attribute_indices + (iVar2 % 3) * 4 + local_20 + 0x10))
                break;
                iVar2 = iVar2 + 1;
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar4 < 3);
              if (iVar4 == 3) {
                *(uint *)((int)pCVar1->edge_perpendiculars + local_20 + -0x14) = 1;
                break;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 3);
          }
          local_20 = local_20 + 0x8c;
          local_1c = local_1c + 1;
        } while (local_1c < this_ptr->tri_count);
      }
      local_28 = local_28 + 0x8c;
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->tri_count);
  }
  return;
}
