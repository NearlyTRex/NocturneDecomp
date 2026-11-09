// Name: core_barrier.cpp_FUN_00410e60
// Address: 00410e60
// Address Range: [[00410e60, 00410e7e]]
// Convention: unknown
// Signature: void core_barrier_cpp_FUN_00410e60(CDemonActor *param_1)

#include "nocturne.h"

void core_barrier_cpp_FUN_00410e60(CDemonActor *param_1)

{
  if (*(int *)&param_1[1].field_0xc == 0) {
    return;
  }
  core_setcolid_cpp_FUN_00538020(g_CDemonSetPtr,param_1);
  return;
}
