// Name: shape_superopt.cpp_CObj_removeVertex_FUN_005d3140
// Address: 005d3140
// MANUAL RECONSTRUCTION
// Address Range: [[005d3140, 005d3241]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removeVertex_FUN_005d3140(CObj *this_ptr,uint index)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeVertex_FUN_005d3140(CObj *this_ptr,uint index)

{
  uint uVar2;
  CVert *pCVar3;
  int iVar4;
  uint uVar5;
  
  if ((uint)this_ptr->vertex_count <= index) {
    return 0;
  }
  uVar5 = this_ptr->vertex_count - 1;
  this_ptr->vertex_count = uVar5;
  if (index < uVar5) {
    memmove
              (this_ptr->vertex_data + index,this_ptr->vertex_data + index + 1,
               (uVar5 - index) * 0x38);
  }
  if (this_ptr->vertex_count != 0) {
    pCVar3 = (CVert *)realloc(this_ptr->vertex_data,this_ptr->vertex_count * 0x38);
    iVar4 = 0;
    if (pCVar3 != (CVert *)0x0) {
      uVar5 = 0;
      this_ptr->vertex_data = pCVar3;
      if (this_ptr->poly_count != 0) {
        do {
          uVar2 = this_ptr->poly_array[uVar5].vertex_idx_0;
          if (index < uVar2) {
            this_ptr->poly_array[uVar5].vertex_idx_0 = uVar2 - 1;
          }
          uVar2 = this_ptr->poly_array[uVar5].vertex_idx_1;
          if (index < uVar2) {
            this_ptr->poly_array[uVar5].vertex_idx_1 = uVar2 - 1;
          }
          uVar2 = this_ptr->poly_array[uVar5].vertex_idx_2;
          if (index < uVar2) {
            this_ptr->poly_array[uVar5].vertex_idx_2 = uVar2 - 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)this_ptr->poly_count);
      }
      iVar4 = 1;
    }
    return iVar4;
  }
  free(this_ptr->vertex_data);
  this_ptr->vertex_data = (CVert *)0x0;
  return 1;
}
