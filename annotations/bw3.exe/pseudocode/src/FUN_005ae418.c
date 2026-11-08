// Name: FUN_005ae418
// Address: 005ae418
// Address Range: [[005ae418, 005ae463]]
// Convention: unknown
// Signature: void FUN_005ae418(undefined4 param_1)

#include "nocturne.h"

void FUN_005ae418(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_FS_OFFSET;
  
  iVar2 = (*(code *)PTR_FUN_006079a0)();
  *(uint *)(iVar2 + 0x54) = param_1;
  uVar1 = *in_FS_OFFSET;
  iVar2 = (*(code *)PTR_FUN_006079a0)();
  **(uint **)(iVar2 + 0x54) = uVar1;
  iVar2 = (*(code *)PTR_FUN_006079a0)();
  *(byte **)(*(int *)(iVar2 + 0x54) + 4) = &LAB_005ae248;
  iVar2 = (*(code *)PTR_FUN_006079a0)();
  *in_FS_OFFSET = *(uint *)(iVar2 + 0x54);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_005ae014);
  return;
}
