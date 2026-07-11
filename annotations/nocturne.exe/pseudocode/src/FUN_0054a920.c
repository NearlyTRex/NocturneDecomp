// Name: FUN_0054a920
// Address: 0054a920
// Address Range: [[0054a920, 0054aaaa]]
// Convention: unknown
// Signature: void FUN_0054a920(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054a920(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  byte auStack_30 [12];
  float fStack_24;
  float fStack_14;
  
  if (*(float *)(param_1 + 0x864) <= 0.0) {
    if (*(int *)(param_1 + 0x778) != 0) {
      pfVar1 = (float *)(param_1 + 0x844);
      iVar4 = FUN_0054a640(param_1,pfVar1,param_2 * (float)_DAT_00596eb5);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x778) + 0x14c) + 0x14))
                  (*(int *)(param_1 + 0x778),&fStack_54);
        fStack_3c = *pfVar1;
        fStack_38 = *(float *)(param_1 + 0x848);
        iVar4 = 0;
        fStack_34 = *(float *)(param_1 + 0x84c);
        while( true ) {
          fStack_24 = (float)FUN_0040dda0(0x3dcccccd,0x3f666666);
          *(float *)(param_1 + 0x844) = fStack_54 * fStack_24 + (1.0 - fStack_24) * fStack_48;
          fStack_14 = fStack_24;
          fStack_24 = (float)FUN_0040dda0(0x3dcccccd,0x3f666666);
          *(float *)(param_1 + 0x84c) = fStack_4c * fStack_24 + (1.0 - fStack_24) * fStack_40;
          *(uint *)(param_1 + 0x848) = uStack_50;
          fStack_14 = fStack_24;
          pfVar5 = (float *)FUN_0040a240(*(uint *)(param_1 + 0x778),auStack_30,pfVar1);
          if (pfVar1 != pfVar5) {
            *pfVar1 = *pfVar5;
            *(float *)(param_1 + 0x848) = pfVar5[1];
            *(float *)(param_1 + 0x84c) = pfVar5[2];
          }
          fVar3 = *(float *)(param_1 + 0x848) - fStack_38;
          fVar2 = *(float *)(param_1 + 0x84c) - fStack_34;
          if (_DAT_00596ebd <
              fVar2 * fVar2 + fVar3 * fVar3 + (*pfVar1 - fStack_3c) * (*pfVar1 - fStack_3c)) break;
          iVar4 = iVar4 + 1;
          if (4 < iVar4) {
            return;
          }
        }
      }
    }
  }
  else if (*(float *)(param_1 + 0x2f8) <= 0.0) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0xdc))(param_1);
  }
  return;
}
