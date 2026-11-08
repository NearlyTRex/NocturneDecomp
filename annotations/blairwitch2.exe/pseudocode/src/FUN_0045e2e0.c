// Name: FUN_0045e2e0
// Address: 0045e2e0
// Address Range: [[0045e2e0, 0045e337]]
// Convention: unknown
// Signature: void FUN_0045e2e0(int param_1)

#include "nocturne.h"

void FUN_0045e2e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00547480(param_1 + 0x2b4);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  uVar2 = FUN_00540e80(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x10af8) = uVar2;
  uVar1 = FUN_00540e80(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0x10afc) = uVar1;
  FUN_00487eb0(param_1);
  return;
}
