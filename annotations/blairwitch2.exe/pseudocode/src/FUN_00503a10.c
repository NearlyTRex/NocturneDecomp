// Name: FUN_00503a10
// Address: 00503a10
// Address Range: [[00503a10, 00503bc0]]
// Convention: unknown
// Signature: undefined4 FUN_00503a10(int *param_1,int *param_2,float *param_3,float param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00503a10(int *param_1,int *param_2,float *param_3,float param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float local_20;
  float fStack_18;
  
  iVar1 = *param_1 + 0x1c28 + *param_2 * 0x118;
  uVar5 = 0;
  iVar4 = 0;
  local_20 = param_4 * *(float *)(iVar1 + 0x20) + *param_3;
  iVar3 = iVar1;
  if (0 < *(int *)(iVar1 + 0x70)) {
    do {
      iVar2 = *(int *)(iVar3 + 0x74);
      if ((*param_3 <= (float)iVar2) && ((float)iVar2 <= local_20 + (float)_DAT_005dfd10)) {
        local_20 = (float)iVar2 + (float)_DAT_005dfd10;
        uVar5 = *(uint *)(iVar3 + 0x78);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(iVar1 + 0x70));
  }
  if ((double)local_20 < (double)*(int *)(iVar1 + 100) + _DAT_005dfd00) {
    (**(code **)(param_1[0x14] + 8))
              (param_1,(float)*(int *)(iVar1 + 0x60) + *param_3,
               (float)*(int *)(iVar1 + 0x60) + local_20,param_5);
    *param_3 = local_20;
    return uVar5;
  }
  (**(code **)(param_1[0x14] + 8))
            (param_1,(float)*(int *)(iVar1 + 0x60) + *param_3,
             (float)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 100)),param_5);
  switch(*(uint *)(iVar1 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
    *param_3 = (float)(*(int *)(iVar1 + 100) + -1);
    return uVar5;
  }
  fStack_18 = *(float *)(iVar1 + 0x38);
  if (fStack_18 == _DAT_005dfd08) {
    iVar3 = (**(code **)(param_1[0x14] + 4))
                      (param_1,*param_2,(float)(*(int *)(iVar1 + 100) + -1),
                       *(uint *)(iVar1 + 0x34));
    fStack_18 = (float)iVar3;
  }
  *param_2 = *(int *)(iVar1 + 0x34);
  *param_3 = fStack_18;
  return uVar5;
}
