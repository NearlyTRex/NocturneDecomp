// Name: core_setutil.cpp_C3DSCamera_ctor_FUN_005143e0
// Address: 005143e0
// Address Range: [[005143e0, 00514402]]
// Convention: __cdecl
// Signature: C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_005143e0(C3DSCamera *this_ptr)

#include "nocturne.h"

C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_005143e0(C3DSCamera *this_ptr)

{
  this_ptr->pvs_count = 0;
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->fog_enabled = 1;
  return this_ptr;
}
