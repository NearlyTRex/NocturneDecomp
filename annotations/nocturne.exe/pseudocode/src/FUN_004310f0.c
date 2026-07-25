// Name: FUN_004310f0
// Address: 004310f0
// Address Range: [[004310f0, 00431250]]
// Convention: unknown
// Signature: void FUN_004310f0(ushort *param_1,int param_2,short param_3)

#include "nocturne.h"

void FUN_004310f0(ushort *param_1,int param_2,short param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      while( true ) {
        uVar1 = param_1[1];
        uVar4 = (param_3 - param_1[2]) - 1;
        uVar5 = (short)(param_1[3] * 2) >> 1;
        uVar2 = (param_3 - *param_1) - 1;
        if ((short)*param_1 <= (short)param_1[2]) break;
        *param_1 = 0;
        param_1[1] = 0;
        *param_1 = uVar1;
        param_1[1] = uVar2;
        uVar1 = param_1[3];
        param_1[2] = 0;
        param_1[2] = uVar5;
        param_1[3] = uVar1 & 0x8000;
        param_1[3] = uVar1 & 0x8000 | uVar4 & 0x7fff;
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 4;
        if (param_2 <= iVar3) {
          return;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *param_1 = *param_1 | uVar5;
      param_1[1] = uVar4;
      uVar4 = param_1[3];
      param_1[2] = 0;
      param_1[2] = uVar1;
      param_1[3] = uVar4 & 0x8000;
      param_1[3] = uVar4 & 0x8000 | uVar2 & 0x7fff;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < param_2);
  }
  return;
}
