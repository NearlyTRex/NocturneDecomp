// Name: FUN_00434910
// Address: 00434910
// Address Range: [[00434910, 00434986]]
// Convention: unknown
// Signature: undefined4 FUN_00434910(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00434910(int param_1,uint param_2)

{
  int iVar1;
  
  if (-1 < *(int *)(param_1 + 0x30)) {
    iVar1 = FUN_00434570(param_1 + 4,*(int *)(param_1 + 0x30),param_1 + 0x18,param_2);
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        return 2;
      }
      if (iVar1 == -2) {
        *(uint *)(param_1 + 0x30) = 0xffffffff;
        return 2;
      }
      return 0;
    }
  }
  iVar1 = FUN_00433ad0(param_1 + 0x18,param_2);
  if ((iVar1 != 0) && (iVar1 == -1)) {
    return 2;
  }
  return 1;
}
