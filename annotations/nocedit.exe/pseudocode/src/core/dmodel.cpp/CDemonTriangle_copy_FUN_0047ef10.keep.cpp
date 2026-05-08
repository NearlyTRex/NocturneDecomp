// Name: core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10
// Address: 0047ef10
// MANUAL RECONSTRUCTION
// Address Range: [[0047ef10, 0047ef54]]
// Convention: __cdecl
// Signature: int __cdecl core_dmodel_cpp_CDemonTriangle_copy_FUN_0047ef10(CDemonTriangle *this_ptr,CDemonTriangle *other)

#include "nocturne.h"

int __cdecl core_dmodel_cpp_CDemonTriangle_copy_FUN_0047ef10(CDemonTriangle *this_ptr,CDemonTriangle *other)

{
  void *pvVar1;
  
  this_ptr->vertex1 = other->vertex1;
  this_ptr->vertex2 = other->vertex2;
  pvVar1 = __arrcopy
                     (&this_ptr->vertex3,&other->vertex3,4,&g_RA4HQPointTypeInfo);
  return (int)pvVar1 + -0x18;
}
