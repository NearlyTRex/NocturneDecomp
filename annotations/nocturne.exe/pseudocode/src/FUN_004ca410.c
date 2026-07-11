// Name: FUN_004ca410
// Address: 004ca410
// Address Range: [[004ca410, 004ca63a]]
// Convention: unknown
// Signature: void FUN_004ca410(int param_1)

#include "nocturne.h"

void FUN_004ca410(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  iVar3 = param_1;
  do {
    *(uint *)(iVar3 + 0x5ec) = 0;
    *(uint *)(iVar3 + 0x5f0) = 0;
    *(uint *)(iVar3 + 0x634) = 0;
    *(uint *)(iVar3 + 0x638) = 0;
    *(uint *)(iVar3 + 0x63c) = 0;
    iVar2 = iVar1 + 4;
    *(uint *)(iVar3 + 0x5e8) = 1;
    *(uint *)(iVar1 + 0x13f8) = 0;
    *(uint *)(iVar1 + 0x1428) = 0;
    *(uint *)(iVar1 + 0x1458) = 0;
    iVar3 = iVar3 + 100;
    *(uint *)(iVar1 + 0x1488) = 0;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x30);
  *(uint *)(param_1 + 0x63c) = 0xff;
  *(uint *)(param_1 + 0x698) = 0xff;
  *(uint *)(param_1 + 0x6fc) = 0xff;
  *(uint *)(param_1 + 0x714) = 0;
  *(uint *)(param_1 + 0x7c4) = 0xff;
  *(uint *)(param_1 + 0x830) = 0xff;
  *(uint *)(param_1 + 0x840) = 0;
  *(uint *)(param_1 + 0x8f0) = 0xff;
  *(uint *)(param_1 + 0x95c) = 0xff;
  *(uint *)(param_1 + 0x9b8) = 0xff;
  *(uint *)(param_1 + 0xa24) = 0xff;
  *(uint *)(param_1 + 0xa88) = 0xff;
  *(uint *)(param_1 + 0x1458) = 0xff;
  *(uint *)(param_1 + 0x145c) = 0xff;
  *(uint *)(param_1 + 0x1400) = 0xff;
  *(uint *)(param_1 + 0x1404) = 0xff;
  *(uint *)(param_1 + 0x1468) = 0xff;
  *(uint *)(param_1 + 0x140c) = 0xff;
  *(uint *)(param_1 + 0x1410) = 0xff;
  *(uint *)(param_1 + 0x1474) = 0xff;
  *(uint *)(param_1 + 0x1478) = 0xff;
  *(uint *)(param_1 + 0x147c) = 0xff;
  *(uint *)(param_1 + 0x1420) = 0xff;
  *(uint *)(param_1 + 0x634) = *(uint *)(param_1 + 0x63c);
  iVar2 = 0;
  *(uint *)(param_1 + 0x13f8) = *(uint *)(param_1 + 0x1458);
  *(uint *)(param_1 + 0x1424) = 0xff;
  iVar1 = param_1 + 0xaa0;
  iVar3 = param_1 + 0xa9c;
  do {
    iVar4 = iVar2 * 0xb8 + param_1 + 0xa98;
    FUN_004cae20(param_1,iVar2,iVar4,iVar3,iVar1);
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
  *(uint *)(param_1 + 0x1394) = 1;
  *(uint *)(param_1 + 0x13b0) = 0;
  *(uint *)(param_1 + 0x13f4) = 0xb;
  *(uint *)(param_1 + 0x1350) = 0;
  return;
}
