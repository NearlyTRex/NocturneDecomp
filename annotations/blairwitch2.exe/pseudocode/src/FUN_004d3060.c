// Name: FUN_004d3060
// Address: 004d3060
// Address Range: [[004d3060, 004d30c2]]
// Convention: unknown
// Signature: undefined4 FUN_004d3060(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_004d3060(int param_1,uint param_2,int param_3)

{
  *(int *)(param_1 + 0x2770) = param_3;
  *(uint *)(param_1 + 0x276c) = param_2;
  if (param_3 == 0) {
    FUN_00503620(param_1 + 0x2b4,4,1);
    FUN_004894f0(0x01C38BC0,param_1 + 0x244fc);
  }
  *(uint *)(param_1 + 0x2472c) = 0x40400000;
  *(uint *)(param_1 + 0x24728) = param_2;
  return 1;
}
