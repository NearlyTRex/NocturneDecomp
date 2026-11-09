// Name: core_fldnotes.cpp_FUN_004bcba0
// Address: 004bcba0
// Address Range: [[004bcba0, 004bda9d]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004bcba0(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004bcba0(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  _FILE *p_Var3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  char *pcVar7;
  SNotesMap *pSVar8;
  SNotesSection *pSVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte local_5b4 [1024];
  byte local_1b4 [256];
  char local_b4 [100];
  _FILE *local_50;
  int local_4c;
  SNotesSection *local_48;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  int *local_34;
  byte *local_30;
  byte *local_2c;
  int *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_50 = (_FILE *)0x0;
  core_fldnotes_cpp_FUN_004bdaa0(param_1);
  pcVar13 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  _DAT_01cc4268 = (uint)(param_3 != (char *)0x0);
  local_4c = engine_dosio_cpp_getFileSize_FUN_00478fb0("world",param_1);
  if (-1 < local_4c) {
    local_50 = engine_dosio_cpp_FUN_00479180("world",param_1,&DAT_005dfd0d);
    if (local_50 == (_FILE *)0x0) {
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0x8ee;
      core_main_c_FUN_005030e0("Can't open field notes file %s",param_1);
    }
    iVar4 = _ftell(local_50);
    pcVar13 = (char *)0x0;
    local_48 = (SNotesSection *)0x0;
    local_44 = 0;
    local_4c = local_4c + iVar4;
    do {
      iVar4 = _ftell(local_50);
      if ((local_4c <= iVar4) ||
         (puVar5 = (byte *)_fgets(local_5b4,0x400,local_50),
         puVar5 != local_5b4)) goto LAB_004bccbd;
      pcVar7 = strstr((char *)local_5b4,&DAT_005df822);
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '\0';
      }
      unkaddr_004b9ab0_cpp_FUN_004b9c50(local_5b4);
      pcVar13 = pcVar13 + 1;
      if (local_5b4[0] != 0) {
        pcVar7 = "section";
        local_40 = local_1b4;
        pbVar12 = local_5b4;
        do {
          pbVar10 = pbVar12;
          pbVar12 = pbVar10 + 1;
        } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
        pbVar14 = local_40;
        bVar2 = "section"[0];
        if (*pbVar10 == 0x5c) {
          while (local_40 = pbVar14, bVar2 != 0) {
            iVar4 = toupper((uint)*pbVar12);
            iVar6 = toupper((uint)(byte)*pcVar7);
            if (iVar4 != iVar6) goto LAB_004bceb4;
            pbVar10 = (byte *)(pcVar7 + 1);
            pcVar7 = pcVar7 + 1;
            pbVar12 = pbVar12 + 1;
            pbVar14 = local_40;
            bVar2 = *pbVar10;
          }
          while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
            pbVar12 = pbVar12 + 1;
          }
          do {
            bVar2 = *pbVar12;
            *pbVar14 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            pbVar12 = pbVar12 + 2;
            pbVar14[1] = bVar2;
            pbVar14 = pbVar14 + 2;
          } while (bVar2 != 0);
          if (5 < _DAT_01cc4470) {
            FUN_005bfb40
                      (&DAT_01cc4270,"Too many field notes sections in %s, line %d",param_1,pcVar13);
            goto LAB_004bcdbb;
          }
          local_48 = SNotesSection_ARRAY_01cc4474 + _DAT_01cc4470;
          pbVar12 = local_1b4;
          pSVar9 = local_48;
          do {
            bVar2 = *pbVar12;
            *(byte *)pSVar9 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            pbVar12 = pbVar12 + 2;
            pSVar9->field_0x1 = bVar2;
            pSVar9 = (SNotesSection *)&pSVar9->field_0x2;
          } while (bVar2 != 0);
          local_44 = 0;
          _DAT_01cc4470 = _DAT_01cc4470 + 1;
        }
        else {
LAB_004bceb4:
          pcVar7 = "title";
          local_3c = local_1b4;
          pbVar12 = local_5b4;
          do {
            pbVar10 = pbVar12;
            pbVar12 = pbVar10 + 1;
          } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
          pbVar14 = local_3c;
          pSVar9 = local_48;
          iVar4 = local_44;
          bVar2 = "title"[0];
          if (*pbVar10 == 0x5c) {
            while (local_48 = pSVar9, local_44 = iVar4, local_3c = pbVar14, bVar2 != 0) {
              iVar4 = toupper((uint)*pbVar12);
              iVar6 = toupper((uint)(byte)*pcVar7);
              if (iVar4 != iVar6) goto LAB_004bcfcf;
              pbVar10 = (byte *)(pcVar7 + 1);
              pcVar7 = pcVar7 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar14 = local_3c;
              pSVar9 = local_48;
              iVar4 = local_44;
              bVar2 = *pbVar10;
            }
            while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
              pbVar12 = pbVar12 + 1;
            }
            do {
              bVar2 = *pbVar12;
              *pbVar14 = bVar2;
              if (bVar2 == 0) break;
              bVar2 = pbVar12[1];
              pbVar12 = pbVar12 + 2;
              pbVar14[1] = bVar2;
              pbVar14 = pbVar14 + 2;
            } while (bVar2 != 0);
            if (iVar4 == 0) {
              if (pSVar9 == (SNotesSection *)0x0) {
                FUN_005bfb40
                          (&DAT_01cc4270,"Didn't expect '\\title' in %s, line %d",param_1,pcVar13);
                goto LAB_004bcdbb;
              }
              pbVar10 = local_1b4;
              pbVar12 = &pSVar9->field_0x40;
              do {
                bVar2 = *pbVar10;
                *pbVar12 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar10[1];
                pbVar10 = pbVar10 + 2;
                pbVar12[1] = bVar2;
                pbVar12 = pbVar12 + 2;
              } while (bVar2 != 0);
            }
            else {
              pbVar12 = local_1b4;
              pbVar10 = (byte *)(iVar4 + 0x40);
              do {
                bVar2 = *pbVar12;
                *pbVar10 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar12[1];
                pbVar12 = pbVar12 + 2;
                pbVar10[1] = bVar2;
                pbVar10 = pbVar10 + 2;
              } while (bVar2 != 0);
            }
          }
          else {
LAB_004bcfcf:
            pcVar7 = "entry";
            local_38 = local_1b4;
            pbVar12 = local_5b4;
            do {
              pbVar10 = pbVar12;
              pbVar12 = pbVar10 + 1;
            } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
            pbVar14 = local_38;
            pSVar9 = local_48;
            bVar2 = "entry"[0];
            if (*pbVar10 == 0x5c) {
              while (local_48 = pSVar9, local_38 = pbVar14, bVar2 != 0) {
                iVar4 = toupper((uint)*pbVar12);
                iVar6 = toupper((uint)(byte)*pcVar7);
                if (iVar4 != iVar6) goto LAB_004bd0f5;
                pbVar10 = (byte *)(pcVar7 + 1);
                pcVar7 = pcVar7 + 1;
                pbVar12 = pbVar12 + 1;
                pbVar14 = local_38;
                pSVar9 = local_48;
                bVar2 = *pbVar10;
              }
              while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
                pbVar12 = pbVar12 + 1;
              }
              do {
                bVar2 = *pbVar12;
                *pbVar14 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar12[1];
                pbVar12 = pbVar12 + 2;
                pbVar14[1] = bVar2;
                pbVar14 = pbVar14 + 2;
              } while (bVar2 != 0);
              if (pSVar9 == (SNotesSection *)0x0) {
                FUN_005bfb40
                          (&DAT_01cc4270,"Didn't expect '\\entry' in %s, line %d",param_1,pcVar13);
                goto LAB_004bcdbb;
              }
              iVar4 = 0;
              local_34 = (int *)0x0;
              if (0 < _DAT_01cc4470) {
                pSVar9 = SNotesSection_ARRAY_01cc4474;
                do {
                  iVar6 = core_fldnotes_cpp_FUN_004bbfd0(pSVar9,local_1b4);
                  if (iVar6 != 0) {
                    if (local_34 != (int *)0x0) {
                      *local_34 = iVar4;
                    }
                    if (iVar6 != 0) {
                      FUN_005bfb40
                                (&DAT_01cc4270,"Duplicate entry '%s' in %s",local_1b4,param_1);
                      goto LAB_004bcdbb;
                    }
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  pSVar9 = pSVar9 + 1;
                } while (iVar4 < _DAT_01cc4470);
              }
              local_44 = core_fldnotes_cpp_FUN_004bc020(local_48,local_1b4,0);
            }
            else {
LAB_004bd0f5:
              pbVar10 = &DAT_005dfdf2;
              local_30 = local_1b4;
              pbVar12 = local_5b4;
              do {
                pbVar14 = pbVar12;
                pbVar12 = pbVar14 + 1;
              } while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0);
              pbVar15 = local_30;
              pSVar9 = local_48;
              bVar2 = 0x74;
              if (*pbVar14 == 0x5c) {
                while (local_48 = pSVar9, local_30 = pbVar15, bVar2 != 0) {
                  iVar4 = toupper((uint)*pbVar12);
                  iVar6 = toupper((uint)*pbVar10);
                  if (iVar4 != iVar6) goto LAB_004bd25d;
                  pbVar14 = pbVar10 + 1;
                  pbVar10 = pbVar10 + 1;
                  pbVar12 = pbVar12 + 1;
                  pbVar15 = local_30;
                  pSVar9 = local_48;
                  bVar2 = *pbVar14;
                }
                while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
                  pbVar12 = pbVar12 + 1;
                }
                do {
                  bVar2 = *pbVar12;
                  *pbVar15 = bVar2;
                  if (bVar2 == 0) break;
                  bVar2 = pbVar12[1];
                  pbVar12 = pbVar12 + 2;
                  pbVar15[1] = bVar2;
                  pbVar15 = pbVar15 + 2;
                } while (bVar2 != 0);
                if (pSVar9 == (SNotesSection *)0x0) {
                  FUN_005bfb40
                            (&DAT_01cc4270,"Didn't expect '\\task' in %s, line %d",param_1,pcVar13);
                  goto LAB_004bcdbb;
                }
                local_2c = local_1b4;
                iVar4 = 0;
                local_28 = (int *)0x0;
                if (0 < _DAT_01cc4470) {
                  pSVar9 = SNotesSection_ARRAY_01cc4474;
                  do {
                    iVar6 = core_fldnotes_cpp_FUN_004bbfd0(pSVar9,local_2c);
                    if (iVar6 != 0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar4;
                      }
                      if (iVar6 != 0) {
                        FUN_005bfb40
                                  (&DAT_01cc4270,"Duplicate entry '%s' in %s",local_1b4,param_1
                                  );
                        goto LAB_004bcdbb;
                      }
                      break;
                    }
                    iVar4 = iVar4 + 1;
                    pSVar9 = pSVar9 + 1;
                  } while (iVar4 < _DAT_01cc4470);
                }
                local_44 = core_fldnotes_cpp_FUN_004bc020(local_48,local_1b4,2);
              }
              else {
LAB_004bd25d:
                pbVar10 = &DAT_005dfe37;
                local_24 = local_1b4;
                pbVar12 = local_5b4;
                do {
                  pbVar14 = pbVar12;
                  pbVar12 = pbVar14 + 1;
                } while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0);
                pbVar15 = local_24;
                pSVar9 = local_48;
                bVar2 = 0x6D;
                if (*pbVar14 == 0x5c) {
                  while (local_48 = pSVar9, local_24 = pbVar15, bVar2 != 0) {
                    iVar4 = toupper((uint)*pbVar12);
                    iVar6 = toupper((uint)*pbVar10);
                    if (iVar4 != iVar6) goto LAB_004bd3d9;
                    pbVar14 = pbVar10 + 1;
                    pbVar10 = pbVar10 + 1;
                    pbVar12 = pbVar12 + 1;
                    pbVar15 = local_24;
                    pSVar9 = local_48;
                    bVar2 = *pbVar14;
                  }
                  while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
                    pbVar12 = pbVar12 + 1;
                  }
                  do {
                    bVar2 = *pbVar12;
                    *pbVar15 = bVar2;
                    if (bVar2 == 0) break;
                    bVar2 = pbVar12[1];
                    pbVar12 = pbVar12 + 2;
                    pbVar15[1] = bVar2;
                    pbVar15 = pbVar15 + 2;
                  } while (bVar2 != 0);
                  if (pSVar9 == (SNotesSection *)0x0) {
                    FUN_005bfb40
                              (&DAT_01cc4270,"Didn't expect '\\map' in %s, line %d",param_1,pcVar13);
                    goto LAB_004bcdbb;
                  }
                  if (3 < _DAT_01cc55cc) {
                    pcVar7 = "Too many maps!  (max is %d)";
                    pcVar13 = (char *)0x4;
                    goto LAB_004bcdae;
                  }
                  local_44 = core_fldnotes_cpp_FUN_004bc020(pSVar9,local_1b4,5);
                  *(int *)(local_44 + 0x158) = _DAT_01cc55cc;
                  pSVar8 = SNotesMap_ARRAY_01cc55d0 + _DAT_01cc55cc;
                  *(uint *)&SNotesMap_ARRAY_01cc55d0[_DAT_01cc55cc].field_0x2c0 = 0;
                  _DAT_01cc55cc = _DAT_01cc55cc + 1;
                  *(int *)pSVar8 = local_44;
                }
                else {
LAB_004bd3d9:
                  pcVar7 = "image";
                  local_20 = local_1b4;
                  pbVar12 = local_5b4;
                  do {
                    pbVar10 = pbVar12;
                    pbVar12 = pbVar10 + 1;
                  } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
                  pbVar14 = local_20;
                  iVar4 = local_44;
                  bVar2 = "image"[0];
                  if (*pbVar10 == 0x5c) {
                    while (local_44 = iVar4, local_20 = pbVar14, bVar2 != 0) {
                      iVar4 = toupper((uint)*pbVar12);
                      iVar6 = toupper((uint)(byte)*pcVar7);
                      if (iVar4 != iVar6) goto LAB_004bd503;
                      pbVar10 = (byte *)(pcVar7 + 1);
                      pcVar7 = pcVar7 + 1;
                      pbVar12 = pbVar12 + 1;
                      pbVar14 = local_20;
                      iVar4 = local_44;
                      bVar2 = *pbVar10;
                    }
                    while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
                      pbVar12 = pbVar12 + 1;
                    }
                    do {
                      bVar2 = *pbVar12;
                      *pbVar14 = bVar2;
                      if (bVar2 == 0) break;
                      bVar2 = pbVar12[1];
                      pbVar12 = pbVar12 + 2;
                      pbVar14[1] = bVar2;
                      pbVar14 = pbVar14 + 2;
                    } while (bVar2 != 0);
                    if ((iVar4 == 0) || (*(int *)(iVar4 + 0x140) != 5)) {
                      pcVar7 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004bcdae;
                    }
                    if (_DAT_01cc55cc < 1) {
                      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                      _DAT_01d1d404 = 0x969;
                      core_main_c_FUN_005030e0("Hell froze!");
                    }
                    iVar4 = _DAT_01cc55cc + -1;
                    iVar6 = sscanf((char *)local_1b4,"%s %d %d");
                    if (iVar6 != 3) {
                      pcVar7 = "Syntax error in \\image parms on line %d";
                      goto LAB_004bcdae;
                    }
                    if (SNotesMap_ARRAY_01cc55d0[iVar4].field_0x4 != '\0') {
                      FUN_005bfb40
                                (&DAT_01cc4270,"Multiple \\image tags found in map %s at line %d",local_44,pcVar13)
                      ;
                      goto LAB_004bcdbb;
                    }
                    engine_dosio_cpp_FUN_00479580
                              (local_b4,(char *)0x0,(char *)0x0,
                               &SNotesMap_ARRAY_01cc55d0[iVar4].field_0x4,(char *)0x0);
                  }
                  else {
LAB_004bd503:
                    pbVar10 = &DAT_005dff53;
                    local_1c = local_1b4;
                    pbVar12 = local_5b4;
                    do {
                      pbVar14 = pbVar12;
                      pbVar12 = pbVar14 + 1;
                    } while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0);
                    pbVar15 = local_1c;
                    iVar4 = local_44;
                    bVar2 = 0x73;
                    if (*pbVar14 == 0x5c) {
                      while (local_44 = iVar4, local_1c = pbVar15, bVar2 != 0) {
                        iVar4 = toupper((uint)*pbVar12);
                        iVar6 = toupper((uint)*pbVar10);
                        if (iVar4 != iVar6) goto LAB_004bd681;
                        pbVar14 = pbVar10 + 1;
                        pbVar10 = pbVar10 + 1;
                        pbVar12 = pbVar12 + 1;
                        pbVar15 = local_1c;
                        iVar4 = local_44;
                        bVar2 = *pbVar14;
                      }
                      while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
                        pbVar12 = pbVar12 + 1;
                      }
                      do {
                        bVar2 = *pbVar12;
                        *pbVar15 = bVar2;
                        if (bVar2 == 0) break;
                        bVar2 = pbVar12[1];
                        pbVar12 = pbVar12 + 2;
                        pbVar15[1] = bVar2;
                        pbVar15 = pbVar15 + 2;
                      } while (bVar2 != 0);
                      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x140) != 5)) {
                        pcVar7 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004bcdae;
                      }
                      if (_DAT_01cc55cc < 1) {
                        _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                        _DAT_01d1d404 = 0x98d;
                        core_main_c_FUN_005030e0("Hell froze!");
                      }
                      iVar6 = _DAT_01cc55cc + -1;
                      iVar4 = *(int *)&SNotesMap_ARRAY_01cc55d0[iVar6].field_0x9c;
                      if (3 < iVar4) {
                        FUN_005bfb40
                                  (&DAT_01cc4270,"Too many \\sets in map %s at line %d.",local_44,
                                   pcVar13);
                        goto LAB_004bcdbb;
                      }
                      *(int *)&SNotesMap_ARRAY_01cc55d0[iVar6].field_0x9c = iVar4 + 1;
                      iVar11 = sscanf
                                         ((char *)local_1b4,"%s %d , %d , %d , %d , %f , %f , %f , %f");
                      if (iVar11 != 9) {
                        pcVar7 = "Syntax error in \\image parms on line %d";
                        goto LAB_004bcdae;
                      }
                      engine_dosio_cpp_changeFileExtension_FUN_004796b0
                                ((char *)(iVar6 * 0x970 + 0x1cc5670 + iVar4 * 0x88),&DAT_005e001c);
                    }
                    else {
LAB_004bd681:
                      pcVar7 = "annotation";
                      local_18 = local_1b4;
                      pbVar12 = local_5b4;
                      do {
                        pbVar10 = pbVar12;
                        pbVar12 = pbVar10 + 1;
                      } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
                      pbVar14 = local_18;
                      iVar4 = local_44;
                      bVar2 = "annotation"[0];
                      if (*pbVar10 == 0x5c) {
                        while (local_44 = iVar4, local_18 = pbVar14, bVar2 != 0) {
                          iVar4 = toupper((uint)*pbVar12);
                          iVar6 = toupper((uint)(byte)*pcVar7);
                          if (iVar4 != iVar6) goto LAB_004bd820;
                          pbVar10 = (byte *)(pcVar7 + 1);
                          pcVar7 = pcVar7 + 1;
                          pbVar12 = pbVar12 + 1;
                          pbVar14 = local_18;
                          iVar4 = local_44;
                          bVar2 = *pbVar10;
                        }
                        while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
                          pbVar12 = pbVar12 + 1;
                        }
                        do {
                          bVar2 = *pbVar12;
                          *pbVar14 = bVar2;
                          if (bVar2 == 0) break;
                          bVar2 = pbVar12[1];
                          pbVar12 = pbVar12 + 2;
                          pbVar14[1] = bVar2;
                          pbVar14 = pbVar14 + 2;
                        } while (bVar2 != 0);
                        if ((iVar4 == 0) || (*(int *)(iVar4 + 0x140) != 5)) {
                          pcVar7 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004bcdae;
                        }
                        if (_DAT_01cc55cc < 1) {
                          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                          _DAT_01d1d404 = 0x9b9;
                          core_main_c_FUN_005030e0("Hell froze!");
                        }
                        iVar6 = _DAT_01cc55cc + -1;
                        iVar4 = *(int *)&SNotesMap_ARRAY_01cc55d0[iVar6].field_0x2c0;
                        if (7 < iVar4) {
                          FUN_005bfb40
                                    (&DAT_01cc4270,"Too many \\annotations in map %s at line %d.",local_44,
                                     pcVar13);
                          goto LAB_004bcdbb;
                        }
                        iVar11 = iVar4 * 0xd4 + iVar6 * 0x970 + 0x1cc5894;
                        *(int *)&SNotesMap_ARRAY_01cc55d0[iVar6].field_0x2c0 = iVar4 + 1;
                        iVar4 = sscanf((char *)local_1b4,"%[^,], %d , %d , \"%[^\"]\"");
                        if (iVar4 != 4) {
                          pcVar7 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004bcdae;
                        }
                        unkaddr_004b9ab0_cpp_FUN_004b9c50(iVar11);
                        unkaddr_004b9ab0_cpp_FUN_004b9c50(iVar11 + 100);
                        *(uint *)(iVar11 + 0xd0) = 0;
                      }
                      else {
LAB_004bd820:
                        pbVar10 = &DAT_005e00f4;
                        local_14 = local_1b4;
                        pbVar12 = local_5b4;
                        do {
                          pbVar14 = pbVar12;
                          pbVar12 = pbVar14 + 1;
                        } while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0);
                        pbVar15 = local_14;
                        p_Var3 = local_50;
                        bVar2 = 0x65;
                        if (*pbVar14 == 0x5c) {
                          while( true ) {
                            local_14 = pbVar15;
                            if (bVar2 == 0) goto LAB_004bda1e;
                            local_50 = p_Var3;
                            iVar4 = toupper((uint)*pbVar12);
                            iVar6 = toupper((uint)*pbVar10);
                            if (iVar4 != iVar6) break;
                            pbVar14 = pbVar10 + 1;
                            pbVar10 = pbVar10 + 1;
                            pbVar12 = pbVar12 + 1;
                            pbVar15 = local_14;
                            p_Var3 = local_50;
                            bVar2 = *pbVar14;
                          }
                        }
                        if (local_5b4[0] == 0x5c) {
                          FUN_005bfb40
                                    (&DAT_01cc4270,"Unknown tag: '%s' in %s, line %d",local_5b4,
                                     param_1,pcVar13);
                          goto LAB_004bcdbb;
                        }
                        if (local_44 == 0) {
                          FUN_005bfb40
                                    (&DAT_01cc4270,"No entry started in %s, line %d",param_1,
                                     pcVar13);
                          goto LAB_004bcdbb;
                        }
                        shape_edittool_cpp_CStrList_add_FUN_004994d0
                                  ((CStrList *)(local_44 + 0x148),(char *)local_5b4);
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
  pcVar13 = param_1;
