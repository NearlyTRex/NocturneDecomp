// Name: shape_superopt.cpp_CObj_saveVertexPositions_FUN_005d3760
// Address: 005d3760
// Address Range: [[005d3760, 005d37a8]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_saveVertexPositions_FUN_005d3760(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_saveVertexPositions_FUN_005d3760(CObj *this_ptr)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (this_ptr->vertex_count != 0) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)&(this_ptr->vertex_data->position).x + iVar3);
      uVar2 = uVar2 + 1;
      puVar1[6] = *puVar1;
      puVar1[7] = puVar1[1];
      puVar1[8] = puVar1[2];
      puVar1[9] = puVar1[3];
      puVar1[10] = puVar1[4];
      puVar1[0xb] = puVar1[5];
      iVar3 = iVar3 + 0x38;
    } while (uVar2 < (uint)this_ptr->vertex_count);
  }
  return;
}
