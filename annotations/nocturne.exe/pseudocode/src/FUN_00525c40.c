// Name: FUN_00525c40
// Address: 00525c40
// Address Range: [[00525c40, 00525c60]]
// Convention: unknown
// Signature: int FUN_00525c40(int param_1)

#include "nocturne.h"

int FUN_00525c40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x104) * *(int *)(param_1 + 0x108);
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}
