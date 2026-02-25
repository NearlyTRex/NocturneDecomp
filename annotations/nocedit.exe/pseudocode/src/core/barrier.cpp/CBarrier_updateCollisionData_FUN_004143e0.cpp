// Name: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004143e0
// Address: 004143e0
// Address Range: [[004143e0, 004143fe]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004143e0(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004143e0(CBarrier *this_ptr)

{
  if (this_ptr->add_to_path_grid == 0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00574440(g_CDemonSetPtr,&this_ptr->base);
  return;
}
