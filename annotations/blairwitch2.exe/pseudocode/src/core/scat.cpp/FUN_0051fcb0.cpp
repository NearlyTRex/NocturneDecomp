// Name: core_scat.cpp_FUN_0051fcb0
// Address: 0051fcb0
// Address Range: [[0051e914, 0051e919] [0051fcb0, 0051fcd6]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_FUN_0051fcb0(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_FUN_0051fcb0(CScat *this_ptr)

{
  if (((*(int *)&this_ptr->field_0x25640 != 0) && (*(int *)&this_ptr->field_0x25654 != 0)) &&
     (*(int *)(*(int *)&this_ptr->field_0x25654 + 0x43c) == 9)) {
    return 1;
  }
  return 0;
}
