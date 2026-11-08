// Name: FUN_005cb5a8
// Address: 005cb5a8
// Address Range: [[005cb5a8, 005cb5f3]]
// Convention: unknown
// Signature: void FUN_005cb5a8(undefined4 param_1)

#include "nocturne.h"

void FUN_005cb5a8(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_FS_OFFSET;
  
  iVar2 = (*(code *)PTR_FUN_006265fc)();
  *(uint *)(iVar2 + 0x54) = param_1;
  uVar1 = *in_FS_OFFSET;
  iVar2 = (*(code *)PTR_FUN_006265fc)();
  **(uint **)(iVar2 + 0x54) = uVar1;
  iVar2 = (*(code *)PTR_FUN_006265fc)();
  *(byte **)(*(int *)(iVar2 + 0x54) + 4) = &LAB_005cb3d8;
  iVar2 = (*(code *)PTR_FUN_006265fc)();
  *in_FS_OFFSET = *(uint *)(iVar2 + 0x54);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_005cb1a4);
  return;
}
