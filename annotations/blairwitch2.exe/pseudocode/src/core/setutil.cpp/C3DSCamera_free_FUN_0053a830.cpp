// Name: core_setutil.cpp_C3DSCamera_free_FUN_0053a830
// Address: 0053a830
// Address Range: [[0053a830, 0053a869]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_0053a830(C3DSCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_0053a830(C3DSCamera *this_ptr)

{
  if (this_ptr->pvs_list == (int *)0x0) {
    this_ptr->pvs_count = 0;
    return;
  }
  FUN_005b86a0(this_ptr->pvs_list);
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->pvs_count = 0;
  return;
}
