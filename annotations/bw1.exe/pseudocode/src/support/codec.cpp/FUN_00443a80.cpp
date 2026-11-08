// Name: FUN_00443a80
// Address: 00443a80
// Address Range: [[00443a80, 00443ae9]]
// Convention: unknown
// Signature: uint FUN_00443a80(int param_1,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00443a80(int param_1,byte param_2)

{
  uint uVar1;
  
  FUN_00443b70(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    return (uint)(byte)(&DAT_00610db8)[(uint)param_2 + *(int *)(param_1 + 8) & 0xff];
  }
  if (*(int *)(param_1 + 4) == 1) {
    return (uint)(byte)((&DAT_00610eb8)[param_2] - *(char *)(param_1 + 8));
  }
  _DAT_01d1d400 = "..\\support\\codec.cpp";
  _DAT_01d1d404 = 0x70b;
  uVar1 = FUN_005030e0("Invalid mode.");
  return uVar1 & 0xffffff00;
}
