// Name: core_fldnotes.cpp_FUN_004a41b0
// Address: 004a41b0
// Address Range: [[004a41b0, 004a50ad]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a41b0(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004a41b0(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  _FILE *p_Var3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  SNotesMap *pSVar7;
  SNotesSection *pSVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
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
  core_fldnotes_cpp_FUN_004a50b0(param_1);
  pcVar12 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  _DAT_01cab7e8 = (uint)(param_3 != (char *)0x0);
  local_4c = engine_dosio_cpp_getFileSize_FUN_00460aa0("world",param_1);
  if (-1 < local_4c) {
    local_50 = engine_dosio_cpp_FUN_00460c70("world",param_1,&DAT_005d5ea3);
    if (local_50 == (_FILE *)0x0) {
      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
      _DAT_01d046a4 = 0x889;
      core_main_c_FUN_004e4500("Can't open field notes file %s",param_1);
    }
    iVar4 = _ftell(local_50);
    local_48 = (SNotesSection *)0x0;
    local_44 = 0;
    local_4c = local_4c + iVar4;
    do {
      iVar4 = _ftell(local_50);
      if ((local_4c <= iVar4) ||
         (puVar5 = (byte *)_fgets(local_5b4,0x400,local_50),
         puVar5 != local_5b4)) goto LAB_004a42cd;
      pcVar12 = strstr((char *)local_5b4,&DAT_005d59e0);
      if (pcVar12 != (char *)0x0) {
        *pcVar12 = '\0';
      }
      unkaddr_004a1200_cpp_FUN_004a1390(local_5b4);
      if (local_5b4[0] != 0) {
        pcVar12 = "section";
        local_40 = local_1b4;
        pbVar11 = local_5b4;
        do {
          pbVar9 = pbVar11;
          pbVar11 = pbVar9 + 1;
        } while (((&DAT_0061ed94)[(byte)(*pbVar9 + 1)] & 2) != 0);
        pbVar13 = local_40;
        bVar2 = "section"[0];
        if (*pbVar9 == 0x5c) {
          while (local_40 = pbVar13, bVar2 != 0) {
            iVar4 = toupper((uint)*pbVar11);
            iVar6 = toupper((uint)(byte)*pcVar12);
            if (iVar4 != iVar6) goto LAB_004a44c4;
            pbVar9 = (byte *)(pcVar12 + 1);
            pcVar12 = pcVar12 + 1;
            pbVar11 = pbVar11 + 1;
            pbVar13 = local_40;
            bVar2 = *pbVar9;
          }
          while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
            pbVar11 = pbVar11 + 1;
          }
          do {
            bVar2 = *pbVar11;
            *pbVar13 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar11[1];
            pbVar11 = pbVar11 + 2;
            pbVar13[1] = bVar2;
            pbVar13 = pbVar13 + 2;
          } while (bVar2 != 0);
          if (5 < _DAT_01cab9f0) {
            _sprintf(&DAT_01cab7f0,"Too many field notes sections in %s, line %d");
            goto LAB_004a43cb;
          }
          local_48 = SNotesSection_ARRAY_01cab9f4 + _DAT_01cab9f0;
          pbVar11 = local_1b4;
          pSVar8 = local_48;
          do {
            bVar2 = *pbVar11;
            *(byte *)pSVar8 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar11[1];
            pbVar11 = pbVar11 + 2;
            pSVar8->field_0x1 = bVar2;
            pSVar8 = (SNotesSection *)&pSVar8->field_0x2;
          } while (bVar2 != 0);
          local_44 = 0;
          _DAT_01cab9f0 = _DAT_01cab9f0 + 1;
        }
        else {
LAB_004a44c4:
          pcVar12 = "title";
          local_3c = local_1b4;
          pbVar11 = local_5b4;
          do {
            pbVar9 = pbVar11;
            pbVar11 = pbVar9 + 1;
          } while (((&DAT_0061ed94)[(byte)(*pbVar9 + 1)] & 2) != 0);
          pbVar13 = local_3c;
          pSVar8 = local_48;
          iVar4 = local_44;
          bVar2 = "title"[0];
          if (*pbVar9 == 0x5c) {
            while (local_48 = pSVar8, local_44 = iVar4, local_3c = pbVar13, bVar2 != 0) {
              iVar4 = toupper((uint)*pbVar11);
              iVar6 = toupper((uint)(byte)*pcVar12);
              if (iVar4 != iVar6) goto LAB_004a45df;
              pbVar9 = (byte *)(pcVar12 + 1);
              pcVar12 = pcVar12 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar13 = local_3c;
              pSVar8 = local_48;
              iVar4 = local_44;
              bVar2 = *pbVar9;
            }
            while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
              pbVar11 = pbVar11 + 1;
            }
            do {
              bVar2 = *pbVar11;
              *pbVar13 = bVar2;
              if (bVar2 == 0) break;
              bVar2 = pbVar11[1];
              pbVar11 = pbVar11 + 2;
              pbVar13[1] = bVar2;
              pbVar13 = pbVar13 + 2;
            } while (bVar2 != 0);
            if (iVar4 == 0) {
              if (pSVar8 == (SNotesSection *)0x0) {
                _sprintf(&DAT_01cab7f0,"Didn't expect '\\title' in %s, line %d");
                goto LAB_004a43cb;
              }
              pbVar9 = local_1b4;
              pbVar11 = &pSVar8->field_0x40;
              do {
                bVar2 = *pbVar9;
                *pbVar11 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar9[1];
                pbVar9 = pbVar9 + 2;
                pbVar11[1] = bVar2;
                pbVar11 = pbVar11 + 2;
              } while (bVar2 != 0);
            }
            else {
              pbVar11 = local_1b4;
              pbVar9 = (byte *)(iVar4 + 0x40);
              do {
                bVar2 = *pbVar11;
                *pbVar9 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar11[1];
                pbVar11 = pbVar11 + 2;
                pbVar9[1] = bVar2;
                pbVar9 = pbVar9 + 2;
              } while (bVar2 != 0);
            }
          }
          else {
LAB_004a45df:
            pcVar12 = "entry";
            local_38 = local_1b4;
            pbVar11 = local_5b4;
            do {
              pbVar9 = pbVar11;
              pbVar11 = pbVar9 + 1;
            } while (((&DAT_0061ed94)[(byte)(*pbVar9 + 1)] & 2) != 0);
            pbVar13 = local_38;
            pSVar8 = local_48;
            bVar2 = "entry"[0];
            if (*pbVar9 == 0x5c) {
              while (local_48 = pSVar8, local_38 = pbVar13, bVar2 != 0) {
                iVar4 = toupper((uint)*pbVar11);
                iVar6 = toupper((uint)(byte)*pcVar12);
                if (iVar4 != iVar6) goto LAB_004a4705;
                pbVar9 = (byte *)(pcVar12 + 1);
                pcVar12 = pcVar12 + 1;
                pbVar11 = pbVar11 + 1;
                pbVar13 = local_38;
                pSVar8 = local_48;
                bVar2 = *pbVar9;
              }
              while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
                pbVar11 = pbVar11 + 1;
              }
              do {
                bVar2 = *pbVar11;
                *pbVar13 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar11[1];
                pbVar11 = pbVar11 + 2;
                pbVar13[1] = bVar2;
                pbVar13 = pbVar13 + 2;
              } while (bVar2 != 0);
              if (pSVar8 == (SNotesSection *)0x0) {
                _sprintf(&DAT_01cab7f0,"Didn't expect '\\entry' in %s, line %d");
                goto LAB_004a43cb;
              }
              iVar4 = 0;
              local_34 = (int *)0x0;
              if (0 < _DAT_01cab9f0) {
                pSVar8 = SNotesSection_ARRAY_01cab9f4;
                do {
                  iVar6 = core_fldnotes_cpp_FUN_004a35e0(pSVar8,local_1b4);
                  if (iVar6 != 0) {
                    if (local_34 != (int *)0x0) {
                      *local_34 = iVar4;
                    }
                    if (iVar6 != 0) {
                      _sprintf(&DAT_01cab7f0,"Duplicate entry '%s' in %s");
                      goto LAB_004a43cb;
                    }
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  pSVar8 = pSVar8 + 1;
                } while (iVar4 < _DAT_01cab9f0);
              }
              local_44 = core_fldnotes_cpp_FUN_004a3630(local_48,local_1b4,0);
            }
            else {
LAB_004a4705:
              pbVar9 = &DAT_005d5f88;
              local_30 = local_1b4;
              pbVar11 = local_5b4;
              do {
                pbVar13 = pbVar11;
                pbVar11 = pbVar13 + 1;
              } while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0);
              pbVar14 = local_30;
              pSVar8 = local_48;
              bVar2 = 0x74;
              if (*pbVar13 == 0x5c) {
                while (local_48 = pSVar8, local_30 = pbVar14, bVar2 != 0) {
                  iVar4 = toupper((uint)*pbVar11);
                  iVar6 = toupper((uint)*pbVar9);
                  if (iVar4 != iVar6) goto LAB_004a486d;
                  pbVar13 = pbVar9 + 1;
                  pbVar9 = pbVar9 + 1;
                  pbVar11 = pbVar11 + 1;
                  pbVar14 = local_30;
                  pSVar8 = local_48;
                  bVar2 = *pbVar13;
                }
                while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
                  pbVar11 = pbVar11 + 1;
                }
                do {
                  bVar2 = *pbVar11;
                  *pbVar14 = bVar2;
                  if (bVar2 == 0) break;
                  bVar2 = pbVar11[1];
                  pbVar11 = pbVar11 + 2;
                  pbVar14[1] = bVar2;
                  pbVar14 = pbVar14 + 2;
                } while (bVar2 != 0);
                if (pSVar8 == (SNotesSection *)0x0) {
                  _sprintf(&DAT_01cab7f0,"Didn't expect '\\task' in %s, line %d");
                  goto LAB_004a43cb;
                }
                local_2c = local_1b4;
                iVar4 = 0;
                local_28 = (int *)0x0;
                if (0 < _DAT_01cab9f0) {
                  pSVar8 = SNotesSection_ARRAY_01cab9f4;
                  do {
                    iVar6 = core_fldnotes_cpp_FUN_004a35e0(pSVar8,local_2c);
                    if (iVar6 != 0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar4;
                      }
                      if (iVar6 != 0) {
                        _sprintf(&DAT_01cab7f0,"Duplicate entry '%s' in %s");
                        goto LAB_004a43cb;
                      }
                      break;
                    }
                    iVar4 = iVar4 + 1;
                    pSVar8 = pSVar8 + 1;
                  } while (iVar4 < _DAT_01cab9f0);
                }
                local_44 = core_fldnotes_cpp_FUN_004a3630(local_48,local_1b4,2);
              }
              else {
LAB_004a486d:
                pbVar9 = &DAT_005d5fcd;
                local_24 = local_1b4;
                pbVar11 = local_5b4;
                do {
                  pbVar13 = pbVar11;
                  pbVar11 = pbVar13 + 1;
                } while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0);
                pbVar14 = local_24;
                pSVar8 = local_48;
                bVar2 = 0x6D;
                if (*pbVar13 == 0x5c) {
                  while (local_48 = pSVar8, local_24 = pbVar14, bVar2 != 0) {
                    iVar4 = toupper((uint)*pbVar11);
                    iVar6 = toupper((uint)*pbVar9);
                    if (iVar4 != iVar6) goto LAB_004a49e9;
                    pbVar13 = pbVar9 + 1;
                    pbVar9 = pbVar9 + 1;
                    pbVar11 = pbVar11 + 1;
                    pbVar14 = local_24;
                    pSVar8 = local_48;
                    bVar2 = *pbVar13;
                  }
                  while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
                    pbVar11 = pbVar11 + 1;
                  }
                  do {
                    bVar2 = *pbVar11;
                    *pbVar14 = bVar2;
                    if (bVar2 == 0) break;
                    bVar2 = pbVar11[1];
                    pbVar11 = pbVar11 + 2;
                    pbVar14[1] = bVar2;
                    pbVar14 = pbVar14 + 2;
                  } while (bVar2 != 0);
                  if (pSVar8 == (SNotesSection *)0x0) {
                    _sprintf(&DAT_01cab7f0,"Didn't expect '\\map' in %s, line %d");
                    goto LAB_004a43cb;
                  }
                  if (3 < _DAT_01cacb4c) {
                    pcVar12 = "Too many maps!  (max is %d)";
                    goto LAB_004a43be;
                  }
                  local_44 = core_fldnotes_cpp_FUN_004a3630(pSVar8,local_1b4,5);
                  *(int *)(local_44 + 0x158) = _DAT_01cacb4c;
                  pSVar7 = SNotesMap_ARRAY_01cacb50 + _DAT_01cacb4c;
                  *(uint *)&SNotesMap_ARRAY_01cacb50[_DAT_01cacb4c].field_0x2c0 = 0;
                  _DAT_01cacb4c = _DAT_01cacb4c + 1;
                  *(int *)pSVar7 = local_44;
                }
                else {
LAB_004a49e9:
                  pcVar12 = "image";
                  local_20 = local_1b4;
                  pbVar11 = local_5b4;
                  do {
                    pbVar9 = pbVar11;
                    pbVar11 = pbVar9 + 1;
                  } while (((&DAT_0061ed94)[(byte)(*pbVar9 + 1)] & 2) != 0);
                  pbVar13 = local_20;
                  iVar4 = local_44;
                  bVar2 = "image"[0];
                  if (*pbVar9 == 0x5c) {
                    while (local_44 = iVar4, local_20 = pbVar13, bVar2 != 0) {
                      iVar4 = toupper((uint)*pbVar11);
                      iVar6 = toupper((uint)(byte)*pcVar12);
                      if (iVar4 != iVar6) goto LAB_004a4b13;
                      pbVar9 = (byte *)(pcVar12 + 1);
                      pcVar12 = pcVar12 + 1;
                      pbVar11 = pbVar11 + 1;
                      pbVar13 = local_20;
                      iVar4 = local_44;
                      bVar2 = *pbVar9;
                    }
                    while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
                      pbVar11 = pbVar11 + 1;
                    }
                    do {
                      bVar2 = *pbVar11;
                      *pbVar13 = bVar2;
                      if (bVar2 == 0) break;
                      bVar2 = pbVar11[1];
                      pbVar11 = pbVar11 + 2;
                      pbVar13[1] = bVar2;
                      pbVar13 = pbVar13 + 2;
                    } while (bVar2 != 0);
                    if ((iVar4 == 0) || (*(int *)(iVar4 + 0x140) != 5)) {
                      pcVar12 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004a43be;
                    }
                    if (_DAT_01cacb4c < 1) {
                      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
                      _DAT_01d046a4 = 0x904;
                      core_main_c_FUN_004e4500("Hell froze!");
                    }
                    iVar4 = _DAT_01cacb4c + -1;
                    iVar6 = sscanf((char *)local_1b4,"%s %d %d");
                    if (iVar6 != 3) {
                      pcVar12 = "Syntax error in \\image parms on line %d";
                      goto LAB_004a43be;
                    }
                    if (SNotesMap_ARRAY_01cacb50[iVar4].field_0x4 != '\0') {
                      _sprintf(&DAT_01cab7f0,"Multiple \\image tags found in map %s at line %d");
                      goto LAB_004a43cb;
                    }
                    engine_dosio_cpp_splitPath_FUN_00461070
                              (local_b4,(char *)0x0,(char *)0x0,
                               &SNotesMap_ARRAY_01cacb50[iVar4].field_0x4,(char *)0x0);
                  }
                  else {
LAB_004a4b13:
                    pbVar9 = &DAT_005d60e9;
                    local_1c = local_1b4;
                    pbVar11 = local_5b4;
                    do {
                      pbVar13 = pbVar11;
                      pbVar11 = pbVar13 + 1;
                    } while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0);
                    pbVar14 = local_1c;
                    iVar4 = local_44;
                    bVar2 = 0x73;
                    if (*pbVar13 == 0x5c) {
                      while (local_44 = iVar4, local_1c = pbVar14, bVar2 != 0) {
                        iVar4 = toupper((uint)*pbVar11);
                        iVar6 = toupper((uint)*pbVar9);
                        if (iVar4 != iVar6) goto LAB_004a4c91;
                        pbVar13 = pbVar9 + 1;
                        pbVar9 = pbVar9 + 1;
                        pbVar11 = pbVar11 + 1;
                        pbVar14 = local_1c;
                        iVar4 = local_44;
                        bVar2 = *pbVar13;
                      }
                      while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
                        pbVar11 = pbVar11 + 1;
                      }
                      do {
                        bVar2 = *pbVar11;
                        *pbVar14 = bVar2;
                        if (bVar2 == 0) break;
                        bVar2 = pbVar11[1];
                        pbVar11 = pbVar11 + 2;
                        pbVar14[1] = bVar2;
                        pbVar14 = pbVar14 + 2;
                      } while (bVar2 != 0);
                      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x140) != 5)) {
                        pcVar12 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004a43be;
                      }
                      if (_DAT_01cacb4c < 1) {
                        _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
                        _DAT_01d046a4 = 0x928;
                        core_main_c_FUN_004e4500("Hell froze!");
                      }
                      iVar6 = _DAT_01cacb4c + -1;
                      iVar4 = *(int *)&SNotesMap_ARRAY_01cacb50[iVar6].field_0x9c;
                      if (3 < iVar4) {
                        _sprintf(&DAT_01cab7f0,"Too many \\sets in map %s at line %d.");
                        goto LAB_004a43cb;
                      }
                      *(int *)&SNotesMap_ARRAY_01cacb50[iVar6].field_0x9c = iVar4 + 1;
                      iVar10 = sscanf
                                         ((char *)local_1b4,"%s %d , %d , %d , %d , %f , %f , %f , %f");
                      if (iVar10 != 9) {
                        pcVar12 = "Syntax error in \\image parms on line %d";
                        goto LAB_004a43be;
                      }
                      engine_dosio_cpp_changeFileExtension_FUN_004611a0
                                ((char *)(iVar6 * 0x970 + 0x1cacbf0 + iVar4 * 0x88),&DAT_005d61b2);
                    }
                    else {
LAB_004a4c91:
                      pcVar12 = "annotation";
                      local_18 = local_1b4;
                      pbVar11 = local_5b4;
                      do {
                        pbVar9 = pbVar11;
                        pbVar11 = pbVar9 + 1;
                      } while (((&DAT_0061ed94)[(byte)(*pbVar9 + 1)] & 2) != 0);
                      pbVar13 = local_18;
                      iVar4 = local_44;
                      bVar2 = "annotation"[0];
                      if (*pbVar9 == 0x5c) {
                        while (local_44 = iVar4, local_18 = pbVar13, bVar2 != 0) {
                          iVar4 = toupper((uint)*pbVar11);
                          iVar6 = toupper((uint)(byte)*pcVar12);
                          if (iVar4 != iVar6) goto LAB_004a4e30;
                          pbVar9 = (byte *)(pcVar12 + 1);
                          pcVar12 = pcVar12 + 1;
                          pbVar11 = pbVar11 + 1;
                          pbVar13 = local_18;
                          iVar4 = local_44;
                          bVar2 = *pbVar9;
                        }
                        while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
                          pbVar11 = pbVar11 + 1;
                        }
                        do {
                          bVar2 = *pbVar11;
                          *pbVar13 = bVar2;
                          if (bVar2 == 0) break;
                          bVar2 = pbVar11[1];
                          pbVar11 = pbVar11 + 2;
                          pbVar13[1] = bVar2;
                          pbVar13 = pbVar13 + 2;
                        } while (bVar2 != 0);
                        if ((iVar4 == 0) || (*(int *)(iVar4 + 0x140) != 5)) {
                          pcVar12 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004a43be;
                        }
                        if (_DAT_01cacb4c < 1) {
                          _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
                          _DAT_01d046a4 = 0x954;
                          core_main_c_FUN_004e4500("Hell froze!");
                        }
                        iVar6 = _DAT_01cacb4c + -1;
                        iVar4 = *(int *)&SNotesMap_ARRAY_01cacb50[iVar6].field_0x2c0;
                        if (7 < iVar4) {
                          _sprintf(&DAT_01cab7f0,"Too many \\annotations in map %s at line %d.");
                          goto LAB_004a43cb;
                        }
                        iVar10 = iVar4 * 0xd4 + iVar6 * 0x970 + 0x1cace14;
                        *(int *)&SNotesMap_ARRAY_01cacb50[iVar6].field_0x2c0 = iVar4 + 1;
                        iVar4 = sscanf((char *)local_1b4,"%[^,], %d , %d , \"%[^\"]\"");
                        if (iVar4 != 4) {
                          pcVar12 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004a43be;
                        }
                        unkaddr_004a1200_cpp_FUN_004a1390(iVar10);
                        unkaddr_004a1200_cpp_FUN_004a1390(iVar10 + 100);
                        *(uint *)(iVar10 + 0xd0) = 0;
                      }
                      else {
LAB_004a4e30:
                        pbVar9 = &DAT_005d628a;
                        local_14 = local_1b4;
                        pbVar11 = local_5b4;
                        do {
                          pbVar13 = pbVar11;
                          pbVar11 = pbVar13 + 1;
                        } while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0);
                        pbVar14 = local_14;
                        p_Var3 = local_50;
                        bVar2 = 0x65;
                        if (*pbVar13 == 0x5c) {
                          while( true ) {
                            local_14 = pbVar14;
                            if (bVar2 == 0) goto LAB_004a502e;
                            local_50 = p_Var3;
                            iVar4 = toupper((uint)*pbVar11);
                            iVar6 = toupper((uint)*pbVar9);
                            if (iVar4 != iVar6) break;
                            pbVar13 = pbVar9 + 1;
                            pbVar9 = pbVar9 + 1;
                            pbVar11 = pbVar11 + 1;
                            pbVar14 = local_14;
                            p_Var3 = local_50;
                            bVar2 = *pbVar13;
                          }
                        }
                        if (local_5b4[0] == 0x5c) {
                          _sprintf(&DAT_01cab7f0,"Unknown tag: '%s' in %s, line %d");
                          goto LAB_004a43cb;
                        }
                        if (local_44 == 0) {
                          _sprintf(&DAT_01cab7f0,"No entry started in %s, line %d");
                          goto LAB_004a43cb;
                        }
                        shape_edittool_cpp_CStrList_add_FUN_00480e70
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
  pcVar12 = "Can't open field notes file %s";
