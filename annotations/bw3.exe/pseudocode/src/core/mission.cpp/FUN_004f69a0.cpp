// Name: core_mission.cpp_FUN_004f69a0
// Address: 004f69a0
// Address Range: [[004f69a0, 004f6a40]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f69a0(int param_1,int param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_004f69a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x143c);
    while( true ) {
      if (iVar1 == 0) {
        return;
      }
      if (iVar1 == param_2) break;
      iVar1 = *(int *)(iVar1 + 0x14c);
    }
    iVar1 = *(int *)(param_2 + 0x150);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + 0x14c);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x143c) = 0;
        *(uint *)(param_1 + 0x1440) = 0;
      }
      else {
        *(int *)(param_1 + 0x143c) = iVar1;
        *(uint *)(iVar1 + 0x150) = 0;
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 0x14c);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x1440) = iVar1;
        *(uint *)(iVar1 + 0x14c) = 0;
      }
      else {
        *(int *)(iVar1 + 0x14c) = iVar2;
        *(uint *)(iVar2 + 0x150) = *(uint *)(param_2 + 0x150);
      }
    }
    *(uint *)(param_2 + 0x14c) = 0;
    *(uint *)(param_2 + 0x150) = 0;
  }
  return;
}
