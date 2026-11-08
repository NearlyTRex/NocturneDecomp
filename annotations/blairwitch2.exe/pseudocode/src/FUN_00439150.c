// Name: FUN_00439150
// Address: 00439150
// Address Range: [[00439150, 00439290]]
// Convention: unknown
// Signature: void FUN_00439150(int param_1)

#include "nocturne.h"

void FUN_00439150(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  uVar2 = FUN_00547890(iVar1);
  uVar3 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0x10af8) = uVar3;
  uVar2 = FUN_00540e80(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0x10afc) = uVar2;
  FUN_00487eb0(param_1);
  uVar2 = FUN_00547810(iVar1);
  uVar3 = FUN_00543100(uVar2,"head01",1);
  *(uint *)(param_1 + 0x10b04) = uVar3;
  uVar3 = FUN_00543100(uVar2,"neck01",1);
  *(uint *)(param_1 + 0x10b08) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lfrontleg01",1);
  *(uint *)(param_1 + 0x10b0c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rfrontleg01",1);
  *(uint *)(param_1 + 0x10b10) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rbackleg01",1);
  *(uint *)(param_1 + 0x10b14) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lbackleg01",1);
  *(uint *)(param_1 + 0x10b18) = uVar3;
  uVar3 = FUN_00543100(uVar2,"torso01",1);
  *(uint *)(param_1 + 0x10b1c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"utter01",1);
  *(uint *)(param_1 + 0x10b20) = uVar3;
  uVar3 = FUN_00543100(uVar2,"back01",1);
  *(uint *)(param_1 + 0x10b24) = uVar3;
  uVar2 = FUN_00543100(uVar2,"tail01",1);
  *(uint *)(param_1 + 0x10b28) = uVar2;
  return;
}
