// Name: FUN_0046d7c0
// Address: 0046d7c0
// Address Range: [[0046d7c0, 0046d83f]]
// Convention: unknown
// Signature: void FUN_0046d7c0(int param_1)

#include "nocturne.h"

void FUN_0046d7c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00547480(param_1 + 0x2b4);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  *(uint *)(param_1 + 0x10af8) = 0;
  uVar2 = FUN_00540e80(uVar1,"Bipn04",1);
  *(uint *)(param_1 + 0x10afc) = uVar2;
  uVar1 = FUN_00540e80(uVar1,"Bipn09",1);
  *(uint *)(param_1 + 0x10b00) = uVar1;
  FUN_00487eb0(param_1);
  *(uint *)(param_1 + 0x10b04) = 0;
  *(uint *)(param_1 + 0x10b08) = 0;
  *(uint *)(param_1 + 0x10b0c) = 0;
  return;
}
