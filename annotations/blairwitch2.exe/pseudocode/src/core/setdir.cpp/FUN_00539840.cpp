// Name: core_setdir.cpp_FUN_00539840
// Address: 00539840
// Address Range: [[00539840, 0053985e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_FUN_00539840(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_FUN_00539840(CDemonSet *this_ptr)

{
  if (*(float *)&this_ptr->field_0x15aec8 <= 0.0) {
    return;
  }
  *(uint *)&this_ptr->field_0x15aec8 = 0x1e3ce508;
  return;
}
