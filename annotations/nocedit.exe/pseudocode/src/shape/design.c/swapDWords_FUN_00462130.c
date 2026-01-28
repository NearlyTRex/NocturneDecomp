// Name: shape_design.c_swapDWords_FUN_00462130
// Address: 00462130
// Address Range: [[00462130, 0046215c]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_swapDWords_FUN_00462130(uint *value1_ptr,uint *value2_ptr)

#include "nocturne.h"

void __cdecl shape_design_c_swapDWords_FUN_00462130(uint *value1_ptr,uint *value2_ptr)

{
  uint uVar1;
  
  uVar1 = *value1_ptr;
  *value1_ptr = *value2_ptr;
  *value2_ptr = uVar1;
  return;
}
