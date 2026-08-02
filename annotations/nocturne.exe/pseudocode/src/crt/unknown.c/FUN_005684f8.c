// Name: crt_unknown.c_FUN_005684f8
// Address: 005684f8
// Address Range: [[005684f8, 00568526]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005684f8(int param_1)

#include "nocturne.h"

int FUN_005684f8(int param_1)

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
