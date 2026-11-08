// Name: FUN_00579060
// Address: 00579060
// Address Range: [[00579060, 00579087]]
// Convention: unknown
// Signature: bool FUN_00579060(int *param_1)

#include "nocturne.h"

bool FUN_00579060(int *param_1)

{
  int iVar1;
  
  FUN_00579360(param_1);
  iVar1 = Ordinal_23(2,2,0);
  *param_1 = iVar1;
  return iVar1 != -1;
}
