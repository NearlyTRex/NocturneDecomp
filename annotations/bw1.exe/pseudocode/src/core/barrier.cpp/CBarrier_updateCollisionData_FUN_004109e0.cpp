// Name: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004109e0
// Address: 004109e0
// Address Range: [[004109e0, 004109fe]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004109e0(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004109e0(CBarrier *this_ptr)

{
  if (*(int *)&this_ptr->field_0x164 == 0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00559440(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  return;
}
