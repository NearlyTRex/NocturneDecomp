// Name: engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0
// Address: 0051a8f0
// Address Range: [[0051a8f0, 0051a987]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_0051a8f0(CPodFile *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_0051a8f0(CPodFile *this_ptr)

{
  *(uint *)&this_ptr->field_0x410 = 0;
  if (*(int *)&this_ptr->field_0x414 != 0) {
    FUN_005b86a0(*(int *)&this_ptr->field_0x414);
    *(uint *)&this_ptr->field_0x414 = 0;
  }
  *(uint *)&this_ptr->field_0x424 = 0;
  *(uint *)&this_ptr->field_0x41c = 0;
  if (*(int *)&this_ptr->field_0x418 != 0) {
    FUN_005b86a0(*(int *)&this_ptr->field_0x418);
    *(uint *)&this_ptr->field_0x418 = 0;
  }
  *(uint *)this_ptr = 0;
  this_ptr->field_0x108 = 0;
  this_ptr->field_0x208 = 0;
  this_ptr->field_0x308 = 0;
  *(uint *)&this_ptr->field_0x408 = 1000;
  *(uint *)&this_ptr->field_0x40c = 1000;
  this_ptr->field_0x4 = 0;
  return;
}
