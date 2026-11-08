// Name: FUN_00436be0
// Address: 00436be0
// Address Range: [[00436be0, 00436e36]]
// Convention: unknown
// Signature: void FUN_00436be0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436be0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  
  FUN_00487eb0(param_1);
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  fVar4 = (float10)*(float *)(param_1 + 0x25a8);
  FUN_005b7ff0();
  *(int *)(param_1 + 0x10c10) = (int)ROUND(fVar4);
  uVar2 = FUN_00547890(iVar1);
  DAT_007c254c = FUN_00540e80(uVar2,"Bip01 Head",1);
  DAT_007c2560 = FUN_00540e80(uVar2,"Bip01 L Forearm",1);
  _DAT_007c2564 = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  DAT_007c2568 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  DAT_007c256c = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_007c2570 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_007c2574 = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_007c2550 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  DAT_007c2554 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_007c2558 = FUN_00540e80(uVar2,"Bip01 R Finger0",1);
  _DAT_007c255c = FUN_00540e80(uVar2,"Bip01 L Finger0",1);
  DAT_007c2578 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_007c257c = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  uVar2 = FUN_00547810(iVar1);
  uVar3 = FUN_00543100(uVar2,&DAT_005cdd19,1);
  *(uint *)(param_1 + 0x10b60) = uVar3;
  uVar3 = FUN_00543100(uVar2,"torso",1);
  *(uint *)(param_1 + 0x10b64) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lforearm",1);
  *(uint *)(param_1 + 0x10b68) = uVar3;
  uVar3 = FUN_00543100(uVar2,&DAT_005cdd2d,1);
  *(uint *)(param_1 + 0x10b6c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rforearm",1);
  *(uint *)(param_1 + 0x10b70) = uVar3;
  uVar3 = FUN_00543100(uVar2,&DAT_005cdd3b,1);
  *(uint *)(param_1 + 0x10b74) = uVar3;
  uVar3 = FUN_00543100(uVar2,"waist",1);
  *(uint *)(param_1 + 0x10b78) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lthigh",1);
  *(uint *)(param_1 + 0x10b80) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lshin",1);
  *(uint *)(param_1 + 0x10b84) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rthigh",1);
  *(uint *)(param_1 + 0x10b88) = uVar3;
  uVar2 = FUN_00543100(uVar2,"rshin",1);
  *(uint *)(param_1 + 0x10b5c) = 0;
  *(uint *)(param_1 + 0x10b8c) = uVar2;
  return;
}
