// Name: core_dracbrid.cpp_CDraculaBride_getDeathState_FUN_0045a9a0
// Address: 0045a9a0
// Address Range: [[0045a9a0, 0045a9de]]
// Convention: unknown
// Signature: undefined4 core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_0045a9a0(int param_1)

#include "nocturne.h"

uint core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_0045a9a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
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
