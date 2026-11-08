// Name: FUN_004e6010
// Address: 004e6010
// Address Range: [[004e6010, 004e623a]]
// Convention: unknown
// Signature: void FUN_004e6010(int param_1)

#include "nocturne.h"

void FUN_004e6010(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  iVar3 = param_1;
  do {
    *(uint *)(iVar3 + 0x750) = 0;
    *(uint *)(iVar3 + 0x754) = 0;
    *(uint *)(iVar3 + 0x798) = 0;
    *(uint *)(iVar3 + 0x79c) = 0;
    *(uint *)(iVar3 + 0x7a0) = 0;
    iVar2 = iVar1 + 4;
    *(uint *)(iVar3 + 0x74c) = 1;
    *(uint *)(iVar1 + 0x155c) = 0;
    *(uint *)(iVar1 + 0x158c) = 0;
    *(uint *)(iVar1 + 0x15bc) = 0;
    iVar3 = iVar3 + 100;
    *(uint *)(iVar1 + 0x15ec) = 0;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x30);
  *(uint *)(param_1 + 0x7a0) = 0xff;
  *(uint *)(param_1 + 0x7fc) = 0xff;
  *(uint *)(param_1 + 0x860) = 0xff;
  *(uint *)(param_1 + 0x878) = 0;
  *(uint *)(param_1 + 0x928) = 0xff;
  *(uint *)(param_1 + 0x994) = 0xff;
  *(uint *)(param_1 + 0x9a4) = 0;
  *(uint *)(param_1 + 0xa54) = 0xff;
  *(uint *)(param_1 + 0xac0) = 0xff;
  *(uint *)(param_1 + 0xb1c) = 0xff;
  *(uint *)(param_1 + 0xb88) = 0xff;
  *(uint *)(param_1 + 0xbec) = 0xff;
  *(uint *)(param_1 + 0x15bc) = 0xff;
  *(uint *)(param_1 + 0x15c0) = 0xff;
  *(uint *)(param_1 + 0x1564) = 0xff;
  *(uint *)(param_1 + 0x1568) = 0xff;
  *(uint *)(param_1 + 0x15cc) = 0xff;
  *(uint *)(param_1 + 0x1570) = 0xff;
  *(uint *)(param_1 + 0x1574) = 0xff;
  *(uint *)(param_1 + 0x15d8) = 0xff;
  *(uint *)(param_1 + 0x15dc) = 0xff;
  *(uint *)(param_1 + 0x15e0) = 0xff;
  *(uint *)(param_1 + 0x1584) = 0xff;
  *(uint *)(param_1 + 0x798) = *(uint *)(param_1 + 0x7a0);
  iVar2 = 0;
  *(uint *)(param_1 + 0x155c) = *(uint *)(param_1 + 0x15bc);
  *(uint *)(param_1 + 0x1588) = 0xff;
  iVar1 = param_1 + 0xc04;
  iVar3 = param_1 + 0xc00;
  do {
    iVar4 = iVar2 * 0xb8 + param_1 + 0xbfc;
    FUN_004e6a50(param_1,iVar2,iVar4,iVar3,iVar1);
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
  *(uint *)(param_1 + 0x14f8) = 1;
  *(uint *)(param_1 + 0x1514) = 0;
  *(uint *)(param_1 + 0x1558) = 0xb;
  *(uint *)(param_1 + 0x14b4) = 0;
  return;
}
