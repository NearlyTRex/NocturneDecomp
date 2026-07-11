// Name: FUN_0056eed8
// Address: 0056eed8
// Address Range: [[0056eed8, 0056ef23]]
// Convention: unknown
// Signature: void FUN_0056eed8(undefined4 param_1)

#include "nocturne.h"

void FUN_0056eed8(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_FS_OFFSET;
  
  iVar2 = (*(code *)PTR_FUN_005c1abc)();
  *(uint *)(iVar2 + 0x54) = param_1;
  uVar1 = *in_FS_OFFSET;
  iVar2 = (*(code *)PTR_FUN_005c1abc)();
  **(uint **)(iVar2 + 0x54) = uVar1;
  iVar2 = (*(code *)PTR_FUN_005c1abc)();
  *(byte **)(*(int *)(iVar2 + 0x54) + 4) = &LAB_0056ed08;
  iVar2 = (*(code *)PTR_FUN_005c1abc)();
  *in_FS_OFFSET = *(uint *)(iVar2 + 0x54);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_0056ead4);
  return;
}
