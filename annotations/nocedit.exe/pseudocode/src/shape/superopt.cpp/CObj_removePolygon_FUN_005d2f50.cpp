// Name: shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50
// Address: 005d2f50
// Address Range: [[005d2f50, 005d3013]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removePolygon_FUN_005d2f50(CObj *this_ptr,uint index)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removePolygon_FUN_005d2f50(CObj *this_ptr,uint index)

{
  uint uVar1;
  CPoly *pCVar2;
  
  if ((uint)this_ptr->poly_count <= index) {
    return 0;
  }
  uVar1 = this_ptr->poly_count - 1;
  this_ptr->poly_count = uVar1;
  if (index < uVar1) {
    memmove
              (this_ptr->poly_array + index,this_ptr->poly_array + index + 1,(uVar1 - index) * 0x68)
    ;
  }
  if (this_ptr->poly_count != 0) {
    pCVar2 = realloc(this_ptr->poly_array,this_ptr->poly_count * 0x68);
    if (pCVar2 != (CPoly *)0x0) {
      this_ptr->poly_array = pCVar2;
    }
    return (uint)(pCVar2 != (CPoly *)0x0);
  }
  free(this_ptr->poly_array);
  this_ptr->poly_array = (CPoly *)0x0;
  return 1;
}
