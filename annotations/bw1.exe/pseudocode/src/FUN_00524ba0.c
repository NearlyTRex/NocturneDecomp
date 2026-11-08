// Name: FUN_00524ba0
// Address: 00524ba0
// Address Range: [[00524ba0, 00524d64]]
// Convention: unknown
// Signature: undefined4 FUN_00524ba0(int *param_1,int *param_2,float *param_3,float param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00524ba0(int *param_1,int *param_2,float *param_3,float param_4,uint param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float local_1c;
  float fStack_18;
  
  iVar5 = *param_1 + 0x1c28 + *param_2 * 0x120;
  uVar6 = 0;
  iVar4 = 0;
  local_1c = param_4 * *(float *)(iVar5 + 0x20) + *param_3;
  iVar3 = iVar5;
  if (0 < *(int *)(iVar5 + 0x78)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x7c);
      if ((*param_3 <= (float)iVar1) && ((float)iVar1 <= local_1c + (float)_DAT_005eaf6b)) {
        local_1c = (float)iVar1 + (float)_DAT_005eaf6b;
        uVar6 = *(uint *)(iVar3 + 0x80);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(iVar5 + 0x78));
  }
  if ((double)local_1c < (double)*(int *)(iVar5 + 100) + _DAT_005eaf5b) {
    fVar2 = 1.0 / (float)*(int *)(iVar5 + 0x68);
    (**(code **)(param_1[0x14] + 8))
              (param_1,(float)*(int *)(iVar5 + 0x60) + *param_3 * fVar2,
               local_1c * fVar2 + (float)*(int *)(iVar5 + 0x60),param_5);
    *param_3 = local_1c;
    return uVar6;
  }
  (**(code **)(param_1[0x14] + 8))
            (param_1,(float)*(int *)(iVar5 + 0x60) + *param_3 / (float)*(int *)(iVar5 + 0x68),
             (float)(*(int *)(iVar5 + 0x60) + *(int *)(iVar5 + 0x6c)),param_5);
  switch(*(uint *)(iVar5 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
    *param_3 = (float)(*(int *)(iVar5 + 100) + -1);
    return uVar6;
  }
  fStack_18 = *(float *)(iVar5 + 0x38);
  if (fStack_18 == _DAT_005eaf63) {
    iVar3 = (**(code **)(param_1[0x14] + 4))
                      (param_1,*param_2,(float)(*(int *)(iVar5 + 100) + -1),
                       *(uint *)(iVar5 + 0x34));
    fStack_18 = (float)iVar3;
  }
  *param_2 = *(int *)(iVar5 + 0x34);
  *param_3 = fStack_18;
  return uVar6;
}
