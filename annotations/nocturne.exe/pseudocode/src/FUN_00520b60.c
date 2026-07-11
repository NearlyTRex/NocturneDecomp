// Name: FUN_00520b60
// Address: 00520b60
// Address Range: [[00520b60, 00520e3f]]
// Convention: unknown
// Signature: void FUN_00520b60(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00520b60(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  
  if (param_2[0xc] < 0xc) {
    return;
  }
  if ((param_2[0xc] == 0x6b) && (*(float *)(param_1 + 0xbd60) <= 0.0)) {
    iVar3 = *(int *)(param_1 + 0xbd5c) + 1;
    *(float *)(param_1 + 0xbd60) = *(float *)(param_1 + 0xbd60) + 1.0;
    *(int *)(param_1 + 0xbd5c) = iVar3;
    if (2 < iVar3) {
      param_2[0xb] = 0x3f800000;
      if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
        iVar3 = FUN_0056488c();
        switch(iVar3 % 6) {
        case 0:
          iVar3 = *(int *)(param_1 + 0xbd2c);
          break;
        case 1:
          iVar3 = *(int *)(param_1 + 0xbd30);
          break;
        case 2:
          iVar3 = *(int *)(param_1 + 0xbd34);
          break;
        case 3:
          iVar3 = *(int *)(param_1 + 0xbd38);
          break;
        case 4:
          iVar3 = *(int *)(param_1 + 0xbd54);
          break;
        case 5:
          iVar3 = *(int *)(param_1 + 0xbd50);
          break;
        default:
          goto switchD_00520be9_default;
        }
        *param_2 = iVar3;
      }
switchD_00520be9_default:
      iVar3 = *param_2;
      if (((((iVar3 == *(int *)(param_1 + 0xbd2c)) || (iVar3 == *(int *)(param_1 + 0xbd30))) ||
           (iVar3 == *(int *)(param_1 + 0xbd34))) ||
          ((iVar3 == *(int *)(param_1 + 0xbd38) || (iVar3 == *(int *)(param_1 + 0xbd50))))) ||
         (iVar3 == *(int *)(param_1 + 0xbd54))) {
        local_14 = param_2[0xb];
        if (*(int *)(0x01C775EC + 0x1e0) != 0) {
          local_14 = 0x3f800000;
        }
        iVar3 = FUN_0040dea0(local_14);
        if (iVar3 != 0) {
          uVar2 = FUN_00415b30(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
          FUN_00427eb0(param_1,uVar2,*param_2,0);
          if (*param_2 == *(int *)(param_1 + 0xbd2c)) {
            FUN_00427eb0(param_1,uVar2,*(uint *)(param_1 + 0xbd30),0);
          }
          if (*(int *)(param_1 + 0xbd34) == *param_2) {
            FUN_00427eb0(param_1,uVar2,*(uint *)(param_1 + 0xbd38),0);
          }
          if (*(int *)(param_1 + 0xbd50) == *param_2) {
            piVar1 = param_2 + 3;
            FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd34),piVar1,0);
            FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd38),piVar1,0);
            FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd2c),piVar1,0);
            FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd30),piVar1,0);
            FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd54),piVar1,0);
          }
          FUN_0042b490(param_1,"limb?.wav");
          FUN_00416d40(uVar2);
          if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) == 0) {
            param_2[1] = 0x461c3c00;
          }
          param_2[2] = (int)((float)param_2[2] * (float)_DAT_005920e5);
        }
      }
      iVar3 = *param_2;
      if (iVar3 != *(int *)(param_1 + 0xbd54)) {
        if ((iVar3 != *(int *)(param_1 + 0xbd4c)) && (iVar3 != *(int *)(param_1 + 0xbd50))) {
          param_2[1] = (int)((float)param_2[1] * (float)_DAT_005920ed);
          return;
        }
        param_2[1] = param_2[1];
        return;
      }
      param_2[1] = (int)((float)param_2[1] * (float)_DAT_005920f5);
      return;
    }
  }
  param_2[1] = 0;
  return;
}
