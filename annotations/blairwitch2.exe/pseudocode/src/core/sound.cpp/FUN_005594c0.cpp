// Name: FUN_005594c0
// Address: 005594c0
// Address Range: [[005594c0, 00559aa4]]
// Convention: unknown
// Signature: undefined4 FUN_005594c0(undefined4 param_1,char *param_2,float param_3,float param_4,float param_5,float *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005594c0(uint param_1,char *param_2,float param_3,float param_4,float param_5,float *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  char local_170 [100];
  char local_10c [100];
  char local_a8 [100];
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  bVar10 = 0;
  iVar1 = FUN_00550bc0();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    cVar4 = *param_2;
    local_14 = param_2;
    pcVar6 = local_170;
    while ((((cVar4 != '\0' && (((&DAT_0061ed94)[(byte)(*local_14 + 1)] & 2) == 0)) &&
            (cVar4 = *local_14, cVar4 != '@')) && (cVar4 != '*'))) {
      if (cVar4 == '[') {
        local_34 = -1;
        FUN_005ba8cc();
        if ((local_34 < 5) || (local_2c < local_30)) {
          _DAT_01d046a0 = "..\\core\\sound.cpp";
          _DAT_01d046a4 = 0x137;
          FUN_004e4500("Invalid sfx string: %s",param_2);
        }
        iVar1 = FUN_005b7790(pcVar6);
        pcVar5 = pcVar6 + iVar1;
        if (9 < local_2c) {
          iVar1 = FUN_005b7790(pcVar5);
          pcVar5 = pcVar5 + iVar1;
        }
        local_14 = local_14 + local_34;
      }
      else {
        pcVar5 = pcVar6 + 1;
        *pcVar6 = cVar4;
        local_14 = local_14 + 1;
      }
      cVar4 = *local_14;
      pcVar6 = pcVar5;
    }
    *pcVar6 = '\0';
    pcVar6 = local_170;
    do {
      pcVar5 = pcVar6;
      if (*pcVar6 == '.') goto LAB_00559542;
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      if (*pcVar5 == '.') goto LAB_00559542;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_00559542:
    if (pcVar5 == (char *)0x0) {
      pcVar5 = &DAT_005ea77f;
      iVar1 = -1;
      pcVar6 = local_170;
      do {
        pcVar9 = pcVar6;
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        pcVar9 = pcVar6 + (uint)bVar10 * -2 + 1;
        cVar4 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar4 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar4 = *pcVar5;
        *pcVar9 = cVar4;
        if (cVar4 == '\0') break;
        cVar4 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar9[1] = cVar4;
        pcVar9 = pcVar9 + 2;
      } while (cVar4 != '\0');
    }
    puVar7 = &DAT_0061c220;
    pcVar6 = local_a8;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pcVar6 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
    }
    pcVar6 = local_170;
    do {
      pcVar5 = pcVar6;
      if (*pcVar6 == '!') goto LAB_005595a2;
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      if (*pcVar5 == '!') goto LAB_005595a2;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_005595a2:
    if (pcVar5 == (char *)0x0) {
      FUN_005593d0();
    }
    else {
      local_44 = param_3;
      local_40 = param_4;
      local_3c = param_5;
      if (param_6 != (float *)0x0) {
        local_44 = param_3 + *param_6;
        local_40 = param_4 + param_6[1];
        local_3c = param_5 + param_6[2];
      }
      local_28 = FUN_00533190(0x01E661B8,&local_44);
      local_1c = local_28;
      local_18 = local_28 + 5;
      do {
        iVar1 = local_1c;
        iVar8 = 0;
        local_38 = local_28;
        do {
          iVar3 = local_38;
          if (iVar8 == 0) {
            iVar3 = iVar1;
          }
          if ((-1 < iVar3) && (iVar3 < 6)) {
            pcVar6 = local_170;
            pcVar5 = local_10c;
            cVar4 = local_170[0];
            while (cVar4 != '\0') {
              cVar4 = *pcVar6;
              if (cVar4 == '!') {
                cVar4 = (char)iVar3 + '0';
              }
              *pcVar5 = cVar4;
              pcVar5 = pcVar5 + 1;
              pcVar9 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
              cVar4 = *pcVar9;
            }
            *pcVar5 = '\0';
            FUN_005593d0();
            if (local_a8[0] != '\0') break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 2);
        if (local_a8[0] != '\0') break;
        local_1c = local_1c + 1;
        local_28 = local_28 + -1;
      } while (local_1c < local_18);
    }
    if (local_a8[0] == '\0') {
      FUN_00436710();
      return 0;
    }
    cVar4 = *local_14;
    while (cVar4 != '\0') {
      if (((&DAT_0061ed94)[(byte)(*local_14 + 1)] & 2) == 0) {
        if (*local_14 == '@') {
          local_24 = -1;
          FUN_005ba8cc(local_14,"@%f%n");
          if (local_24 < 2) {
            _DAT_01d046a0 = "..\\core\\sound.cpp";
            _DAT_01d046a4 = 0x1a4;
            FUN_004e4500("Invalid sfx string: %s",param_2);
            local_14 = local_14 + local_24;
          }
          else {
            local_14 = local_14 + local_24;
          }
        }
        else if (*local_14 == '*') {
          local_20 = -1;
          FUN_005ba8cc(local_14,"*%f%n");
          if (local_20 < 2) {
            _DAT_01d046a0 = "..\\core\\sound.cpp";
            _DAT_01d046a4 = 0x1aa;
            FUN_004e4500("Invalid sfx string: %s",param_2);
            local_14 = local_14 + local_20;
          }
          else {
            local_14 = local_14 + local_20;
          }
        }
        else {
          _DAT_01d046a0 = "..\\core\\sound.cpp";
          _DAT_01d046a4 = 0x1ad;
          FUN_004e4500("Invalid sfx string: %s",param_2);
        }
      }
      else {
        local_14 = local_14 + 1;
      }
      cVar4 = *local_14;
    }
    FUN_00550450();
    if (param_6 == (float *)0x0) {
      FUN_00550110((double)param_3,(double)param_4,(double)param_5);
    }
    else {
      FUN_00550170();
    }
    FUN_00550380();
    FUN_005502b0(0,param_1);
    FUN_00550270();
    FUN_00550290();
    uVar2 = FUN_005506b0();
    FUN_005504d0();
  }
  return uVar2;
}
