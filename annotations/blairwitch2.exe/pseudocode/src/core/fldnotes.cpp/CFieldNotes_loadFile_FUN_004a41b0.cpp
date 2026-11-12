// Name: core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0
// Address: 004a41b0
// Address Range: [[004a41b0, 004a50ad]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004a41b0(CFieldNotes *this_ptr,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004a41b0(CFieldNotes *this_ptr,char *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  SNotesEntry *pSVar3;
  _FILE *p_Var4;
  int iVar5;
  byte *puVar6;
  int iVar7;
  SNotesMap *pSVar8;
  SNotesSection *pSVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  CFieldNotes *pCVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte local_5b4 [1024];
  byte local_1b4 [256];
  char local_b4 [100];
  _FILE *local_50;
  int local_4c;
  SNotesSection *local_48;
  SNotesEntry *local_44;
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
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(this_ptr);
  pCVar14 = this_ptr;
  do {
    cVar1 = *param_2;
    pCVar14->file_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pCVar14->file_name[1] = cVar1;
    pCVar14 = (CFieldNotes *)(pCVar14->file_name + 2);
  } while (cVar1 != '\0');
  _DAT_01cab7e8 = (uint)(param_3 != (char *)0x0);
  local_4c = engine_dosio_cpp_getFileSize_FUN_00460aa0("world",this_ptr->file_name);
  if (-1 < local_4c) {
    local_50 = engine_dosio_cpp_FUN_00460c70("world",this_ptr->file_name,&DAT_005d5ea3);
    if (local_50 == (_FILE *)0x0) {
      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
      _DAT_01d046a4 = 0x889;
      core_main_c_FUN_004e4500("Can't open field notes file %s",this_ptr);
    }
    iVar5 = _ftell(local_50);
    local_48 = (SNotesSection *)0x0;
    local_44 = (SNotesEntry *)0x0;
    local_4c = local_4c + iVar5;
    do {
      iVar5 = _ftell(local_50);
      if ((local_4c <= iVar5) ||
         (puVar6 = (byte *)_fgets(local_5b4,0x400,local_50),
         puVar6 != local_5b4)) goto LAB_004a42cd;
      pcVar12 = strstr((char *)local_5b4,&DAT_005d59e0);
      if (pcVar12 != (char *)0x0) {
        *pcVar12 = '\0';
      }
      core_flashlit_cpp_FUN_004a1390(local_5b4);
      if (local_5b4[0] != 0) {
        pcVar12 = "section";
        local_40 = local_1b4;
        pbVar13 = local_5b4;
        do {
          pbVar10 = pbVar13;
          pbVar13 = pbVar10 + 1;
        } while (((&DAT_0061ed94)[(byte)(*pbVar10 + 1)] & 2) != 0);
        pbVar15 = local_40;
        bVar2 = "section"[0];
        if (*pbVar10 == 0x5c) {
          while (local_40 = pbVar15, bVar2 != 0) {
            iVar5 = toupper((uint)*pbVar13);
            iVar7 = toupper((uint)(byte)*pcVar12);
            if (iVar5 != iVar7) goto LAB_004a44c4;
            pbVar10 = (byte *)(pcVar12 + 1);
            pcVar12 = pcVar12 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar15 = local_40;
            bVar2 = *pbVar10;
          }
          while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
            pbVar13 = pbVar13 + 1;
          }
          do {
            bVar2 = *pbVar13;
            *pbVar15 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar13[1];
            pbVar13 = pbVar13 + 2;
            pbVar15[1] = bVar2;
            pbVar15 = pbVar15 + 2;
          } while (bVar2 != 0);
          if (5 < _DAT_01cab9f0) {
            _sprintf(&DAT_01cab7f0,"Too many field notes sections in %s, line %d");
            goto LAB_004a43cb;
          }
          local_48 = SNotesSection_ARRAY_01cab9f4 + _DAT_01cab9f0;
          pbVar13 = local_1b4;
          pSVar9 = local_48;
          do {
            bVar2 = *pbVar13;
            pSVar9->name[0] = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar13[1];
            pbVar13 = pbVar13 + 2;
            pSVar9->name[1] = bVar2;
            pSVar9 = (SNotesSection *)(pSVar9->name + 2);
          } while (bVar2 != 0);
          local_44 = (SNotesEntry *)0x0;
          _DAT_01cab9f0 = _DAT_01cab9f0 + 1;
        }
        else {
LAB_004a44c4:
          pcVar12 = "title";
          local_3c = local_1b4;
          pbVar13 = local_5b4;
          do {
            pbVar10 = pbVar13;
            pbVar13 = pbVar10 + 1;
          } while (((&DAT_0061ed94)[(byte)(*pbVar10 + 1)] & 2) != 0);
          pbVar15 = local_3c;
          pSVar9 = local_48;
          pSVar3 = local_44;
          bVar2 = "title"[0];
          if (*pbVar10 == 0x5c) {
            while (local_48 = pSVar9, local_44 = pSVar3, local_3c = pbVar15, bVar2 != 0) {
              iVar5 = toupper((uint)*pbVar13);
              iVar7 = toupper((uint)(byte)*pcVar12);
              if (iVar5 != iVar7) goto LAB_004a45df;
              pbVar10 = (byte *)(pcVar12 + 1);
              pcVar12 = pcVar12 + 1;
              pbVar13 = pbVar13 + 1;
              pbVar15 = local_3c;
              pSVar9 = local_48;
              pSVar3 = local_44;
              bVar2 = *pbVar10;
            }
            while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
              pbVar13 = pbVar13 + 1;
            }
            do {
              bVar2 = *pbVar13;
              *pbVar15 = bVar2;
              if (bVar2 == 0) break;
              bVar2 = pbVar13[1];
              pbVar13 = pbVar13 + 2;
              pbVar15[1] = bVar2;
              pbVar15 = pbVar15 + 2;
            } while (bVar2 != 0);
            if (pSVar3 == (SNotesEntry *)0x0) {
              if (pSVar9 == (SNotesSection *)0x0) {
                _sprintf(&DAT_01cab7f0,"Didn't expect '\\title' in %s, line %d");
                goto LAB_004a43cb;
              }
              pbVar13 = local_1b4;
              pcVar12 = pSVar9->title;
              do {
                bVar2 = *pbVar13;
                *pcVar12 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar13[1];
                pbVar13 = pbVar13 + 2;
                pcVar12[1] = bVar2;
                pcVar12 = pcVar12 + 2;
              } while (bVar2 != 0);
            }
            else {
              pbVar13 = local_1b4;
              pcVar12 = pSVar3->title;
              do {
                bVar2 = *pbVar13;
                *pcVar12 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar13[1];
                pbVar13 = pbVar13 + 2;
                pcVar12[1] = bVar2;
                pcVar12 = pcVar12 + 2;
              } while (bVar2 != 0);
            }
          }
          else {
LAB_004a45df:
            pcVar12 = "entry";
            local_38 = local_1b4;
            pbVar13 = local_5b4;
            do {
              pbVar10 = pbVar13;
              pbVar13 = pbVar10 + 1;
            } while (((&DAT_0061ed94)[(byte)(*pbVar10 + 1)] & 2) != 0);
            pbVar15 = local_38;
            pSVar9 = local_48;
            bVar2 = "entry"[0];
            if (*pbVar10 == 0x5c) {
              while (local_48 = pSVar9, local_38 = pbVar15, bVar2 != 0) {
                iVar5 = toupper((uint)*pbVar13);
                iVar7 = toupper((uint)(byte)*pcVar12);
                if (iVar5 != iVar7) goto LAB_004a4705;
                pbVar10 = (byte *)(pcVar12 + 1);
                pcVar12 = pcVar12 + 1;
                pbVar13 = pbVar13 + 1;
                pbVar15 = local_38;
                pSVar9 = local_48;
                bVar2 = *pbVar10;
              }
              while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
                pbVar13 = pbVar13 + 1;
              }
              do {
                bVar2 = *pbVar13;
                *pbVar15 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar13[1];
                pbVar13 = pbVar13 + 2;
                pbVar15[1] = bVar2;
                pbVar15 = pbVar15 + 2;
              } while (bVar2 != 0);
              if (pSVar9 == (SNotesSection *)0x0) {
                _sprintf(&DAT_01cab7f0,"Didn't expect '\\entry' in %s, line %d");
                goto LAB_004a43cb;
              }
              iVar5 = 0;
              local_34 = (int *)0x0;
              if (0 < _DAT_01cab9f0) {
                pSVar9 = SNotesSection_ARRAY_01cab9f4;
                do {
                  iVar7 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0
                                    (pSVar9,(char *)local_1b4);
                  if (iVar7 != 0) {
                    if (local_34 != (int *)0x0) {
                      *local_34 = iVar5;
                    }
                    if (iVar7 != 0) {
                      _sprintf(&DAT_01cab7f0,"Duplicate entry '%s' in %s");
                      goto LAB_004a43cb;
                    }
                    break;
                  }
                  iVar5 = iVar5 + 1;
                  pSVar9 = pSVar9 + 1;
                } while (iVar5 < _DAT_01cab9f0);
              }
              local_44 = (SNotesEntry *)
                         core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a3630
                                   (local_48,(char *)local_1b4,0);
            }
            else {
LAB_004a4705:
              pbVar10 = &DAT_005d5f88;
              local_30 = local_1b4;
              pbVar13 = local_5b4;
              do {
                pbVar15 = pbVar13;
                pbVar13 = pbVar15 + 1;
              } while (((&DAT_0061ed94)[(byte)(*pbVar15 + 1)] & 2) != 0);
              pbVar16 = local_30;
              pSVar9 = local_48;
              bVar2 = 0x74;
              if (*pbVar15 == 0x5c) {
                while (local_48 = pSVar9, local_30 = pbVar16, bVar2 != 0) {
                  iVar5 = toupper((uint)*pbVar13);
                  iVar7 = toupper((uint)*pbVar10);
                  if (iVar5 != iVar7) goto LAB_004a486d;
                  pbVar15 = pbVar10 + 1;
                  pbVar10 = pbVar10 + 1;
                  pbVar13 = pbVar13 + 1;
                  pbVar16 = local_30;
                  pSVar9 = local_48;
                  bVar2 = *pbVar15;
                }
                while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
                  pbVar13 = pbVar13 + 1;
                }
                do {
                  bVar2 = *pbVar13;
                  *pbVar16 = bVar2;
                  if (bVar2 == 0) break;
                  bVar2 = pbVar13[1];
                  pbVar13 = pbVar13 + 2;
                  pbVar16[1] = bVar2;
                  pbVar16 = pbVar16 + 2;
                } while (bVar2 != 0);
                if (pSVar9 == (SNotesSection *)0x0) {
                  _sprintf(&DAT_01cab7f0,"Didn't expect '\\task' in %s, line %d");
                  goto LAB_004a43cb;
                }
                local_2c = local_1b4;
                iVar5 = 0;
                local_28 = (int *)0x0;
                if (0 < _DAT_01cab9f0) {
                  pSVar9 = SNotesSection_ARRAY_01cab9f4;
                  do {
                    iVar7 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0
                                      (pSVar9,(char *)local_2c);
                    if (iVar7 != 0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar5;
                      }
                      if (iVar7 != 0) {
                        _sprintf(&DAT_01cab7f0,"Duplicate entry '%s' in %s");
                        goto LAB_004a43cb;
                      }
                      break;
                    }
                    iVar5 = iVar5 + 1;
                    pSVar9 = pSVar9 + 1;
                  } while (iVar5 < _DAT_01cab9f0);
                }
                local_44 = (SNotesEntry *)
                           core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a3630
                                     (local_48,(char *)local_1b4,2);
              }
              else {
LAB_004a486d:
                pbVar10 = &DAT_005d5fcd;
                local_24 = local_1b4;
                pbVar13 = local_5b4;
                do {
                  pbVar15 = pbVar13;
                  pbVar13 = pbVar15 + 1;
                } while (((&DAT_0061ed94)[(byte)(*pbVar15 + 1)] & 2) != 0);
                pbVar16 = local_24;
                pSVar9 = local_48;
                bVar2 = 0x6D;
                if (*pbVar15 == 0x5c) {
                  while (local_48 = pSVar9, local_24 = pbVar16, bVar2 != 0) {
                    iVar5 = toupper((uint)*pbVar13);
                    iVar7 = toupper((uint)*pbVar10);
                    if (iVar5 != iVar7) goto LAB_004a49e9;
                    pbVar15 = pbVar10 + 1;
                    pbVar10 = pbVar10 + 1;
                    pbVar13 = pbVar13 + 1;
                    pbVar16 = local_24;
                    pSVar9 = local_48;
                    bVar2 = *pbVar15;
                  }
                  while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
                    pbVar13 = pbVar13 + 1;
                  }
                  do {
                    bVar2 = *pbVar13;
                    *pbVar16 = bVar2;
                    if (bVar2 == 0) break;
                    bVar2 = pbVar13[1];
                    pbVar13 = pbVar13 + 2;
                    pbVar16[1] = bVar2;
                    pbVar16 = pbVar16 + 2;
                  } while (bVar2 != 0);
                  if (pSVar9 == (SNotesSection *)0x0) {
                    _sprintf(&DAT_01cab7f0,"Didn't expect '\\map' in %s, line %d");
                    goto LAB_004a43cb;
                  }
                  if (3 < _DAT_01cacb4c) {
                    pcVar12 = "Too many maps!  (max is %d)";
                    goto LAB_004a43be;
                  }
                  local_44 = (SNotesEntry *)
                             core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a3630
                                       (pSVar9,(char *)local_1b4,5);
                  local_44->map_index = _DAT_01cacb4c;
                  pSVar8 = SNotesMap_ARRAY_01cacb50 + _DAT_01cacb4c;
                  SNotesMap_ARRAY_01cacb50[_DAT_01cacb4c].annotation_count = 0;
                  _DAT_01cacb4c = _DAT_01cacb4c + 1;
                  pSVar8->entry = local_44;
                }
                else {
LAB_004a49e9:
                  pcVar12 = "image";
                  local_20 = local_1b4;
                  pbVar13 = local_5b4;
                  do {
                    pbVar10 = pbVar13;
                    pbVar13 = pbVar10 + 1;
                  } while (((&DAT_0061ed94)[(byte)(*pbVar10 + 1)] & 2) != 0);
                  pbVar15 = local_20;
                  pSVar3 = local_44;
                  bVar2 = "image"[0];
                  if (*pbVar10 == 0x5c) {
                    while (local_44 = pSVar3, local_20 = pbVar15, bVar2 != 0) {
                      iVar5 = toupper((uint)*pbVar13);
                      iVar7 = toupper((uint)(byte)*pcVar12);
                      if (iVar5 != iVar7) goto LAB_004a4b13;
                      pbVar10 = (byte *)(pcVar12 + 1);
                      pcVar12 = pcVar12 + 1;
                      pbVar13 = pbVar13 + 1;
                      pbVar15 = local_20;
                      pSVar3 = local_44;
                      bVar2 = *pbVar10;
                    }
                    while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
                      pbVar13 = pbVar13 + 1;
                    }
                    do {
                      bVar2 = *pbVar13;
                      *pbVar15 = bVar2;
                      if (bVar2 == 0) break;
                      bVar2 = pbVar13[1];
                      pbVar13 = pbVar13 + 2;
                      pbVar15[1] = bVar2;
                      pbVar15 = pbVar15 + 2;
                    } while (bVar2 != 0);
                    if ((pSVar3 == (SNotesEntry *)0x0) || (pSVar3->kind != 5)) {
                      pcVar12 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004a43be;
                    }
                    if (_DAT_01cacb4c < 1) {
                      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
                      _DAT_01d046a4 = 0x904;
                      core_main_c_FUN_004e4500("Hell froze!");
                    }
                    iVar5 = _DAT_01cacb4c + -1;
                    iVar7 = sscanf((char *)local_1b4,"%s %d %d");
                    if (iVar7 != 3) {
                      pcVar12 = "Syntax error in \\image parms on line %d";
                      goto LAB_004a43be;
                    }
                    if (SNotesMap_ARRAY_01cacb50[iVar5].image_name[0] != '\0') {
                      _sprintf(&DAT_01cab7f0,"Multiple \\image tags found in map %s at line %d");
                      goto LAB_004a43cb;
                    }
                    engine_dosio_cpp_splitPath_FUN_00461070
                              (local_b4,(char *)0x0,(char *)0x0,
                               SNotesMap_ARRAY_01cacb50[iVar5].image_name,(char *)0x0);
                  }
                  else {
LAB_004a4b13:
                    pbVar10 = &DAT_005d60e9;
                    local_1c = local_1b4;
                    pbVar13 = local_5b4;
                    do {
                      pbVar15 = pbVar13;
                      pbVar13 = pbVar15 + 1;
                    } while (((&DAT_0061ed94)[(byte)(*pbVar15 + 1)] & 2) != 0);
                    pbVar16 = local_1c;
                    pSVar3 = local_44;
                    bVar2 = 0x73;
                    if (*pbVar15 == 0x5c) {
                      while (local_44 = pSVar3, local_1c = pbVar16, bVar2 != 0) {
                        iVar5 = toupper((uint)*pbVar13);
                        iVar7 = toupper((uint)*pbVar10);
                        if (iVar5 != iVar7) goto LAB_004a4c91;
                        pbVar15 = pbVar10 + 1;
                        pbVar10 = pbVar10 + 1;
                        pbVar13 = pbVar13 + 1;
                        pbVar16 = local_1c;
                        pSVar3 = local_44;
                        bVar2 = *pbVar15;
                      }
                      while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
                        pbVar13 = pbVar13 + 1;
                      }
                      do {
                        bVar2 = *pbVar13;
                        *pbVar16 = bVar2;
                        if (bVar2 == 0) break;
                        bVar2 = pbVar13[1];
                        pbVar13 = pbVar13 + 2;
                        pbVar16[1] = bVar2;
                        pbVar16 = pbVar16 + 2;
                      } while (bVar2 != 0);
                      if ((pSVar3 == (SNotesEntry *)0x0) || (pSVar3->kind != 5)) {
                        pcVar12 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004a43be;
                      }
                      if (_DAT_01cacb4c < 1) {
                        _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
                        _DAT_01d046a4 = 0x928;
                        core_main_c_FUN_004e4500("Hell froze!");
                      }
                      iVar7 = _DAT_01cacb4c + -1;
                      iVar5 = SNotesMap_ARRAY_01cacb50[iVar7].set_count;
                      if (3 < iVar5) {
                        _sprintf(&DAT_01cab7f0,"Too many \\sets in map %s at line %d.");
                        goto LAB_004a43cb;
                      }
                      SNotesMap_ARRAY_01cacb50[iVar7].set_count = iVar5 + 1;
                      iVar11 = sscanf
                                         ((char *)local_1b4,"%s %d , %d , %d , %d , %f , %f , %f , %f");
                      if (iVar11 != 9) {
                        pcVar12 = "Syntax error in \\image parms on line %d";
                        goto LAB_004a43be;
                      }
                      engine_dosio_cpp_changeFileExtension_FUN_004611a0
                                ((char *)(iVar7 * 0x970 + 0x1cacbf0 + iVar5 * 0x88),&DAT_005d61b2);
                    }
                    else {
LAB_004a4c91:
                      pcVar12 = "annotation";
                      local_18 = local_1b4;
                      pbVar13 = local_5b4;
                      do {
                        pbVar10 = pbVar13;
                        pbVar13 = pbVar10 + 1;
                      } while (((&DAT_0061ed94)[(byte)(*pbVar10 + 1)] & 2) != 0);
                      pbVar15 = local_18;
                      pSVar3 = local_44;
                      bVar2 = "annotation"[0];
                      if (*pbVar10 == 0x5c) {
                        while (local_44 = pSVar3, local_18 = pbVar15, bVar2 != 0) {
                          iVar5 = toupper((uint)*pbVar13);
                          iVar7 = toupper((uint)(byte)*pcVar12);
                          if (iVar5 != iVar7) goto LAB_004a4e30;
                          pbVar10 = (byte *)(pcVar12 + 1);
                          pcVar12 = pcVar12 + 1;
                          pbVar13 = pbVar13 + 1;
                          pbVar15 = local_18;
                          pSVar3 = local_44;
                          bVar2 = *pbVar10;
                        }
                        while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
                          pbVar13 = pbVar13 + 1;
                        }
                        do {
                          bVar2 = *pbVar13;
                          *pbVar15 = bVar2;
                          if (bVar2 == 0) break;
                          bVar2 = pbVar13[1];
                          pbVar13 = pbVar13 + 2;
                          pbVar15[1] = bVar2;
                          pbVar15 = pbVar15 + 2;
                        } while (bVar2 != 0);
                        if ((pSVar3 == (SNotesEntry *)0x0) || (pSVar3->kind != 5)) {
                          pcVar12 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004a43be;
                        }
                        if (_DAT_01cacb4c < 1) {
                          _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
                          _DAT_01d046a4 = 0x954;
                          core_main_c_FUN_004e4500("Hell froze!");
                        }
                        iVar7 = _DAT_01cacb4c + -1;
                        iVar5 = SNotesMap_ARRAY_01cacb50[iVar7].annotation_count;
                        if (7 < iVar5) {
                          _sprintf(&DAT_01cab7f0,"Too many \\annotations in map %s at line %d.");
                          goto LAB_004a43cb;
                        }
                        iVar11 = iVar5 * 0xd4 + iVar7 * 0x970 + 0x1cace14;
                        SNotesMap_ARRAY_01cacb50[iVar7].annotation_count = iVar5 + 1;
                        iVar5 = sscanf((char *)local_1b4,"%[^,], %d , %d , \"%[^\"]\"");
                        if (iVar5 != 4) {
                          pcVar12 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004a43be;
                        }
                        core_flashlit_cpp_FUN_004a1390(iVar11);
                        core_flashlit_cpp_FUN_004a1390(iVar11 + 100);
                        *(uint *)(iVar11 + 0xd0) = 0;
                      }
                      else {
LAB_004a4e30:
                        pbVar10 = &DAT_005d628a;
                        local_14 = local_1b4;
                        pbVar13 = local_5b4;
                        do {
                          pbVar15 = pbVar13;
                          pbVar13 = pbVar15 + 1;
                        } while (((&DAT_0061ed94)[(byte)(*pbVar15 + 1)] & 2) != 0);
                        pbVar16 = local_14;
                        p_Var4 = local_50;
                        bVar2 = 0x65;
                        if (*pbVar15 == 0x5c) {
                          while( true ) {
                            local_14 = pbVar16;
                            if (bVar2 == 0) goto LAB_004a502e;
                            local_50 = p_Var4;
                            iVar5 = toupper((uint)*pbVar13);
                            iVar7 = toupper((uint)*pbVar10);
                            if (iVar5 != iVar7) break;
                            pbVar15 = pbVar10 + 1;
                            pbVar10 = pbVar10 + 1;
                            pbVar13 = pbVar13 + 1;
                            pbVar16 = local_14;
                            p_Var4 = local_50;
                            bVar2 = *pbVar15;
                          }
                        }
                        if (local_5b4[0] == 0x5c) {
                          _sprintf(&DAT_01cab7f0,"Unknown tag: '%s' in %s, line %d");
                          goto LAB_004a43cb;
                        }
                        if (local_44 == (SNotesEntry *)0x0) {
                          _sprintf(&DAT_01cab7f0,"No entry started in %s, line %d");
                          goto LAB_004a43cb;
                        }
                        shape_edittool_cpp_CStrList_add_FUN_00480e70
                                  (&local_44->lines,(char *)local_5b4);
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
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(this_ptr);
  return 0;
LAB_004a502e:
  while (((&DAT_0061ed94)[(byte)(*pbVar13 + 1)] & 2) != 0) {
    pbVar13 = pbVar13 + 1;
  }
  do {
    bVar2 = *pbVar13;
    *pbVar16 = bVar2;
    local_50 = p_Var4;
    if (bVar2 == 0) break;
    bVar2 = pbVar13[1];
    pbVar13 = pbVar13 + 2;
    pbVar16[1] = bVar2;
    pbVar16 = pbVar16 + 2;
  } while (bVar2 != 0);
LAB_004a42cd:
  iVar5 = 0;
  _fclose(local_50);
  local_50 = (_FILE *)0x0;
  if (0 < _DAT_01cacb4c) {
    pSVar8 = SNotesMap_ARRAY_01cacb50;
    do {
      core_fldnotes_cpp_SNotesMap_load_FUN_004a38e0(pSVar8);
      iVar5 = iVar5 + 1;
      pSVar8 = pSVar8 + 1;
    } while (iVar5 < _DAT_01cacb4c);
  }
  DAT_00616014 = 1;
  DAT_00616010 = 1;
  if (param_3 != (char *)0x0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a2890(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar5 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004a27e0(&g_STextViewInstance);
    DAT_01cab7f0 = 0;
    if (0 < _DAT_01cab9f0) {
      pSVar9 = SNotesSection_ARRAY_01cab9f4;
      do {
        iVar7 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a3740(pSVar9,0x1caf240);
        if (iVar7 == 0) goto LAB_004a43cb;
        iVar5 = iVar5 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iVar5 < _DAT_01cab9f0);
    }
    DAT_00616014 = 0;
  }
  return 1;
}
