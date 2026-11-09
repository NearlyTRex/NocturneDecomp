// Name: core_dpart.cpp_FUN_00479ae0
// Address: 00479ae0
// Address Range: [[00479ae0, 00479b21]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00479ae0(int param_1)

#include "nocturne.h"

void core_dpart_cpp_FUN_00479ae0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x2c));
    *(uint *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x34));
    *(uint *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x30) = 0;
  return;
}
