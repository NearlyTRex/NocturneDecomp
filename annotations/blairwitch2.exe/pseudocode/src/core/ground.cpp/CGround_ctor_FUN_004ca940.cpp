// Name: core_ground.cpp_CGround_ctor_FUN_004ca940
// Address: 004ca940
// Address Range: [[004ca940, 004ca995]]
// Convention: __cdecl
// Signature: CGround * __cdecl core_ground_cpp_CGround_ctor_FUN_004ca940(CGround *this_ptr,int width,int height)

#include "nocturne.h"

CGround * __cdecl core_ground_cpp_CGround_ctor_FUN_004ca940(CGround *this_ptr,int width,int height)

{
  *(uint *)&this_ptr->field_0x10 = 0x1e;
  *(uint *)&this_ptr->field_0x14 = 0x1e;
  *(int *)this_ptr = width;
  *(uint *)&this_ptr->field_0x24 = 0;
  *(uint *)&this_ptr->field_0x28 = 0;
  *(uint *)&this_ptr->field_0x1c = 8;
  *(uint *)&this_ptr->field_0x20 = 1;
  *(int *)&this_ptr->field_0x4 = height;
  *(int *)&this_ptr->field_0x18 = *(int *)&this_ptr->field_0x10 * *(int *)&this_ptr->field_0x14;
  *(int *)&this_ptr->field_0xc = height + -1;
  *(int *)&this_ptr->field_0x8 = width + -1;
  return this_ptr;
}
