// Name: FUN_004dccb0
// Address: 004dccb0
// Address Range: [[004dccb0, 004dcccd]]
// Convention: unknown
// Signature: int FUN_004dccb0(int param_1)

#include "nocturne.h"

int FUN_004dccb0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x458);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x430) != 0)) {
    return iVar1;
  }
  return 0;
}
