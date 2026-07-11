// Name: FUN_0048e550
// Address: 0048e550
// Address Range: [[0048e550, 0048e59f]]
// Convention: unknown
// Signature: void FUN_0048e550(int param_1)

#include "nocturne.h"

void FUN_0048e550(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x2cc) = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_0048ae90(0x01C08D04,param_1 + 0x358,0,0x4000,0x4000,0,0xffff);
  } while (iVar1 < 5);
  *(uint *)(param_1 + 0x4e4) = 1;
  return;
}
