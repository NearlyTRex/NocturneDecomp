// Name: shape_superopt.cpp_CPoly_ctor_FUN_005cc620
// Address: 005cc620
// Address Range: [[005cc620, 005cc653]]
// Convention: __cdecl
// Signature: CPoly * __cdecl shape_superopt_cpp_CPoly_ctor_FUN_005cc620(CPoly *this_ptr)

#include "nocturne.h"

CPoly * __cdecl shape_superopt_cpp_CPoly_ctor_FUN_005cc620(CPoly *this_ptr)

{
  void *pvVar1;
  CObj *in_stack_00000008;
  
  pvVar1 = __arrinit(this_ptr->uv_coords,3,&g_CP2DTypeInfo);
  *(CPoly_vtable **)((int)pvVar1 + 0x54) = &g_CPolyVTable;
  shape_superopt_cpp_CPoly_init_FUN_005cc670((CPoly *)((int)pvVar1 + -0x10),in_stack_00000008);
  return (CPoly *)((int)pvVar1 + -0x10);
}
