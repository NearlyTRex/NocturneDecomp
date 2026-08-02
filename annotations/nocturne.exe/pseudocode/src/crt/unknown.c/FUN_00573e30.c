// Name: crt_unknown.c_FUN_00573e30
// Address: 00573e30
// Address Range: [[00573e30, 00573ecc]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00573e30(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573e30(uint *param_1)

{
  int iVar1;
  uint uStackY_38;
  int aiStackY_34 [2];
  byte local_28 [8];
  code *local_20;
  
  local_20 = (code *)*param_1;
  if (_DAT_02de4e30 == 0) {
    iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
    *(int *)(&stack0xffffffd4 + iVar1) = 0x000000F4;
    *(uint *)((int)aiStackY_34 + iVar1 + 4) = 0;
    *(byte **)((int)aiStackY_34 + iVar1) = local_28 + iVar1;
    *(uint *)((int)&uStackY_38 + iVar1) = 0x573e6f;
    memset
              (*(void **)((int)aiStackY_34 + iVar1),*(int *)((int)aiStackY_34 + iVar1 + 4),
               *(ulong *)(&stack0xffffffd4 + iVar1));
    *(byte **)(&stack0xffffffd4 + iVar1) = local_28 + iVar1;
    *(int *)(&stack0x000000c8 + iVar1) = 0x000000F4;
    *(uint *)((int)aiStackY_34 + iVar1 + 4) = 0x573e83;
    iVar1 = FUN_0056e608();
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  param_1[4] = iVar1 + 0xde;
  aiStackY_34[1] = 0x573ea3;
  SetEvent((HANDLE)param_1[3]);
  aiStackY_34[1] = 0x573eac;
  installExceptionHandler();
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_00567208_005c1afc)();
  aiStackY_34[1] = 0x573eb9;
  (*local_20)();
  FUN_00572e88();
  return;
}
