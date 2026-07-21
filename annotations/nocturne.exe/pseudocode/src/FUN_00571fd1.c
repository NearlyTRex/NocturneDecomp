// Name: FUN_00571fd1
// Address: 00571fd1
// Address Range: [[00571fd1, 005721d6]]
// Convention: unknown
// Signature: int FUN_00571fd1(int param_1,int param_2)

#include "nocturne.h"

int FUN_00571fd1(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EDI;
  byte local_14 [4];
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14) ||
      *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14) < 0) {
    *(uint *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x14) = 0;
    *(uint *)(param_1 + 0x10) = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x28) + 0x20))(param_1);
    if (iVar1 == -1) {
      return -1;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    if (((*(uint *)(param_1 + 0x24) & 1) == 0) &&
       (iVar1 = (**(code **)(*(int *)(param_1 + 0x28) + 0x28))(param_1), iVar1 == -1)) {
      return -1;
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      if (param_2 != -1) {
        local_14[0] = (byte)param_2;
        iVar1 = FUN_0057301c(*(uint *)(param_1 + 0x2c),local_14,1);
        return (iVar1 == 1) - 1;
      }
      return 0;
    }
  }
  else if (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x20)) goto LAB_00572080;
  *(int *)(param_1 + 0x18) = iVar1;
  *(int *)(param_1 + 0x20) = iVar1;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 8);
LAB_00572080:
  if (((*(byte *)(param_1 + 0x30) & 8) == 0) ||
     ((unaff_EDI = FUN_0056bc10(*(uint *)(param_1 + 0x2c)), -1 < unaff_EDI &&
      (iVar1 = FUN_005689c0(*(uint *)(param_1 + 0x2c),0,2), -1 < iVar1)))) {
    if ((param_2 != -1) && (*(byte **)(param_1 + 0x20) < *(byte **)(param_1 + 0x1c))) {
      **(byte **)(param_1 + 0x20) = (byte)param_2;
      param_2 = -1;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    while (uVar2 != 0) {
      uVar3 = uVar2;
      if (0x7fffffff < uVar2) {
        uVar3 = 0x7fffffff;
      }
      iVar1 = FUN_0057301c(*(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x18),uVar3);
      if (iVar1 == -1) {
        return -1;
      }
      if (iVar1 == 0) break;
      uVar2 = uVar2 - iVar1;
      if (uVar2 == 0) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c);
      }
      else {
        memmove
                  (*(int *)(param_1 + 0x18),iVar1 + *(int *)(param_1 + 0x18),uVar2);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c);
        *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar2;
      }
    }
    if (param_2 != -1) {
      if (*(byte **)(param_1 + 0x1c) <= *(byte **)(param_1 + 0x20)) {
        return -1;
      }
      **(byte **)(param_1 + 0x20) = (byte)param_2;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    if ((((*(byte *)(param_1 + 0x30) & 8) == 0) ||
        (iVar1 = FUN_005689c0(*(uint *)(param_1 + 0x2c),unaff_EDI,0), -1 < iVar1)) &&
       (uVar2 == 0)) {
      return 0;
    }
  }
  return -1;
}
