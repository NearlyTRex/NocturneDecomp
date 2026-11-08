// Name: FUN_00538be0
// Address: 00538be0
// Address Range: [[00538be0, 00538d08]]
// Convention: unknown
// Signature: float FUN_00538be0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00538be0(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fStack_20;
  
  if ((*(int *)(param_5 + 0x1a0) != 0) &&
     (fVar4 = *(float *)(param_5 + 0x100) - *(float *)(param_1 + 0x20),
     fVar2 = *(float *)(param_5 + 0x104) - *(float *)(param_1 + 0x24),
     fVar1 = *(float *)(param_5 + 0x108) - *(float *)(param_1 + 0x28),
     fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <= _DAT_005fb354 * _DAT_005fb354)) {
    iVar3 = FUN_0053ae20(param_5,(float *)(param_1 + 0x20),param_6);
    fStack_20 = 0.0;
    if (iVar3 != 0) {
      iVar3 = param_4 * 0xf0 + 0x2093d34;
      if (*(int *)(param_5 + 0x140) == 0) {
        fVar4 = (float)FUN_005386e0(iVar3,param_1,param_2,param_3,1);
        return fVar4;
      }
      fStack_20 = 0.0;
      do {
        fVar4 = (float)FUN_005386e0(iVar3,param_1,param_2,param_3,0);
        fStack_20 = fVar4 + fStack_20;
        iVar3 = iVar3 + 0x28;
      } while (iVar3 != param_4 * 0xf0 + 0x2093e24);
    }
    return fStack_20;
  }
  return 0.0;
}
