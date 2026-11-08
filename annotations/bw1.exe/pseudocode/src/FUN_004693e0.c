// Name: FUN_004693e0
// Address: 004693e0
// Address Range: [[004693e0, 00469547]]
// Convention: unknown
// Signature: void FUN_004693e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004693e0(int param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 != 0) {
    iVar3 = *(int *)(0x01CCF390 + 0x25c);
    if (*(int *)(param_1 + 0x200d8) == 1) {
      *(float *)(param_1 + 0x200dc) = *(float *)(param_1 + 0x200dc) - _DAT_005fecb4;
      FUN_005247c0(param_1 + 0x158,0x75,1);
      if (ABS(*(float *)(param_1 + 0x200dc)) <= (float)_DAT_005d9be4) {
        *(float *)(param_1 + 0x34) = _DAT_005fecb4 + *(float *)(param_1 + 0x34);
        FUN_00433d50(param_1,param_1 + 0x30);
      }
      else {
        *(uint *)(param_1 + 0x200d8) = 0;
      }
    }
    FUN_00432f10(param_1,param_2,iVar3 != 0);
    uVar1 = *(uint *)(0x01CCF390 + 0x294);
    iVar3 = FUN_00524770(param_1 + 0x158);
    bVar2 = false;
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1e:
      bVar2 = true;
    }
    if ((*(int *)(param_1 + 0x1ff5c) == 7) || (bVar2)) {
      param_2 = param_2 * (float)_DAT_005d9bec;
      FUN_00469550(param_1,param_2);
      FUN_00469550(param_1,param_2);
      FUN_00469550(param_1,param_2);
    }
    FUN_00469550(param_1,param_2);
    FUN_004d7f50(0x01CCF390,uVar1);
  }
  return;
}
