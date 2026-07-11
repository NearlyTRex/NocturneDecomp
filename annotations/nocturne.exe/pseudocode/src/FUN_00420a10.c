// Name: FUN_00420a10
// Address: 00420a10
// Address Range: [[00420a10, 00420c3a]]
// Convention: unknown
// Signature: void FUN_00420a10(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420a10(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  float local_20;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar1 = FUN_0056488c();
    switch(iVar1 % 5) {
    case 0:
      iVar1 = *(int *)(param_1 + 0xbd24);
      break;
    case 1:
      iVar1 = *(int *)(param_1 + 0xbd28);
      break;
    case 2:
      iVar1 = *(int *)(param_1 + 0xbd2c);
      break;
    case 3:
      iVar1 = *(int *)(param_1 + 0xbd30);
      break;
    case 4:
      iVar1 = *(int *)(param_1 + 0xbd44);
      break;
    default:
      goto switchD_00420a49_default;
    }
    *param_2 = iVar1;
  }
switchD_00420a49_default:
  iVar1 = *param_2;
  if ((((iVar1 == *(int *)(param_1 + 0xbd24)) || (iVar1 == *(int *)(param_1 + 0xbd28))) ||
      (iVar1 == *(int *)(param_1 + 0xbd2c))) ||
     ((iVar1 == *(int *)(param_1 + 0xbd30) || (iVar1 == *(int *)(param_1 + 0xbd44))))) {
    local_20 = (float)param_2[0xb];
    if (*(int *)(param_1 + 0xbd44) == *param_2) {
      local_20 = local_20 * (float)_DAT_00579bb5;
    }
    if (*(int *)(0x01C775EC + 0x1e0) != 0) {
      local_20 = 1.0;
    }
    if (*(int *)(0x01C775EC + 0x14) == 0) {
      local_20 = 0.0;
    }
    iVar1 = FUN_0040dea0(local_20);
    if (iVar1 != 0) {
      uVar2 = FUN_00415b30(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      FUN_00427eb0(param_1,uVar2,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xbd24)) {
        FUN_00427eb0(param_1,uVar2,*(uint *)(param_1 + 0xbd28),0);
      }
      if (*(int *)(param_1 + 0xbd2c) == *param_2) {
        FUN_00427eb0(param_1,uVar2,*(uint *)(param_1 + 0xbd30),0);
      }
      FUN_0042b490(param_1,"limb?.wav");
      FUN_00416d40(uVar2);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd44) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_00579bbd);
    }
  }
  iVar1 = *param_2;
  if (iVar1 == *(int *)(param_1 + 0xbd44)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_00579bcd);
    return;
  }
  if ((iVar1 != *(int *)(param_1 + 0xbd40)) && (iVar1 != *(int *)(param_1 + 0xbd3c))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_00579bc5);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
