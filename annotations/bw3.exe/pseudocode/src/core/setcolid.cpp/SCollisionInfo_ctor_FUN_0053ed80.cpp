// Name: core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
// Address: 0053ed80
// Address Range: [[0053ed80, 0053ed98]]
// Convention: __cdecl
// Signature: SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo *this_ptr)

#include "nocturne.h"

SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo *this_ptr)

{
  *(uint *)&this_ptr->field_0x20 = 0;
  *(uint *)&this_ptr->field_0x24 = 0;
  *(uint *)this_ptr = 0;
  return this_ptr;
}
