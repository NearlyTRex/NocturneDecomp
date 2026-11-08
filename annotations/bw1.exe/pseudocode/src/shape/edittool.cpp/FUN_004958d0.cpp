// Name: FUN_004958d0
// Address: 004958d0
// Address Range: [[004958d0, 00495d99]]
// Convention: unknown
// Signature: undefined4 FUN_004958d0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5,byte param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004958d0(uint param_1,uint param_2,char *param_3,char *param_4,char *param_5,byte param_6)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char local_360 [520];
  char local_158 [304];
  int local_28;
  int local_24;
  uint local_18;
  int local_14;
  
  bVar9 = 0;
  if (param_3 == (char *)0x0) {
    param_3 = &DAT_005dbeaf;
  }
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(int *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  FUN_00496840(param_1,_DAT_01c3f538 * 0x1e,_DAT_01c3f53c * 2,param_2,0);
  pcVar7 = param_5;
  if ((param_6 & 1) == 0) {
    pcVar7 = (char *)0x0;
  }
  FUN_00492ec0(local_158,pcVar7,0x14,0);
  local_14 = 0;
  local_18 = DAT_0061b4ac;
  DAT_0061b4ac = 0x7f;
  do {
    FUN_00496ee0(param_1);
    FUN_005c2c20(local_158);
    if (*param_3 != '\0') {
      pcVar2 = (char *)FUN_00531090("Directory: ");
      pcVar7 = local_360;
      do {
        cVar1 = *pcVar2;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar4 = -1;
      pcVar7 = local_360;
      do {
        pcVar2 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar2 = pcVar7 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar2;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 + -1;
      pcVar7 = param_3;
      do {
        cVar1 = *pcVar7;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
      FUN_00406bd0(0xffff);
      FUN_00512320(0x3f800000);
      FUN_004c1dd0(_DAT_01c3eb50,local_360,_DAT_01c4f008,_DAT_01c4f00c,_DAT_01c3f57c,0xffffffff);
    }
    uVar3 = _DAT_01c3f57c;
    if (local_14 != 0) {
      uVar3 = _DAT_01c3f580;
    }
    FUN_00406bd0(0xffff);
    FUN_00512320(0x3f800000);
    uVar3 = FUN_00531090("Filename: ",_DAT_01c4f008,_DAT_01c4f00c + _DAT_01c3f53c,uVar3,
                         0xffffffff);
    FUN_004c1dd0(_DAT_01c3eb50,uVar3);
    uVar3 = FUN_00531090("Filename: ");
    iVar4 = FUN_004c3ea0(_DAT_01c3eb50,uVar3);
    FUN_004934b0(local_158,iVar4 + _DAT_01c4f008,_DAT_01c4f00c + _DAT_01c3f53c);
    FUN_005acff0();
    if (local_14 != 0) break;
    while (iVar4 = FUN_005b2580(), iVar4 != 0) {
      iVar4 = FUN_004fd260(0x01D1BCA0);
      if ((iVar4 == 0x1b) || (_DAT_02c9be70 != 0)) {
        *param_5 = '\0';
        FUN_00496dd0(param_1);
        FUN_004032b0();
        FUN_005acff0();
        DAT_0061b4ac = local_18;
        return 0;
      }
      if ((iVar4 == 0xd) && (local_158[0] != '\0')) {
        pcVar7 = local_158;
        do {
          pcVar2 = pcVar7;
          if (*pcVar7 == '.') goto LAB_00495c2e;
          if (*pcVar7 == '\0') break;
          pcVar2 = pcVar7 + 1;
          if (*pcVar2 == '.') goto LAB_00495c2e;
          pcVar7 = pcVar7 + 2;
        } while (*pcVar2 != '\0');
        pcVar2 = (char *)0x0;
LAB_00495c2e:
        if (pcVar2 == (char *)0x0) {
          if (*param_4 != '.') {
            pcVar2 = &DAT_005dbed2;
            iVar5 = -1;
            pcVar7 = local_158;
            do {
              pcVar8 = pcVar7;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar8;
            } while (cVar1 != '\0');
            pcVar8 = pcVar8 + -1;
            do {
              cVar1 = *pcVar2;
              *pcVar8 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
          }
          iVar5 = -1;
          pcVar7 = local_158;
          do {
            pcVar2 = pcVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar2 = pcVar7 + (uint)bVar9 * -2 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar2;
          } while (cVar1 != '\0');
          pcVar2 = pcVar2 + -1;
          pcVar7 = param_4;
          do {
            cVar1 = *pcVar7;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          uVar6 = 0xffffffff;
          pcVar7 = local_158;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          local_28 = ~uVar6 - 1;
          local_24 = local_28;
          FUN_00492f50(local_158);
        }
        FUN_004032b0();
        local_14 = 1;
      }
      if (iVar4 == 8) {
        FUN_004930c0(local_158);
      }
      else if ((((((&DAT_00626114)[(byte)((char)iVar4 + 1)] & 8) != 0) && (iVar4 != 0x5c)) &&
               (iVar4 != 0x3a)) && (((&DAT_00626114)[(byte)((char)iVar4 + 1)] & 2) == 0)) {
        FUN_00493070(local_158);
        FUN_00492f70(local_158,iVar4,1);
        FUN_00492f50(local_158);
      }
    }
    FUN_004931b0(local_158);
  } while( true );
  pcVar7 = local_158;
  do {
    cVar1 = *pcVar7;
    *param_5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    param_5[1] = cVar1;
    param_5 = param_5 + 2;
  } while (cVar1 != '\0');
  FUN_00496dd0(param_1);
  DAT_0061b4ac = local_18;
  return 1;
}
