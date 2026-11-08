// Name: FUN_0058f630
// Address: 0058f630
// Address Range: [[0058f630, 0058f981]]
// Convention: unknown
// Signature: void FUN_0058f630(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f630(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int local_1c;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005a35cc();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xd0e0);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xd0e4);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xd0e8);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xd0ec);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xd108);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xd104);
      break;
    default:
      goto switchD_0058f669_default;
    }
    *param_2 = iVar2;
  }
switchD_0058f669_default:
  iVar2 = *param_2;
  if (((((iVar2 != *(int *)(param_1 + 0xd0e0)) && (iVar2 != *(int *)(param_1 + 0xd0e4))) &&
       (iVar2 != *(int *)(param_1 + 0xd0e8))) &&
      ((iVar2 != *(int *)(param_1 + 0xd0ec) && (iVar2 != *(int *)(param_1 + 0xd104))))) &&
     (iVar2 != *(int *)(param_1 + 0xd108))) {
    return;
  }
  if (*(int *)(param_1 + 0xd104) == *param_2) {
    fVar3 = (float)FUN_0040ce40(0,0x3f800000);
    if ((float)_DAT_005d8cb8 <= fVar3) {
      if (_DAT_005d8cc0 <= (double)fVar3) goto LAB_0058f6c3;
      iVar2 = *(int *)(param_1 + 0xd0e8);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xd0e0);
    }
    *param_2 = iVar2;
  }
LAB_0058f6c3:
  local_1c = param_2[0xb];
  if (*(int *)(param_1 + 0xd108) == *param_2) {
    local_1c = 0x3d4ccccd;
  }
  if (*(int *)(param_1 + 0xd104) == *param_2) {
    local_1c = 0x3d75c28f;
  }
  if (*(int *)(0x01D2130C + 0x204) != 0) {
    local_1c = 0x3f800000;
  }
  if (*(int *)(0x01D2130C + 0x14) == 0) {
    local_1c = 0;
  }
  iVar2 = FUN_0040cf40(local_1c);
  if (iVar2 != 0) {
    uVar4 = FUN_00414550(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
    FUN_00430590(param_1,uVar4,*param_2,1);
    if (*param_2 == *(int *)(param_1 + 0xd0e0)) {
      FUN_00430590(param_1,uVar4,*(uint *)(param_1 + 0xd0e4),1);
    }
    if (*(int *)(param_1 + 0xd0e8) == *param_2) {
      FUN_00430590(param_1,uVar4,*(uint *)(param_1 + 0xd0ec),1);
    }
    if (*(int *)(param_1 + 0xd104) == *param_2) {
      piVar1 = param_2 + 3;
      FUN_00430520(param_1,*(uint *)(param_1 + 0xd0e8),piVar1,1);
      FUN_00430520(param_1,*(uint *)(param_1 + 0xd0ec),piVar1,1);
      FUN_00430520(param_1,*(uint *)(param_1 + 0xd0e0),piVar1,1);
      FUN_00430520(param_1,*(uint *)(param_1 + 0xd0e4),piVar1,1);
      FUN_00430520(param_1,*(uint *)(param_1 + 0xd108),piVar1,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    }
    FUN_00434810(param_1,"limb?.wav");
    FUN_004157c0(uVar4);
    if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd108) * 4) == 0) {
      param_2[1] = 0x461c3c00;
    }
    param_2[2] = (int)((float)param_2[2] * (float)_DAT_005d8cc8);
    if ((*param_2 == *(int *)(param_1 + 0xd0e8)) || (*param_2 == *(int *)(param_1 + 0xd0ec))) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    }
    if ((*param_2 == *(int *)(param_1 + 0xd0e0)) || (*param_2 == *(int *)(param_1 + 0xd0e4))) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
      return;
    }
  }
  return;
}
