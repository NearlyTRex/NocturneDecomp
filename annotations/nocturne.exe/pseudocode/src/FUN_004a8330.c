// Name: FUN_004a8330
// Address: 004a8330
// Address Range: [[004a8330, 004a85c8]]
// Convention: unknown
// Signature: void FUN_004a8330(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8330(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_0056488c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xbd24);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xbd28);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xbd2c);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xbd30);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xbd4c);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xbd48);
      break;
    default:
      goto switchD_004a8366_default;
    }
    *param_2 = iVar2;
  }
switchD_004a8366_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0xbd24)) || (iVar2 == *(int *)(param_1 + 0xbd28))) ||
       (iVar2 == *(int *)(param_1 + 0xbd2c))) ||
      ((iVar2 == *(int *)(param_1 + 0xbd30) || (iVar2 == *(int *)(param_1 + 0xbd48))))) ||
     (iVar2 == *(int *)(param_1 + 0xbd4c))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xbd4c) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xbd48) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01C775EC + 0x1e0) != 0) {
      local_14 = 0x3f800000;
    }
    iVar2 = FUN_0040dea0(local_14);
    if (iVar2 != 0) {
      uVar3 = FUN_00415b30(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,
                           *(uint *)(param_1 + 0x2608));
      FUN_00427eb0(param_1,uVar3,*param_2,1);
      if (*param_2 == *(int *)(param_1 + 0xbd24)) {
        FUN_00427eb0(param_1,uVar3,*(uint *)(param_1 + 0xbd28),1);
      }
      if (*(int *)(param_1 + 0xbd2c) == *param_2) {
        FUN_00427eb0(param_1,uVar3,*(uint *)(param_1 + 0xbd30),1);
      }
      if (*(int *)(param_1 + 0xbd48) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd2c),piVar1,1);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd30),piVar1,1);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd24),piVar1,1);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd28),piVar1,1);
        FUN_00427e40(param_1,*(uint *)(param_1 + 0xbd4c),piVar1,1);
      }
      FUN_00416d40(uVar3);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd4c) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_00584a58);
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xbd4c)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_00584a68);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xbd44)) && (iVar2 != *(int *)(param_1 + 0xbd48))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_00584a60);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
