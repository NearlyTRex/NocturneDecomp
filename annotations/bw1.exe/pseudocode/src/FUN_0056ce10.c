// Name: FUN_0056ce10
// Address: 0056ce10
// Address Range: [[0056ce10, 0056d0ef]]
// Convention: unknown
// Signature: void FUN_0056ce10(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056ce10(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  
  if (param_2[0xc] < 0xc) {
    return;
  }
  if ((param_2[0xc] == 0x6b) && (*(float *)(param_1 + 0xc2a4) <= 0.0)) {
    iVar3 = *(int *)(param_1 + 0xc2a0) + 1;
    *(float *)(param_1 + 0xc2a4) = *(float *)(param_1 + 0xc2a4) + 1.0;
    *(int *)(param_1 + 0xc2a0) = iVar3;
    if (2 < iVar3) {
      param_2[0xb] = 0x3f800000;
      if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
        iVar3 = FUN_005c084c();
        switch(iVar3 % 6) {
        case 0:
          iVar3 = *(int *)(param_1 + 0xc270);
          break;
        case 1:
          iVar3 = *(int *)(param_1 + 0xc274);
          break;
        case 2:
          iVar3 = *(int *)(param_1 + 0xc278);
          break;
        case 3:
          iVar3 = *(int *)(param_1 + 0xc27c);
          break;
        case 4:
          iVar3 = *(int *)(param_1 + 0xc298);
          break;
        case 5:
          iVar3 = *(int *)(param_1 + 0xc294);
          break;
        default:
          goto switchD_0056ce99_default;
        }
        *param_2 = iVar3;
      }
switchD_0056ce99_default:
      iVar3 = *param_2;
      if (((((iVar3 == *(int *)(param_1 + 0xc270)) || (iVar3 == *(int *)(param_1 + 0xc274))) ||
           (iVar3 == *(int *)(param_1 + 0xc278))) ||
          ((iVar3 == *(int *)(param_1 + 0xc27c) || (iVar3 == *(int *)(param_1 + 0xc294))))) ||
         (iVar3 == *(int *)(param_1 + 0xc298))) {
        local_14 = param_2[0xb];
        if (*(int *)(0x01CCF390 + 0x1fc) != 0) {
          local_14 = 0x3f800000;
        }
        iVar3 = FUN_0040cd00(local_14);
        if (iVar3 != 0) {
          uVar2 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
          FUN_00431210(param_1,uVar2,*param_2,0);
          if (*param_2 == *(int *)(param_1 + 0xc270)) {
            FUN_00431210(param_1,uVar2,*(uint *)(param_1 + 0xc274),0);
          }
          if (*(int *)(param_1 + 0xc278) == *param_2) {
            FUN_00431210(param_1,uVar2,*(uint *)(param_1 + 0xc27c),0);
          }
          if (*(int *)(param_1 + 0xc294) == *param_2) {
            piVar1 = param_2 + 3;
            FUN_004311a0(param_1,*(uint *)(param_1 + 0xc278),piVar1,0);
            FUN_004311a0(param_1,*(uint *)(param_1 + 0xc27c),piVar1,0);
            FUN_004311a0(param_1,*(uint *)(param_1 + 0xc270),piVar1,0);
            FUN_004311a0(param_1,*(uint *)(param_1 + 0xc274),piVar1,0);
            FUN_004311a0(param_1,*(uint *)(param_1 + 0xc298),piVar1,0);
          }
          FUN_004352e0(param_1,"limb?.wav");
          FUN_00419b90(uVar2);
          if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc298) * 4) == 0) {
            param_2[1] = 0x461c3c00;
          }
          param_2[2] = (int)((float)param_2[2] * (float)_DAT_005f2a3f);
        }
      }
      iVar3 = *param_2;
      if (iVar3 != *(int *)(param_1 + 0xc298)) {
        if ((iVar3 != *(int *)(param_1 + 0xc290)) && (iVar3 != *(int *)(param_1 + 0xc294))) {
          param_2[1] = (int)((float)param_2[1] * (float)_DAT_005f2a47);
          return;
        }
        param_2[1] = param_2[1];
        return;
      }
      param_2[1] = (int)((float)param_2[1] * (float)_DAT_005f2a4f);
      return;
    }
  }
  param_2[1] = 0;
  return;
}
