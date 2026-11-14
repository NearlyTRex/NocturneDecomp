// Name: crt_unknown.c_updateClassNameHash_FUN_005a9258
// Address: 005a9258
// Address Range: [[005a9258, 005a9286]]
// Convention: unknown
// Signature: int crt_unknown_c_updateClassNameHash_FUN_005a9258(int param_1)

#include "nocturne.h"

int updateClassNameHash(int param_1)

{
  int iVar1;
  
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    return param_1 + -0x30;
  }
  iVar1 = tolower(param_1);
  if ((0x60 < iVar1) && (iVar1 < 0x67)) {
    return iVar1 + -0x57;
  }
  return 0x10;
}
