// Name: FUN_0056f900
// Address: 0056f900
// Address Range: [[0056f900, 0056f927]]
// Convention: unknown
// Signature: bool FUN_0056f900(int *param_1)

#include "nocturne.h"

bool FUN_0056f900(int *param_1)

{
  int iVar1;
  
  FUN_0056fc30(param_1);
  iVar1 = Ordinal_23(2,1,0);
  *param_1 = iVar1;
  return iVar1 != -1;
}
