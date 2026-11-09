// Name: engine_pod.cpp_CPodFile_ctor_FUN_0053b1a0
// Address: 0053b1a0
// Address Range: [[0053b1a0, 0053b209]]
// Convention: __cdecl
// Signature: CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0(CPodFile *this_ptr)

#include "nocturne.h"

CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0(CPodFile *this_ptr)

{
  *(uint *)&this_ptr->field_0x414 = 0;
  this_ptr->field_0x4 = 0;
  this_ptr->field_0x108 = 0;
  this_ptr->field_0x208 = 0;
  this_ptr->field_0x308 = 0;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x41c = 0;
  *(uint *)&this_ptr->field_0x424 = 0;
  *(uint *)&this_ptr->field_0x418 = 0;
  *(uint *)&this_ptr->field_0x408 = 1000;
  *(uint *)&this_ptr->field_0x40c = 1000;
  *(uint *)&this_ptr->field_0x410 = 0;
  return this_ptr;
}
