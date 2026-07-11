// Name: FUN_00511b50
// Address: 00511b50
// Address Range: [[00511b50, 00511c58]]
// Convention: unknown
// Signature: undefined4 FUN_00511b50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00511b50(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  if (((*(uint *)(0x02DD1210 + 4) & 0x7fffffff) == 0) ||
     (*(float *)(0x02DD1210 + 4) <= *(float *)(param_2 + 4))) {
    iVar3 = 0;
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 0x14cd6c)) {
      do {
        iVar1 = FUN_0040d890(*(uint *)(iVar4 + 0x14cd70),_DAT_02ddd5d0);
        if (iVar1 != 0) {
          FUN_0040a290(iVar1,&local_1c,param_2);
          (**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,&fStack_34);
          fStack_30 = fStack_30 + _DAT_00590bc1;
          if ((((fStack_34 <= local_1c) && (fStack_30 <= fStack_18)) && (fStack_2c <= fStack_14)) &&
             (((local_1c <= fStack_28 && (fStack_18 <= fStack_24)) && (fStack_14 <= fStack_20)))) {
            return 1;
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x14cd6c));
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
