// Name: FUN_00548f30
// Address: 00548f30
// Address Range: [[00548f30, 00548f57]]
// Convention: unknown
// Signature: bool FUN_00548f30(int *param_1)

#include "nocturne.h"

bool FUN_00548f30(int *param_1)

{
  int iVar1;
  
  FUN_00549110(param_1);
  iVar1 = Ordinal_23(2,2,0);
  *param_1 = iVar1;
  return iVar1 != -1;
}
