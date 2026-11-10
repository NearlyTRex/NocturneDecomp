// Name: core_barrier.cpp_CBarrier_updateCollisionData_FUN_00410e60
// Address: 00410e60
// Address Range: [[00410e60, 00410e7e]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_00410e60(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_00410e60(CBarrier *this_ptr)

{
  if (this_ptr->add_to_path_grid == 0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00538020(g_CDemonSetPtr,&this_ptr->base);
  return;
}
