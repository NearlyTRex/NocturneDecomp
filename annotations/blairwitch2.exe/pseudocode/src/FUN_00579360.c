// Name: FUN_00579360
// Address: 00579360
// Address Range: [[00579360, 00579392]]
// Convention: unknown
// Signature: bool FUN_00579360(undefined4 *param_1)

#include "nocturne.h"

bool FUN_00579360(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00579090(param_1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = Ordinal_3(*param_1);
  *param_1 = 0xffffffff;
  return iVar1 == 0;
}
