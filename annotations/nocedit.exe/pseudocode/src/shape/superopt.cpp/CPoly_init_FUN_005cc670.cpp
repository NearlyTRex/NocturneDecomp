// Name: shape_superopt.cpp_CPoly_init_FUN_005cc670
// Address: 005cc670
// Address Range: [[005cc670, 005cc694]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_init_FUN_005cc670(CPoly * this_ptr, CObj * parent_obj)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_init_FUN_005cc670(CPoly *this_ptr,CObj *parent_obj)

{
  this_ptr->flags = 0;
  this_ptr->parent_obj = parent_obj;
  this_ptr->adjacency_flags = 0;
  (*this_ptr->vtable->setMaterialId)(this_ptr,-1);
  return;
}
