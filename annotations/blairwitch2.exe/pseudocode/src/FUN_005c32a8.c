// Name: FUN_005c32a8
// Address: 005c32a8
// Address Range: [[005c32a8, 005c32f3]]
// Convention: unknown
// Signature: void FUN_005c32a8(undefined4 param_1)

#include "nocturne.h"

void FUN_005c32a8(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_FS_OFFSET;
  
  iVar2 = (*(code *)PTR_FUN_0061f2a4)();
  *(uint *)(iVar2 + 0x54) = param_1;
  uVar1 = *in_FS_OFFSET;
  iVar2 = (*(code *)PTR_FUN_0061f2a4)();
  **(uint **)(iVar2 + 0x54) = uVar1;
  iVar2 = (*(code *)PTR_FUN_0061f2a4)();
  *(byte **)(*(int *)(iVar2 + 0x54) + 4) = &LAB_005c30d8;
  iVar2 = (*(code *)PTR_FUN_0061f2a4)();
  *in_FS_OFFSET = *(uint *)(iVar2 + 0x54);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_005c2ea4);
  return;
}
