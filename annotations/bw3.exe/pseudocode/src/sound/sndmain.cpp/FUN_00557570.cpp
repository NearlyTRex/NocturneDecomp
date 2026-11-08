// Name: FUN_00557570
// Address: 00557570
// Address Range: [[00557570, 005577ff]]
// Convention: unknown
// Signature: undefined4 FUN_00557570(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00557570(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char local_140;
  byte local_13f [255];
  byte local_40 [44];
  uint local_14;
  
  bVar8 = 0;
  FUN_00558e90();
  iVar5 = 0;
  do {
    if (0 < *(int *)(iVar5 + 0x2cebd34)) {
      iVar3 = FUN_005a3260((uint *)(iVar5 + 0x2cebc24),param_1);
      if (iVar3 == 0) {
        puVar6 = (uint *)(iVar5 + 0x2cebc24);
        for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_1 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          param_1 = param_1 + (uint)bVar8 * -2 + 1;
        }
        FUN_00556fd0();
        return 1;
      }
    }
    iVar5 = iVar5 + 0x1b0;
  } while (iVar5 < 0x6c00);
  FUN_00556fd0();
  iVar5 = FUN_004657f0("sound",param_1);
  if (iVar5 < 1) {
    return 0;
  }
  FUN_00465e50(param_1,0,0,0,&local_140);
  if (local_140 == '.') {
    uVar4 = 0xffffffff;
    pcVar7 = &local_140;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    FUN_005a54c0(&local_140,local_13f,~uVar4 - 1);
  }
  iVar5 = FUN_005a3260(&local_140,&DAT_005d3a0f);
  if (iVar5 != 0) {
    iVar5 = FUN_005a3260(&local_140,&DAT_005d3a19);
    if (iVar5 == 0) {
      if ((DAT_02ce71e8 & 1) == 0) {
        DAT_02ce71e8 = DAT_02ce71e8 | 1;
        FUN_00502750(0x2cdebb8);
        FUN_005a3e13(&DAT_00604214);
      }
      FUN_005027b0(0x2cdebb8,param_1);
      param_1[0x41] = 0x10;
      param_1[0x42] = _DAT_02cdecbc;
      uVar2 = _DAT_02cdecb8;
      param_1[0x44] = 0xffffffff;
      param_1[0x43] = uVar2;
      FUN_00502a10(0x2cdebb8);
    }
    else {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x12d1;
      FUN_004e4330("Unknown sample file format extension: %s",param_1);
    }
LAB_005576c8:
    FUN_00551620(param_1);
    if (0 < (int)param_1[0x44]) {
      return 1;
    }
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x12dc;
    FUN_004e4330("getSampleInfo - can't determine length for %s",param_1);
    return 1;
  }
  FUN_005738c0(local_40);
  iVar5 = FUN_00573fc0(local_40,"sound",param_1,1);
  if (iVar5 != 0) {
    local_14 = FUN_00573d40(local_40);
    iVar5 = FUN_00551000(local_40,&local_14,param_1);
    if (iVar5 != 0) {
      FUN_00573db0(local_40);
      FUN_00573a40(local_40,0);
      goto LAB_005576c8;
    }
  }
  FUN_00573a40(local_40,0);
  return 0;
}
