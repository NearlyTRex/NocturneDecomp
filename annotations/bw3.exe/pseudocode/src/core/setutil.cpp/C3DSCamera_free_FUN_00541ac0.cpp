// Name: core_setutil.cpp_C3DSCamera_free_FUN_00541ac0
// Address: 00541ac0
// Address Range: [[00541ac0, 00541af9]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00541ac0(C3DSCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00541ac0(C3DSCamera *this_ptr)

{
  if (this_ptr->pvs_list == (int *)0x0) {
    this_ptr->pvs_count = 0;
    return;
  }
  FUN_005a3770(this_ptr->pvs_list);
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->pvs_count = 0;
  return;
}
