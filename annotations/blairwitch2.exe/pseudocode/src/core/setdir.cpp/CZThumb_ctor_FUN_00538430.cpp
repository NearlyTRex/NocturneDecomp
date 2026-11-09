// Name: core_setdir.cpp_CZThumb_ctor_FUN_00538430
// Address: 00538430
// Address Range: [[00538430, 00538447]]
// Convention: __cdecl
// Signature: CZThumb * __cdecl core_setdir_cpp_CZThumb_ctor_FUN_00538430(CZThumb *this_ptr)

#include "nocturne.h"

CZThumb * __cdecl core_setdir_cpp_CZThumb_ctor_FUN_00538430(CZThumb *this_ptr)

{
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)&this_ptr->field_0x24 = 0;
  *(uint *)this_ptr = *(uint *)&this_ptr->field_0x4;
  return this_ptr;
}