LAB_004a43be:
  _sprintf(&DAT_01cab7f0,pcVar12);
LAB_004a43cb:
  if (local_50 != (_FILE *)0x0) {
    _fclose(local_50);
  }
  if (param_3 == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,&DAT_01cab7f0);
  }
  else {
    pcVar12 = &DAT_01cab7f0;
    do {
      cVar1 = *pcVar12;
      *param_3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
  }
  core_fldnotes_cpp_FUN_004a50b0(param_1);
  return 0;
LAB_004a502e:
  while (((&DAT_0061ed94)[(byte)(*pbVar11 + 1)] & 2) != 0) {
    pbVar11 = pbVar11 + 1;
  }
  do {
    bVar2 = *pbVar11;
    *pbVar14 = bVar2;
    local_50 = p_Var3;
    if (bVar2 == 0) break;
    bVar2 = pbVar11[1];
    pbVar11 = pbVar11 + 2;
    pbVar14[1] = bVar2;
    pbVar14 = pbVar14 + 2;
  } while (bVar2 != 0);
LAB_004a42cd:
  iVar4 = 0;
  _fclose(local_50);
  local_50 = (_FILE *)0x0;
  if (0 < _DAT_01cacb4c) {
    pSVar7 = SNotesMap_ARRAY_01cacb50;
    do {
      core_fldnotes_cpp_FUN_004a38e0(pSVar7);
      iVar4 = iVar4 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar4 < _DAT_01cacb4c);
  }
  DAT_00616014 = 1;
  DAT_00616010 = 1;
  if (param_3 != (char *)0x0) {
    core_fldnotes_cpp_FUN_004a2890(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar4 = 0;
    core_fldnotes_cpp_FUN_004a27e0(&g_STextViewInstance);
    DAT_01cab7f0 = 0;
    if (0 < _DAT_01cab9f0) {
      pSVar8 = SNotesSection_ARRAY_01cab9f4;
      do {
        iVar6 = core_fldnotes_cpp_FUN_004a3740(pSVar8,&g_STextViewInstance);
        if (iVar6 == 0) goto LAB_004a43cb;
        iVar4 = iVar4 + 1;
        pSVar8 = pSVar8 + 1;
      } while (iVar4 < _DAT_01cab9f0);
    }
    DAT_00616014 = 0;
  }
  return 1;
}
