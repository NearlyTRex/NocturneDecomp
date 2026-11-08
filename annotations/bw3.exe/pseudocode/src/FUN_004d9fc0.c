// Name: FUN_004d9fc0
// Address: 004d9fc0
// Address Range: [[004d9fc0, 004da018]]
// Convention: unknown
// Signature: undefined4 FUN_004d9fc0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004d9fc0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = FUN_00560af0(0x02CF5680,*(uint *)(iVar3 + 0x1d70a24));
    if (iVar1 == 0) {
      uVar2 = FUN_005609b0(0x02CF5680,0,param_2);
      *(uint *)(param_1 + 0x27ac) = uVar2;
      *(uint *)(iVar3 + 0x1d70a24) = uVar2;
      return 1;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x10);
  return 0;
}
