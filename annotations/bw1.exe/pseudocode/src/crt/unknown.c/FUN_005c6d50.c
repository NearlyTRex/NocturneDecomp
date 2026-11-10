// Name: crt_unknown.c_FUN_005c6d50
// Address: 005c6d50
// Address Range: [[005c6d50, 005c6e76]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c6d50(undefined4 *param_1)

#include "nocturne.h"

int FUN_005c6d50(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(param_1[4]);
  if ((*(byte *)((int)param_1 + 0xd) & 0x10) == 0) {
    if ((*(int *)(param_1[2] + 8) != 0) &&
       (*(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef,
       (*(byte *)((int)param_1 + 0xd) & 0x20) == 0)) {
      iVar3 = 0;
      if (param_1[1] != 0) {
        iVar3 = FUN_005c6e80(param_1[4],-param_1[1],1);
      }
      if (iVar3 == -1) {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
        iVar5 = -1;
      }
    }
  }
  else {
    *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0xef;
    if (((*(byte *)(param_1 + 3) & 2) != 0) && (iVar3 = *(int *)(param_1[2] + 8), iVar3 != 0)) {
      iVar4 = param_1[1];
      while ((iVar4 != 0 && (iVar5 == 0))) {
        iVar2 = FUN_005c7dc0(param_1[4],iVar3,iVar4);
        if (iVar2 == -1) {
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
          iVar5 = -1;
        }
        else if (iVar2 == 0) {
          setErrno(0xc);
          iVar5 = -1;
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
        }
        iVar3 = iVar3 + iVar2;
        iVar4 = iVar4 - iVar2;
      }
    }
  }
  uVar1 = *(uint *)(param_1[2] + 8);
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((iVar5 == 0) && ((*(byte *)(param_1[2] + 0x10) & 1) != 0)) &&
     (iVar3 = FUN_005cbb70(param_1[4]), iVar3 == -1)) {
    iVar5 = -1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1[4]);
  return iVar5;
}
