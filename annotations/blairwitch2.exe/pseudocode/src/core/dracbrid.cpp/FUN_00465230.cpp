// Name: core_dracbrid.cpp_FUN_00465230
// Address: 00465230
// Address Range: [[00465230, 0046526e]]
// Convention: unknown
// Signature: undefined4 core_dracbrid_cpp_FUN_00465230(int param_1)

#include "nocturne.h"

uint core_dracbrid_cpp_FUN_00465230(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  switch(*(uint *)(iVar1 + 0x24)) {
  case 7:
  case 10:
    return 1;
  default:
    return 0;
  case 0x10:
  case 0x11:
    return 2;
  }
}
