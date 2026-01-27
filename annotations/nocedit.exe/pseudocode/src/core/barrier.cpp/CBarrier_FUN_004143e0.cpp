// Name: core_barrier.cpp_CBarrier_FUN_004143e0
// Address: 004143e0
// Address Range: [[004143e0, 004143fe]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_004143e0(CBarrier * this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_004143e0(CBarrier *this_ptr)

{
  if (*(int *)(this_ptr->unk + 0xc) == 0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_FUN_00574440(g_CDemonSetPtr);
  return;
}
