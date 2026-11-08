// Name: FUN_00549870
// Address: 00549870
// Address Range: [[00549870, 00549b6f]]
// Convention: unknown
// Signature: void FUN_00549870(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00549870(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00487eb0(param_1);
  iVar3 = param_1 + 0x2b4;
  FUN_00547480(iVar3);
  uVar1 = FUN_00547890(iVar3);
  _DAT_02628610 = FUN_00540e80(uVar1,"Bip01 Head",1);
  _DAT_0262861c = FUN_00540e80(uVar1,"Bip01 L ForeArm",1);
  _DAT_02628620 = FUN_00540e80(uVar1,"Bip01 R ForeArm",1);
  _DAT_02628624 = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  _DAT_02628628 = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  _DAT_0262862c = FUN_00540e80(uVar1,"Bip01 L Foot",1);
  _DAT_02628630 = FUN_00540e80(uVar1,"Bip01 R Foot",1);
  _DAT_02628614 = FUN_00540e80(uVar1,"Bip01 L Hand",1);
  _DAT_02628618 = FUN_00540e80(uVar1,"Bip01 R Hand",1);
  _DAT_02628634 = FUN_00540e80(uVar1,"Bip01 Spine",1);
  _DAT_02628638 = FUN_00540e80(uVar1,"Bip01 Spine1",1);
  _DAT_0262863c = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  _DAT_02628610 = FUN_00540e80(uVar1,"Bip01 Head",1);
  _DAT_02628624 = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  _DAT_02628628 = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  _DAT_02628634 = FUN_00540e80(uVar1,"Bip01 Spine",1);
  _DAT_0262863c = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  uVar1 = FUN_00547810(iVar3);
  uVar2 = FUN_00543100(uVar1,"larm01",1);
  *(uint *)(param_1 + 0x10b00) = uVar2;
  uVar2 = FUN_00543100(uVar1,"l4arm01",1);
  *(uint *)(param_1 + 0x10b04) = uVar2;
  uVar2 = FUN_00543100(uVar1,"rarm01",1);
  *(uint *)(param_1 + 0x10b08) = uVar2;
  uVar2 = FUN_00543100(uVar1,"r4arm01",1);
  *(uint *)(param_1 + 0x10b0c) = uVar2;
  uVar2 = FUN_00543100(uVar1,"rthigh01",1);
  *(uint *)(param_1 + 0x10b10) = uVar2;
  uVar2 = FUN_00543100(uVar1,"rshin01",1);
  *(uint *)(param_1 + 0x10b14) = uVar2;
  uVar2 = FUN_00543100(uVar1,"lthigh01",1);
  *(uint *)(param_1 + 0x10b18) = uVar2;
  uVar2 = FUN_00543100(uVar1,"lshin01",1);
  *(uint *)(param_1 + 0x10b1c) = uVar2;
  uVar2 = FUN_00543100(uVar1,"ass01",1);
  *(uint *)(param_1 + 0x10b20) = uVar2;
  uVar2 = FUN_00543100(uVar1,"torso01",1);
  *(uint *)(param_1 + 0x10b24) = uVar2;
  uVar1 = FUN_00543100(uVar1,"head01",1);
  *(uint *)(param_1 + 0x10b2c) = 0;
  *(uint *)(param_1 + 0x10b28) = uVar1;
  *(uint *)(param_1 + 0x10b30) = 0;
  *(uint *)(param_1 + 0x10b38) = 1;
  iVar3 = FUN_005b8130(param_1 + 0x2514,"smiley2.dfm");
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x10b38) = 2;
  }
  iVar3 = FUN_005b8130(param_1 + 0x2514,"smiley3.dfm");
  if (iVar3 != 0) {
    return;
  }
  *(uint *)(param_1 + 0x10b38) = 3;
  *(uint *)(param_1 + 0x282c) = 0;
  return;
}
