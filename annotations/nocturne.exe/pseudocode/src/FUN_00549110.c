// Name: FUN_00549110
// Address: 00549110
// Address Range: [[00549110, 00549142]]
// Convention: unknown
// Signature: bool FUN_00549110(undefined4 *param_1)

#include "nocturne.h"

bool FUN_00549110(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00548f60(param_1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = Ordinal_3(*param_1);
  *param_1 = 0xffffffff;
  return iVar1 == 0;
}
