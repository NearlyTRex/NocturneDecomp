// Name: core_setutil.cpp_C3DSCamera_FUN_00514430
// Address: 00514430
// Address Range: [[00514430, 00514469]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_FUN_00514430(C3DSCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_FUN_00514430(C3DSCamera *this_ptr)

{
  if (this_ptr->pvs_list == (int *)0x0) {
    this_ptr->pvs_count = 0;
    return;
  }
  free(this_ptr->pvs_list);
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->pvs_count = 0;
  return;
}
