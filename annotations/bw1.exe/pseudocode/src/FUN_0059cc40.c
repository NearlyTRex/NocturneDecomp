// Name: FUN_0059cc40
// Address: 0059cc40
// Address Range: [[0059cc40, 0059cc72]]
// Convention: unknown
// Signature: bool FUN_0059cc40(undefined4 *param_1)

#include "nocturne.h"

bool FUN_0059cc40(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059c970(param_1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = Ordinal_3(*param_1);
  *param_1 = 0xffffffff;
  return iVar1 == 0;
}
