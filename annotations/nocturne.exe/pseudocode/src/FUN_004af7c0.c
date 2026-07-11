// Name: FUN_004af7c0
// Address: 004af7c0
// Address Range: [[004af7c0, 004af81b]]
// Convention: unknown
// Signature: void FUN_004af7c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004af7c0(int param_1,uint param_2)

{
  FUN_00563350(param_2,"%f,%f,%f\n",param_1 + 4,param_1 + 8,param_1 + 0xc);
  FUN_00563350(param_2,"%d,%d\n",param_1,param_1 + 0x10);
  FUN_00563350(param_2,"%d,%f,%d,%d,%d\n",param_1 + 0x14,param_1 + 0x18,param_1 + 0x1c,
               param_1 + 0x20,param_1 + 0x24);
  return;
}
