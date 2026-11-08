// Name: FUN_0056fc30
// Address: 0056fc30
// Address Range: [[0056fc30, 0056fc62]]
// Convention: unknown
// Signature: bool FUN_0056fc30(undefined4 *param_1)

#include "nocturne.h"

bool FUN_0056fc30(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056f960(param_1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = Ordinal_3(*param_1);
  *param_1 = 0xffffffff;
  return iVar1 == 0;
}
