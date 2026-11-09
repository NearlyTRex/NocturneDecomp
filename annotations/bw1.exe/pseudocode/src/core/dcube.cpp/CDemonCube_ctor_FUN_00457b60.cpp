// Name: core_dcube.cpp_CDemonCube_ctor_FUN_00457b60
// Address: 00457b60
// Address Range: [[00457b60, 00457b94]]
// Convention: __cdecl
// Signature: CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_00457b60(CDemonCube *this_ptr)

#include "nocturne.h"

CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_00457b60(CDemonCube *this_ptr)

{
  *(uint *)&this_ptr->field_0x24 = 0;
  *(uint *)&this_ptr->field_0x28 = 0;
  *(uint *)&this_ptr->field_0x2c = 0;
  *(uint *)&this_ptr->field_0x30 = 0;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)&this_ptr->field_0x20 = 0;
  return this_ptr;
}
