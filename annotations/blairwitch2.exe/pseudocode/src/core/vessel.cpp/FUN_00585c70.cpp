// Name: core_vessel.cpp_FUN_00585c70
// Address: 00585c70
// Address Range: [[00585c70, 00585c8a]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_FUN_00585c70(int param_1)

#include "nocturne.h"

uint core_vessel_cpp_FUN_00585c70(int param_1)

{
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x430) == 0)) {
    return 1;
  }
  return 0;
}
