// Name: core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0
// Address: 004a41b0
// Address Range: [[004a41b0, 004a50ad]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004a41b0(CFieldNotes *this_ptr,char *file_name,char *error_text)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004a41b0(CFieldNotes *this_ptr,char *file_name,char *error_text)

{
  char cVar1;
  byte bVar2;
  _FILE *p_Var3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  SNotesEntry *pSVar7;
  int iVar8;
  SNotesMap *pSVar9;
  SNotesSection *pSVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  CFieldNotes *pCVar14;
  byte *pbVar15;
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
    cVar1 = *file_name;
    pCVar14->file_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = file_name[1];
    file_name = file_name + 2;
    pCVar14->file_name[1] = cVar1;
    pCVar14 = (CFieldNotes *)(pCVar14->file_name + 2);
  } while (cVar1 != '\0');
  g_INT_01cab7e8 = (int)(error_text != (char *)0x0);
  local_4c = engine_dosio_cpp_getFileSize_FUN_00460aa0("world",this_ptr->file_name);
  if (-1 < local_4c) {
    local_50 = engine_dosio_cpp_getFile_FUN_00460c70
                         ("world",this_ptr->file_name,"rt");
    if (local_50 == (_FILE *)0x0) {
      g_CHAR_PTR_01d046a0 = "..\\core\\fldnotes.cpp";
      g_INT_01d046a4 = 0x889;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Can't open field notes file %s");
    }
    lVar4 = _ftell(local_50);
    local_48 = (SNotesSection *)0x0;
    local_44 = (SNotesEntry *)0x0;
    local_4c = local_4c + lVar4;
    do {
      lVar4 = _ftell(local_50);
      if ((local_4c <= lVar4) ||
         (pcVar5 = _fgets((char *)local_5b4,0x400,local_50),
         (byte *)pcVar5 != local_5b4)) goto LAB_004a42cd;
      pcVar5 = strstr((char *)local_5b4,"//");
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a1390((char *)local_5b4);
      if (local_5b4[0] != 0) {
        pcVar5 = "section";
        local_40 = local_1b4;
        pbVar13 = local_5b4;
        do {
          pbVar12 = pbVar13;
          pbVar13 = pbVar12 + 1;
        } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
        pbVar15 = local_40;
        bVar2 = "section"[0];
        if (*pbVar12 == 0x5c) {
          while (local_40 = pbVar15, bVar2 != 0) {
            iVar11 = toupper((uint)*pbVar13);
            iVar6 = toupper((uint)(byte)*pcVar5);
            if (iVar11 != iVar6) goto LAB_004a44c4;
            pbVar12 = (byte *)(pcVar5 + 1);
            pcVar5 = pcVar5 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar15 = local_40;
            bVar2 = *pbVar12;
          }
          while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
          if (5 < g_INT_01cab9f0) {
            _sprintf(g_CHAR_ARRAY_01cab7f0,"Too many field notes sections in %s, line %d");
            goto LAB_004a43cb;
          }
          local_48 = SNotesSection_ARRAY_01cab9f4 + g_INT_01cab9f0;
          pbVar13 = local_1b4;
          pSVar10 = local_48;
          do {
            bVar2 = *pbVar13;
            pSVar10->name[0] = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar13[1];
            pbVar13 = pbVar13 + 2;
            pSVar10->name[1] = bVar2;
            pSVar10 = (SNotesSection *)(pSVar10->name + 2);
          } while (bVar2 != 0);
          local_44 = (SNotesEntry *)0x0;
          g_INT_01cab9f0 = g_INT_01cab9f0 + 1;
        }
        else {
LAB_004a44c4:
          pcVar5 = "title";
          local_3c = local_1b4;
          pbVar13 = local_5b4;
          do {
            pbVar12 = pbVar13;
            pbVar13 = pbVar12 + 1;
          } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
          pbVar15 = local_3c;
          pSVar10 = local_48;
          pSVar7 = local_44;
          bVar2 = "title"[0];
          if (*pbVar12 == 0x5c) {
            while (local_48 = pSVar10, local_44 = pSVar7, local_3c = pbVar15, bVar2 != 0) {
              iVar11 = toupper((uint)*pbVar13);
              iVar6 = toupper((uint)(byte)*pcVar5);
              if (iVar11 != iVar6) goto LAB_004a45df;
              pbVar12 = (byte *)(pcVar5 + 1);
              pcVar5 = pcVar5 + 1;
              pbVar13 = pbVar13 + 1;
              pbVar15 = local_3c;
              pSVar10 = local_48;
              pSVar7 = local_44;
              bVar2 = *pbVar12;
            }
            while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
            if (pSVar7 == (SNotesEntry *)0x0) {
              if (pSVar10 == (SNotesSection *)0x0) {
                _sprintf(g_CHAR_ARRAY_01cab7f0,"Didn't expect '\\title' in %s, line %d");
                goto LAB_004a43cb;
              }
              pbVar13 = local_1b4;
              pcVar5 = pSVar10->title;
              do {
                bVar2 = *pbVar13;
                *pcVar5 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar13[1];
                pbVar13 = pbVar13 + 2;
                pcVar5[1] = bVar2;
                pcVar5 = pcVar5 + 2;
              } while (bVar2 != 0);
            }
            else {
              pbVar13 = local_1b4;
              pcVar5 = pSVar7->title;
              do {
                bVar2 = *pbVar13;
                *pcVar5 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar13[1];
                pbVar13 = pbVar13 + 2;
                pcVar5[1] = bVar2;
                pcVar5 = pcVar5 + 2;
              } while (bVar2 != 0);
            }
          }
          else {
LAB_004a45df:
            pcVar5 = "entry";
            local_38 = local_1b4;
            pbVar13 = local_5b4;
            do {
              pbVar12 = pbVar13;
              pbVar13 = pbVar12 + 1;
            } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
            pbVar15 = local_38;
            pSVar10 = local_48;
            bVar2 = "entry"[0];
            if (*pbVar12 == 0x5c) {
              while (local_48 = pSVar10, local_38 = pbVar15, bVar2 != 0) {
                iVar11 = toupper((uint)*pbVar13);
                iVar6 = toupper((uint)(byte)*pcVar5);
                if (iVar11 != iVar6) goto LAB_004a4705;
                pbVar12 = (byte *)(pcVar5 + 1);
                pcVar5 = pcVar5 + 1;
                pbVar13 = pbVar13 + 1;
                pbVar15 = local_38;
                pSVar10 = local_48;
                bVar2 = *pbVar12;
              }
              while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
              if (pSVar10 == (SNotesSection *)0x0) {
                _sprintf(g_CHAR_ARRAY_01cab7f0,"Didn't expect '\\entry' in %s, line %d");
                goto LAB_004a43cb;
              }
              iVar11 = 0;
              local_34 = (int *)0x0;
              if (0 < g_INT_01cab9f0) {
                pSVar10 = SNotesSection_ARRAY_01cab9f4;
                do {
                  pSVar7 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0
                                     (pSVar10,(char *)local_1b4);
                  if (pSVar7 != (SNotesEntry *)0x0) {
                    if (local_34 != (int *)0x0) {
                      *local_34 = iVar11;
                    }
                    if (pSVar7 != (SNotesEntry *)0x0) {
                      _sprintf(g_CHAR_ARRAY_01cab7f0,"Duplicate entry '%s' in %s");
                      goto LAB_004a43cb;
                    }
                    break;
                  }
                  iVar11 = iVar11 + 1;
                  pSVar10 = pSVar10 + 1;
                } while (iVar11 < g_INT_01cab9f0);
              }
              local_44 = core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a3630
                                   (local_48,(char *)local_1b4,0);
            }
            else {
LAB_004a4705:
              pcVar5 = "task";
              local_30 = local_1b4;
              pbVar13 = local_5b4;
              do {
                pbVar12 = pbVar13;
                pbVar13 = pbVar12 + 1;
              } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
              pbVar15 = local_30;
              pSVar10 = local_48;
              bVar2 = "task"[0];
              if (*pbVar12 == 0x5c) {
                while (local_48 = pSVar10, local_30 = pbVar15, bVar2 != 0) {
                  iVar11 = toupper((uint)*pbVar13);
                  iVar6 = toupper((uint)(byte)*pcVar5);
                  if (iVar11 != iVar6) goto LAB_004a486d;
                  pbVar12 = (byte *)(pcVar5 + 1);
                  pcVar5 = pcVar5 + 1;
                  pbVar13 = pbVar13 + 1;
                  pbVar15 = local_30;
                  pSVar10 = local_48;
                  bVar2 = *pbVar12;
                }
                while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                if (pSVar10 == (SNotesSection *)0x0) {
                  _sprintf(g_CHAR_ARRAY_01cab7f0,"Didn't expect '\\task' in %s, line %d");
                  goto LAB_004a43cb;
                }
                local_2c = local_1b4;
                iVar11 = 0;
                local_28 = (int *)0x0;
                if (0 < g_INT_01cab9f0) {
                  pSVar10 = SNotesSection_ARRAY_01cab9f4;
                  do {
                    pSVar7 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0
                                       (pSVar10,(char *)local_2c);
                    if (pSVar7 != (SNotesEntry *)0x0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar11;
                      }
                      if (pSVar7 != (SNotesEntry *)0x0) {
                        _sprintf(g_CHAR_ARRAY_01cab7f0,"Duplicate entry '%s' in %s");
                        goto LAB_004a43cb;
                      }
                      break;
                    }
                    iVar11 = iVar11 + 1;
                    pSVar10 = pSVar10 + 1;
                  } while (iVar11 < g_INT_01cab9f0);
                }
                local_44 = core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a3630
                                     (local_48,(char *)local_1b4,2);
              }
              else {
LAB_004a486d:
                pcVar5 = "map";
                local_24 = local_1b4;
                pbVar13 = local_5b4;
                do {
                  pbVar12 = pbVar13;
                  pbVar13 = pbVar12 + 1;
                } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
                pbVar15 = local_24;
                pSVar10 = local_48;
                bVar2 = "map"[0];
                if (*pbVar12 == 0x5c) {
                  while (local_48 = pSVar10, local_24 = pbVar15, bVar2 != 0) {
                    iVar11 = toupper((uint)*pbVar13);
                    iVar6 = toupper((uint)(byte)*pcVar5);
                    if (iVar11 != iVar6) goto LAB_004a49e9;
                    pbVar12 = (byte *)(pcVar5 + 1);
                    pcVar5 = pcVar5 + 1;
                    pbVar13 = pbVar13 + 1;
                    pbVar15 = local_24;
                    pSVar10 = local_48;
                    bVar2 = *pbVar12;
                  }
                  while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                  if (pSVar10 == (SNotesSection *)0x0) {
                    _sprintf(g_CHAR_ARRAY_01cab7f0,"Didn't expect '\\map' in %s, line %d");
                    goto LAB_004a43cb;
                  }
                  if (3 < g_INT_01cacb4c) {
                    pcVar5 = "Too many maps!  (max is %d)";
                    goto LAB_004a43be;
                  }
                  local_44 = core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a3630
                                       (pSVar10,(char *)local_1b4,5);
                  local_44->map_index = g_INT_01cacb4c;
                  pSVar9 = SNotesMap_ARRAY_01cacb50 + g_INT_01cacb4c;
                  SNotesMap_ARRAY_01cacb50[g_INT_01cacb4c].annotation_count = 0;
                  g_INT_01cacb4c = g_INT_01cacb4c + 1;
                  pSVar9->entry = local_44;
                }
                else {
LAB_004a49e9:
                  pcVar5 = "image";
                  local_20 = local_1b4;
                  pbVar13 = local_5b4;
                  do {
                    pbVar12 = pbVar13;
                    pbVar13 = pbVar12 + 1;
                  } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
                  pbVar15 = local_20;
                  pSVar7 = local_44;
                  bVar2 = "image"[0];
                  if (*pbVar12 == 0x5c) {
                    while (local_44 = pSVar7, local_20 = pbVar15, bVar2 != 0) {
                      iVar11 = toupper((uint)*pbVar13);
                      iVar6 = toupper((uint)(byte)*pcVar5);
                      if (iVar11 != iVar6) goto LAB_004a4b13;
                      pbVar12 = (byte *)(pcVar5 + 1);
                      pcVar5 = pcVar5 + 1;
                      pbVar13 = pbVar13 + 1;
                      pbVar15 = local_20;
                      pSVar7 = local_44;
                      bVar2 = *pbVar12;
                    }
                    while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                    if ((pSVar7 == (SNotesEntry *)0x0) || (pSVar7->kind != 5)) {
                      pcVar5 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004a43be;
                    }
                    if (g_INT_01cacb4c < 1) {
                      g_CHAR_PTR_01d046a0 = "..\\core\\fldnotes.cpp";
                      g_INT_01d046a4 = 0x904;
                      core_main_c_displayErrorAndQuit_FUN_004e4500("Hell froze!");
                    }
                    iVar11 = g_INT_01cacb4c + -1;
                    iVar6 = sscanf((char *)local_1b4,"%s %d %d");
                    if (iVar6 != 3) {
                      pcVar5 = "Syntax error in \\image parms on line %d";
                      goto LAB_004a43be;
                    }
                    if (SNotesMap_ARRAY_01cacb50[iVar11].image_name[0] != '\0') {
                      _sprintf(g_CHAR_ARRAY_01cab7f0,"Multiple \\image tags found in map %s at line %d");
                      goto LAB_004a43cb;
                    }
                    engine_dosio_cpp_splitPath_FUN_00461070
                              (local_b4,(char *)0x0,(char *)0x0,
                               SNotesMap_ARRAY_01cacb50[iVar11].image_name,(char *)0x0);
                  }
                  else {
LAB_004a4b13:
                    pcVar5 = "set";
                    local_1c = local_1b4;
                    pbVar13 = local_5b4;
                    do {
                      pbVar12 = pbVar13;
                      pbVar13 = pbVar12 + 1;
                    } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
                    pbVar15 = local_1c;
                    pSVar7 = local_44;
                    bVar2 = "set"[0];
                    if (*pbVar12 == 0x5c) {
                      while (local_44 = pSVar7, local_1c = pbVar15, bVar2 != 0) {
                        iVar11 = toupper((uint)*pbVar13);
                        iVar6 = toupper((uint)(byte)*pcVar5);
                        if (iVar11 != iVar6) goto LAB_004a4c91;
                        pbVar12 = (byte *)(pcVar5 + 1);
                        pcVar5 = pcVar5 + 1;
                        pbVar13 = pbVar13 + 1;
                        pbVar15 = local_1c;
                        pSVar7 = local_44;
                        bVar2 = *pbVar12;
                      }
                      while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                      if ((pSVar7 == (SNotesEntry *)0x0) || (pSVar7->kind != 5)) {
                        pcVar5 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004a43be;
                      }
                      if (g_INT_01cacb4c < 1) {
                        g_CHAR_PTR_01d046a0 = "..\\core\\fldnotes.cpp";
                        g_INT_01d046a4 = 0x928;
                        core_main_c_displayErrorAndQuit_FUN_004e4500("Hell froze!");
                      }
                      iVar6 = g_INT_01cacb4c + -1;
                      iVar11 = SNotesMap_ARRAY_01cacb50[iVar6].set_count;
                      if (3 < iVar11) {
                        _sprintf(g_CHAR_ARRAY_01cab7f0,"Too many \\sets in map %s at line %d.");
                        goto LAB_004a43cb;
                      }
                      SNotesMap_ARRAY_01cacb50[iVar6].set_count = iVar11 + 1;
                      iVar8 = sscanf
                                        ((char *)local_1b4,"%s %d , %d , %d , %d , %f , %f , %f , %f");
                      if (iVar8 != 9) {
                        pcVar5 = "Syntax error in \\image parms on line %d";
                        goto LAB_004a43be;
                      }
                      engine_dosio_cpp_changeFileExtension_FUN_004611a0
                                ((char *)(iVar6 * 0x970 + 0x1cacbf0 + iVar11 * 0x88),".set")
                      ;
                    }
                    else {
LAB_004a4c91:
                      pcVar5 = "annotation";
                      local_18 = local_1b4;
                      pbVar13 = local_5b4;
                      do {
                        pbVar12 = pbVar13;
                        pbVar13 = pbVar12 + 1;
                      } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
                      pbVar15 = local_18;
                      pSVar7 = local_44;
                      bVar2 = "annotation"[0];
                      if (*pbVar12 == 0x5c) {
                        while (local_44 = pSVar7, local_18 = pbVar15, bVar2 != 0) {
                          iVar11 = toupper((uint)*pbVar13);
                          iVar6 = toupper((uint)(byte)*pcVar5);
                          if (iVar11 != iVar6) goto LAB_004a4e30;
                          pbVar12 = (byte *)(pcVar5 + 1);
                          pcVar5 = pcVar5 + 1;
                          pbVar13 = pbVar13 + 1;
                          pbVar15 = local_18;
                          pSVar7 = local_44;
                          bVar2 = *pbVar12;
                        }
                        while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                        if ((pSVar7 == (SNotesEntry *)0x0) || (pSVar7->kind != 5)) {
                          pcVar5 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004a43be;
                        }
                        if (g_INT_01cacb4c < 1) {
                          g_CHAR_PTR_01d046a0 = "..\\core\\fldnotes.cpp";
                          g_INT_01d046a4 = 0x954;
                          core_main_c_displayErrorAndQuit_FUN_004e4500("Hell froze!");
                        }
                        iVar6 = g_INT_01cacb4c + -1;
                        iVar11 = SNotesMap_ARRAY_01cacb50[iVar6].annotation_count;
                        if (7 < iVar11) {
                          _sprintf(g_CHAR_ARRAY_01cab7f0,"Too many \\annotations in map %s at line %d.");
                          goto LAB_004a43cb;
                        }
                        pcVar5 = (char *)(iVar11 * 0xd4 + iVar6 * 0x970 + 0x1cace14);
                        SNotesMap_ARRAY_01cacb50[iVar6].annotation_count = iVar11 + 1;
                        iVar11 = sscanf((char *)local_1b4,"%[^,], %d , %d , \"%[^\"]\"");
                        if (iVar11 != 4) {
                          pcVar5 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004a43be;
                        }
                        core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a1390(pcVar5);
                        core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a1390(pcVar5 + 100);
                        pcVar5[0xd0] = '\0';
                        pcVar5[0xd1] = '\0';
                        pcVar5[0xd2] = '\0';
                        pcVar5[0xd3] = '\0';
                      }
                      else {
LAB_004a4e30:
                        pcVar5 = "end";
                        local_14 = local_1b4;
                        pbVar13 = local_5b4;
                        do {
                          pbVar12 = pbVar13;
                          pbVar13 = pbVar12 + 1;
                        } while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar12 + 1)] & 2) != 0);
                        pbVar15 = local_14;
                        p_Var3 = local_50;
                        bVar2 = "end"[0];
                        if (*pbVar12 == 0x5c) {
                          while( true ) {
                            local_14 = pbVar15;
                            if (bVar2 == 0) goto LAB_004a502e;
                            local_50 = p_Var3;
                            iVar11 = toupper((uint)*pbVar13);
                            iVar6 = toupper((uint)(byte)*pcVar5);
                            if (iVar11 != iVar6) break;
                            pbVar12 = (byte *)(pcVar5 + 1);
                            pcVar5 = pcVar5 + 1;
                            pbVar13 = pbVar13 + 1;
                            pbVar15 = local_14;
                            p_Var3 = local_50;
                            bVar2 = *pbVar12;
                          }
                        }
                        if (local_5b4[0] == 0x5c) {
                          _sprintf(g_CHAR_ARRAY_01cab7f0,"Unknown tag: '%s' in %s, line %d");
                          goto LAB_004a43cb;
                        }
                        if (local_44 == (SNotesEntry *)0x0) {
                          _sprintf(g_CHAR_ARRAY_01cab7f0,"No entry started in %s, line %d");
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
  pcVar5 = "Can't open field notes file %s";
LAB_004a43be:
  _sprintf(g_CHAR_ARRAY_01cab7f0,pcVar5);
LAB_004a43cb:
  if (local_50 != (_FILE *)0x0) {
    _fclose(local_50);
  }
  if (error_text == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,g_CHAR_ARRAY_01cab7f0);
  }
  else {
    pcVar5 = g_CHAR_ARRAY_01cab7f0;
    do {
      cVar1 = *pcVar5;
      *error_text = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      error_text[1] = cVar1;
      error_text = error_text + 2;
    } while (cVar1 != '\0');
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(this_ptr);
  return 0;
LAB_004a502e:
  while ((g_UCHAR_ARRAY_0061ed94[(byte)(*pbVar13 + 1)] & 2) != 0) {
    pbVar13 = pbVar13 + 1;
  }
  do {
    bVar2 = *pbVar13;
    *pbVar15 = bVar2;
    local_50 = p_Var3;
    if (bVar2 == 0) break;
    bVar2 = pbVar13[1];
    pbVar13 = pbVar13 + 2;
    pbVar15[1] = bVar2;
    pbVar15 = pbVar15 + 2;
  } while (bVar2 != 0);
LAB_004a42cd:
  iVar11 = 0;
  _fclose(local_50);
  local_50 = (_FILE *)0x0;
  if (0 < g_INT_01cacb4c) {
    pSVar9 = SNotesMap_ARRAY_01cacb50;
    do {
      core_fldnotes_cpp_SNotesMap_load_FUN_004a38e0(pSVar9);
      iVar11 = iVar11 + 1;
      pSVar9 = pSVar9 + 1;
    } while (iVar11 < g_INT_01cacb4c);
  }
  g_INT_00616014 = 1;
  g_INT_00616010 = 1;
  if (error_text != (char *)0x0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a2890(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar11 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004a27e0(&g_STextViewInstance);
    g_CHAR_ARRAY_01cab7f0[0] = '\0';
    if (0 < g_INT_01cab9f0) {
      pSVar10 = SNotesSection_ARRAY_01cab9f4;
      do {
        iVar6 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a3740(pSVar10,&g_STextViewInstance);
        if (iVar6 == 0) goto LAB_004a43cb;
        iVar11 = iVar11 + 1;
        pSVar10 = pSVar10 + 1;
      } while (iVar11 < g_INT_01cab9f0);
    }
    g_INT_00616014 = 0;
  }
  return 1;
}
