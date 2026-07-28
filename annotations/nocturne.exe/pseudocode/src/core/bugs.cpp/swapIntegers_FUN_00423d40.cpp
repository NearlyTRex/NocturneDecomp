// Name: core_bugs.cpp_swapIntegers_FUN_00423d40
// Address: 00423d40
// Address Range: [[00423d40, 00423d54]]
// Convention: unknown
// Signature: void core_bugs_cpp_swapIntegers_FUN_00423d40(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void core_bugs_cpp_swapIntegers_FUN_00423d40(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}
