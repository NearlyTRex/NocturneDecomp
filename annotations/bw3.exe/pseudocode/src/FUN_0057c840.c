// Name: FUN_0057c840
// Address: 0057c840
// Address Range: [[0057c840, 0057c88c]]
// Convention: unknown
// Signature: void FUN_0057c840(int param_1)

#include "nocturne.h"

void FUN_0057c840(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_0040ce40(0x41200000,0x41a00000);
  uVar1 = 0x02CF5680;
  *(uint *)(param_1 + 0x20) = uVar2;
  FUN_005609b0(uVar1,param_1,"thndr?.wav");
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x34) = 0x3f800000;
  return;
}
