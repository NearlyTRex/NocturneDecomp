// Name: shape_superopt.cpp_CPoly_ctor_FUN_005cc620
// Address: 005cc620
// Address Range: [[005cc620, 005cc653]]
// Convention: __cdecl
// Signature: CPoly * __cdecl shape_superopt_cpp_CPoly_ctor_FUN_005cc620(CPoly *this_ptr,CObj *parent_obj)

#include "nocturne.h"

CPoly * __cdecl shape_superopt_cpp_CPoly_ctor_FUN_005cc620(CPoly *this_ptr,CObj *parent_obj)

{
  CPoly_ptr_16 pvVar1;
  
  pvVar1 = __arrinit(this_ptr->uv_coords,3,&g_CP2DTypeInfo);
  ADJ(pvVar1)->vtable = &g_CPolyVTable;
  shape_superopt_cpp_CPoly_init_FUN_005cc670(ADJ(pvVar1),parent_obj);
  return ADJ(pvVar1);
}
