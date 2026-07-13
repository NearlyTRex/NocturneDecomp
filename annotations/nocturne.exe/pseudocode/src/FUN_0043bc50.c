// Name: FUN_0043bc50
// Address: 0043bc50
// Address Range: [[0043bc50, 0043bd90]]
// Convention: unknown
// Signature: void FUN_0043bc50(int param_1)

#include "nocturne.h"

void FUN_0043bc50(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x150;
  FUN_0051dcd0(iVar1);
  uVar2 = FUN_0051e0a0(iVar1);
  uVar3 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xbd24) = uVar3;
  uVar2 = FUN_005179d0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xbd28) = uVar2;
  FUN_004796b0(param_1);
  uVar2 = FUN_0051e020(iVar1);
  uVar3 = FUN_00519b30(uVar2,"head01",1);
  *(uint *)(param_1 + 0xbd30) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"neck01",1);
  *(uint *)(param_1 + 0xbd34) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lfrontleg01",1);
  *(uint *)(param_1 + 0xbd38) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rfrontleg01",1);
  *(uint *)(param_1 + 0xbd3c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rbackleg01",1);
  *(uint *)(param_1 + 0xbd40) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lbackleg01",1);
  *(uint *)(param_1 + 0xbd44) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xbd48) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"utter01",1);
  *(uint *)(param_1 + 0xbd4c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"back01",1);
  *(uint *)(param_1 + 0xbd50) = uVar3;
  uVar2 = FUN_00519b30(uVar2,"tail01",1);
  *(uint *)(param_1 + 0xbd54) = uVar2;
  return;
}
