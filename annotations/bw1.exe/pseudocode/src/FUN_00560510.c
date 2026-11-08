// Name: FUN_00560510
// Address: 00560510
// Address Range: [[00560510, 0056060c]]
// Convention: unknown
// Signature: void FUN_00560510(int param_1)

#include "nocturne.h"

void FUN_00560510(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00569b20(param_1 + 0x158);
  iVar1 = FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc288) = 0x3f400000;
  }
  else {
    *(uint *)(param_1 + 0xc288) = 0x3f800000;
  }
  uVar2 = FUN_00569f30(param_1 + 0x158);
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xc268) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc26c) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 R Finger0",1);
  *(uint *)(param_1 + 0xc270) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 L Finger0",1);
  *(uint *)(param_1 + 0xc274) = uVar3;
  uVar2 = FUN_005634f0(uVar2,"Dummy05",1);
  *(uint *)(param_1 + 0xc28c) = 0;
  *(uint *)(param_1 + 0xc290) = 0;
  *(uint *)(param_1 + 0xc294) = 0;
  *(uint *)(param_1 + 0xfc) = 1;
  *(uint *)(param_1 + 0xc278) = uVar2;
  FUN_004a0510(param_1);
  return;
}
