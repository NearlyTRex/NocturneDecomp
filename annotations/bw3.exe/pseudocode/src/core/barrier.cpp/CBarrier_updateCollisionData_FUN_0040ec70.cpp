// Name: core_barrier.cpp_CBarrier_updateCollisionData_FUN_0040ec70
// Address: 0040ec70
// Address Range: [[0040ec70, 0040ec8e]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_0040ec70(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_0040ec70(CBarrier *this_ptr)

{
  if (this_ptr->add_to_path_grid == 0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(g_CDemonSetPtr,&this_ptr->base);
  return;
}
