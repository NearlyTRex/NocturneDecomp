// Name: FUN_004bcba0
// Address: 004bcba0
// Address Range: [[004bcba0, 004bda9d]]
// Convention: unknown
// Signature: undefined4 FUN_004bcba0(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004bcba0(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char local_5b4 [1024];
  char local_1b4 [256];
  byte local_b4 [100];
  int local_50;
  int local_4c;
  char *local_48;
  int local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  int *local_34;
  char *local_30;
  char *local_2c;
  int *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  local_50 = 0;
  FUN_004bdaa0(param_1);
  pcVar8 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  _DAT_01cc4268 = (uint)(param_3 != (char *)0x0);
  local_4c = FUN_00478fb0("world",param_1);
  if (-1 < local_4c) {
    local_50 = FUN_00479180("world",param_1,&DAT_005dfd0d);
    if (local_50 == 0) {
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0x8ee;
      FUN_005030e0("Can't open field notes file %s",param_1);
    }
    iVar2 = FUN_005c2e90(local_50);
    pcVar8 = (char *)0x0;
    local_48 = (char *)0x0;
    local_44 = 0;
    local_4c = local_4c + iVar2;
    do {
      iVar2 = FUN_005c2e90(local_50);
      if ((local_4c <= iVar2) ||
         (puVar3 = (byte *)FUN_005c1180(local_5b4,0x400,local_50), puVar3 != local_5b4))
      goto LAB_004bccbd;
      puVar3 = (byte *)FUN_005c2dc0(local_5b4,&DAT_005df822);
      if (puVar3 != (byte *)0x0) {
        *puVar3 = 0;
      }
      FUN_004b9c50(local_5b4);
      pcVar8 = pcVar8 + 1;
      if (local_5b4[0] != '\0') {
        pcVar6 = "section";
        local_40 = local_1b4;
        pcVar7 = local_5b4;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (((&DAT_00626114)[(byte)(*pcVar11 + 1)] & 2) != 0);
        pcVar10 = local_40;
        cVar1 = "section"[0];
        if (*pcVar11 == '\\') {
          while (local_40 = pcVar10, cVar1 != '\0') {
            iVar2 = FUN_005c12b0(*pcVar7);
            iVar5 = FUN_005c12b0(*pcVar6);
            if (iVar2 != iVar5) goto LAB_004bceb4;
            pcVar11 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
            pcVar10 = local_40;
            cVar1 = *pcVar11;
          }
          while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
            pcVar7 = pcVar7 + 1;
          }
          do {
            cVar1 = *pcVar7;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
          if (5 < _DAT_01cc4470) {
            FUN_005bfb40(&DAT_01cc4270,"Too many field notes sections in %s, line %d",param_1,pcVar8);
            goto LAB_004bcdbb;
          }
          local_48 = (char *)(_DAT_01cc4470 * 0x2e4 + 0x1cc4474);
          pcVar7 = local_1b4;
          pcVar6 = local_48;
          do {
            cVar1 = *pcVar7;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          local_44 = 0;
          _DAT_01cc4470 = _DAT_01cc4470 + 1;
        }
        else {
LAB_004bceb4:
          pcVar6 = "title";
          local_3c = local_1b4;
          pcVar7 = local_5b4;
          do {
            pcVar11 = pcVar7;
            pcVar7 = pcVar11 + 1;
          } while (((&DAT_00626114)[(byte)(*pcVar11 + 1)] & 2) != 0);
          pcVar9 = local_3c;
          pcVar10 = local_48;
          iVar2 = local_44;
          cVar1 = "title"[0];
          if (*pcVar11 == '\\') {
            while (local_48 = pcVar10, local_44 = iVar2, local_3c = pcVar9, cVar1 != '\0') {
              iVar2 = FUN_005c12b0(*pcVar7);
              iVar5 = FUN_005c12b0(*pcVar6);
              if (iVar2 != iVar5) goto LAB_004bcfcf;
              pcVar11 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
              pcVar9 = local_3c;
              pcVar10 = local_48;
              iVar2 = local_44;
              cVar1 = *pcVar11;
            }
            while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
              pcVar7 = pcVar7 + 1;
            }
            do {
              cVar1 = *pcVar7;
              *pcVar9 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar7[1];
              pcVar7 = pcVar7 + 2;
              pcVar9[1] = cVar1;
              pcVar9 = pcVar9 + 2;
            } while (cVar1 != '\0');
            if (iVar2 == 0) {
              if (pcVar10 == (char *)0x0) {
                FUN_005bfb40(&DAT_01cc4270,"Didn't expect '\\title' in %s, line %d",param_1,pcVar8);
                goto LAB_004bcdbb;
              }
              pcVar7 = local_1b4;
              pcVar10 = pcVar10 + 0x40;
              do {
                cVar1 = *pcVar7;
                *pcVar10 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar7[1];
                pcVar7 = pcVar7 + 2;
                pcVar10[1] = cVar1;
                pcVar10 = pcVar10 + 2;
              } while (cVar1 != '\0');
            }
            else {
              pcVar7 = local_1b4;
              pcVar6 = (char *)(iVar2 + 0x40);
              do {
                cVar1 = *pcVar7;
                *pcVar6 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar7[1];
                pcVar7 = pcVar7 + 2;
                pcVar6[1] = cVar1;
                pcVar6 = pcVar6 + 2;
              } while (cVar1 != '\0');
            }
          }
          else {
LAB_004bcfcf:
            pcVar6 = "entry";
            local_38 = local_1b4;
            pcVar7 = local_5b4;
            do {
              pcVar11 = pcVar7;
              pcVar7 = pcVar11 + 1;
            } while (((&DAT_00626114)[(byte)(*pcVar11 + 1)] & 2) != 0);
            pcVar10 = local_38;
            pcVar9 = local_48;
            cVar1 = "entry"[0];
            if (*pcVar11 == '\\') {
              while (local_48 = pcVar9, local_38 = pcVar10, cVar1 != '\0') {
                iVar2 = FUN_005c12b0(*pcVar7);
                iVar5 = FUN_005c12b0(*pcVar6);
                if (iVar2 != iVar5) goto LAB_004bd0f5;
                pcVar11 = pcVar6 + 1;
                pcVar6 = pcVar6 + 1;
                pcVar7 = pcVar7 + 1;
                pcVar10 = local_38;
                pcVar9 = local_48;
                cVar1 = *pcVar11;
              }
              while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
                pcVar7 = pcVar7 + 1;
              }
              do {
                cVar1 = *pcVar7;
                *pcVar10 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar7[1];
                pcVar7 = pcVar7 + 2;
                pcVar10[1] = cVar1;
                pcVar10 = pcVar10 + 2;
              } while (cVar1 != '\0');
              if (pcVar9 == (char *)0x0) {
                FUN_005bfb40(&DAT_01cc4270,"Didn't expect '\\entry' in %s, line %d",param_1,pcVar8);
                goto LAB_004bcdbb;
              }
              iVar2 = 0;
              local_34 = (int *)0x0;
              if (0 < _DAT_01cc4470) {
                iVar5 = 0x1cc4474;
                do {
                  iVar4 = FUN_004bbfd0(iVar5,local_1b4);
                  if (iVar4 != 0) {
                    if (local_34 != (int *)0x0) {
                      *local_34 = iVar2;
                    }
                    if (iVar4 != 0) {
                      FUN_005bfb40(&DAT_01cc4270,"Duplicate entry '%s' in %s",local_1b4,param_1
                                  );
                      goto LAB_004bcdbb;
                    }
                    break;
                  }
                  iVar2 = iVar2 + 1;
                  iVar5 = iVar5 + 0x2e4;
                } while (iVar2 < _DAT_01cc4470);
              }
              local_44 = FUN_004bc020(local_48,local_1b4,0);
            }
            else {
LAB_004bd0f5:
              puVar3 = &DAT_005dfdf2;
              local_30 = local_1b4;
              pcVar7 = local_5b4;
              do {
                pcVar6 = pcVar7;
                pcVar7 = pcVar6 + 1;
              } while (((&DAT_00626114)[(byte)(*pcVar6 + 1)] & 2) != 0);
              pcVar11 = local_30;
              pcVar10 = local_48;
              cVar1 = 0x74;
              if (*pcVar6 == '\\') {
                while (local_48 = pcVar10, local_30 = pcVar11, cVar1 != '\0') {
                  iVar2 = FUN_005c12b0(*pcVar7);
                  iVar5 = FUN_005c12b0(*puVar3);
                  if (iVar2 != iVar5) goto LAB_004bd25d;
                  pcVar6 = puVar3 + 1;
                  puVar3 = puVar3 + 1;
                  pcVar7 = pcVar7 + 1;
                  pcVar11 = local_30;
                  pcVar10 = local_48;
                  cVar1 = *pcVar6;
                }
                while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
                  pcVar7 = pcVar7 + 1;
                }
                do {
                  cVar1 = *pcVar7;
                  *pcVar11 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar7[1];
                  pcVar7 = pcVar7 + 2;
                  pcVar11[1] = cVar1;
                  pcVar11 = pcVar11 + 2;
                } while (cVar1 != '\0');
                if (pcVar10 == (char *)0x0) {
                  FUN_005bfb40(&DAT_01cc4270,"Didn't expect '\\task' in %s, line %d",param_1,pcVar8);
                  goto LAB_004bcdbb;
                }
                local_2c = local_1b4;
                iVar2 = 0;
                local_28 = (int *)0x0;
                if (0 < _DAT_01cc4470) {
                  iVar5 = 0x1cc4474;
                  do {
                    iVar4 = FUN_004bbfd0(iVar5,local_2c);
                    if (iVar4 != 0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar2;
                      }
                      if (iVar4 != 0) {
                        FUN_005bfb40(&DAT_01cc4270,"Duplicate entry '%s' in %s",local_1b4,
                                     param_1);
                        goto LAB_004bcdbb;
                      }
                      break;
                    }
                    iVar2 = iVar2 + 1;
                    iVar5 = iVar5 + 0x2e4;
                  } while (iVar2 < _DAT_01cc4470);
                }
                local_44 = FUN_004bc020(local_48,local_1b4,2);
              }
              else {
LAB_004bd25d:
                puVar3 = &DAT_005dfe37;
                local_24 = local_1b4;
                pcVar7 = local_5b4;
                do {
                  pcVar6 = pcVar7;
                  pcVar7 = pcVar6 + 1;
                } while (((&DAT_00626114)[(byte)(*pcVar6 + 1)] & 2) != 0);
                pcVar11 = local_24;
                pcVar10 = local_48;
                cVar1 = 0x6D;
                if (*pcVar6 == '\\') {
                  while (local_48 = pcVar10, local_24 = pcVar11, cVar1 != '\0') {
                    iVar2 = FUN_005c12b0(*pcVar7);
                    iVar5 = FUN_005c12b0(*puVar3);
                    if (iVar2 != iVar5) goto LAB_004bd3d9;
                    pcVar6 = puVar3 + 1;
                    puVar3 = puVar3 + 1;
                    pcVar7 = pcVar7 + 1;
                    pcVar11 = local_24;
                    pcVar10 = local_48;
                    cVar1 = *pcVar6;
                  }
                  while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
                    pcVar7 = pcVar7 + 1;
                  }
                  do {
                    cVar1 = *pcVar7;
                    *pcVar11 = cVar1;
                    if (cVar1 == '\0') break;
                    cVar1 = pcVar7[1];
                    pcVar7 = pcVar7 + 2;
                    pcVar11[1] = cVar1;
                    pcVar11 = pcVar11 + 2;
                  } while (cVar1 != '\0');
                  if (pcVar10 == (char *)0x0) {
                    FUN_005bfb40(&DAT_01cc4270,"Didn't expect '\\map' in %s, line %d",param_1,pcVar8);
                    goto LAB_004bcdbb;
                  }
                  if (3 < _DAT_01cc55cc) {
                    pcVar7 = "Too many maps!  (max is %d)";
                    pcVar8 = (char *)0x4;
                    goto LAB_004bcdae;
                  }
                  local_44 = FUN_004bc020(pcVar10,local_1b4,5);
                  *(int *)(local_44 + 0x158) = _DAT_01cc55cc;
                  iVar2 = _DAT_01cc55cc * 0x970;
                  _DAT_01cc55cc = _DAT_01cc55cc + 1;
                  *(uint *)(iVar2 + 0x1cc5890) = 0;
                  *(int *)(&DAT_01cc55d0 + iVar2) = local_44;
                }
                else {
LAB_004bd3d9:
                  pcVar6 = "image";
                  local_20 = local_1b4;
                  pcVar7 = local_5b4;
                  do {
                    pcVar11 = pcVar7;
                    pcVar7 = pcVar11 + 1;
                  } while (((&DAT_00626114)[(byte)(*pcVar11 + 1)] & 2) != 0);
                  pcVar10 = local_20;
                  iVar2 = local_44;
                  cVar1 = "image"[0];
                  if (*pcVar11 == '\\') {
                    while (local_44 = iVar2, local_20 = pcVar10, cVar1 != '\0') {
                      iVar2 = FUN_005c12b0(*pcVar7);
                      iVar5 = FUN_005c12b0(*pcVar6);
                      if (iVar2 != iVar5) goto LAB_004bd503;
                      pcVar11 = pcVar6 + 1;
                      pcVar6 = pcVar6 + 1;
                      pcVar7 = pcVar7 + 1;
                      pcVar10 = local_20;
                      iVar2 = local_44;
                      cVar1 = *pcVar11;
                    }
                    while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
                      pcVar7 = pcVar7 + 1;
                    }
                    do {
                      cVar1 = *pcVar7;
                      *pcVar10 = cVar1;
                      if (cVar1 == '\0') break;
                      cVar1 = pcVar7[1];
                      pcVar7 = pcVar7 + 2;
                      pcVar10[1] = cVar1;
                      pcVar10 = pcVar10 + 2;
                    } while (cVar1 != '\0');
                    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x140) != 5)) {
                      pcVar7 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004bcdae;
                    }
                    if (_DAT_01cc55cc < 1) {
                      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                      _DAT_01d1d404 = 0x969;
                      FUN_005030e0("Hell froze!");
                    }
                    iVar2 = (_DAT_01cc55cc + -1) * 0x970;
                    iVar5 = FUN_005c2cac(local_1b4,"%s %d %d",local_b4,iVar2 + 0x1cc5638,
                                         iVar2 + 0x1cc563c);
                    if (iVar5 != 3) {
                      pcVar7 = "Syntax error in \\image parms on line %d";
                      goto LAB_004bcdae;
                    }
                    if (*(char *)(iVar2 + 0x1cc55d4) != '\0') {
                      FUN_005bfb40(&DAT_01cc4270,"Multiple \\image tags found in map %s at line %d",local_44,pcVar8
                                  );
                      goto LAB_004bcdbb;
                    }
                    FUN_00479580(local_b4,0,0,iVar2 + 0x1cc55d4,0);
                  }
                  else {
LAB_004bd503:
                    puVar3 = &DAT_005dff53;
                    local_1c = local_1b4;
                    pcVar7 = local_5b4;
                    do {
                      pcVar6 = pcVar7;
                      pcVar7 = pcVar6 + 1;
                    } while (((&DAT_00626114)[(byte)(*pcVar6 + 1)] & 2) != 0);
                    pcVar11 = local_1c;
                    iVar2 = local_44;
                    cVar1 = 0x73;
                    if (*pcVar6 == '\\') {
                      while (local_44 = iVar2, local_1c = pcVar11, cVar1 != '\0') {
                        iVar2 = FUN_005c12b0(*pcVar7);
                        iVar5 = FUN_005c12b0(*puVar3);
                        if (iVar2 != iVar5) goto LAB_004bd681;
                        pcVar6 = puVar3 + 1;
                        puVar3 = puVar3 + 1;
                        pcVar7 = pcVar7 + 1;
                        pcVar11 = local_1c;
                        iVar2 = local_44;
                        cVar1 = *pcVar6;
                      }
                      while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
                        pcVar7 = pcVar7 + 1;
                      }
                      do {
                        cVar1 = *pcVar7;
                        *pcVar11 = cVar1;
                        if (cVar1 == '\0') break;
                        cVar1 = pcVar7[1];
                        pcVar7 = pcVar7 + 2;
                        pcVar11[1] = cVar1;
                        pcVar11 = pcVar11 + 2;
                      } while (cVar1 != '\0');
                      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x140) != 5)) {
                        pcVar7 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004bcdae;
                      }
                      if (_DAT_01cc55cc < 1) {
                        _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                        _DAT_01d1d404 = 0x98d;
                        FUN_005030e0("Hell froze!");
                      }
                      iVar5 = (_DAT_01cc55cc + -1) * 0x970;
                      iVar2 = *(int *)(iVar5 + 0x1cc566c);
                      if (3 < iVar2) {
                        FUN_005bfb40(&DAT_01cc4270,"Too many \\sets in map %s at line %d.",local_44,
                                     pcVar8);
                        goto LAB_004bcdbb;
                      }
                      iVar4 = iVar5 + 0x1cc5670 + iVar2 * 0x88;
                      *(int *)(iVar5 + 0x1cc566c) = iVar2 + 1;
                      iVar2 = FUN_005c2cac(local_1b4,"%s %d , %d , %d , %d , %f , %f , %f , %f",iVar4,iVar4 + 100,
                                           iVar4 + 0x68,iVar4 + 0x6c,iVar4 + 0x70,iVar4 + 0x74,
                                           iVar4 + 0x78,iVar4 + 0x7c,iVar4 + 0x80);
                      if (iVar2 != 9) {
                        pcVar7 = "Syntax error in \\image parms on line %d";
                        goto LAB_004bcdae;
                      }
                      FUN_004796b0(iVar4,&DAT_005e001c);
                    }
                    else {
LAB_004bd681:
                      pcVar6 = "annotation";
                      local_18 = local_1b4;
                      pcVar7 = local_5b4;
                      do {
                        pcVar11 = pcVar7;
                        pcVar7 = pcVar11 + 1;
                      } while (((&DAT_00626114)[(byte)(*pcVar11 + 1)] & 2) != 0);
                      pcVar10 = local_18;
                      iVar2 = local_44;
                      cVar1 = "annotation"[0];
                      if (*pcVar11 == '\\') {
                        while (local_44 = iVar2, local_18 = pcVar10, cVar1 != '\0') {
                          iVar2 = FUN_005c12b0(*pcVar7);
                          iVar5 = FUN_005c12b0(*pcVar6);
                          if (iVar2 != iVar5) goto LAB_004bd820;
                          pcVar11 = pcVar6 + 1;
                          pcVar6 = pcVar6 + 1;
                          pcVar7 = pcVar7 + 1;
                          pcVar10 = local_18;
                          iVar2 = local_44;
                          cVar1 = *pcVar11;
                        }
                        while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
                          pcVar7 = pcVar7 + 1;
                        }
                        do {
                          cVar1 = *pcVar7;
                          *pcVar10 = cVar1;
                          if (cVar1 == '\0') break;
                          cVar1 = pcVar7[1];
                          pcVar7 = pcVar7 + 2;
                          pcVar10[1] = cVar1;
                          pcVar10 = pcVar10 + 2;
                        } while (cVar1 != '\0');
                        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x140) != 5)) {
                          pcVar7 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004bcdae;
                        }
                        if (_DAT_01cc55cc < 1) {
                          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                          _DAT_01d1d404 = 0x9b9;
                          FUN_005030e0("Hell froze!");
                        }
                        iVar5 = (_DAT_01cc55cc + -1) * 0x970;
                        iVar2 = *(int *)(iVar5 + 0x1cc5890);
                        if (7 < iVar2) {
                          FUN_005bfb40(&DAT_01cc4270,"Too many \\annotations in map %s at line %d.",local_44,
                                       pcVar8);
                          goto LAB_004bcdbb;
                        }
                        iVar4 = iVar2 * 0xd4 + iVar5 + 0x1cc5894;
                        *(int *)(iVar5 + 0x1cc5890) = iVar2 + 1;
                        iVar2 = FUN_005c2cac(local_1b4,"%[^,], %d , %d , \"%[^\"]\"",iVar4,iVar4 + 200,iVar4 + 0xcc
                                             ,iVar4 + 100);
                        if (iVar2 != 4) {
                          pcVar7 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004bcdae;
                        }
                        FUN_004b9c50(iVar4);
                        FUN_004b9c50(iVar4 + 100);
                        *(uint *)(iVar4 + 0xd0) = 0;
                      }
                      else {
LAB_004bd820:
                        puVar3 = &DAT_005e00f4;
                        local_14 = local_1b4;
                        pcVar7 = local_5b4;
                        do {
                          pcVar6 = pcVar7;
                          pcVar7 = pcVar6 + 1;
                        } while (((&DAT_00626114)[(byte)(*pcVar6 + 1)] & 2) != 0);
                        pcVar11 = local_14;
                        iVar2 = local_50;
                        cVar1 = 0x65;
                        if (*pcVar6 == '\\') {
                          while( true ) {
                            local_14 = pcVar11;
                            if (cVar1 == '\0') goto LAB_004bda1e;
                            local_50 = iVar2;
                            iVar2 = FUN_005c12b0(*pcVar7);
                            iVar5 = FUN_005c12b0(*puVar3);
                            if (iVar2 != iVar5) break;
                            pcVar6 = puVar3 + 1;
                            puVar3 = puVar3 + 1;
                            pcVar7 = pcVar7 + 1;
                            pcVar11 = local_14;
                            iVar2 = local_50;
                            cVar1 = *pcVar6;
                          }
                        }
                        if (local_5b4[0] == '\\') {
                          FUN_005bfb40(&DAT_01cc4270,"Unknown tag: '%s' in %s, line %d",local_5b4,
                                       param_1,pcVar8);
                          goto LAB_004bcdbb;
                        }
                        if (local_44 == 0) {
                          FUN_005bfb40(&DAT_01cc4270,"No entry started in %s, line %d",param_1,
                                       pcVar8);
                          goto LAB_004bcdbb;
                        }
                        FUN_004994d0(local_44 + 0x148,local_5b4);
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
  pcVar7 = "Can't open field notes file %s";
  pcVar8 = param_1;
LAB_004bcdae:
  FUN_005bfb40(&DAT_01cc4270,pcVar7,pcVar8);
LAB_004bcdbb:
  if (local_50 != 0) {
    FUN_005c0d10(local_50);
  }
  if (param_3 == (char *)0x0) {
    FUN_004943a0(0x01C3EB54,&DAT_01cc4270);
  }
  else {
    pcVar8 = &DAT_01cc4270;
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
  FUN_004bdaa0(param_1);
  return 0;
LAB_004bda1e:
  while (((&DAT_00626114)[(byte)(*pcVar7 + 1)] & 2) != 0) {
    pcVar7 = pcVar7 + 1;
  }
  do {
    cVar1 = *pcVar7;
    *pcVar11 = cVar1;
    local_50 = iVar2;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
LAB_004bccbd:
  iVar2 = 0;
  FUN_005c0d10(local_50);
  local_50 = 0;
  if (0 < _DAT_01cc55cc) {
    puVar3 = &DAT_01cc55d0;
    do {
      FUN_004bc2d0(puVar3);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x970;
    } while (iVar2 < _DAT_01cc55cc);
  }
  DAT_0061d2e4 = 1;
  DAT_0061d2e0 = 1;
  if (param_3 != (char *)0x0) {
    FUN_004bb270(0x1cc7cd4,0x60,0x40,0x1eb,0x1b8);
    iVar2 = 0;
    FUN_004bb1c0(0x1cc7cd4);
    DAT_01cc4270 = 0;
    DAT_0061d2e4 = 0;
    if (0 < _DAT_01cc4470) {
      iVar5 = 0x1cc4474;
      do {
        iVar4 = FUN_004bc130(iVar5,0x1cc7cd4);
        if (iVar4 == 0) goto LAB_004bcdbb;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x2e4;
      } while (iVar2 < _DAT_01cc4470);
    }
  }
  return 1;
}
