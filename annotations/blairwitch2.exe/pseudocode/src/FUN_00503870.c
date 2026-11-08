// Name: FUN_00503870
// Address: 00503870
// Address Range: [[00503870, 00503894]]
// Convention: unknown
// Signature: int FUN_00503870(int *param_1)

#include "nocturne.h"

int FUN_00503870(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005035c0(param_1);
  return *(int *)(iVar1 + 0x24) * 0x1e + *param_1 + 4;
}
