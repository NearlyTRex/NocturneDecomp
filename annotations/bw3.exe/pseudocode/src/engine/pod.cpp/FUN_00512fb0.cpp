// Name: FUN_00512fb0
// Address: 00512fb0
// Address Range: [[00512fb0, 00513b89]]
// Convention: unknown
// Signature: undefined4 FUN_00512fb0(undefined4 *param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00512fb0(uint *param_1,uint param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  bool bVar13;
  byte local_8cc [256];
  char local_7cc [260];
  int local_6c8;
  uint local_6c0;
  char local_6b8 [512];
  byte local_4b8 [8];
  char local_4b0 [80];
  uint local_460;
  uint local_45c;
  uint local_454;
  char local_450 [80];
  char local_400 [80];
  uint local_3b0;
  int local_3a8;
  uint local_3a4;
  byte local_398 [4];
  char local_394 [256];
  uint local_294;
  byte local_288 [256];
  byte local_188 [8];
  char local_180 [80];
  uint local_130;
  uint local_12c;
  uint local_128;
  char local_124 [80];
  char local_d4 [64];
  uint local_94;
  uint local_90;
  uint local_88;
  byte local_84 [44];
  char local_58 [32];
  int local_38;
  uint local_34;
  char local_30;
  char local_2f;
  char local_2e;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar12 = 0;
  local_1c = 0;
  pcVar8 = "(Unknown error)";
  pcVar9 = local_6b8;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)pcVar9 = *(uint *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  FUN_005738c0(local_84);
  FUN_00513b90(param_1);
  FUN_00465660(local_8cc,0,param_2);
  iVar5 = FUN_00465730(local_8cc);
  if (iVar5 == 0) {
    uVar2 = FUN_00508960("File not found");
    FUN_005a28c0(local_6b8,uVar2);
  }
  else {
    pcVar8 = (char *)(param_1 + 1);
    pcVar9 = local_7cc;
    pcVar11 = pcVar8;
    do {
      cVar1 = *pcVar9;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    param_1[0x41] = local_6c0;
    iVar5 = FUN_00573f50(local_84,pcVar8,1);
    if (iVar5 == 0) {
      uVar2 = FUN_00508960("Unable to open file '%s'",pcVar8);
      FUN_005a28c0(local_6b8,uVar2);
    }
    else {
      FUN_00465e50(param_2,0,0,0,local_288);
      iVar5 = FUN_005a3260(local_288,&DAT_005cc4f2);
      if ((iVar5 == 0) || (iVar5 = FUN_005a3260(local_288,&DAT_005cc4f6), iVar5 == 0)) {
        iVar5 = FUN_00573c00(local_84,local_398,0x110);
        if (iVar5 == 0x110) {
          pcVar9 = local_394;
          pcVar8 = (char *)(param_1 + 0x42);
          param_1[0x104] = local_294;
          do {
            cVar1 = *pcVar9;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
          iVar5 = param_1[0x104];
          if ((iVar5 < 0) || (9999999 < iVar5)) goto LAB_0051345e;
          iVar5 = FUN_005a3650(iVar5 * 0x14);
          param_1[0x105] = iVar5;
          if (iVar5 == 0) goto LAB_00513493;
          iVar5 = 0;
          local_28 = 0;
          local_20 = 0;
          if (0 < (int)param_1[0x104]) {
            local_2c = 0;
            do {
              iVar3 = FUN_00573c00(local_84,local_d4,0x50);
              if (iVar3 != 0x50) goto LAB_0051316b;
              *(int *)(param_1[0x105] + local_2c) = iVar5;
              uVar6 = 0xffffffff;
              pcVar8 = local_d4;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
              } while (cVar1 != '\0');
              iVar5 = iVar5 + ~uVar6;
              if (local_28 < iVar5) {
                local_28 = (param_1[0x104] - local_20) * 0x30 + iVar5;
                iVar3 = FUN_005a3e50(param_1[0x106],local_28);
                if (iVar3 == 0) goto LAB_00513493;
                param_1[0x106] = iVar3;
              }
              pcVar8 = local_d4;
              pcVar9 = (char *)(param_1[0x106] + *(int *)(param_1[0x105] + local_2c));
              do {
                cVar1 = *pcVar8;
                *pcVar9 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar8[1];
                pcVar8 = pcVar8 + 2;
                pcVar9[1] = cVar1;
                pcVar9 = pcVar9 + 2;
              } while (cVar1 != '\0');
              *(uint *)(local_2c + param_1[0x105] + 4) = local_94;
              *(uint *)(local_2c + param_1[0x105] + 8) = local_90;
              *(uint *)(local_2c + param_1[0x105] + 0x10) = local_88;
              iVar3 = local_2c + 0x14;
              local_20 = local_20 + 1;
              *(uint *)(local_2c + param_1[0x105] + 0xc) = param_1[0x41];
              local_2c = iVar3;
            } while (local_20 < (int)param_1[0x104]);
          }
          bVar13 = SBORROW4(iVar5,local_28);
          iVar3 = iVar5 - local_28;
LAB_005133b0:
          if (bVar13 != iVar3 < 0) {
            local_1c = 1;
          }
LAB_005133bd:
          iVar3 = FUN_00573d60(local_84);
          if (iVar3 != 0) {
            FUN_00573db0(local_84);
            if (local_1c != 0) {
              iVar3 = FUN_005a3e50(param_1[0x106],iVar5);
              param_1[0x106] = iVar3;
              if (iVar3 == 0) {
                _DAT_01d71de0 = "..\\engine\\pod.cpp";
                _DAT_01d71de4 = 0x2d5;
                FUN_004e4330("realloc returns NULL shrinking filenameBlockSize to fit.");
              }
            }
            iVar3 = 0;
            if (0 < (int)param_1[0x104]) {
              iVar7 = 0;
              do {
                piVar4 = (int *)(param_1[0x105] + iVar7);
                if ((*piVar4 < 0) || (iVar5 <= *piVar4)) goto LAB_0051345e;
                *piVar4 = param_1[0x106] + *piVar4;
                iVar3 = iVar3 + 1;
                iVar7 = iVar7 + 0x14;
              } while (iVar3 < (int)param_1[0x104]);
            }
            FUN_005a29e8(param_1[0x105],param_1[0x104],0x14,&LAB_00512f90);
            uVar2 = 1;
            goto LAB_00513090;
          }
        }
      }
      else {
        iVar5 = FUN_00573c00(local_84,&local_30,4);
        if (iVar5 == 4) {
          FUN_00573cf0(local_84,0,0);
          if ((((local_30 == 'P') && (local_2f == 'O')) && (local_2e == 'D')) && (local_2d == '3'))
          {
            iVar5 = FUN_00573c00(local_84,local_4b8,0x120);
            if (iVar5 == 0x120) {
              pcVar9 = local_4b0;
              pcVar8 = (char *)(param_1 + 0x42);
              *param_1 = 300;
              do {
                cVar1 = *pcVar9;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar9[1];
                pcVar9 = pcVar9 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              pcVar9 = local_450;
              pcVar8 = (char *)(param_1 + 0x82);
              do {
                cVar1 = *pcVar9;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar9[1];
                pcVar9 = pcVar9 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              pcVar9 = local_400;
              pcVar8 = (char *)(param_1 + 0xc2);
              do {
                cVar1 = *pcVar9;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar9[1];
                pcVar9 = pcVar9 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              param_1[0x104] = local_460;
              param_1[0x107] = local_45c;
              param_1[0x109] = local_3a4;
              iVar5 = param_1[0x104];
              param_1[0x102] = local_454;
              if ((iVar5 < 0) || (9999999 < iVar5)) goto LAB_0051345e;
              iVar5 = FUN_005a3650(iVar5 * 0x14);
              param_1[0x105] = iVar5;
              if (iVar5 == 0) {
LAB_00513493:
                pcVar9 = (char *)FUN_00508960("Out of memory");
                pcVar8 = local_6b8;
                do {
                  cVar1 = *pcVar9;
                  *pcVar8 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar9[1];
                  pcVar9 = pcVar9 + 2;
                  pcVar8[1] = cVar1;
                  pcVar8 = pcVar8 + 2;
                } while (cVar1 != '\0');
                goto LAB_0051303e;
              }
              FUN_00573cf0(local_84,local_3b0,0);
              uVar10 = param_1[0x104] * 0x14;
              uVar6 = FUN_00573c00(local_84,param_1[0x105],uVar10);
              if (uVar6 == uVar10) {
                uVar6 = uVar6 ^ uVar10;
                if (0 < (int)param_1[0x104]) {
                  do {
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 < (int)param_1[0x104]);
                }
                if ((local_3a8 < (int)param_1[0x104]) || (param_1[0x104] * 0x100 < local_3a8))
                goto LAB_0051345e;
                iVar5 = FUN_005a3650(local_3a8);
                param_1[0x106] = iVar5;
                if (iVar5 == 0) goto LAB_00513493;
                iVar5 = FUN_00573c00(local_84,iVar5,local_3a8);
                if (iVar5 == local_3a8) {
                  uVar2 = FUN_00573d40(local_84);
                  param_1[0x10a] = uVar2;
                  param_1[0x108] = param_1[0x10a] + param_1[0x109] * 0x108;
                  iVar5 = local_3a8;
                  goto LAB_005133bd;
                }
              }
            }
          }
          else if ((((local_30 == 'P') && (local_2f == 'O')) && (local_2e == 'D')) &&
                  (local_2d == '2')) {
            iVar5 = FUN_00573c00(local_84,local_188,0x60);
            if (iVar5 == 0x60) {
              pcVar9 = local_180;
              pcVar8 = (char *)(param_1 + 0x42);
              *param_1 = 200;
              do {
                cVar1 = *pcVar9;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar9[1];
                pcVar9 = pcVar9 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              param_1[0x104] = local_130;
              iVar5 = param_1[0x104];
              param_1[0x107] = local_12c;
              if ((iVar5 < 0) || (9999999 < iVar5)) goto LAB_0051345e;
              iVar5 = FUN_005a3650(iVar5 * 0x14);
              param_1[0x105] = iVar5;
              if (iVar5 == 0) goto LAB_00513493;
              uVar10 = param_1[0x104] * 0x14;
              uVar6 = FUN_00573c00(local_84,iVar5,uVar10);
              if (uVar6 == uVar10) {
                uVar6 = uVar6 ^ uVar10;
                if (0 < (int)param_1[0x104]) {
                  do {
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 < (int)param_1[0x104]);
                }
                iVar3 = param_1[0x104];
                iVar5 = *(int *)(param_1[0x105] + 8) + -0x60 + iVar3 * -0x14;
                if ((iVar5 < iVar3) || (iVar3 * 0x100 < iVar5)) goto LAB_0051345e;
                iVar3 = FUN_005a3650(iVar5);
                param_1[0x106] = iVar3;
                if (iVar3 == 0) goto LAB_00513493;
                iVar3 = FUN_00573c00(local_84,iVar3,iVar5);
                if (iVar3 == iVar5) {
                  iVar3 = param_1[0x105] + (param_1[0x104] + -1) * 0x14;
                  param_1[0x108] = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 4);
                  goto LAB_005133bd;
                }
              }
            }
          }
          else {
            *param_1 = 1;
            iVar5 = FUN_00573c00(local_84,&local_128,0x54);
            if (iVar5 == 4) {
              pcVar9 = local_124;
              pcVar8 = (char *)(param_1 + 0x42);
              param_1[0x104] = local_128;
              do {
                cVar1 = *pcVar9;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar9[1];
                pcVar9 = pcVar9 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              iVar5 = param_1[0x104];
              if ((-1 < iVar5) && (iVar5 < 10000000)) {
                iVar5 = FUN_005a3650(iVar5 * 0x14);
                param_1[0x105] = iVar5;
                if (iVar5 != 0) {
                  iVar5 = 0;
                  local_24 = 0;
                  local_18 = 0;
                  if (0 < (int)param_1[0x104]) {
                    local_14 = 0;
                    do {
                      iVar3 = FUN_00573c00(local_84,local_58,0x28);
                      if (iVar3 != 0x28) goto LAB_0051316b;
                      *(int *)(param_1[0x105] + local_14) = iVar5;
                      uVar6 = 0xffffffff;
                      pcVar8 = local_58;
                      do {
                        if (uVar6 == 0) break;
                        uVar6 = uVar6 - 1;
                        cVar1 = *pcVar8;
                        pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
                      } while (cVar1 != '\0');
                      iVar5 = iVar5 + ~uVar6;
                      if (local_24 < iVar5) {
                        local_24 = (param_1[0x104] - local_18) * 0x30 + iVar5;
                        iVar3 = FUN_005a3e50(param_1[0x106],local_24);
                        if (iVar3 == 0) goto LAB_00513493;
                        param_1[0x106] = iVar3;
                      }
                      if (((local_38 < 0) || (999999999 < local_38)) ||
                         ((local_6c8 < local_38 ||
                          ((local_34 < 0x54 || (local_6c8 - local_38 < (int)local_34))))))
                      goto LAB_0051345e;
                      pcVar8 = local_58;
                      pcVar9 = (char *)(param_1[0x106] + *(int *)(param_1[0x105] + local_14));
                      do {
                        cVar1 = *pcVar8;
                        *pcVar9 = cVar1;
                        if (cVar1 == '\0') break;
                        cVar1 = pcVar8[1];
                        pcVar8 = pcVar8 + 2;
                        pcVar9[1] = cVar1;
                        pcVar9 = pcVar9 + 2;
                      } while (cVar1 != '\0');
                      *(int *)(local_14 + param_1[0x105] + 4) = local_38;
                      *(uint *)(param_1[0x105] + local_14 + 8) = local_34;
                      *(uint *)(param_1[0x105] + local_14 + 0x10) = 0;
                      iVar3 = local_14 + param_1[0x105];
                      local_14 = local_14 + 0x14;
                      *(uint *)(iVar3 + 0xc) = param_1[0x41];
                      local_18 = local_18 + 1;
                    } while (local_18 < (int)param_1[0x104]);
                  }
                  bVar13 = SBORROW4(iVar5,local_24);
                  iVar3 = iVar5 - local_24;
                  goto LAB_005133b0;
                }
                goto LAB_00513493;
              }
LAB_0051345e:
              pcVar9 = (char *)FUN_00508960("File is corrupt");
              pcVar8 = local_6b8;
              do {
                cVar1 = *pcVar9;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar9[1];
                pcVar9 = pcVar9 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              goto LAB_0051303e;
            }
          }
        }
      }
LAB_0051316b:
      pcVar9 = (char *)FUN_00508960("I/O Error accessing file, or file is corrupt");
      pcVar8 = local_6b8;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
    }
  }
LAB_0051303e:
  FUN_00573db0(local_84);
  FUN_00513b90(param_1);
  if (param_3 != (char *)0x0) {
    pcVar8 = local_6b8;
    do {
      cVar1 = *pcVar8;
      *param_3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
  }
  uVar2 = 0;
LAB_00513090:
  FUN_00573a40(local_84,0);
  return uVar2;
}
