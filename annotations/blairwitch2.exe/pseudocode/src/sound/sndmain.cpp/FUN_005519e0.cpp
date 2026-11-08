// Name: FUN_005519e0
// Address: 005519e0
// Address Range: [[005519e0, 00551c6d]]
// Convention: unknown
// Signature: undefined4 FUN_005519e0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005519e0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char local_13c;
  byte local_13b [255];
  byte local_3c [40];
  uint local_14;
  
  bVar8 = 0;
  FUN_005532f0();
  iVar5 = 0;
  do {
    if (0 < *(int *)(iVar5 + 0x2641a34)) {
      iVar3 = FUN_005b8130((uint *)(iVar5 + 0x2641924),param_1);
      if (iVar3 == 0) {
        puVar6 = (uint *)(iVar5 + 0x2641924);
        for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_1 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          param_1 = param_1 + (uint)bVar8 * -2 + 1;
        }
        FUN_00551440();
        return 1;
      }
    }
    iVar5 = iVar5 + 0x1ac;
  } while (iVar5 < 0x6b00);
  FUN_00551440();
  iVar5 = FUN_00460aa0("sound",param_1);
  if (iVar5 < 1) {
    return 0;
  }
  FUN_00461070(param_1,0,0,0,&local_13c);
  if (local_13c == '.') {
    uVar4 = 0xffffffff;
    pcVar7 = &local_13c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    FUN_005ba1f0(&local_13c,local_13b,~uVar4 - 1);
  }
  iVar5 = FUN_005b8130(&local_13c,&DAT_005e8f2b);
  if (iVar5 != 0) {
    iVar5 = FUN_005b8130(&local_13c,&DAT_005e8f35);
    if (iVar5 == 0) {
      if ((DAT_0263cee8 & 1) == 0) {
        DAT_0263cee8 = DAT_0263cee8 | 1;
        FUN_00509c70(0x26348b8);
        FUN_005b8d8c(&DAT_0061bc84);
      }
      FUN_00509cd0(0x26348b8,param_1);
      param_1[0x41] = 0x10;
      param_1[0x42] = _DAT_026349bc;
      uVar2 = _DAT_026349b8;
      param_1[0x44] = 0xffffffff;
      param_1[0x43] = uVar2;
      FUN_00509f30(0x26348b8);
    }
    else {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x12c9;
      FUN_004e4500("Unknown sample file format extension: %s",param_1);
    }
LAB_00551b36:
    FUN_0054bac0(param_1);
    if (0 < (int)param_1[0x44]) {
      return 1;
    }
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x12d4;
    FUN_004e4500("getSampleInfo - can't determine length for %s",param_1);
    return 1;
  }
  FUN_0057cd50(local_3c);
  iVar5 = FUN_0057d390(local_3c,"sound",param_1);
  if (iVar5 != 0) {
    local_14 = FUN_0057d110(local_3c);
    iVar5 = FUN_0054b4a0(local_3c,&local_14,param_1);
    if (iVar5 != 0) {
      FUN_0057d180(local_3c);
      FUN_0057cec0(local_3c,0);
      goto LAB_00551b36;
    }
  }
  FUN_0057cec0(local_3c,0);
  return 0;
}
