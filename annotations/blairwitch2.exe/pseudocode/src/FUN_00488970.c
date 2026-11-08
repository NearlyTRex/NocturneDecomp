// Name: FUN_00488970
// Address: 00488970
// Address Range: [[00488970, 004889c1]]
// Convention: unknown
// Signature: void FUN_00488970(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00488970(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(0x01CB6900 + 0x1f0) == 0) {
    iVar1 = FUN_0048e340(0x01C38BC0,"Capture");
    if (iVar1 == 0) {
      FUN_00429f20(param_1,param_2,param_1 + 0x10a84);
      return;
    }
  }
  FUN_00429f20(param_1,param_2,0);
  return;
}
