// Name: FUN_00591ba0
// Address: 00591ba0
// Address Range: [[00591ba0, 00591d0d]]
// Convention: unknown
// Signature: int FUN_00591ba0(undefined4 param_1)

#include "nocturne.h"

int FUN_00591ba0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00488fd0(param_1);
  iVar2 = FUN_005a30d7(iVar1 + 0xd0b8,0xc,&DAT_005dbca0);
  iVar1 = iVar2 + -0xd0b8;
  *(byte ***)(iVar2 + -0xcf64) = &PTR_FUN_005e7394;
  FUN_0054eae0(iVar2 + -0xcf60,"bwp3_mattanntote.dfm");
  *(uint *)(iVar2 + -0x9e4c) = 0x3f000000;
  *(uint *)(iVar2 + -0x9e48) = 0x3f800000;
  *(uint *)(iVar2 + -100) = 0;
  *(uint *)(iVar2 + -0x68) = 0;
  *(uint *)(iVar2 + -0xab8c) = 0x3fc90fdb;
  *(uint *)(iVar2 + -0xcfbc) = 1;
  *(uint *)(iVar2 + -0xcfc0) = 0;
  *(uint *)(iVar2 + -0x50) = 1;
  *(uint *)(iVar2 + -0x4c) = 0x40000000;
  *(uint *)(iVar2 + -0x48) = 0x4b;
  *(uint *)(iVar2 + -0x18) = 1;
  *(uint *)(iVar2 + -0x2c) = 0;
  *(uint *)(iVar2 + -0x28) = 0;
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -0x24) = 0xbf800000;
  *(uint *)(iVar2 + -0x58) = 0x10000;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x54) = *(uint *)(iVar2 + -0x4c);
  iVar4 = iVar1;
  do {
    iVar3 = iVar4 + 4;
    *(uint *)(iVar4 + 0xf068) = 0;
    iVar4 = iVar3;
  } while (iVar3 != iVar2 + -0xd084);
  iVar4 = iVar1;
  do {
    iVar3 = iVar4 + 0x2a4;
    *(uint *)(iVar4 + 0xd210) = 0x3f800000;
    *(uint *)(iVar4 + 0xd214) = 0x3fc00000;
    *(uint *)(iVar4 + 0xd218) = 0x3f800000;
    *(uint *)(iVar4 + 0xd260) = 0;
    *(uint *)(iVar4 + 0xd264) = 0;
    iVar4 = iVar3;
  } while (iVar3 != iVar2 + -0xc628);
  return iVar1;
}
