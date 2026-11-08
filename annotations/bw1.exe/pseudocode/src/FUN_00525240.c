// Name: FUN_00525240
// Address: 00525240
// Address Range: [[00525240, 0052537b]]
// Convention: unknown
// Signature: int FUN_00525240(int *param_1,int param_2,float param_3,int *param_4,int *param_5,float *param_6)

#include "nocturne.h"

int FUN_00525240(int *param_1,int param_2,float param_3,int *param_4,int *param_5,float *param_6)

{
  float fVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = *param_1 + 0x1c28 + param_2 * 0x120;
  if (param_3 <= 0.0) {
    iVar2 = *(int *)(iVar2 + 0x60);
    *param_4 = iVar2;
    *param_5 = iVar2;
    *param_6 = 0.0;
  }
  else {
    if (param_3 < (float)(*(int *)(iVar2 + 100) - *(int *)(iVar2 + 0x68))) {
      fVar5 = (float10)*(int *)(iVar2 + 0x60) + (float10)param_3 / (float10)*(int *)(iVar2 + 0x68);
      fVar4 = fVar5;
      FUN_005c03a0();
      *extraout_ECX_00 = (int)ROUND(fVar5);
      iVar2 = *extraout_ECX_00;
      *param_5 = iVar2 + 1;
      *param_6 = (float)(fVar4 - (float10)*extraout_ECX_00);
      return iVar2 + 1;
    }
    *param_4 = *(int *)(iVar2 + 0x60) + *(int *)(iVar2 + 0x6c) + -1;
    if ((*(int *)(iVar2 + 0x28) < *(int *)(iVar2 + 100) + -1) || (*(int *)(iVar2 + 0x30) != 1)) {
      iVar2 = *param_4;
      *param_5 = iVar2;
      *param_6 = 0.0;
      return iVar2;
    }
    iVar3 = *(int *)(iVar2 + 0x34) * 0x120;
    fVar4 = (float10)*(int *)(iVar3 + 0x1c88 + *param_1) +
            (float10)*(float *)(iVar2 + 0x38) / (float10)*(int *)(iVar3 + 0x1c90 + *param_1);
    FUN_005c03a0();
    *param_5 = (int)ROUND(fVar4);
    iVar2 = *(int *)(extraout_EDX + 100) - *(int *)(extraout_EDX + 0x68);
    fVar1 = (param_3 - (float)iVar2) / (float)*(int *)(extraout_EDX + 0x68);
    *param_6 = fVar1;
    iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),
                     (ushort)(1.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                     (ushort)(fVar1 == 1.0) << 0xe);
    if (1.0 < fVar1 || (fVar1 == 1.0) != 0) {
      iVar2 = *param_5;
      *extraout_ECX = iVar2;
      *param_6 = 0.0;
      return iVar2;
    }
  }
  return iVar2;
}
