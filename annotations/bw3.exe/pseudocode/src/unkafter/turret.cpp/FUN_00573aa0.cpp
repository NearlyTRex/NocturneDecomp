// Name: unkafter_turret.cpp_FUN_00573aa0
// Address: 00573aa0
// Address Range: [[00573aa0, 00573aee]]
// Convention: unknown
// Signature: int unkafter_turret_cpp_FUN_00573aa0(int param_1)

#include "nocturne.h"

int unkafter_turret_cpp_FUN_00573aa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = unkafter_turret_cpp_FUN_00573b90(param_1,*(uint *)(param_1 + 0x10));
  if (-1 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    if ((*(int *)(param_1 + 0x28) == 0) && (iVar1 == 0xd)) {
      iVar1 = 10;
      iVar2 = unkafter_turret_cpp_FUN_00573b90(param_1,iVar2);
      if (iVar2 == 10) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        return 10;
      }
    }
  }
  return iVar1;
}
