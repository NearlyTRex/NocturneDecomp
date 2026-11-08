// Name: FUN_00465780
// Address: 00465780
// Address Range: [[00465780, 004657b0]]
// Convention: unknown
// Signature: void FUN_00465780(int param_1)

#include "nocturne.h"

void FUN_00465780(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
  iVar2 = iVar1 >> 0x1f;
  FUN_004ab020((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3);
  return;
}
