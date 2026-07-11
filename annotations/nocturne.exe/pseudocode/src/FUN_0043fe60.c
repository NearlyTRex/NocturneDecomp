// Name: FUN_0043fe60
// Address: 0043fe60
// Address Range: [[0043fe60, 0043fede]]
// Convention: unknown
// Signature: void FUN_0043fe60(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0043fe60(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = (longlong)(param_2 * 0x10000 + param_3) * 0x100;
  uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(param_1 + 0x100c);
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  *(uint *)(param_1 + 0x1000) = uVar3;
  *(uint *)(param_1 + 0x1000) = -uVar3;
  lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(param_1 + 0x1010);
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  *(uint *)(param_1 + 0x1004) = uVar3;
  *(uint *)(param_1 + 0x1004) = -uVar3;
  lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(param_1 + 0x1014);
  uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  *(uint *)(param_1 + 0x1008) = uVar2;
  *(uint *)(param_1 + 0x1008) = -uVar2;
  return;
}
