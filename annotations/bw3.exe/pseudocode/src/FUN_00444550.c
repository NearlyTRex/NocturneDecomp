// Name: FUN_00444550
// Address: 00444550
// Address Range: [[00444550, 004445c0]]
// Convention: unknown
// Signature: void FUN_00444550(undefined4 param_1)

#include "nocturne.h"

void FUN_00444550(uint param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00442420(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005dd864;
  FUN_0054eae0(iVar1 + 0x158,"bonestruct.dfm");
  *(uint *)(iVar1 + 0x2538) = 0x425c0000;
  *(uint *)(iVar1 + 0xce5c) = 0x41700000;
  *(uint *)(iVar1 + 0xce60) = 0x41200000;
  *(uint *)(iVar1 + 0xd84c) = 1;
  *(uint *)(iVar1 + 0xd85c) = 3;
  fVar2 = (float10)*(float *)(iVar1 + 0x2538);
  FUN_005a3120();
  *(int *)(iVar1 + 0xd17c) = (int)ROUND(fVar2);
  return;
}
