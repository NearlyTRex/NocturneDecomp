// Name: FUN_00504cb0
// Address: 00504cb0
// Address Range: [[00504cb0, 00504eda]]
// Convention: unknown
// Signature: void FUN_00504cb0(int param_1)

#include "nocturne.h"

void FUN_00504cb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  iVar3 = param_1;
  do {
    *(uint *)(iVar3 + 0x5f4) = 0;
    *(uint *)(iVar3 + 0x5f8) = 0;
    *(uint *)(iVar3 + 0x63c) = 0;
    *(uint *)(iVar3 + 0x640) = 0;
    *(uint *)(iVar3 + 0x644) = 0;
    iVar2 = iVar1 + 4;
    *(uint *)(iVar3 + 0x5f0) = 1;
    *(uint *)(iVar1 + 0x1400) = 0;
    *(uint *)(iVar1 + 0x1430) = 0;
    *(uint *)(iVar1 + 0x1460) = 0;
    iVar3 = iVar3 + 100;
    *(uint *)(iVar1 + 0x1490) = 0;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x30);
  *(uint *)(param_1 + 0x644) = 0xff;
  *(uint *)(param_1 + 0x6a0) = 0xff;
  *(uint *)(param_1 + 0x704) = 0xff;
  *(uint *)(param_1 + 0x71c) = 0;
  *(uint *)(param_1 + 0x7cc) = 0xff;
  *(uint *)(param_1 + 0x838) = 0xff;
  *(uint *)(param_1 + 0x848) = 0;
  *(uint *)(param_1 + 0x8f8) = 0xff;
  *(uint *)(param_1 + 0x964) = 0xff;
  *(uint *)(param_1 + 0x9c0) = 0xff;
  *(uint *)(param_1 + 0xa2c) = 0xff;
  *(uint *)(param_1 + 0xa90) = 0xff;
  *(uint *)(param_1 + 0x1460) = 0xff;
  *(uint *)(param_1 + 0x1464) = 0xff;
  *(uint *)(param_1 + 0x1408) = 0xff;
  *(uint *)(param_1 + 0x140c) = 0xff;
  *(uint *)(param_1 + 0x1470) = 0xff;
  *(uint *)(param_1 + 0x1414) = 0xff;
  *(uint *)(param_1 + 0x1418) = 0xff;
  *(uint *)(param_1 + 0x147c) = 0xff;
  *(uint *)(param_1 + 0x1480) = 0xff;
  *(uint *)(param_1 + 0x1484) = 0xff;
  *(uint *)(param_1 + 0x1428) = 0xff;
  *(uint *)(param_1 + 0x63c) = *(uint *)(param_1 + 0x644);
  iVar2 = 0;
  *(uint *)(param_1 + 0x1400) = *(uint *)(param_1 + 0x1460);
  *(uint *)(param_1 + 0x142c) = 0xff;
  iVar1 = param_1 + 0xaa8;
  iVar3 = param_1 + 0xaa4;
  do {
    iVar4 = iVar2 * 0xb8 + param_1 + 0xaa0;
    FUN_005056f0(param_1,iVar2,iVar4,iVar3,iVar1);
    *(uint *)(iVar4 + 0x14) = 0;
    iVar2 = iVar2 + 1;
    *(uint *)(iVar4 + 0x20) = 0;
    *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x14);
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x20);
    *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0x10);
    *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x20);
    iVar1 = iVar1 + 0xb8;
    iVar3 = iVar3 + 0xb8;
  } while (iVar2 < 0xc);
  *(uint *)(param_1 + 0x139c) = 1;
  *(uint *)(param_1 + 0x13b8) = 0;
  *(uint *)(param_1 + 0x13fc) = 0xb;
  *(uint *)(param_1 + 0x1358) = 0;
  return;
}
