// Name: FUN_00509560
// Address: 00509560
// Address Range: [[00509560, 005095ef]]
// Convention: unknown
// Signature: undefined4 FUN_00509560(int param_1)

#include "nocturne.h"

uint FUN_00509560(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x206ac) == 0) {
    if (*(int *)(param_1 + 0x27a8) == 0) {
      uVar2 = FUN_0042e220(param_1);
      return uVar2;
    }
    iVar1 = FUN_0046d540(DAT_005f2afc);
    if (iVar1 != 0) {
      iVar1 = FUN_00491aa0(0x01C6E360,"heroCanSee");
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 0x27a8) != 0) && (*(int *)(0x01D2130C + 0x264) != 0)) {
      iVar1 = FUN_0040cea0(0,2);
      if (iVar1 == 1) {
        uVar2 = FUN_0042e220(param_1);
        return uVar2;
      }
    }
  }
  return 0;
}
