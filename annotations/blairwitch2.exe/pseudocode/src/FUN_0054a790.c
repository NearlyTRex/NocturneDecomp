// Name: FUN_0054a790
// Address: 0054a790
// Address Range: [[0054a790, 0054aa6f]]
// Convention: unknown
// Signature: void FUN_0054a790(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054a790(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  
  if (param_2[0xc] < 0xc) {
    return;
  }
  if ((param_2[0xc] == 0x6b) && (*(float *)(param_1 + 0x10b34) <= 0.0)) {
    iVar3 = *(int *)(param_1 + 0x10b30) + 1;
    *(float *)(param_1 + 0x10b34) = *(float *)(param_1 + 0x10b34) + 1.0;
    *(int *)(param_1 + 0x10b30) = iVar3;
    if (2 < iVar3) {
      param_2[0xb] = 0x3f800000;
      if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
        iVar3 = FUN_005b849c();
        switch(iVar3 % 6) {
        case 0:
          iVar3 = *(int *)(param_1 + 0x10b00);
          break;
        case 1:
          iVar3 = *(int *)(param_1 + 0x10b04);
          break;
        case 2:
          iVar3 = *(int *)(param_1 + 0x10b08);
          break;
        case 3:
          iVar3 = *(int *)(param_1 + 0x10b0c);
          break;
        case 4:
          iVar3 = *(int *)(param_1 + 0x10b28);
          break;
        case 5:
          iVar3 = *(int *)(param_1 + 0x10b24);
          break;
        default:
          goto switchD_0054a819_default;
        }
        *param_2 = iVar3;
      }
switchD_0054a819_default:
      iVar3 = *param_2;
      if (((((iVar3 == *(int *)(param_1 + 0x10b00)) || (iVar3 == *(int *)(param_1 + 0x10b04))) ||
           (iVar3 == *(int *)(param_1 + 0x10b08))) ||
          ((iVar3 == *(int *)(param_1 + 0x10b0c) || (iVar3 == *(int *)(param_1 + 0x10b24))))) ||
         (iVar3 == *(int *)(param_1 + 0x10b28))) {
        local_14 = param_2[0xb];
        if (*(int *)(0x01CB6900 + 0x1fc) != 0) {
          local_14 = 0x3f800000;
        }
        iVar3 = FUN_0040d060(local_14);
        if (iVar3 != 0) {
          uVar2 = FUN_004154f0(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
          FUN_004277e0(param_1,uVar2,*param_2,0);
          if (*param_2 == *(int *)(param_1 + 0x10b00)) {
            FUN_004277e0(param_1,uVar2,*(uint *)(param_1 + 0x10b04),0);
          }
          if (*(int *)(param_1 + 0x10b08) == *param_2) {
            FUN_004277e0(param_1,uVar2,*(uint *)(param_1 + 0x10b0c),0);
          }
          if (*(int *)(param_1 + 0x10b24) == *param_2) {
            piVar1 = param_2 + 3;
            FUN_00427770(param_1,*(uint *)(param_1 + 0x10b08),piVar1,0);
            FUN_00427770(param_1,*(uint *)(param_1 + 0x10b0c),piVar1,0);
            FUN_00427770(param_1,*(uint *)(param_1 + 0x10b00),piVar1,0);
            FUN_00427770(param_1,*(uint *)(param_1 + 0x10b04),piVar1,0);
            FUN_00427770(param_1,*(uint *)(param_1 + 0x10b28),piVar1,0);
          }
          FUN_0042b260(param_1,"limb?.wav");
          FUN_00416700(uVar2);
          if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b28) * 4) == 0) {
            param_2[1] = 0x461c3c00;
          }
          param_2[2] = (int)((float)param_2[2] * (float)_DAT_005e7845);
        }
      }
      iVar3 = *param_2;
      if (iVar3 != *(int *)(param_1 + 0x10b28)) {
        if ((iVar3 != *(int *)(param_1 + 0x10b20)) && (iVar3 != *(int *)(param_1 + 0x10b24))) {
          param_2[1] = (int)((float)param_2[1] * (float)_DAT_005e784d);
          return;
        }
        param_2[1] = param_2[1];
        return;
      }
      param_2[1] = (int)((float)param_2[1] * (float)_DAT_005e7855);
      return;
    }
  }
  param_2[1] = 0;
  return;
}
