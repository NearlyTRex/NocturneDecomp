// Name: FUN_004d24b0
// Address: 004d24b0
// Address Range: [[004d24b0, 004d261d]]
// Convention: unknown
// Signature: int FUN_004d24b0(undefined4 param_1)

#include "nocturne.h"

int FUN_004d24b0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0042ac20(param_1);
  iVar1 = FUN_0050acc0(iVar1 + 0xce08);
  iVar2 = FUN_004da360(iVar1 + 0x138e0);
  iVar1 = iVar2 + -0x206e8;
  *(int *)(iVar2 + 4) = iVar1;
  *(byte ***)(iVar2 + -0x20594) = &PTR_FUN_005e1534;
  FUN_005a28f0(iVar2 + -0x13914,0,0x34);
  *(uint *)(iVar2 + -0x1391c) = 0;
  *(uint *)(iVar2 + -0x1d47c) = 0x3f19999a;
  *(uint *)(iVar2 + -0x1d478) = 0x3f666666;
  *(uint *)(iVar2 + -0x1d474) = 0x49742400;
  *(uint *)(iVar2 + -0x1d470) = 0x49742400;
  *(uint *)(iVar2 + -0x1d46c) = 0x3fcccccd;
  *(uint *)(iVar2 + -0x1d468) = 0x40c00000;
  *(uint *)(iVar2 + -0x13918) = 2;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + 0x47c) = 0;
  *(uint *)(iVar2 + 0x4ac) = 0;
  *(uint *)(iVar2 + 0x4b0) = 0;
  *(uint *)(iVar2 + 0x4b4) = 0;
  *(uint *)(iVar2 + 0x4b8) = 0;
  *(uint *)(iVar2 + 0x4bc) = 0;
  *(uint *)(iVar2 + 0x4c0) = 0;
  *(uint *)(iVar2 + 0x4c4) = 0;
  *(uint *)(iVar2 + 0x470) = 0;
  *(uint *)(iVar2 + 0x474) = 0;
  FUN_004d2cd0(iVar1);
  *(uint *)(iVar2 + 0x4e0) = 2;
  *(uint *)(iVar2 + -0x1df28) = 0;
  *(uint *)(iVar2 + -0x1e1a8) = 1;
  *(uint *)(iVar2 + -0x1e1bc) = 0x41490fdb;
  *(uint *)(iVar2 + 0x498) = 100;
  *(uint *)(iVar2 + 0x49c) = 0x1e;
  *(uint *)(iVar2 + 0x478) = 0;
  *(uint *)(iVar2 + 0x4a0) = 0;
  return iVar1;
}
