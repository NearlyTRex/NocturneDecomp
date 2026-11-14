// Name: core_setutil.cpp_C3DSCamera_ctor_FUN_00541a70
// Address: 00541a70
// Address Range: [[00541a70, 00541a92]]
// Convention: __cdecl
// Signature: C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_00541a70(C3DSCamera *this_ptr)

#include "nocturne.h"

C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_00541a70(C3DSCamera *this_ptr)

{
  this_ptr->pvs_count = 0;
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->use_global_fog = 1;
  return this_ptr;
}
