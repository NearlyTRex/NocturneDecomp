// Name: core_setutil.cpp_C3DSCamera_free_FUN_00585360
// Address: 00585360
// Address Range: [[00585360, 005853a0]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_free_FUN_00585360(C3DSCamera * this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00585360(C3DSCamera *this_ptr)

{
  if (this_ptr->pvs_list == (int *)0x0) {
    this_ptr->pvs_count = 0;
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->pvs_list,"..\\core\\setutil.cpp",0x61);
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->pvs_count = 0;
  return;
}
