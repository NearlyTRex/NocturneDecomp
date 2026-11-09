// Name: core_mission.cpp_FUN_0051b1d0
// Address: 0051b1d0
// Address Range: [[0051b1d0, 0051b270]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_0051b1d0(int param_1,int param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_0051b1d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x1118);
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
        *(uint *)(param_1 + 0x1118) = 0;
        *(uint *)(param_1 + 0x111c) = 0;
      }
      else {
        *(int *)(param_1 + 0x1118) = iVar1;
        *(uint *)(iVar1 + 0x150) = 0;
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 0x14c);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x111c) = iVar1;
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
