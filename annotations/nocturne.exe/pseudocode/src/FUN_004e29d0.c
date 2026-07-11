// Name: FUN_004e29d0
// Address: 004e29d0
// Address Range: [[004e29d0, 004e2abb]]
// Convention: unknown
// Signature: uint FUN_004e29d0(undefined4 *param_1)

#include "nocturne.h"

uint FUN_004e29d0(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  param_1[3] = param_1[3] + 1;
  if (param_1[5] == 0) {
    param_1[5] = 8;
    iVar4 = param_1[4] + -1;
    param_1[4] = iVar4;
    if ((iVar4 < 4) || (iVar4 < (int)param_1[6])) {
      if (param_1[6] == 0) {
        for (iVar4 = param_1[4]; -1 < iVar4; iVar4 = iVar4 + -1) {
          *(byte *)(param_1[1] + ((param_1[2] + -1) - param_1[4]) + iVar4) =
               *(byte *)(param_1[1] + iVar4);
        }
        iVar4 = (param_1[2] + -2) - param_1[4];
        while ((-1 < iVar4 && (param_1[6] == 0))) {
          iVar3 = 0;
          if (0 < (int)param_1[10]) {
            iVar3 = param_1[1] + iVar4;
            iVar4 = iVar4 + -1;
            iVar3 = FUN_005636d0(iVar3,1,1,*param_1);
          }
          if (iVar3 == 1) {
            param_1[10] = param_1[10] + -1;
          }
          else {
            param_1[6] = iVar4 + 1;
          }
        }
        param_1[4] = param_1[2] + -1;
      }
      else {
        param_1[7] = 1;
      }
    }
  }
  iVar4 = param_1[5] + -1;
  bVar1 = *(byte *)(param_1[1] + param_1[4]);
  uVar2 = *(uint *)(&DAT_005bbff0 + iVar4 * 4);
  param_1[5] = iVar4;
  return (uVar2 & bVar1) >> ((byte)iVar4 & 0x1f);
}
