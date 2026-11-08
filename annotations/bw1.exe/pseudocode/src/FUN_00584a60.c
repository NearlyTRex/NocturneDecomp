// Name: FUN_00584a60
// Address: 00584a60
// Address Range: [[00584a60, 00584ad3]]
// Convention: unknown
// Signature: void FUN_00584a60(int param_1)

#include "nocturne.h"

void FUN_00584a60(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b5f0(param_1 + 0x158,&DAT_005f6354);
  FUN_0040b5f0(param_1 + 0x15c,&DAT_005f6359);
  FUN_0040b5f0(param_1 + 0x160,"width");
  FUN_0040b670(param_1 + 0x16c,"count");
  FUN_0040b670(param_1 + 0xa30,"groundType");
  return;
}
