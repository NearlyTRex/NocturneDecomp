// Name: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004118a0
// Address: 004118a0
// Address Range: [[004118a0, 004118be]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004118a0(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004118a0(CBarrier *this_ptr)

{
  if (this_ptr->add_to_path_grid == 0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_FUN_00511a10(g_CDemonSet_PTR_005be368,&this_ptr->base);
  return;
}
