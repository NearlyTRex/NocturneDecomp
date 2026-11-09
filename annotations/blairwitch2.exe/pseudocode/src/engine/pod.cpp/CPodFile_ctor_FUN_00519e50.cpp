// Name: engine_pod.cpp_CPodFile_ctor_FUN_00519e50
// Address: 00519e50
// Address Range: [[00519e50, 00519eb9]]
// Convention: __cdecl
// Signature: CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_00519e50(CPodFile *this_ptr)

#include "nocturne.h"

CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_00519e50(CPodFile *this_ptr)

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
