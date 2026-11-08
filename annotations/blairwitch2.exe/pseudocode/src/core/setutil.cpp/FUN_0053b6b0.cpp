// Name: FUN_0053b6b0
// Address: 0053b6b0
// Address Range: [[0053b6b0, 0053b808]]
// Convention: unknown
// Signature: undefined8 FUN_0053b6b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0053b6b0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  
  iVar2 = FUN_005b8be2(0x2fb0);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_00449c70(iVar2,*(uint *)(param_1 + 0x1808),*(uint *)(param_1 + 0x180c));
  }
  if (iVar4 == 0) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x2f9;
    FUN_004e4500("C3DSLight::create - Out of memory!");
  }
  FUN_00449d90(iVar4);
  if (*(int *)(param_1 + 0x11ec) < 1) {
    *(uint *)(iVar4 + 0x1cb8) = 1;
  }
  else {
    *(uint *)(iVar4 + 0x1cb8) = *(uint *)(param_1 + 0x11f0);
  }
  if ((uint *)(iVar4 + 4) != (uint *)(param_1 + 0x104)) {
    *(uint *)(iVar4 + 4) = *(uint *)(param_1 + 0x104);
    *(uint *)(iVar4 + 8) = *(uint *)(param_1 + 0x108);
    *(uint *)(iVar4 + 0xc) = *(uint *)(param_1 + 0x10c);
  }
  FUN_00449280(iVar4 + 0x10,param_1 + 0x110);
  *(uint *)(iVar4 + 0x38) = *(uint *)(param_1 + 0x11c);
  iVar2 = *(int *)(param_1 + 0x11ec);
  iVar6 = 0;
  if (0 < iVar2) {
    iVar8 = param_1 + 0x11f4;
    iVar5 = param_1;
    do {
      iVar6 = iVar6 + 1;
      uVar3 = FUN_00447660(0x015111A8,iVar8,*(uint *)(param_1 + 0x11f0));
      *(uint *)(iVar5 + 0x1810) = uVar3;
      iVar8 = iVar8 + 0x28;
      iVar2 = *(int *)(param_1 + 0x11ec);
      iVar5 = iVar5 + 4;
    } while (iVar6 < iVar2);
  }
  pcVar7 = (char *)(param_1 + 4);
  pcVar9 = (char *)(iVar4 + 0x40);
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  return CONCAT44(iVar2,iVar4);
}
