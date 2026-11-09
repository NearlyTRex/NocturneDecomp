// Name: core_morph.cpp_CMorphModel_ctor_FUN_004f9a20
// Address: 004f9a20
// Address Range: [[004f9a20, 004f9a4d]]
// Convention: __cdecl
// Signature: CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_004f9a20(CMorphModel *this_ptr)

#include "nocturne.h"

CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_004f9a20(CMorphModel *this_ptr)

{
  *(uint *)&this_ptr->field_0x58 = 0;
  *(uint *)&this_ptr->field_0x5c = 0;
  *(uint *)&this_ptr->field_0x60 = 0;
  *(uint *)&this_ptr->field_0x64 = 0;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x54 = 0;
  return this_ptr;
}
