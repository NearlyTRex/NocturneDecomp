// Name: core_hostage.cpp_FUN_004d3010
// Address: 004d3010
// Address Range: [[004d3010, 004d304f]]
// Convention: unknown
// Signature: undefined4 core_hostage_cpp_FUN_004d3010(int param_1)

#include "nocturne.h"

uint core_hostage_cpp_FUN_004d3010(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x246f8) != 0) && (*(int *)(param_1 + 0x246fc) != 3)) &&
     (*(int *)(param_1 + 0x246fc) != 4)) {
    iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
    if (*(int *)(iVar1 + 0x24) != 10) {
      return 1;
    }
  }
  return 0;
}
