// Name: FUN_0042b440
// Address: 0042b440
// Address Range: [[0042b440, 0042b543]]
// Convention: unknown
// Signature: void FUN_0042b440(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b440(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x2b4;
  iVar3 = FUN_005b8c30(param_1 + 0x2514,param_2);
  if (iVar3 == 0) {
    return;
  }
  FUN_005478b0(iVar1,param_2);
  FUN_00547480(iVar1);
  FUN_00547460(iVar1);
  *(uint *)(param_1 + 0x109c0) = 0;
  *(uint *)(param_1 + 0x109c4) = 0;
  *(uint *)(param_1 + 0x109c8) = 0;
  *(uint *)(param_1 + 0x109d4) = 0;
  *(uint *)(param_1 + 0x109cc) = 0;
  uVar2 = _DAT_005f4088;
  *(uint *)(param_1 + 0x109d8) = 0xfffffffe;
  *(uint *)(param_1 + 0x308) = *(uint *)(param_1 + 0x2824);
  *(uint *)(param_1 + 0x109d0) = uVar2;
  FUN_00429390(param_1);
  FUN_004247f0(param_1);
  if (0 < *(int *)(param_1 + 0x2d0c)) {
    FUN_005b1640(param_1 + 0x2d0c,0);
  }
  iVar1 = param_1 + 0x2d0c;
  FUN_005b15c0(iVar1,param_3);
  FUN_005b14a0(iVar1);
  FUN_005b1740(iVar1,param_1 + 0x20,param_1 + 0x30,param_1 + 0x2b4);
  return;
}
