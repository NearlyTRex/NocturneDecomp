// Name: FUN_004d8cd0
// Address: 004d8cd0
// Address Range: [[004d8cd0, 004d8d70]]
// Convention: unknown
// Signature: void FUN_004d8cd0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004d8cd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x514);
    while( true ) {
      if (iVar1 == 0) {
        return;
      }
      if (iVar1 == param_2) break;
      iVar1 = *(int *)(iVar1 + 0x144);
    }
    iVar1 = *(int *)(param_2 + 0x148);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + 0x144);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x514) = 0;
        *(uint *)(param_1 + 0x518) = 0;
      }
      else {
        *(int *)(param_1 + 0x514) = iVar1;
        *(uint *)(iVar1 + 0x148) = 0;
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 0x144);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x518) = iVar1;
        *(uint *)(iVar1 + 0x144) = 0;
      }
      else {
        *(int *)(iVar1 + 0x144) = iVar2;
        *(uint *)(iVar2 + 0x148) = *(uint *)(param_2 + 0x148);
      }
    }
    *(uint *)(param_2 + 0x144) = 0;
    *(uint *)(param_2 + 0x148) = 0;
  }
  return;
}
