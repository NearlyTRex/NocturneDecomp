// Name: core_setdir.cpp_FUN_0055b200
// Address: 0055b200
// Address Range: [[0055b200, 0055b21e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_FUN_0055b200(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_FUN_0055b200(CDemonSet *this_ptr)

{
  if (*(float *)&this_ptr->field_0x15aecc <= 0.0) {
    return;
  }
  *(uint *)&this_ptr->field_0x15aecc = 0x1e3ce508;
  return;
}
