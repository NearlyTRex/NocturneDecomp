// Name: FUN_00555900
// Address: 00555900
// Address Range: [[00555900, 00555926]]
// Convention: unknown
// Signature: int FUN_00555900(int param_1,int param_2)

#include "nocturne.h"

int FUN_00555900(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * *(int *)(param_1 + 0x104) * *(int *)(param_1 + 0x108) + 7;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}
