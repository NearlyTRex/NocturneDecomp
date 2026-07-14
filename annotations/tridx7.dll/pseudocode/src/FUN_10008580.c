// Name: FUN_10008580
// Address: 10008580
// Address Range: [[10008580, 100085a9]]
// Convention: unknown
// Signature: undefined4 FUN_10008580(int param_1)

#include "nocturne.h"

uint FUN_10008580(int param_1)

{
  uint uVar1;
  
  if (-1 < param_1) {
    if (param_1 < 3) {
      uVar1 = DAT_10016c70;
      DAT_10016c70 = param_1;
      return uVar1;
    }
    if (param_1 == 3) {
      return DAT_10016c70;
    }
  }
  return 0xffffffff;
}
