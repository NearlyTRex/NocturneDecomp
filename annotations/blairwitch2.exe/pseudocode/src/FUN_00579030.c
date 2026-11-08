// Name: FUN_00579030
// Address: 00579030
// Address Range: [[00579030, 00579057]]
// Convention: unknown
// Signature: bool FUN_00579030(int *param_1)

#include "nocturne.h"

bool FUN_00579030(int *param_1)

{
  int iVar1;
  
  FUN_00579360(param_1);
  iVar1 = Ordinal_23(2,1,0);
  *param_1 = iVar1;
  return iVar1 != -1;
}
