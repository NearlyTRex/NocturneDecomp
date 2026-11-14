// Name: crt_unknown.c_FUN_005b17a0
// Address: 005b17a0
// Address Range: [[005b17a0, 005b183c]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b17a0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b17a0(uint *param_1)

{
  int iVar1;
  uint uStackY_38;
  int aiStackY_34 [2];
  byte local_28 [8];
  code *local_20;
  
  local_20 = (code *)*param_1;
  if (_DAT_02d252b0 == 0) {
    iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
    *(int *)(&stack0xffffffd4 + iVar1) = 0x000000F4;
    *(uint *)((int)aiStackY_34 + iVar1 + 4) = 0;
    *(byte **)((int)aiStackY_34 + iVar1) = local_28 + iVar1;
    *(uint *)((int)&uStackY_38 + iVar1) = 0x5b17df;
    memset
              (*(void **)((int)aiStackY_34 + iVar1),*(int *)((int)aiStackY_34 + iVar1 + 4),
               *(ulong *)(&stack0xffffffd4 + iVar1));
    *(byte **)(&stack0xffffffd4 + iVar1) = local_28 + iVar1;
    *(int *)(&stack0x000000c8 + iVar1) = 0x000000F4;
    *(uint *)((int)aiStackY_34 + iVar1 + 4) = 0x5b17f3;
    iVar1 = FUN_005adb48();
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
  param_1[4] = iVar1 + 0xde;
  aiStackY_34[1] = 0x5b1813;
  SetEvent((HANDLE)param_1[3]);
  aiStackY_34[1] = 0x5b181c;
  FUN_005ae418();
  (*(code *)PTR_crt_unknown_c_FUN_005a7f68_006079e0)();
  aiStackY_34[1] = 0x5b1829;
  (*local_20)();
  FUN_005b0d88();
  return;
}
