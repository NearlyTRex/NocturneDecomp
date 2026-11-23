// Name: core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810
// Address: 004aa810
// Address Range: [[004aa810, 004ab795]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004aa810(CFieldNotes *this_ptr,char *file_name,char *error_text)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004aa810(CFieldNotes *this_ptr,char *file_name,char *error_text)

{
  char cVar1;
  byte bVar2;
  SNotesSection *pSVar3;
  SNotesSection *pSVar4;
  _FILE *p_Var5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  SNotesEntry *pSVar9;
  int iVar10;
  SNotesMap *pSVar11;
  int iVar12;
  SNotesSection *pSVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  CFieldNotes *pCVar17;
  char *pcVar18;
  byte *pbVar19;
  byte bVar20;
  byte local_5f4 [1024];
  byte local_1f4 [256];
  char local_f4 [100];
  char local_90 [64];
  int local_50;
  _FILE *local_4c;
  int local_48;
  SNotesSection *local_44;
  SNotesSection *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  int *local_30;
  byte *local_2c;
  int *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  bVar20 = 0;
  local_50 = 0;
  local_4c = (_FILE *)0x0;
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(this_ptr);
  pCVar17 = this_ptr;
  do {
    cVar1 = *file_name;
    pCVar17->file_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = file_name[1];
    file_name = file_name + 2;
    pCVar17->file_name[1] = cVar1;
    pCVar17 = (CFieldNotes *)(pCVar17->file_name + 2);
  } while (cVar1 != '\0');
  g_INT_01d0d008 = (int)(error_text != (char *)0x0);
  local_48 = engine_dosio_cpp_getFileSize_FUN_004657f0("world",this_ptr->file_name);
  if (-1 < local_48) {
    local_4c = engine_dosio_cpp_getFile_FUN_004659c0
                         ("world",this_ptr->file_name,"rt");
    if (local_4c == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\fldnotes.cpp";
      g_CurrentLineNumber = 2285;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Can't open field notes file %s");
    }
    lVar6 = _ftell(local_4c);
    local_44 = (SNotesSection *)0x0;
    local_40 = (SNotesSection *)0x0;
    local_48 = local_48 + lVar6;
    do {
      p_Var5 = local_4c;
      lVar6 = _ftell(local_4c);
      if ((local_48 <= lVar6) ||
         (pcVar7 = _fgets((char *)local_5f4,0x400,p_Var5),
         (byte *)pcVar7 != local_5f4)) goto LAB_004aa931;
      pcVar7 = strstr((char *)local_5f4,"//");
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '\0';
      }
      core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a7890((char *)local_5f4);
      if (local_5f4[0] != 0) {
        pcVar7 = "section";
        local_3c = local_1f4;
        pbVar16 = local_5f4;
        do {
          pbVar15 = pbVar16;
          pbVar16 = pbVar15 + 1;
        } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
        pbVar19 = local_3c;
        bVar2 = "section"[0];
        if (*pbVar15 == 0x5c) {
          while (local_3c = pbVar19, bVar2 != 0) {
            iVar12 = toupper((uint)*pbVar16);
            iVar8 = toupper((uint)(byte)*pcVar7);
            if (iVar12 != iVar8) goto LAB_004aab32;
            pbVar15 = (byte *)(pcVar7 + 1);
            pcVar7 = pcVar7 + 1;
            pbVar16 = pbVar16 + 1;
            pbVar19 = local_3c;
            bVar2 = *pbVar15;
          }
          while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
            pbVar16 = pbVar16 + 1;
          }
          do {
            bVar2 = *pbVar16;
            *pbVar19 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar16[1];
            pbVar16 = pbVar16 + 2;
            pbVar19[1] = bVar2;
            pbVar19 = pbVar19 + 2;
          } while (bVar2 != 0);
          if (5 < g_INT_01d0d210) {
            _sprintf(g_CHAR_ARRAY_01d0d010,"Too many field notes sections in %s, line %d");
            goto LAB_004aaa32;
          }
          local_44 = SNotesSection_ARRAY_01d0d214 + g_INT_01d0d210;
          pbVar16 = local_1f4;
          pSVar13 = local_44;
          do {
            bVar2 = *pbVar16;
            pSVar13->name[0] = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar16[1];
            pbVar16 = pbVar16 + 2;
            pSVar13->name[1] = bVar2;
            pSVar13 = (SNotesSection *)(pSVar13->name + 2);
          } while (bVar2 != 0);
          local_40 = (SNotesSection *)0x0;
          g_INT_01d0d210 = g_INT_01d0d210 + 1;
        }
        else {
LAB_004aab32:
          pcVar7 = "title";
          local_38 = local_1f4;
          pbVar16 = local_5f4;
          do {
            pbVar15 = pbVar16;
            pbVar16 = pbVar15 + 1;
          } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
          pbVar19 = local_38;
          iVar12 = local_50;
          pSVar13 = local_44;
          pSVar4 = local_40;
          bVar2 = "title"[0];
          if (*pbVar15 == 0x5c) {
            while (local_50 = iVar12, local_44 = pSVar13, local_40 = pSVar4, local_38 = pbVar19,
                  bVar2 != 0) {
              iVar12 = toupper((uint)*pbVar16);
              iVar8 = toupper((uint)(byte)*pcVar7);
              if (iVar12 != iVar8) goto LAB_004aac4c;
              pbVar15 = (byte *)(pcVar7 + 1);
              pcVar7 = pcVar7 + 1;
              pbVar16 = pbVar16 + 1;
              pbVar19 = local_38;
              iVar12 = local_50;
              pSVar13 = local_44;
              pSVar4 = local_40;
              bVar2 = *pbVar15;
            }
            while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
              pbVar16 = pbVar16 + 1;
            }
            do {
              bVar2 = *pbVar16;
              *pbVar19 = bVar2;
              if (bVar2 == 0) break;
              bVar2 = pbVar16[1];
              pbVar16 = pbVar16 + 2;
              pbVar19[1] = bVar2;
              pbVar19 = pbVar19 + 2;
            } while (bVar2 != 0);
            pSVar3 = pSVar4;
            if ((pSVar4 == (SNotesSection *)0x0) &&
               (pSVar3 = pSVar13, pSVar13 == (SNotesSection *)0x0)) {
              _sprintf(g_CHAR_ARRAY_01d0d010,"Didn't expect '\\title' in %s, line %d");
              goto LAB_004aaa32;
            }
            pbVar16 = local_1f4;
            pcVar7 = pSVar3->title;
            do {
              bVar2 = *pbVar16;
              *pcVar7 = bVar2;
              if (bVar2 == 0) break;
              bVar2 = pbVar16[1];
              pbVar16 = pbVar16 + 2;
              pcVar7[1] = bVar2;
              pcVar7 = pcVar7 + 2;
            } while (bVar2 != 0);
            if ((pSVar4 != (SNotesSection *)0x0) && (iVar12 != 0)) {
              pcVar7 = pSVar4->title;
              _strncpy(local_90,pcVar7,0x3f);
              pcVar14 = &DAT_005c1298;
              pcVar18 = pcVar7;
              do {
                cVar1 = *pcVar14;
                *pcVar18 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar14[1];
                pcVar14 = pcVar14 + 2;
                pcVar18[1] = cVar1;
                pcVar18 = pcVar18 + 2;
              } while (cVar1 != '\0');
              pcVar18 = local_90;
              iVar12 = -1;
              do {
                pcVar14 = pcVar7;
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                pcVar14 = pcVar7 + (uint)bVar20 * -2 + 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar14;
              } while (cVar1 != '\0');
              pcVar14 = pcVar14 + -1;
              do {
                cVar1 = *pcVar18;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar18[1];
                pcVar18 = pcVar18 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
            }
          }
          else {
LAB_004aac4c:
            pcVar7 = "entry";
            local_34 = local_1f4;
            pbVar16 = local_5f4;
            do {
              pbVar15 = pbVar16;
              pbVar16 = pbVar15 + 1;
            } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
            pbVar19 = local_34;
            pSVar13 = local_44;
            bVar2 = "entry"[0];
            if (*pbVar15 == 0x5c) {
              while (local_44 = pSVar13, local_34 = pbVar19, bVar2 != 0) {
                iVar12 = toupper((uint)*pbVar16);
                iVar8 = toupper((uint)(byte)*pcVar7);
                if (iVar12 != iVar8) goto LAB_004aadd9;
                pbVar15 = (byte *)(pcVar7 + 1);
                pcVar7 = pcVar7 + 1;
                pbVar16 = pbVar16 + 1;
                pbVar19 = local_34;
                pSVar13 = local_44;
                bVar2 = *pbVar15;
              }
              while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
                pbVar16 = pbVar16 + 1;
              }
              do {
                bVar2 = *pbVar16;
                *pbVar19 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar16[1];
                pbVar16 = pbVar16 + 2;
                pbVar19[1] = bVar2;
                pbVar19 = pbVar19 + 2;
              } while (bVar2 != 0);
              local_50 = 0;
              if (pSVar13 == (SNotesSection *)0x0) {
                _sprintf(g_CHAR_ARRAY_01d0d010,"Didn't expect '\\entry' in %s, line %d");
                goto LAB_004aaa32;
              }
              local_30 = (int *)0x0;
              iVar12 = 0;
              if (0 < g_INT_01d0d210) {
                pSVar13 = SNotesSection_ARRAY_01d0d214;
                do {
                  pSVar9 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30
                                     (pSVar13,(char *)local_1f4);
                  if (pSVar9 != (SNotesEntry *)0x0) {
                    if (local_30 != (int *)0x0) {
                      *local_30 = iVar12;
                    }
                    if (pSVar9 != (SNotesEntry *)0x0) {
                      _sprintf(g_CHAR_ARRAY_01d0d010,"Duplicate entry '%s' in %s");
                      goto LAB_004aaa32;
                    }
                    break;
                  }
                  iVar12 = iVar12 + 1;
                  pSVar13 = pSVar13 + 1;
                } while (iVar12 < g_INT_01d0d210);
              }
              local_40 = (SNotesSection *)
                         core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a9c80
                                   (local_44,(char *)local_1f4,0);
            }
            else {
LAB_004aadd9:
              pcVar7 = "task";
              local_2c = local_1f4;
              pbVar16 = local_5f4;
              do {
                pbVar15 = pbVar16;
                pbVar16 = pbVar15 + 1;
              } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
              pbVar19 = local_2c;
              pSVar13 = local_44;
              bVar2 = "task"[0];
              if (*pbVar15 == 0x5c) {
                while (local_44 = pSVar13, local_2c = pbVar19, bVar2 != 0) {
                  iVar12 = toupper((uint)*pbVar16);
                  iVar8 = toupper((uint)(byte)*pcVar7);
                  if (iVar12 != iVar8) goto LAB_004aaf4a;
                  pbVar15 = (byte *)(pcVar7 + 1);
                  pcVar7 = pcVar7 + 1;
                  pbVar16 = pbVar16 + 1;
                  pbVar19 = local_2c;
                  pSVar13 = local_44;
                  bVar2 = *pbVar15;
                }
                while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
                  pbVar16 = pbVar16 + 1;
                }
                do {
                  bVar2 = *pbVar16;
                  *pbVar19 = bVar2;
                  if (bVar2 == 0) break;
                  bVar2 = pbVar16[1];
                  pbVar16 = pbVar16 + 2;
                  pbVar19[1] = bVar2;
                  pbVar19 = pbVar19 + 2;
                } while (bVar2 != 0);
                local_50 = 0;
                if (pSVar13 == (SNotesSection *)0x0) {
                  _sprintf(g_CHAR_ARRAY_01d0d010,"Didn't expect '\\task' in %s, line %d");
                  goto LAB_004aaa32;
                }
                iVar12 = 0;
                local_28 = (int *)0x0;
                if (0 < g_INT_01d0d210) {
                  pSVar13 = SNotesSection_ARRAY_01d0d214;
                  do {
                    pSVar9 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30
                                       (pSVar13,(char *)local_1f4);
                    if (pSVar9 != (SNotesEntry *)0x0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar12;
                      }
                      if (pSVar9 != (SNotesEntry *)0x0) {
                        _sprintf(g_CHAR_ARRAY_01d0d010,"Duplicate entry '%s' in %s");
                        goto LAB_004aaa32;
                      }
                      break;
                    }
                    iVar12 = iVar12 + 1;
                    pSVar13 = pSVar13 + 1;
                  } while (iVar12 < g_INT_01d0d210);
                }
                local_40 = (SNotesSection *)
                           core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a9c80
                                     (local_44,(char *)local_1f4,2);
              }
              else {
LAB_004aaf4a:
                pcVar7 = "map";
                local_24 = local_1f4;
                pbVar16 = local_5f4;
                do {
                  pbVar15 = pbVar16;
                  pbVar16 = pbVar15 + 1;
                } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
                pbVar19 = local_24;
                pSVar13 = local_44;
                bVar2 = "map"[0];
                if (*pbVar15 == 0x5c) {
                  while (local_44 = pSVar13, local_24 = pbVar19, bVar2 != 0) {
                    iVar12 = toupper((uint)*pbVar16);
                    iVar8 = toupper((uint)(byte)*pcVar7);
                    if (iVar12 != iVar8) goto LAB_004ab0bd;
                    pbVar15 = (byte *)(pcVar7 + 1);
                    pcVar7 = pcVar7 + 1;
                    pbVar16 = pbVar16 + 1;
                    pbVar19 = local_24;
                    pSVar13 = local_44;
                    bVar2 = *pbVar15;
                  }
                  while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
                    pbVar16 = pbVar16 + 1;
                  }
                  do {
                    bVar2 = *pbVar16;
                    *pbVar19 = bVar2;
                    if (bVar2 == 0) break;
                    bVar2 = pbVar16[1];
                    pbVar16 = pbVar16 + 2;
                    pbVar19[1] = bVar2;
                    pbVar19 = pbVar19 + 2;
                  } while (bVar2 != 0);
                  local_50 = 1;
                  if (pSVar13 == (SNotesSection *)0x0) {
                    _sprintf(g_CHAR_ARRAY_01d0d010,"Didn't expect '\\map' in %s, line %d");
                    goto LAB_004aaa32;
                  }
                  if (9 < g_INT_01d0e36c) {
                    pcVar7 = "Too many maps!  (max is %d)";
                    goto LAB_004aaa25;
                  }
                  local_40 = (SNotesSection *)
                             core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a9c80
                                       (pSVar13,(char *)local_1f4,5);
                  local_40->entries[1] = (SNotesEntry *)g_INT_01d0e36c;
                  pSVar11 = SNotesMap_ARRAY_01d0e370 + g_INT_01d0e36c;
                  SNotesMap_ARRAY_01d0e370[g_INT_01d0e36c].annotation_count = 0;
                  g_INT_01d0e36c = g_INT_01d0e36c + 1;
                  pSVar11->entry = (SNotesEntry *)local_40;
                }
                else {
LAB_004ab0bd:
                  pcVar7 = "image";
                  local_20 = local_1f4;
                  pbVar16 = local_5f4;
                  do {
                    pbVar15 = pbVar16;
                    pbVar16 = pbVar15 + 1;
                  } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
                  pbVar19 = local_20;
                  pSVar13 = local_40;
                  bVar2 = "image"[0];
                  if (*pbVar15 == 0x5c) {
                    while (local_40 = pSVar13, local_20 = pbVar19, bVar2 != 0) {
                      iVar12 = toupper((uint)*pbVar16);
                      iVar8 = toupper((uint)(byte)*pcVar7);
                      if (iVar12 != iVar8) goto LAB_004ab1fb;
                      pbVar15 = (byte *)(pcVar7 + 1);
                      pcVar7 = pcVar7 + 1;
                      pbVar16 = pbVar16 + 1;
                      pbVar19 = local_20;
                      pSVar13 = local_40;
                      bVar2 = *pbVar15;
                    }
                    while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
                      pbVar16 = pbVar16 + 1;
                    }
                    do {
                      bVar2 = *pbVar16;
                      *pbVar19 = bVar2;
                      if (bVar2 == 0) break;
                      bVar2 = pbVar16[1];
                      pbVar16 = pbVar16 + 2;
                      pbVar19[1] = bVar2;
                      pbVar19 = pbVar19 + 2;
                    } while (bVar2 != 0);
                    if ((pSVar13 == (SNotesSection *)0x0) || (pSVar13->first_page != 5)) {
                      pcVar7 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004aaa25;
                    }
                    if (g_INT_01d0e36c < 1) {
                      g_CurrentFilename = "..\\core\\fldnotes.cpp";
                      g_CurrentLineNumber = 2422;
                      core_main_c_displayErrorAndQuit_FUN_004e4330("Hell froze!");
                    }
                    iVar8 = g_INT_01d0e36c + -1;
                    iVar12 = sscanf((char *)local_1f4,"%s %d %d");
                    if (iVar12 != 3) {
                      pcVar7 = "Syntax error in \\image parms on line %d";
                      goto LAB_004aaa25;
                    }
                    if (SNotesMap_ARRAY_01d0e370[iVar8].image_name[0] != '\0') {
                      _sprintf(g_CHAR_ARRAY_01d0d010,"Multiple \\image tags found in map %s at line %d");
                      goto LAB_004aaa32;
                    }
                    engine_dosio_cpp_splitPath_FUN_00465e50
                              (local_f4,(char *)0x0,(char *)0x0,
                               SNotesMap_ARRAY_01d0e370[iVar8].image_name,(char *)0x0);
                  }
                  else {
LAB_004ab1fb:
                    pcVar7 = "set";
                    local_1c = local_1f4;
                    pbVar16 = local_5f4;
                    do {
                      pbVar15 = pbVar16;
                      pbVar16 = pbVar15 + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
                    pbVar19 = local_1c;
                    pSVar13 = local_40;
                    bVar2 = "set"[0];
                    if (*pbVar15 == 0x5c) {
                      while (local_40 = pSVar13, local_1c = pbVar19, bVar2 != 0) {
                        iVar12 = toupper((uint)*pbVar16);
                        iVar8 = toupper((uint)(byte)*pcVar7);
                        if (iVar12 != iVar8) goto LAB_004ab379;
                        pbVar15 = (byte *)(pcVar7 + 1);
                        pcVar7 = pcVar7 + 1;
                        pbVar16 = pbVar16 + 1;
                        pbVar19 = local_1c;
                        pSVar13 = local_40;
                        bVar2 = *pbVar15;
                      }
                      while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
                        pbVar16 = pbVar16 + 1;
                      }
                      do {
                        bVar2 = *pbVar16;
                        *pbVar19 = bVar2;
                        if (bVar2 == 0) break;
                        bVar2 = pbVar16[1];
                        pbVar16 = pbVar16 + 2;
                        pbVar19[1] = bVar2;
                        pbVar19 = pbVar19 + 2;
                      } while (bVar2 != 0);
                      if ((pSVar13 == (SNotesSection *)0x0) || (pSVar13->first_page != 5)) {
                        pcVar7 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004aaa25;
                      }
                      if (g_INT_01d0e36c < 1) {
                        g_CurrentFilename = "..\\core\\fldnotes.cpp";
                        g_CurrentLineNumber = 2458;
                        core_main_c_displayErrorAndQuit_FUN_004e4330("Hell froze!");
                      }
                      iVar8 = g_INT_01d0e36c + -1;
                      iVar12 = SNotesMap_ARRAY_01d0e370[iVar8].set_count;
                      if (9 < iVar12) {
                        _sprintf(g_CHAR_ARRAY_01d0d010,"Too many \\sets in map %s at line %d.");
                        goto LAB_004aaa32;
                      }
                      SNotesMap_ARRAY_01d0e370[iVar8].set_count = iVar12 + 1;
                      iVar10 = sscanf
                                         ((char *)local_1f4,"%s %d , %d , %d , %d , %f , %f , %f , %f");
                      if (iVar10 != 9) {
                        pcVar7 = "Syntax error in \\image parms on line %d";
                        goto LAB_004aaa25;
                      }
                      engine_dosio_cpp_changeFileExtension_FUN_00465f80
                                ((char *)(iVar8 * 0x126c + 0x1d0e410 + iVar12 * 0x88),".set"
                                );
                    }
                    else {
LAB_004ab379:
                      pcVar7 = "annotation";
                      local_18 = local_1f4;
                      pbVar16 = local_5f4;
                      do {
                        pbVar15 = pbVar16;
                        pbVar16 = pbVar15 + 1;
                      } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
                      pbVar19 = local_18;
                      pSVar13 = local_40;
                      bVar2 = "annotation"[0];
                      if (*pbVar15 == 0x5c) {
                        while (local_40 = pSVar13, local_18 = pbVar19, bVar2 != 0) {
                          iVar12 = toupper((uint)*pbVar16);
                          iVar8 = toupper((uint)(byte)*pcVar7);
                          if (iVar12 != iVar8) goto LAB_004ab518;
                          pbVar15 = (byte *)(pcVar7 + 1);
                          pcVar7 = pcVar7 + 1;
                          pbVar16 = pbVar16 + 1;
                          pbVar19 = local_18;
                          pSVar13 = local_40;
                          bVar2 = *pbVar15;
                        }
                        while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
                          pbVar16 = pbVar16 + 1;
                        }
                        do {
                          bVar2 = *pbVar16;
                          *pbVar19 = bVar2;
                          if (bVar2 == 0) break;
                          bVar2 = pbVar16[1];
                          pbVar16 = pbVar16 + 2;
                          pbVar19[1] = bVar2;
                          pbVar19 = pbVar19 + 2;
                        } while (bVar2 != 0);
                        if ((pSVar13 == (SNotesSection *)0x0) || (pSVar13->first_page != 5)) {
                          pcVar7 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004aaa25;
                        }
                        if (g_INT_01d0e36c < 1) {
                          g_CurrentFilename = "..\\core\\fldnotes.cpp";
                          g_CurrentLineNumber = 2502;
                          core_main_c_displayErrorAndQuit_FUN_004e4330("Hell froze!");
                        }
                        iVar8 = g_INT_01d0e36c + -1;
                        iVar12 = SNotesMap_ARRAY_01d0e370[iVar8].annotation_count;
                        if (0xe < iVar12) {
                          _sprintf(g_CHAR_ARRAY_01d0d010,"Too many \\annotations in map %s at line %d.");
                          goto LAB_004aaa32;
                        }
                        pcVar7 = (char *)(iVar12 * 0xd4 + iVar8 * 0x126c + 0x1d0e964);
                        SNotesMap_ARRAY_01d0e370[iVar8].annotation_count = iVar12 + 1;
                        iVar12 = sscanf((char *)local_1f4,"%[^,], %d , %d , \"%[^\"]\"");
                        if (iVar12 != 4) {
                          pcVar7 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004aaa25;
                        }
                        core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a7890(pcVar7);
                        core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a7890(pcVar7 + 100);
                        pcVar7[0xd0] = '\0';
                        pcVar7[0xd1] = '\0';
                        pcVar7[0xd2] = '\0';
                        pcVar7[0xd3] = '\0';
                      }
                      else {
LAB_004ab518:
                        pcVar7 = "end";
                        local_14 = local_1f4;
                        pbVar16 = local_5f4;
                        do {
                          pbVar15 = pbVar16;
                          pbVar16 = pbVar15 + 1;
                        } while ((g_CharacterClassificationTable[(byte)(*pbVar15 + 1)] & 2) != 0);
                        pbVar19 = local_14;
                        p_Var5 = local_4c;
                        bVar2 = "end"[0];
                        if (*pbVar15 == 0x5c) {
                          while( true ) {
                            local_14 = pbVar19;
                            if (bVar2 == 0) goto LAB_004ab716;
                            local_4c = p_Var5;
                            iVar12 = toupper((uint)*pbVar16);
                            iVar8 = toupper((uint)(byte)*pcVar7);
                            if (iVar12 != iVar8) break;
                            pbVar15 = (byte *)(pcVar7 + 1);
                            pcVar7 = pcVar7 + 1;
                            pbVar16 = pbVar16 + 1;
                            pbVar19 = local_14;
                            p_Var5 = local_4c;
                            bVar2 = *pbVar15;
                          }
                        }
                        if (local_5f4[0] == 0x5c) {
                          _sprintf(g_CHAR_ARRAY_01d0d010,"Unknown tag: '%s' in %s, line %d");
                          goto LAB_004aaa32;
                        }
                        if (local_40 == (SNotesSection *)0x0) {
                          _sprintf(g_CHAR_ARRAY_01d0d010,"No entry started in %s, line %d");
                          goto LAB_004aaa32;
                        }
                        shape_edittool_cpp_CStrList_add_FUN_00482070
                                  ((CStrList *)&local_40->tab_x,(char *)local_5f4);
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
LAB_004aaa25:
  _sprintf(g_CHAR_ARRAY_01d0d010,pcVar7);
LAB_004aaa32:
  if (local_4c != (_FILE *)0x0) {
    _fclose(local_4c);
  }
  if (error_text == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,g_CHAR_ARRAY_01d0d010);
  }
  else {
    pcVar7 = g_CHAR_ARRAY_01d0d010;
    do {
      cVar1 = *pcVar7;
      *error_text = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      error_text[1] = cVar1;
      error_text = error_text + 2;
    } while (cVar1 != '\0');
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(this_ptr);
  return 0;
LAB_004ab716:
  while ((g_CharacterClassificationTable[(byte)(*pbVar16 + 1)] & 2) != 0) {
    pbVar16 = pbVar16 + 1;
  }
  do {
    bVar20 = *pbVar16;
    *pbVar19 = bVar20;
    local_4c = p_Var5;
    if (bVar20 == 0) break;
    bVar20 = pbVar16[1];
    pbVar16 = pbVar16 + 2;
    pbVar19[1] = bVar20;
    pbVar19 = pbVar19 + 2;
  } while (bVar20 != 0);
LAB_004aa931:
  iVar12 = 0;
  _fclose(local_4c);
  local_4c = (_FILE *)0x0;
  if (0 < g_INT_01d0e36c) {
    pSVar11 = SNotesMap_ARRAY_01d0e370;
    do {
      core_fldnotes_cpp_SNotesMap_load_FUN_004a9f30(pSVar11);
      iVar12 = iVar12 + 1;
      pSVar11 = pSVar11 + 1;
    } while (iVar12 < g_INT_01d0e36c);
  }
  g_INT_005fe374 = 1;
  g_INT_005fe370 = 1;
  if (error_text != (char *)0x0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    core_fldnotes_cpp_STextView_reset_FUN_004a8e00(&g_STextViewInstance);
    g_CHAR_ARRAY_01d0d010[0] = '\0';
    g_INT_005fe374 = 0;
    iVar12 = 0;
    if (0 < g_INT_01d0d210) {
      pSVar13 = SNotesSection_ARRAY_01d0d214;
      do {
        iVar8 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(pSVar13,&g_STextViewInstance);
        if (iVar8 == 0) goto LAB_004aaa32;
        iVar12 = iVar12 + 1;
        pSVar13 = pSVar13 + 1;
      } while (iVar12 < g_INT_01d0d210);
    }
  }
  return 1;
}
