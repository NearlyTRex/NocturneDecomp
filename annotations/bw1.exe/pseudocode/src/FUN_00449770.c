// Name: FUN_00449770
// Address: 00449770
// Address Range: [[00449770, 00449821]]
// Convention: unknown
// Signature: int FUN_00449770(undefined4 param_1)

#include "nocturne.h"

int FUN_00449770(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ad4c0(param_1);
  iVar1 = FUN_004b7a30(iVar1 + 0x57c);
  *(uint *)(iVar1 + -0x428) = 0x5fe374;
  FUN_00468950(iVar1 + -0x424,0x5d737c);
  *(uint *)(iVar1 + -0x27c) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x158) = 0x3ee66666;
  *(uint *)(iVar1 + 0x15c) = 0x3f59999a;
  *(uint *)(iVar1 + 0x160) = 0x3ee66666;
  *(uint *)(iVar1 + -0x2a4) = 0;
  *(uint *)(iVar1 + -0x2a0) = 0;
  *(uint *)(iVar1 + -0x29c) = 1;
  *(uint *)(iVar1 + -0x298) = 0;
  *(uint *)(iVar1 + -0x294) = 0x42480000;
  *(uint *)(iVar1 + -0x290) = 0;
  return iVar1 + -0x57c;
}
