// Name: FUN_00443f90
// Address: 00443f90
// Address Range: [[00443f90, 0044401d]]
// Convention: unknown
// Signature: undefined4 FUN_00443f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00443f90(int param_1,uint param_2,uint param_3,uint param_4,uint param_5 )

{
  int iVar1;
  uint uVar2;
  
  FUN_00443f00(param_1);
  *(uint *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 8) = param_3;
  *(uint *)(param_1 + 0xc) = param_4;
  *(uint *)(param_1 + 0x14) = param_5;
  iVar1 = FUN_005c08d0(param_5);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\support\\codec.cpp";
    _DAT_01d1d404 = 0x881;
    FUN_005030e0("CInStreamPipe::open - out of memory for %d byte buffer",*(uint *)(param_1 + 0x14));
  }
  *(uint *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = 0;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  return uVar2;
}
