// Name: shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
// Address: 005d2650
// MANUAL RECONSTRUCTION
// Address Range: [[005d2650, 005d2715]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(CObj *this_ptr,CObj *source)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(CObj *this_ptr,CObj *source)

{
  int iVar1;
  uint uVar3;

  (*this_ptr->vtable->free)(this_ptr);
  (*this_ptr->vtable->reset)(this_ptr);
  iVar1 = (*this_ptr->vtable->init)(this_ptr,source->poly_count,source->vertex_count);
  if (iVar1 == 0) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to allocate RAM for object copy");
    return 0;
  }
  memcpy(this_ptr->vertex_data,source->vertex_data,this_ptr->vertex_count * sizeof(CVert));
  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      (*this_ptr->poly_array[uVar3].vtable->copyFrom)
                (&this_ptr->poly_array[uVar3],&source->poly_array[uVar3],this_ptr);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  this_ptr->flags = source->flags;
  return 1;
}
