// Name: FUN_004ea830
// Address: 004ea830
// Address Range: [[004ea830, 004ea97f]]
// Convention: unknown
// Signature: int FUN_004ea830(undefined4 param_1)

#include "nocturne.h"

int FUN_004ea830(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0042c080(param_1);
  iVar1 = FUN_00532fe0(iVar1 + 0xc208);
  iVar2 = FUN_004f6ed0(iVar1 + 0x138e0);
  iVar1 = iVar2 + -0x1fae8;
  *(int *)(iVar2 + 4) = iVar1;
  *(byte ***)(iVar2 + -0x1f994) = &PTR_FUN_00601d34;
  FUN_005bfb70(iVar2 + -0x13910,0,0x30);
  *(uint *)(iVar2 + -0x13918) = 0;
  *(uint *)(iVar2 + -0x1cafc) = 0x3f19999a;
  *(uint *)(iVar2 + -0x1caf8) = 0x3f666666;
  *(uint *)(iVar2 + -0x1caf4) = 0x49742400;
  *(uint *)(iVar2 + -0x1caf0) = 0x49742400;
  *(uint *)(iVar2 + -0x1caec) = 0x3fcccccd;
  *(uint *)(iVar2 + -0x1cae8) = 0x40c00000;
  *(uint *)(iVar2 + -0x13914) = 2;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + 0x474) = 0;
  *(uint *)(iVar2 + 0x48c) = 0;
  *(uint *)(iVar2 + 0x490) = 0;
  *(uint *)(iVar2 + 0x494) = 0;
  *(uint *)(iVar2 + 0x498) = 0;
  *(uint *)(iVar2 + 0x49c) = 0;
  *(uint *)(iVar2 + 0x4a0) = 0;
  *(uint *)(iVar2 + 0x4a4) = 0;
  *(uint *)(iVar2 + 0x46c) = 0;
  *(uint *)(iVar2 + 0x470) = 0;
  FUN_004eafd0(iVar1);
  *(uint *)(iVar2 + 0x4c0) = 2;
  *(uint *)(iVar2 + -0x1d328) = 0;
  *(uint *)(iVar2 + -0x1d5a8) = 1;
  *(uint *)(iVar2 + -0x1d5b8) = 0x40490fdb;
  *(uint *)(iVar2 + -0x1d5bc) = 0x41490fdb;
  return iVar1;
}
