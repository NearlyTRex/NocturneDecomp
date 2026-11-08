// Name: FUN_0059c910
// Address: 0059c910
// Address Range: [[0059c910, 0059c937]]
// Convention: unknown
// Signature: bool FUN_0059c910(int *param_1)

#include "nocturne.h"

bool FUN_0059c910(int *param_1)

{
  int iVar1;
  
  FUN_0059cc40(param_1);
  iVar1 = Ordinal_23(2,1,0);
  *param_1 = iVar1;
  return iVar1 != -1;
}
