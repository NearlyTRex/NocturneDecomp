// Name: FUN_004dc2d0
// Address: 004dc2d0
// Address Range: [[004dc2d0, 004dc68b]]
// Convention: unknown
// Signature: void FUN_004dc2d0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc2d0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int local_1c;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_0056488c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xbdc8);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xbdcc);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xbdd0);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xbdd4);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xbdf0);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xbdec);
      break;
    default:
      goto switchD_004dc309_default;
    }
    *param_2 = iVar2;
  }
switchD_004dc309_default:
  iVar2 = *param_2;
  if (((((iVar2 != *(int *)(param_1 + 0xbdc8)) && (iVar2 != *(int *)(param_1 + 0xbdcc))) &&
       (iVar2 != *(int *)(param_1 + 0xbdd0))) &&
      ((iVar2 != *(int *)(param_1 + 0xbdd4) && (iVar2 != *(int *)(param_1 + 0xbdec))))) &&
     (iVar2 != *(int *)(param_1 + 0xbdf0))) goto LAB_004dc56a;
  if (*(int *)(param_1 + 0xbdec) == *param_2) {
    fVar3 = (float)FUN_0040dda0(0,0x3f800000);
    if ((float)_DAT_0058a461 <= fVar3) {
      if (_DAT_0058a469 <= (double)fVar3) goto LAB_004dc363;
      iVar2 = *(int *)(param_1 + 0xbdd0);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xbdc8);
    }
    *param_2 = iVar2;
  }
LAB_004dc363:
  local_1c = param_2[0xb];
  if (*(int *)(param_1 + 0xbdf0) == *param_2) {
    local_1c = 0x3d4ccccd;
  }
  if (*(int *)(param_1 + 0xbdec) == *param_2) {
    local_1c = 0x3d75c28f;
  }
  if (*(int *)(0x01C775EC + 0x1e0) != 0) {
    local_1c = 0x3f800000;
  }
  if (*(int *)(0x01C775EC + 0x14) == 0) {
    local_1c = 0;
  }
  iVar2 = FUN_0040dea0(local_1c);
  if (iVar2 != 0) {
    uVar4 = FUN_00415b30(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
    FUN_00427eb0(param_1,uVar4,*param_2,0);
    if (*param_2 == *(int *)(param_1 + 0xbdc8)) {
      FUN_00427eb0(param_1,uVar4,*(uint *)(param_1 + 0xbdcc),0);
    }
    if (*(int *)(param_1 + 0xbdd0) == *param_2) {
      FUN_00427eb0(param_1,uVar4,*(uint *)(param_1 + 0xbdd4),0);
    }
    if (*(int *)(param_1 + 0xbdec) == *param_2) {
      piVar1 = param_2 + 3;
      FUN_00427e40(param_1,*(uint *)(param_1 + 0xbdd0),piVar1,0);
      FUN_00427e40(param_1,*(uint *)(param_1 + 0xbdd4),piVar1,0);
      FUN_00427e40(param_1,*(uint *)(param_1 + 0xbdc8),piVar1,0);
      FUN_00427e40(param_1,*(uint *)(param_1 + 0xbdcc),piVar1,0);
      FUN_00427e40(param_1,*(uint *)(param_1 + 0xbdf0),piVar1,0);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
    }
    FUN_0042b490(param_1,"limb?.wav");
    FUN_00416d40(uVar4);
    if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf0) * 4) == 0) {
      param_2[1] = 0x461c3c00;
    }
    param_2[2] = (int)((float)param_2[2] * (float)_DAT_0058a471);
    if ((*param_2 == *(int *)(param_1 + 0xbdd0)) || (*param_2 == *(int *)(param_1 + 0xbdd4))) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
    }
    if ((*param_2 == *(int *)(param_1 + 0xbdc8)) || (*param_2 == *(int *)(param_1 + 0xbdcc))) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
    }
  }
LAB_004dc56a:
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xbdf0)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_0058a481);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xbde8)) && (iVar2 != *(int *)(param_1 + 0xbdec))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_0058a479);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
