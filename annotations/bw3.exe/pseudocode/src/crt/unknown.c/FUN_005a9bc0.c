// Name: crt_unknown.c_FUN_005a9bc0
// Address: 005a9bc0
// Address Range: [[005a9bc0, 005a9ce6]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005a9bc0(undefined4 *param_1)

#include "nocturne.h"

int FUN_005a9bc0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(param_1[4]);
  if ((*(byte *)((int)param_1 + 0xd) & 0x10) == 0) {
    if ((*(int *)(param_1[2] + 8) != 0) &&
       (*(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef,
       (*(byte *)((int)param_1 + 0xd) & 0x20) == 0)) {
      iVar3 = 0;
      if (param_1[1] != 0) {
        iVar3 = FUN_005a9cf0(param_1[4],-param_1[1],1);
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
        iVar2 = FUN_005aac30(param_1[4],iVar3,iVar4);
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
     (iVar3 = unkafter_asgaya_cpp_FUN_005ae9e0(param_1[4]), iVar3 == -1)) {
    iVar5 = -1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1[4]);
  return iVar5;
}
