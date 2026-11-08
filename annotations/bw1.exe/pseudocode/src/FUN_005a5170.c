// Name: FUN_005a5170
// Address: 005a5170
// Address Range: [[005a5170, 005a529f]]
// Convention: unknown
// Signature: int FUN_005a5170(undefined4 param_1)

#include "nocturne.h"

int FUN_005a5170(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a0410(param_1);
  iVar1 = FUN_00567370(iVar1 + 0xc268);
  iVar1 = FUN_0043e5c0(iVar1 + 0x23a4);
  iVar1 = FUN_0043e5c0(iVar1 + 0x3ab30);
  iVar1 = FUN_0043e5c0(iVar1 + 0x3ab30);
  iVar1 = FUN_00522fa0(iVar1 + 0x3ab34);
  *(byte ***)(iVar1 + -0xbe64c) = &PTR_FUN_006077c4;
  FUN_00569f50(iVar1 + -0xbe648,0x5f8ced);
  FUN_00569f50(iVar1 + -0xb2538,"batboss.dfm");
  *(uint *)(iVar1 + -0xbb7b4) = 0x40000000;
  *(uint *)(iVar1 + -0xbb7b0) = 0x40400000;
  *(uint *)(iVar1 + -0xbb7ac) = 0x42480000;
  *(uint *)(iVar1 + -0xbb7a8) = 0x42c80000;
  *(uint *)(iVar1 + 0xc30) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0xc2c) = 0;
  *(uint *)(iVar1 + 0xc48) = 0;
  *(uint *)(iVar1 + 0xc4c) = 0;
  *(uint *)(iVar1 + 0xc50) = 0;
  *(uint *)(iVar1 + 0xc54) = 0;
  *(uint *)(iVar1 + 0xc44) = 0;
  *(uint *)(iVar1 + 0xc58) = 0;
  *(uint *)(iVar1 + 0xc34) = 0x41200000;
  *(uint *)(iVar1 + 0xc40) = 1;
  *(uint *)(iVar1 + -0xbbfe0) = 0;
  return iVar1 + -0xbe7a0;
}
