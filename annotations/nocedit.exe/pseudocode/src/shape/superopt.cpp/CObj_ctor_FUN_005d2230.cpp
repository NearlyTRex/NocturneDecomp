// Name: shape_superopt.cpp_CObj_ctor_FUN_005d2230
// Address: 005d2230
// Address Range: [[005d2230, 005d225b]]
// Convention: __cdecl
// Signature: CObj * __cdecl shape_superopt_cpp_CObj_ctor_FUN_005d2230(CObj *this_ptr,int poly_count,int vertex_count)

#include "nocturne.h"

CObj * __cdecl shape_superopt_cpp_CObj_ctor_FUN_005d2230(CObj *this_ptr,int poly_count,int vertex_count)

{
  this_ptr->vtable = &g_CObjVTable;
  shape_superopt_cpp_CObj_reset_FUN_005d2280(this_ptr);
  shape_superopt_cpp_CObj_init_FUN_005d22d0(this_ptr,poly_count,vertex_count);
  return this_ptr;
}
