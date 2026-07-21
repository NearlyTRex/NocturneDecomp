// Name: FUN_004fef60
// Address: 004fef60
// Address Range: [[004fef60, 004fefe7]]
// Convention: unknown
// Signature: undefined1 * FUN_004fef60(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004fef60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint local_10;
  
  _DAT_01e56418 = 1;
  FUN_004feff0(param_1);
  FUN_00476160(0x1e56c30);
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x28)) {
    do {
      iVar2 = *(int *)(param_1 + 0x40);
      local_10 = 0x3e800000;
      iVar1 = core_script_cpp_CScript_step_FUN_004ff2c0(param_1,&local_10);
      if (iVar1 < 0) {
        *param_2 = *(int *)(*(int *)(param_1 + 0x2c) + iVar2 * 8) + -1;
        return &DAT_01e56420;
      }
      iVar2 = iVar2 + 1;
      *(int *)(param_1 + 0x40) = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  _DAT_01e56418 = 0;
  return (byte *)0x0;
}
