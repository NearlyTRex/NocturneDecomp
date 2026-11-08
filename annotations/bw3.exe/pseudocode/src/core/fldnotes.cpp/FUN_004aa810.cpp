// Name: FUN_004aa810
// Address: 004aa810
// Address Range: [[004aa810, 004ab795]]
// Convention: unknown
// Signature: undefined4 FUN_004aa810(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004aa810(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  char local_5f4 [1024];
  char local_1f4 [256];
  byte local_f4 [100];
  char local_90 [64];
  int local_50;
  int local_4c;
  int local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  int *local_30;
  char *local_2c;
  int *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  bVar13 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_004ab7a0(param_1);
  pcVar9 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  _DAT_01d0d008 = (uint)(param_3 != (char *)0x0);
  local_48 = FUN_004657f0("world",param_1);
  if (-1 < local_48) {
    local_4c = FUN_004659c0("world",param_1,&DAT_005c11fa);
    if (local_4c == 0) {
      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
      _DAT_01d71de4 = 0x8ed;
      FUN_004e4330("Can't open field notes file %s",param_1);
    }
    iVar3 = FUN_005a5d00(local_4c);
    local_44 = (char *)0x0;
    local_40 = (char *)0x0;
    pcVar9 = (char *)0x0;
    local_48 = local_48 + iVar3;
    do {
      iVar3 = local_4c;
      iVar4 = FUN_005a5d00(local_4c);
      if ((local_48 <= iVar4) ||
         (puVar5 = (byte *)FUN_005a3f00(local_5f4,0x400,iVar3), puVar5 != local_5f4))
      goto LAB_004aa931;
      puVar5 = (byte *)FUN_005a4010(local_5f4,&DAT_005c0d0f);
      if (puVar5 != (byte *)0x0) {
        *puVar5 = 0;
      }
      FUN_004a7890(local_5f4);
      pcVar9 = pcVar9 + 1;
      if (local_5f4[0] != '\0') {
        pcVar7 = "section";
        local_3c = local_1f4;
        pcVar8 = local_5f4;
        do {
          pcVar12 = pcVar8;
          pcVar8 = pcVar12 + 1;
        } while (((&DAT_006074b8)[(byte)(*pcVar12 + 1)] & 2) != 0);
        pcVar11 = local_3c;
        cVar1 = "section"[0];
        if (*pcVar12 == '\\') {
          while (local_3c = pcVar11, cVar1 != '\0') {
            iVar3 = FUN_005a4120(*pcVar8);
            iVar4 = FUN_005a4120(*pcVar7);
            if (iVar3 != iVar4) goto LAB_004aab32;
            pcVar12 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
            pcVar11 = local_3c;
            cVar1 = *pcVar12;
          }
          while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
            pcVar8 = pcVar8 + 1;
          }
          do {
            cVar1 = *pcVar8;
            *pcVar11 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar11[1] = cVar1;
            pcVar11 = pcVar11 + 2;
          } while (cVar1 != '\0');
          if (5 < _DAT_01d0d210) {
            FUN_005a28c0(&DAT_01d0d010,"Too many field notes sections in %s, line %d",param_1,pcVar9);
            goto LAB_004aaa32;
          }
          local_44 = (char *)(_DAT_01d0d210 * 0x2e4 + 0x1d0d214);
          pcVar8 = local_1f4;
          pcVar7 = local_44;
          do {
            cVar1 = *pcVar8;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          local_40 = (char *)0x0;
          _DAT_01d0d210 = _DAT_01d0d210 + 1;
        }
        else {
LAB_004aab32:
          pcVar7 = "title";
          local_38 = local_1f4;
          pcVar8 = local_5f4;
          do {
            pcVar12 = pcVar8;
            pcVar8 = pcVar12 + 1;
          } while (((&DAT_006074b8)[(byte)(*pcVar12 + 1)] & 2) != 0);
          pcVar10 = local_38;
          iVar3 = local_50;
          pcVar2 = local_44;
          pcVar11 = local_40;
          cVar1 = "title"[0];
          if (*pcVar12 == '\\') {
            while (local_50 = iVar3, local_44 = pcVar2, local_40 = pcVar11, local_38 = pcVar10,
                  cVar1 != '\0') {
              iVar3 = FUN_005a4120(*pcVar8);
              iVar4 = FUN_005a4120(*pcVar7);
              if (iVar3 != iVar4) goto LAB_004aac4c;
              pcVar12 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
              pcVar10 = local_38;
              iVar3 = local_50;
              pcVar2 = local_44;
              pcVar11 = local_40;
              cVar1 = *pcVar12;
            }
            while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
              pcVar8 = pcVar8 + 1;
            }
            do {
              cVar1 = *pcVar8;
              *pcVar10 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
            pcVar8 = pcVar11;
            if ((pcVar11 == (char *)0x0) && (pcVar8 = pcVar2, pcVar2 == (char *)0x0)) {
              FUN_005a28c0(&DAT_01d0d010,"Didn't expect '\\title' in %s, line %d",param_1,pcVar9);
              goto LAB_004aaa32;
            }
            pcVar7 = local_1f4;
            pcVar8 = pcVar8 + 0x40;
            do {
              cVar1 = *pcVar7;
              *pcVar8 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar7[1];
              pcVar7 = pcVar7 + 2;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
            if ((pcVar11 != (char *)0x0) && (iVar3 != 0)) {
              pcVar11 = pcVar11 + 0x40;
              FUN_005a4ee0(local_90,pcVar11,0x3f);
              pcVar7 = &DAT_005c1298;
              pcVar8 = pcVar11;
              do {
                cVar1 = *pcVar7;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar7[1];
                pcVar7 = pcVar7 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              pcVar8 = local_90;
              iVar3 = -1;
              do {
                pcVar7 = pcVar11;
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                pcVar7 = pcVar11 + (uint)bVar13 * -2 + 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar7;
              } while (cVar1 != '\0');
              pcVar7 = pcVar7 + -1;
              do {
                cVar1 = *pcVar8;
                *pcVar7 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar8[1];
                pcVar8 = pcVar8 + 2;
                pcVar7[1] = cVar1;
                pcVar7 = pcVar7 + 2;
              } while (cVar1 != '\0');
            }
          }
          else {
LAB_004aac4c:
            pcVar7 = "entry";
            local_34 = local_1f4;
            pcVar8 = local_5f4;
            do {
              pcVar12 = pcVar8;
              pcVar8 = pcVar12 + 1;
            } while (((&DAT_006074b8)[(byte)(*pcVar12 + 1)] & 2) != 0);
            pcVar11 = local_34;
            pcVar10 = local_44;
            cVar1 = "entry"[0];
            if (*pcVar12 == '\\') {
              while (local_44 = pcVar10, local_34 = pcVar11, cVar1 != '\0') {
                iVar3 = FUN_005a4120(*pcVar8);
                iVar4 = FUN_005a4120(*pcVar7);
                if (iVar3 != iVar4) goto LAB_004aadd9;
                pcVar12 = pcVar7 + 1;
                pcVar7 = pcVar7 + 1;
                pcVar8 = pcVar8 + 1;
                pcVar11 = local_34;
                pcVar10 = local_44;
                cVar1 = *pcVar12;
              }
              while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
                pcVar8 = pcVar8 + 1;
              }
              do {
                cVar1 = *pcVar8;
                *pcVar11 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar8[1];
                pcVar8 = pcVar8 + 2;
                pcVar11[1] = cVar1;
                pcVar11 = pcVar11 + 2;
              } while (cVar1 != '\0');
              local_50 = 0;
              if (pcVar10 == (char *)0x0) {
                FUN_005a28c0(&DAT_01d0d010,"Didn't expect '\\entry' in %s, line %d",param_1,pcVar9);
                goto LAB_004aaa32;
              }
              local_30 = (int *)0x0;
              iVar3 = 0;
              if (0 < _DAT_01d0d210) {
                iVar4 = 0x1d0d214;
                do {
                  iVar6 = FUN_004a9c30(iVar4,local_1f4);
                  if (iVar6 != 0) {
                    if (local_30 != (int *)0x0) {
                      *local_30 = iVar3;
                    }
                    if (iVar6 != 0) {
                      FUN_005a28c0(&DAT_01d0d010,"Duplicate entry '%s' in %s",local_1f4,param_1
                                  );
                      goto LAB_004aaa32;
                    }
                    break;
                  }
                  iVar3 = iVar3 + 1;
                  iVar4 = iVar4 + 0x2e4;
                } while (iVar3 < _DAT_01d0d210);
              }
              local_40 = (char *)FUN_004a9c80(local_44,local_1f4,0);
            }
            else {
LAB_004aadd9:
              puVar5 = &DAT_005c12e1;
              local_2c = local_1f4;
              pcVar8 = local_5f4;
              do {
                pcVar7 = pcVar8;
                pcVar8 = pcVar7 + 1;
              } while (((&DAT_006074b8)[(byte)(*pcVar7 + 1)] & 2) != 0);
              pcVar12 = local_2c;
              pcVar11 = local_44;
              cVar1 = 0x74;
              if (*pcVar7 == '\\') {
                while (local_44 = pcVar11, local_2c = pcVar12, cVar1 != '\0') {
                  iVar3 = FUN_005a4120(*pcVar8);
                  iVar4 = FUN_005a4120(*puVar5);
                  if (iVar3 != iVar4) goto LAB_004aaf4a;
                  pcVar7 = puVar5 + 1;
                  puVar5 = puVar5 + 1;
                  pcVar8 = pcVar8 + 1;
                  pcVar12 = local_2c;
                  pcVar11 = local_44;
                  cVar1 = *pcVar7;
                }
                while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
                  pcVar8 = pcVar8 + 1;
                }
                do {
                  cVar1 = *pcVar8;
                  *pcVar12 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar8[1];
                  pcVar8 = pcVar8 + 2;
                  pcVar12[1] = cVar1;
                  pcVar12 = pcVar12 + 2;
                } while (cVar1 != '\0');
                local_50 = 0;
                if (pcVar11 == (char *)0x0) {
                  FUN_005a28c0(&DAT_01d0d010,"Didn't expect '\\task' in %s, line %d",param_1,pcVar9);
                  goto LAB_004aaa32;
                }
                iVar3 = 0;
                local_28 = (int *)0x0;
                if (0 < _DAT_01d0d210) {
                  iVar4 = 0x1d0d214;
                  do {
                    iVar6 = FUN_004a9c30(iVar4,local_1f4);
                    if (iVar6 != 0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar3;
                      }
                      if (iVar6 != 0) {
                        FUN_005a28c0(&DAT_01d0d010,"Duplicate entry '%s' in %s",local_1f4,
                                     param_1);
                        goto LAB_004aaa32;
                      }
                      break;
                    }
                    iVar3 = iVar3 + 1;
                    iVar4 = iVar4 + 0x2e4;
                  } while (iVar3 < _DAT_01d0d210);
                }
                local_40 = (char *)FUN_004a9c80(local_44,local_1f4,2);
              }
              else {
LAB_004aaf4a:
                puVar5 = &DAT_005c1326;
                local_24 = local_1f4;
                pcVar8 = local_5f4;
                do {
                  pcVar7 = pcVar8;
                  pcVar8 = pcVar7 + 1;
                } while (((&DAT_006074b8)[(byte)(*pcVar7 + 1)] & 2) != 0);
                pcVar12 = local_24;
                pcVar11 = local_44;
                cVar1 = 0x6D;
                if (*pcVar7 == '\\') {
                  while (local_44 = pcVar11, local_24 = pcVar12, cVar1 != '\0') {
                    iVar3 = FUN_005a4120(*pcVar8);
                    iVar4 = FUN_005a4120(*puVar5);
                    if (iVar3 != iVar4) goto LAB_004ab0bd;
                    pcVar7 = puVar5 + 1;
                    puVar5 = puVar5 + 1;
                    pcVar8 = pcVar8 + 1;
                    pcVar12 = local_24;
                    pcVar11 = local_44;
                    cVar1 = *pcVar7;
                  }
                  while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
                    pcVar8 = pcVar8 + 1;
                  }
                  do {
                    cVar1 = *pcVar8;
                    *pcVar12 = cVar1;
                    if (cVar1 == '\0') break;
                    cVar1 = pcVar8[1];
                    pcVar8 = pcVar8 + 2;
                    pcVar12[1] = cVar1;
                    pcVar12 = pcVar12 + 2;
                  } while (cVar1 != '\0');
                  local_50 = 1;
                  if (pcVar11 == (char *)0x0) {
                    FUN_005a28c0(&DAT_01d0d010,"Didn't expect '\\map' in %s, line %d",param_1,pcVar9);
                    goto LAB_004aaa32;
                  }
                  if (9 < _DAT_01d0e36c) {
                    pcVar8 = "Too many maps!  (max is %d)";
                    pcVar9 = (char *)0xa;
                    goto LAB_004aaa25;
                  }
                  local_40 = (char *)FUN_004a9c80(pcVar11,local_1f4,5);
                  *(int *)(local_40 + 0x158) = _DAT_01d0e36c;
                  iVar3 = _DAT_01d0e36c * 0x126c;
                  _DAT_01d0e36c = _DAT_01d0e36c + 1;
                  *(uint *)(iVar3 + 0x1d0e960) = 0;
                  *(char **)(&DAT_01d0e370 + iVar3) = local_40;
                }
                else {
LAB_004ab0bd:
                  pcVar7 = "image";
                  local_20 = local_1f4;
                  pcVar8 = local_5f4;
                  do {
                    pcVar12 = pcVar8;
                    pcVar8 = pcVar12 + 1;
                  } while (((&DAT_006074b8)[(byte)(*pcVar12 + 1)] & 2) != 0);
                  pcVar11 = local_20;
                  pcVar10 = local_40;
                  cVar1 = "image"[0];
                  if (*pcVar12 == '\\') {
                    while (local_40 = pcVar10, local_20 = pcVar11, cVar1 != '\0') {
                      iVar3 = FUN_005a4120(*pcVar8);
                      iVar4 = FUN_005a4120(*pcVar7);
                      if (iVar3 != iVar4) goto LAB_004ab1fb;
                      pcVar12 = pcVar7 + 1;
                      pcVar7 = pcVar7 + 1;
                      pcVar8 = pcVar8 + 1;
                      pcVar11 = local_20;
                      pcVar10 = local_40;
                      cVar1 = *pcVar12;
                    }
                    while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
                      pcVar8 = pcVar8 + 1;
                    }
                    do {
                      cVar1 = *pcVar8;
                      *pcVar11 = cVar1;
                      if (cVar1 == '\0') break;
                      cVar1 = pcVar8[1];
                      pcVar8 = pcVar8 + 2;
                      pcVar11[1] = cVar1;
                      pcVar11 = pcVar11 + 2;
                    } while (cVar1 != '\0');
                    if ((pcVar10 == (char *)0x0) || (*(int *)(pcVar10 + 0x140) != 5)) {
                      pcVar8 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004aaa25;
                    }
                    if (_DAT_01d0e36c < 1) {
                      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
                      _DAT_01d71de4 = 0x976;
                      FUN_004e4330("Hell froze!");
                    }
                    iVar4 = (_DAT_01d0e36c + -1) * 0x126c;
                    iVar3 = FUN_005a5b9c(local_1f4,"%s %d %d",local_f4,iVar4 + 0x1d0e3d8,
                                         iVar4 + 0x1d0e3dc);
                    if (iVar3 != 3) {
                      pcVar8 = "Syntax error in \\image parms on line %d";
                      goto LAB_004aaa25;
                    }
                    if (*(char *)(iVar4 + 0x1d0e374) != '\0') {
                      FUN_005a28c0(&DAT_01d0d010,"Multiple \\image tags found in map %s at line %d",local_40,pcVar9
                                  );
                      goto LAB_004aaa32;
                    }
                    FUN_00465e50(local_f4,0,0,iVar4 + 0x1d0e374,0);
                  }
                  else {
LAB_004ab1fb:
                    puVar5 = &DAT_005c1442;
                    local_1c = local_1f4;
                    pcVar8 = local_5f4;
                    do {
                      pcVar7 = pcVar8;
                      pcVar8 = pcVar7 + 1;
                    } while (((&DAT_006074b8)[(byte)(*pcVar7 + 1)] & 2) != 0);
                    pcVar12 = local_1c;
                    pcVar11 = local_40;
                    cVar1 = 0x73;
                    if (*pcVar7 == '\\') {
                      while (local_40 = pcVar11, local_1c = pcVar12, cVar1 != '\0') {
                        iVar3 = FUN_005a4120(*pcVar8);
                        iVar4 = FUN_005a4120(*puVar5);
                        if (iVar3 != iVar4) goto LAB_004ab379;
                        pcVar7 = puVar5 + 1;
                        puVar5 = puVar5 + 1;
                        pcVar8 = pcVar8 + 1;
                        pcVar12 = local_1c;
                        pcVar11 = local_40;
                        cVar1 = *pcVar7;
                      }
                      while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
                        pcVar8 = pcVar8 + 1;
                      }
                      do {
                        cVar1 = *pcVar8;
                        *pcVar12 = cVar1;
                        if (cVar1 == '\0') break;
                        cVar1 = pcVar8[1];
                        pcVar8 = pcVar8 + 2;
                        pcVar12[1] = cVar1;
                        pcVar12 = pcVar12 + 2;
                      } while (cVar1 != '\0');
                      if ((pcVar11 == (char *)0x0) || (*(int *)(pcVar11 + 0x140) != 5)) {
                        pcVar8 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004aaa25;
                      }
                      if (_DAT_01d0e36c < 1) {
                        _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
                        _DAT_01d71de4 = 0x99a;
                        FUN_004e4330("Hell froze!");
                      }
                      iVar4 = (_DAT_01d0e36c + -1) * 0x126c;
                      iVar3 = *(int *)(iVar4 + 0x1d0e40c);
                      if (9 < iVar3) {
                        FUN_005a28c0(&DAT_01d0d010,"Too many \\sets in map %s at line %d.",local_40,
                                     pcVar9);
                        goto LAB_004aaa32;
                      }
                      iVar6 = iVar4 + 0x1d0e410 + iVar3 * 0x88;
                      *(int *)(iVar4 + 0x1d0e40c) = iVar3 + 1;
                      iVar3 = FUN_005a5b9c(local_1f4,"%s %d , %d , %d , %d , %f , %f , %f , %f",iVar6,iVar6 + 100,
                                           iVar6 + 0x68,iVar6 + 0x6c,iVar6 + 0x70,iVar6 + 0x74,
                                           iVar6 + 0x78,iVar6 + 0x7c,iVar6 + 0x80);
                      if (iVar3 != 9) {
                        pcVar8 = "Syntax error in \\image parms on line %d";
                        goto LAB_004aaa25;
                      }
                      FUN_00465f80(iVar6,&DAT_005c150b);
                    }
                    else {
LAB_004ab379:
                      pcVar7 = "annotation";
                      local_18 = local_1f4;
                      pcVar8 = local_5f4;
                      do {
                        pcVar12 = pcVar8;
                        pcVar8 = pcVar12 + 1;
                      } while (((&DAT_006074b8)[(byte)(*pcVar12 + 1)] & 2) != 0);
                      pcVar11 = local_18;
                      pcVar10 = local_40;
                      cVar1 = "annotation"[0];
                      if (*pcVar12 == '\\') {
                        while (local_40 = pcVar10, local_18 = pcVar11, cVar1 != '\0') {
                          iVar3 = FUN_005a4120(*pcVar8);
                          iVar4 = FUN_005a4120(*pcVar7);
                          if (iVar3 != iVar4) goto LAB_004ab518;
                          pcVar12 = pcVar7 + 1;
                          pcVar7 = pcVar7 + 1;
                          pcVar8 = pcVar8 + 1;
                          pcVar11 = local_18;
                          pcVar10 = local_40;
                          cVar1 = *pcVar12;
                        }
                        while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
                          pcVar8 = pcVar8 + 1;
                        }
                        do {
                          cVar1 = *pcVar8;
                          *pcVar11 = cVar1;
                          if (cVar1 == '\0') break;
                          cVar1 = pcVar8[1];
                          pcVar8 = pcVar8 + 2;
                          pcVar11[1] = cVar1;
                          pcVar11 = pcVar11 + 2;
                        } while (cVar1 != '\0');
                        if ((pcVar10 == (char *)0x0) || (*(int *)(pcVar10 + 0x140) != 5)) {
                          pcVar8 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004aaa25;
                        }
                        if (_DAT_01d0e36c < 1) {
                          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
                          _DAT_01d71de4 = 0x9c6;
                          FUN_004e4330("Hell froze!");
                        }
                        iVar4 = (_DAT_01d0e36c + -1) * 0x126c;
                        iVar3 = *(int *)(iVar4 + 0x1d0e960);
                        if (0xe < iVar3) {
                          FUN_005a28c0(&DAT_01d0d010,"Too many \\annotations in map %s at line %d.",local_40,
                                       pcVar9);
                          goto LAB_004aaa32;
                        }
                        iVar6 = iVar3 * 0xd4 + iVar4 + 0x1d0e964;
                        *(int *)(iVar4 + 0x1d0e960) = iVar3 + 1;
                        iVar3 = FUN_005a5b9c(local_1f4,"%[^,], %d , %d , \"%[^\"]\"",iVar6,iVar6 + 200,iVar6 + 0xcc
                                             ,iVar6 + 100);
                        if (iVar3 != 4) {
                          pcVar8 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004aaa25;
                        }
                        FUN_004a7890(iVar6);
                        FUN_004a7890(iVar6 + 100);
                        *(uint *)(iVar6 + 0xd0) = 0;
                      }
                      else {
LAB_004ab518:
                        puVar5 = &DAT_005c15e3;
                        local_14 = local_1f4;
                        pcVar8 = local_5f4;
                        do {
                          pcVar7 = pcVar8;
                          pcVar8 = pcVar7 + 1;
                        } while (((&DAT_006074b8)[(byte)(*pcVar7 + 1)] & 2) != 0);
                        pcVar12 = local_14;
                        iVar3 = local_4c;
                        cVar1 = 0x65;
                        if (*pcVar7 == '\\') {
                          while( true ) {
                            local_14 = pcVar12;
                            if (cVar1 == '\0') goto LAB_004ab716;
                            local_4c = iVar3;
                            iVar3 = FUN_005a4120(*pcVar8);
                            iVar4 = FUN_005a4120(*puVar5);
                            if (iVar3 != iVar4) break;
                            pcVar7 = puVar5 + 1;
                            puVar5 = puVar5 + 1;
                            pcVar8 = pcVar8 + 1;
                            pcVar12 = local_14;
                            iVar3 = local_4c;
                            cVar1 = *pcVar7;
                          }
                        }
                        if (local_5f4[0] == '\\') {
                          FUN_005a28c0(&DAT_01d0d010,"Unknown tag: '%s' in %s, line %d",local_5f4,
                                       param_1,pcVar9);
                          goto LAB_004aaa32;
                        }
                        if (local_40 == (char *)0x0) {
                          FUN_005a28c0(&DAT_01d0d010,"No entry started in %s, line %d",param_1,
                                       pcVar9);
                          goto LAB_004aaa32;
                        }
                        FUN_00482070(local_40 + 0x148,local_5f4);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    } while( true );
  }
  pcVar8 = "Can't open field notes file %s";
  pcVar9 = param_1;
LAB_004aaa25:
  FUN_005a28c0(&DAT_01d0d010,pcVar8,pcVar9);
LAB_004aaa32:
  if (local_4c != 0) {
    FUN_005a3a90(local_4c);
  }
  if (param_3 == (char *)0x0) {
    FUN_0047cf40(0x01C5B0E4,&DAT_01d0d010);
  }
  else {
    pcVar9 = &DAT_01d0d010;
    do {
      cVar1 = *pcVar9;
      *param_3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
  }
  FUN_004ab7a0(param_1);
  return 0;
LAB_004ab716:
  while (((&DAT_006074b8)[(byte)(*pcVar8 + 1)] & 2) != 0) {
    pcVar8 = pcVar8 + 1;
  }
  do {
    cVar1 = *pcVar8;
    *pcVar12 = cVar1;
    local_4c = iVar3;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
LAB_004aa931:
  iVar3 = 0;
  FUN_005a3a90(local_4c);
  local_4c = 0;
  if (0 < _DAT_01d0e36c) {
    puVar5 = &DAT_01d0e370;
    do {
      FUN_004a9f30(puVar5);
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 0x126c;
    } while (iVar3 < _DAT_01d0e36c);
  }
  DAT_005fe374 = 1;
  DAT_005fe370 = 1;
  if (param_3 != (char *)0x0) {
    FUN_004a8eb0(0x1d19d30,0x60,0x40,0x1eb,0x1b8);
    FUN_004a8e00(0x1d19d30);
    DAT_01d0d010 = 0;
    DAT_005fe374 = 0;
    iVar3 = 0;
    if (0 < _DAT_01d0d210) {
      iVar4 = 0x1d0d214;
      do {
        iVar6 = FUN_004a9d90(iVar4,0x1d19d30);
        if (iVar6 == 0) goto LAB_004aaa32;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x2e4;
      } while (iVar3 < _DAT_01d0d210);
    }
  }
  return 1;
}
