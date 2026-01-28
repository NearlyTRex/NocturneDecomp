// Name: shape_superopt.cpp_CObj_removeVertex_FUN_005d3140
// Address: 005d3140
// Address Range: [[005d3140, 005d3241]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removeVertex_FUN_005d3140(CObj *this_ptr,uint index)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeVertex_FUN_005d3140(CObj *this_ptr,uint index)

{
  CPoly *pCVar1;
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
    crt_string_c_memmove_FUN_005fe5e0
              (this_ptr->vertex_data + index,this_ptr->vertex_data + index + 1,
               (uVar5 - index) * 0x38);
  }
  if (this_ptr->vertex_count != 0) {
    pCVar3 = crt_memory_c_realloc_FUN_00601df0(this_ptr->vertex_data,this_ptr->vertex_count * 0x38);
    iVar4 = 0;
    if (pCVar3 != (CVert *)0x0) {
      uVar5 = 0;
      this_ptr->vertex_data = pCVar3;
      if (this_ptr->poly_count != 0) {
        iVar4 = 0;
        do {
          pCVar1 = this_ptr->poly_array;
          uVar2 = *(uint *)((int)pCVar1->uv_coords + iVar4 + -0xc);
          if (index < uVar2) {
            *(uint *)((int)pCVar1->uv_coords + iVar4 + -0xc) = uVar2 - 1;
          }
          uVar2 = *(uint *)((int)pCVar1->uv_coords + iVar4 + -8);
          if (index < uVar2) {
            *(uint *)((int)pCVar1->uv_coords + iVar4 + -8) = uVar2 - 1;
          }
          uVar2 = *(uint *)((int)pCVar1->uv_coords + iVar4 + -4);
          if (index < uVar2) {
            *(uint *)((int)pCVar1->uv_coords + iVar4 + -4) = uVar2 - 1;
          }
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 0x68;
        } while (uVar5 < (uint)this_ptr->poly_count);
      }
      iVar4 = 1;
    }
    return iVar4;
  }
  crt_memory_c_free_FUN_00601cd0(this_ptr->vertex_data);
  this_ptr->vertex_data = (CVert *)0x0;
  return 1;
}
