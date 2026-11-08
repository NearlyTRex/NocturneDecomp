// Name: FUN_0051ec80
// Address: 0051ec80
// Address Range: [[0051ec80, 0051f03b]]
// Convention: unknown
// Signature: void FUN_0051ec80(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ec80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int local_1c;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = FUN_005c084c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xc30c);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xc310);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xc314);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xc318);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xc334);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xc330);
      break;
    default:
      goto switchD_0051ecb9_default;
    }
    *param_2 = iVar2;
  }
switchD_0051ecb9_default:
  iVar2 = *param_2;
  if (((((iVar2 != *(int *)(param_1 + 0xc30c)) && (iVar2 != *(int *)(param_1 + 0xc310))) &&
       (iVar2 != *(int *)(param_1 + 0xc314))) &&
      ((iVar2 != *(int *)(param_1 + 0xc318) && (iVar2 != *(int *)(param_1 + 0xc330))))) &&
     (iVar2 != *(int *)(param_1 + 0xc334))) goto LAB_0051ef1a;
  if (*(int *)(param_1 + 0xc330) == *param_2) {
    fVar3 = (float)FUN_0040cc00(0,0x3f800000);
    if ((float)_DAT_005e9f1a <= fVar3) {
      if (_DAT_005e9f22 <= (double)fVar3) goto LAB_0051ed13;
      iVar2 = *(int *)(param_1 + 0xc314);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc30c);
    }
    *param_2 = iVar2;
  }
LAB_0051ed13:
  local_1c = param_2[0xb];
  if (*(int *)(param_1 + 0xc334) == *param_2) {
    local_1c = 0x3d4ccccd;
  }
  if (*(int *)(param_1 + 0xc330) == *param_2) {
    local_1c = 0x3d75c28f;
  }
  if (*(int *)(0x01CCF390 + 0x1fc) != 0) {
    local_1c = 0x3f800000;
  }
  if (*(int *)(0x01CCF390 + 0x14) == 0) {
    local_1c = 0;
  }
  iVar2 = FUN_0040cd00(local_1c);
  if (iVar2 != 0) {
    uVar4 = FUN_00418940(param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
    FUN_00431210(param_1,uVar4,*param_2,0);
    if (*param_2 == *(int *)(param_1 + 0xc30c)) {
      FUN_00431210(param_1,uVar4,*(uint *)(param_1 + 0xc310),0);
    }
    if (*(int *)(param_1 + 0xc314) == *param_2) {
      FUN_00431210(param_1,uVar4,*(uint *)(param_1 + 0xc318),0);
    }
    if (*(int *)(param_1 + 0xc330) == *param_2) {
      piVar1 = param_2 + 3;
      FUN_004311a0(param_1,*(uint *)(param_1 + 0xc314),piVar1,0);
      FUN_004311a0(param_1,*(uint *)(param_1 + 0xc318),piVar1,0);
      FUN_004311a0(param_1,*(uint *)(param_1 + 0xc30c),piVar1,0);
      FUN_004311a0(param_1,*(uint *)(param_1 + 0xc310),piVar1,0);
      FUN_004311a0(param_1,*(uint *)(param_1 + 0xc334),piVar1,0);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    }
    FUN_004352e0(param_1,"limb?.wav");
    FUN_00419b90(uVar4);
    if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc334) * 4) == 0) {
      param_2[1] = 0x461c3c00;
    }
    param_2[2] = (int)((float)param_2[2] * (float)_DAT_005e9f2a);
    if ((*param_2 == *(int *)(param_1 + 0xc314)) || (*param_2 == *(int *)(param_1 + 0xc318))) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    }
    if ((*param_2 == *(int *)(param_1 + 0xc30c)) || (*param_2 == *(int *)(param_1 + 0xc310))) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    }
  }
LAB_0051ef1a:
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xc334)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005e9f3a);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xc32c)) && (iVar2 != *(int *)(param_1 + 0xc330))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005e9f32);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
