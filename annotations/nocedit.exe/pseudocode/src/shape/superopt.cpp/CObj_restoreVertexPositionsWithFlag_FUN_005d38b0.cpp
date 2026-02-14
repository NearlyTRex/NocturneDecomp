// Name: shape_superopt.cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0
// Address: 005d38b0
// Address Range: [[005d38b0, 005d395c]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0(CObj *this_ptr,uint flag_mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0(CObj *this_ptr,uint flag_mask)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  if ((this_ptr->flags & flag_mask) == flag_mask) {
    (*this_ptr->vtable->restoreVertexPositions)(this_ptr);
    return;
  }
  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    iVar4 = 0;
    do {
      iVar1 = (int)&((CPoly *)(this_ptr->poly_array->uv_coords + -1))->parent_obj + iVar4;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x68;
      (**(code **)(*(int *)(iVar1 + 100) + 0x40))(iVar1,flag_mask);
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  uVar3 = 0;
  if (this_ptr->vertex_count != 0) {
    iVar4 = 0;
    do {
      while (puVar2 = (uint *)((int)&(this_ptr->vertex_data->position).x + iVar4),
            (puVar2[0xd] & flag_mask) == flag_mask) {
        *puVar2 = puVar2[6];
        puVar2[1] = puVar2[7];
        puVar2[2] = puVar2[8];
        puVar2[3] = puVar2[9];
        puVar2[4] = puVar2[10];
        puVar2[5] = puVar2[0xb];
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x38;
        if ((uint)this_ptr->vertex_count <= uVar3) {
          return;
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x38;
    } while (uVar3 < (uint)this_ptr->vertex_count);
  }
  return;
}
