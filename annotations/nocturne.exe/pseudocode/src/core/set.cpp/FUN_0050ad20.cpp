// Name: core_set.cpp_FUN_0050ad20
// Address: 0050ad20
// Address Range: [[0050ad20, 0050adbc]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0050ad20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0050ad20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < _DAT_01fb99d0) {
    iVar3 = 0;
    do {
      if (*(int *)(&DAT_01fb99d4 + iVar3) != 0) {
        uVar2 = core_dlight_cpp_FUN_0044e1c0(*(int *)(&DAT_01fb99d4 + iVar3),0);
        FUN_00564494(uVar2);
      }
      iVar1 = _DAT_01fb99d0;
      iVar4 = iVar4 + 1;
      *(uint *)(&DAT_01fb99d4 + iVar3) = 0;
      iVar3 = iVar3 + 4;
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  _DAT_01fb99d0 = 0;
  if (0 < *(int *)(param_1 + 0x19644)) {
    iVar3 = param_1 + 0x19648;
    do {
      core_setutil_cpp_FUN_00515410(iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x1898;
    } while (iVar4 < *(int *)(param_1 + 0x19644));
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(0x1fb8508);
  return;
}
