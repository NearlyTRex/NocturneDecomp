// Name: FUN_00458680
// Address: 00458680
// Address Range: [[00458680, 0045894a]]
// Convention: unknown
// Signature: void FUN_00458680(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458680(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005a35cc();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xd114);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xd118);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xd11c);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xd120);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xd12c);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xd128);
      break;
    default:
      goto switchD_004586b6_default;
    }
    *param_2 = iVar2;
  }
switchD_004586b6_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0xd114)) || (iVar2 == *(int *)(param_1 + 0xd118))) ||
       (iVar2 == *(int *)(param_1 + 0xd11c))) ||
      ((iVar2 == *(int *)(param_1 + 0xd120) || (iVar2 == *(int *)(param_1 + 0xd128))))) ||
     (iVar2 == *(int *)(param_1 + 0xd12c))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xd12c) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xd128) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01D2130C + 0x204) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01D2130C + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = FUN_0040cf40(local_14);
    if (iVar2 != 0) {
      uVar3 = FUN_00414550(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      FUN_00430590(param_1,uVar3,*param_2,1);
      if (*param_2 == *(int *)(param_1 + 0xd114)) {
        FUN_00430590(param_1,uVar3,*(uint *)(param_1 + 0xd118),1);
      }
      if (*(int *)(param_1 + 0xd11c) == *param_2) {
        FUN_00430590(param_1,uVar3,*(uint *)(param_1 + 0xd120),1);
      }
      if (*(int *)(param_1 + 0xd128) == *param_2) {
        piVar1 = param_2 + 3;
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd11c),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd120),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd114),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd118),piVar1,1);
        FUN_00430520(param_1,*(uint *)(param_1 + 0xd12c),piVar1,1);
      }
      FUN_00434810(param_1,"limb?.wav");
      FUN_004157c0(uVar3);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd12c) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005ba8f2);
      if (*(int *)(param_1 + 0xd124) < 0) {
        param_2[1] = 0x4479c000;
      }
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xd12c)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ba902);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xd124)) && (iVar2 != *(int *)(param_1 + 0xd128))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005ba8fa);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
