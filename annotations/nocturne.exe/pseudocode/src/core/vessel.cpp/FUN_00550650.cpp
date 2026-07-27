// Name: core_vessel.cpp_FUN_00550650
// Address: 00550650
// Address Range: [[00550650, 0055066a]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_FUN_00550650(int param_1)

#include "nocturne.h"

uint core_vessel_cpp_FUN_00550650(int param_1)

{
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x2cc) == 0)) {
    return 1;
  }
  return 0;
}
