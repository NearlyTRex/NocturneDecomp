// Name: FUN_00438ab0
// Address: 00438ab0
// Address Range: [[00438ab0, 00438c38]]
// Convention: unknown
// Signature: uint FUN_00438ab0(byte *param_1,int param_2,int *param_3,int *param_4)

#include "nocturne.h"

uint FUN_00438ab0(byte *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte local_18 [4];
  byte local_14 [4];
  
  if (param_2 < *(int *)param_1) {
    uVar4 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar4 >> ((byte)param_2 & 0x1f);
    uVar4 = ~(-1 << ((byte)param_2 & 0x1f)) & uVar4;
    *(int *)param_1 = *(int *)param_1 - param_2;
  }
  else if (param_2 == *(int *)param_1) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar4 = *(uint *)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    bVar1 = *param_1;
    uVar4 = *(uint *)(param_1 + 4);
    iVar3 = *(int *)param_1;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_2 = param_2 - iVar3;
    uVar4 = ~(-1 << (bVar1 & 0x1f)) & uVar4;
    while( true ) {
      if (param_2 < 8) {
        if (0 < param_2) {
          if ((*param_4 < 1) ||
             (FUN_00564c53(param_3,local_18),
             *(int *)((int)param_3 + *(int *)(*param_3 + 4) + 0x10) != 0)) {
            uVar2 = 0xffffffff;
          }
          else {
            *param_4 = *param_4 + -1;
            uVar2 = (uint)local_18[0];
          }
          *(uint *)(param_1 + 4) = uVar2;
          if ((int)uVar2 < 0) {
            *(uint *)(param_1 + 4) = uVar4;
            *(int *)param_1 = iVar3;
            return 0xffffffff;
          }
          uVar4 = uVar4 | (~(-1 << ((byte)param_2 & 0x1f)) & *(uint *)(param_1 + 4)) <<
                          ((byte)iVar3 & 0x1f);
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) >> ((byte)param_2 & 0x1f);
          *(int *)param_1 = 8 - param_2;
        }
        return uVar4;
      }
      if ((*param_4 < 1) ||
         (FUN_00564c53(param_3,local_14),
         *(int *)((int)param_3 + *(int *)(*param_3 + 4) + 0x10) != 0)) break;
      *param_4 = *param_4 + -1;
      uVar4 = uVar4 | (uint)local_14[0] << ((byte)iVar3 & 0x1f);
      param_2 = param_2 + -8;
      iVar3 = iVar3 + 8;
    }
    *(uint *)(param_1 + 4) = uVar4;
    *(int *)param_1 = iVar3;
    uVar4 = 0xffffffff;
  }
  return uVar4;
}
