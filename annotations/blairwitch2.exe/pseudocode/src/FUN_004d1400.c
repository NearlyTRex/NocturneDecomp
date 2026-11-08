// Name: FUN_004d1400
// Address: 004d1400
// Address Range: [[004d1400, 004d15c8]]
// Convention: unknown
// Signature: void FUN_004d1400(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d1400(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_00547480(param_1 + 0x2b4);
  iVar2 = param_1 + 0x2514;
  *(uint *)(param_1 + 0x246f8) = 6;
  iVar1 = FUN_005b8130(iVar2,"hickboy.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 0;
  }
  iVar1 = FUN_005b8130(iVar2,"depute.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 1;
  }
  iVar1 = FUN_005b8130(iVar2,"hickho.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 2;
  }
  iVar1 = FUN_005b8130(iVar2,"hickgirl.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 4;
  }
  iVar1 = FUN_005b8130(iVar2,"hickdad.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 5;
  }
  iVar2 = FUN_005b8130(iVar2,"preacher.dfm");
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x246f8) = 3;
  }
  uVar3 = FUN_00547890(param_1 + 0x2b4);
  uVar4 = FUN_00503860(param_1 + 0x2b4);
  uVar5 = FUN_00540e80(uVar3,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0x24710) = uVar5;
  uVar5 = FUN_00540e80(uVar3,"Bip01 Head",1);
  *(uint *)(param_1 + 0x2470c) = uVar5;
  uVar5 = FUN_00540e80(uVar3,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0x24714) = uVar5;
  uVar5 = FUN_00540e80(uVar3,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0x24718) = uVar5;
  uVar5 = FUN_00540e80(uVar3,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x2690) = uVar5;
  if (*(int *)(param_1 + 0x246f8) != 1) {
    uVar5 = FUN_00540e80(uVar3,"Bip01 L Hand",1);
    *(uint *)(param_1 + 0x2618) = uVar5;
  }
  uVar3 = FUN_00540e80(uVar3,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x27c0) = uVar3;
  if (*(int *)(param_1 + 0x246f8) == 1) {
    _DAT_01cedfcc = FUN_00502f10(uVar4,"gunup",1);
  }
  FUN_00510510(param_1);
  *(uint *)(param_1 + 0x246f0) = 0;
  return;
}