LAB_004bcdae:
  FUN_005bfb40(&DAT_01cc4270,pcVar7,pcVar13);
LAB_004bcdbb:
  if (local_50 != (_FILE *)0x0) {
    _fclose(local_50);
  }
  if (param_3 == (char *)0x0) {
    shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,&DAT_01cc4270);
  }
  else {
    pcVar13 = &DAT_01cc4270;
    do {
      cVar1 = *pcVar13;
      *param_3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
  }
  core_fldnotes_cpp_FUN_004bdaa0(param_1);
  return 0;
LAB_004bda1e:
  while (((&DAT_00626114)[(byte)(*pbVar12 + 1)] & 2) != 0) {
    pbVar12 = pbVar12 + 1;
  }
  do {
    bVar2 = *pbVar12;
    *pbVar15 = bVar2;
    local_50 = p_Var3;
    if (bVar2 == 0) break;
    bVar2 = pbVar12[1];
    pbVar12 = pbVar12 + 2;
    pbVar15[1] = bVar2;
    pbVar15 = pbVar15 + 2;
  } while (bVar2 != 0);
LAB_004bccbd:
  iVar4 = 0;
  _fclose(local_50);
  local_50 = (_FILE *)0x0;
  if (0 < _DAT_01cc55cc) {
    pSVar8 = SNotesMap_ARRAY_01cc55d0;
    do {
      core_fldnotes_cpp_FUN_004bc2d0(pSVar8);
      iVar4 = iVar4 + 1;
      pSVar8 = pSVar8 + 1;
    } while (iVar4 < _DAT_01cc55cc);
  }
  DAT_0061d2e4 = 1;
  DAT_0061d2e0 = 1;
  if (param_3 != (char *)0x0) {
    core_fldnotes_cpp_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar4 = 0;
    core_fldnotes_cpp_FUN_004bb1c0(&g_STextViewInstance);
    DAT_01cc4270 = 0;
    DAT_0061d2e4 = 0;
    if (0 < _DAT_01cc4470) {
      pSVar9 = SNotesSection_ARRAY_01cc4474;
      do {
        iVar6 = core_fldnotes_cpp_FUN_004bc130(pSVar9,&g_STextViewInstance);
        if (iVar6 == 0) goto LAB_004bcdbb;
        iVar4 = iVar4 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iVar4 < _DAT_01cc4470);
    }
  }
  return 1;
}
