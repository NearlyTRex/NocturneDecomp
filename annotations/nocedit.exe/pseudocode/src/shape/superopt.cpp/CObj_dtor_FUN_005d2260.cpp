// Name: shape_superopt.cpp_CObj_dtor_FUN_005d2260
// Address: 005d2260
// Address Range: [[005d2260, 005d2278]]
// Convention: __cdecl
// Signature: CObj * shape_superopt.cpp_CObj_dtor_FUN_005d2260(CObj * this_ptr)

#include "nocturne.h"

CObj * __cdecl shape_superopt_cpp_CObj_dtor_FUN_005d2260(CObj *this_ptr)

{
  this_ptr->vtable = &g_CObjVTable;
  shape_superopt_cpp_CObj_free_FUN_005d2600(this_ptr);
  return this_ptr;
}
