// Name: FUN_005180b0
// Address: 005180b0
// Address Range: [[005180b0, 00518272]]
// Convention: unknown
// Signature: int FUN_005180b0(undefined4 param_1)

#include "nocturne.h"

int FUN_005180b0(uint param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_17f0 [1523];
  uint uStack_14;
  int iVar3;
  
  bVar8 = 0;
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  iVar1 = FUN_00438a50(iVar1 + 0x1b8);
  *(uint *)(iVar1 + -0x1bc) = 0x5fac54;
  FUN_0044fd70(iVar1 + -0x1b8,"question.kfm");
  *(byte *)(iVar1 + 0x44) = 0;
  *(byte *)(iVar1 + 0xa8) = 0;
  *(byte *)(iVar1 + 0x10c) = 0;
  *(byte *)(iVar1 + 0x170) = 0;
  *(byte *)(iVar1 + 0x184) = 0;
  *(byte *)(iVar1 + 0x198) = 0;
  *(uint *)(iVar1 + -0x3c) = 0;
  *(uint *)(iVar1 + -0x34) = 0;
  *(uint *)(iVar1 + -0x24) = 0x40000000;
  *(uint *)(iVar1 + -0x28) = 0x40000000;
  *(uint *)(iVar1 + -0x38) = 0;
  puVar4 = (uint *)(iVar1 + 0x18);
  *(byte *)(iVar1 + -0x20) = 0;
  if (puVar4 != (uint *)(iVar1 + -0x44c)) {
    *puVar4 = *(uint *)(iVar1 + -0x44c);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + -0x448);
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + -0x444);
  }
  if ((uint *)(iVar1 + 0xc) != puVar4) {
    *(uint *)(iVar1 + 0xc) = *puVar4;
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x1c);
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x20);
  }
  FUN_00594380(iVar1 + -0x43c);
  puVar4 = (uint *)(iVar1 + 0x38 + (uint)bVar8 * -8);
  *(uint *)(iVar1 + 0x34) = uStack_14;
  puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
  *puVar4 = *(uint *)(&stack0xfffffff0 + (uint)bVar8 * -8);
  *puVar5 = *(uint *)(&stack0xfffffff4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  puVar5[(uint)bVar8 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffff4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4)
  ;
  puVar6 = (uint *)(iVar1 + 0x28 + (uint)bVar8 * -8);
  puVar4 = (uint *)(iVar1 + 0x38 + (uint)bVar8 * -8);
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x34);
  puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
  puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
  *puVar6 = *puVar4;
  *puVar7 = *puVar5;
  puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
  *(uint *)(iVar1 + 0x1b0) = 0;
  *(uint *)(iVar1 + 0x1b4) = 0;
  *(uint *)(iVar1 + 0x1b8) = 0;
  *(byte *)(iVar1 + 0x1bc) = 0;
  *(uint *)(iVar1 + 0x414) = 0;
  *(uint *)(iVar1 + -0x408) = 0x32;
  *(uint *)(iVar1 + 0x1fc) = 0;
  *(uint *)(iVar1 + -0x30) = 0;
  *(uint *)(iVar1 + -0x2c) = 0;
  iVar3 = iVar1 + -0x46c;
  do {
    iVar2 = iVar3 + 0x34;
    *(uint *)(iVar3 + 0x678) = 0;
    iVar3 = iVar2;
  } while (iVar2 != iVar1 + -0x264);
  *(uint *)(iVar1 + 0x204) = 0;
  *(uint *)(iVar1 + 0x208) = 1;
  *(uint *)(iVar1 + 0x200) = 0;
  return iVar1 + -0x46c;
}
