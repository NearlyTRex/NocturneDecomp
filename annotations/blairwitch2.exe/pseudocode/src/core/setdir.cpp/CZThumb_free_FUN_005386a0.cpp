// Name: core_setdir.cpp_CZThumb_free_FUN_005386a0
// Address: 005386a0
// Address Range: [[005386a0, 005386d7]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_free_FUN_005386a0(CZThumb *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_free_FUN_005386a0(CZThumb *this_ptr)

{
  if (*(int *)&this_ptr->field_0x24 == 0) {
    *(uint *)&this_ptr->field_0x4 = 0;
    *(uint *)this_ptr = *(uint *)&this_ptr->field_0x4;
    return;
  }
  FUN_005b86a0(*(int *)&this_ptr->field_0x24);
  *(uint *)&this_ptr->field_0x24 = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)this_ptr = *(uint *)&this_ptr->field_0x4;
  return;
}
