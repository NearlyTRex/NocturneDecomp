// Name: FUN_004e2070
// Address: 004e2070
// Address Range: [[004e2070, 004e2170]]
// Convention: unknown
// Signature: int FUN_004e2070(int *param_1,int param_2,float param_3,int *param_4,int *param_5,float *param_6)

#include "nocturne.h"

int FUN_004e2070(int *param_1,int param_2,float param_3,int *param_4,int *param_5,float *param_6)

{
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar1;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = param_2 * 0x54c + *param_1 + 0x968;
  if (param_3 <= 0.0) {
    iVar1 = *(int *)(iVar1 + 0x60);
    *param_4 = iVar1;
    *param_5 = iVar1;
    *param_6 = 0.0;
  }
  else {
    if (param_3 < (float)(*(int *)(iVar1 + 100) + -1)) {
      fVar3 = (float10)*(int *)(iVar1 + 0x60) + (float10)param_3;
      fVar2 = fVar3;
      iVar1 = FUN_00563a30();
      *extraout_ECX_00 = (int)ROUND(fVar3);
      *param_5 = *extraout_ECX_00 + 1;
      *param_6 = (float)(fVar2 - (float10)*extraout_ECX_00);
      return iVar1;
    }
    *param_4 = *(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 100) + -1;
    if ((*(int *)(iVar1 + 0x28) < *(int *)(iVar1 + 100) + -1) || (*(int *)(iVar1 + 0x30) != 1)) {
      iVar1 = *param_4;
      *param_5 = iVar1;
      *param_6 = 0.0;
      return iVar1;
    }
    fVar2 = (float10)*(int *)(*param_1 + 0x9c8 + *(int *)(iVar1 + 0x34) * 0x54c) +
            (float10)*(float *)(iVar1 + 0x38);
    FUN_00563a30();
    *param_5 = (int)ROUND(fVar2);
    iVar1 = *(int *)(extraout_EDX + 100) + -1;
    param_3 = param_3 - (float)iVar1;
    *param_6 = param_3;
    iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),
                     (ushort)(1.0 < param_3) << 8 | (ushort)NAN(param_3) << 10 |
                     (ushort)(param_3 == 1.0) << 0xe);
    if (1.0 < param_3 || (param_3 == 1.0) != 0) {
      iVar1 = *param_5;
      *extraout_ECX = iVar1;
      *param_6 = 0.0;
    }
  }
  return iVar1;
}
