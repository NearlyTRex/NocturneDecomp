// Name: FUN_00464a00
// Address: 00464a00
// Address Range: [[00464a00, 00464a99]]
// Convention: unknown
// Signature: void FUN_00464a00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00464a00(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x2514) != '\0') && (*(int *)(param_1 + 0x23f4 + param_2 * 4) != 0)) {
    iVar1 = FUN_004154f0(param_1 + 0x20,param_1 + 0x30,param_3,param_1,0,0,
                         *(uint *)(param_1 + 0x280c));
    FUN_004277e0(param_1,iVar1,param_2,param_4);
    FUN_00416700(iVar1);
    *(int *)(param_1 + 0x10ba8 + *(int *)(param_1 + 0x10ba4) * 4) = iVar1;
    *(int *)(param_1 + 0x10ba4) = *(int *)(param_1 + 0x10ba4) + 1;
    *(uint *)(iVar1 + 0xfc) = 1;
    *(uint *)(iVar1 + 0x10c8) = 1;
    *(uint *)(iVar1 + 0x10d4) = 0xffff;
    return;
  }
  return;
}
