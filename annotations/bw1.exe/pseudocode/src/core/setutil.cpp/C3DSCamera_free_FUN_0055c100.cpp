// Name: core_setutil.cpp_C3DSCamera_free_FUN_0055c100
// Address: 0055c100
// Address Range: [[0055c100, 0055c139]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_0055c100(C3DSCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_0055c100(C3DSCamera *this_ptr)

{
  if (this_ptr->pvs_list == (int *)0x0) {
    this_ptr->pvs_count = 0;
    return;
  }
  FUN_005c09f0(this_ptr->pvs_list);
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->pvs_count = 0;
  return;
}
