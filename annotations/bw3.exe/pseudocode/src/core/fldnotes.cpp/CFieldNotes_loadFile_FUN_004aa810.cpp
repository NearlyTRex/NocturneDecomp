// Name: core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810
// Address: 004aa810
// Address Range: [[004aa810, 004ab795]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004aa810(CFieldNotes *this_ptr,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004aa810(CFieldNotes *this_ptr,char *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  SNotesSection *pSVar3;
  SNotesSection *pSVar4;
  _FILE *p_Var5;
  bool bVar6;
  int iVar7;
  byte *puVar8;
  undefined3 extraout_var;
  int iVar9;
  SNotesMap *pSVar10;
  byte *pbVar11;
  SNotesSection *pSVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  CFieldNotes *pCVar16;
  char *pcVar17;
  byte *pbVar18;
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
  pCVar16 = this_ptr;
  do {
    cVar1 = *param_2;
    pCVar16->file_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pCVar16->file_name[1] = cVar1;
    pCVar16 = (CFieldNotes *)(pCVar16->file_name + 2);
  } while (cVar1 != '\0');
  _DAT_01d0d008 = (uint)(param_3 != (char *)0x0);
  local_48 = engine_dosio_cpp_getFileSize_FUN_004657f0("world",this_ptr->file_name);
  if (-1 < local_48) {
    local_4c = engine_dosio_cpp_FUN_004659c0("world",this_ptr->file_name,&DAT_005c11fa);
    if (local_4c == (_FILE *)0x0) {
      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
      _DAT_01d71de4 = 0x8ed;
      core_main_c_FUN_004e4330("Can't open field notes file %s",this_ptr);
    }
    iVar7 = _ftell(local_4c);
    local_44 = (SNotesSection *)0x0;
    local_40 = (SNotesSection *)0x0;
    local_48 = local_48 + iVar7;
    do {
      p_Var5 = local_4c;
      iVar7 = _ftell(local_4c);
      if ((local_48 <= iVar7) ||
         (puVar8 = (byte *)_fgets(local_5f4,0x400,p_Var5),
         puVar8 != local_5f4)) goto LAB_004aa931;
      pcVar13 = strstr((char *)local_5f4,&DAT_005c0d0f);
      if (pcVar13 != (char *)0x0) {
        *pcVar13 = '\0';
      }
      unkaddr_004a76f0_cpp_FUN_004a7890(local_5f4);
      if (local_5f4[0] != 0) {
        pcVar13 = "section";
        local_3c = local_1f4;
        pbVar15 = local_5f4;
        do {
          pbVar11 = pbVar15;
          pbVar15 = pbVar11 + 1;
        } while (((&DAT_006074b8)[(byte)(*pbVar11 + 1)] & 2) != 0);
        pbVar18 = local_3c;
        bVar2 = "section"[0];
        if (*pbVar11 == 0x5c) {
          while (local_3c = pbVar18, bVar2 != 0) {
            iVar7 = toupper((uint)*pbVar15);
            iVar9 = toupper((uint)(byte)*pcVar13);
            if (iVar7 != iVar9) goto LAB_004aab32;
            pbVar11 = (byte *)(pcVar13 + 1);
            pcVar13 = pcVar13 + 1;
            pbVar15 = pbVar15 + 1;
            pbVar18 = local_3c;
            bVar2 = *pbVar11;
          }
          while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
            pbVar15 = pbVar15 + 1;
          }
          do {
            bVar2 = *pbVar15;
            *pbVar18 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar15[1];
            pbVar15 = pbVar15 + 2;
            pbVar18[1] = bVar2;
            pbVar18 = pbVar18 + 2;
          } while (bVar2 != 0);
          if (5 < _DAT_01d0d210) {
            _sprintf(&DAT_01d0d010,"Too many field notes sections in %s, line %d");
            goto LAB_004aaa32;
          }
          local_44 = SNotesSection_ARRAY_01d0d214 + _DAT_01d0d210;
          pbVar15 = local_1f4;
          pSVar12 = local_44;
          do {
            bVar2 = *pbVar15;
            pSVar12->name[0] = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar15[1];
            pbVar15 = pbVar15 + 2;
            pSVar12->name[1] = bVar2;
            pSVar12 = (SNotesSection *)(pSVar12->name + 2);
          } while (bVar2 != 0);
          local_40 = (SNotesSection *)0x0;
          _DAT_01d0d210 = _DAT_01d0d210 + 1;
        }
        else {
LAB_004aab32:
          pcVar13 = "title";
          local_38 = local_1f4;
          pbVar15 = local_5f4;
          do {
            pbVar11 = pbVar15;
            pbVar15 = pbVar11 + 1;
          } while (((&DAT_006074b8)[(byte)(*pbVar11 + 1)] & 2) != 0);
          pbVar18 = local_38;
          iVar7 = local_50;
          pSVar12 = local_44;
          pSVar4 = local_40;
          bVar2 = "title"[0];
          if (*pbVar11 == 0x5c) {
            while (local_50 = iVar7, local_44 = pSVar12, local_40 = pSVar4, local_38 = pbVar18,
                  bVar2 != 0) {
              iVar7 = toupper((uint)*pbVar15);
              iVar9 = toupper((uint)(byte)*pcVar13);
              if (iVar7 != iVar9) goto LAB_004aac4c;
              pbVar11 = (byte *)(pcVar13 + 1);
              pcVar13 = pcVar13 + 1;
              pbVar15 = pbVar15 + 1;
              pbVar18 = local_38;
              iVar7 = local_50;
              pSVar12 = local_44;
              pSVar4 = local_40;
              bVar2 = *pbVar11;
            }
            while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
              pbVar15 = pbVar15 + 1;
            }
            do {
              bVar2 = *pbVar15;
              *pbVar18 = bVar2;
              if (bVar2 == 0) break;
              bVar2 = pbVar15[1];
              pbVar15 = pbVar15 + 2;
              pbVar18[1] = bVar2;
              pbVar18 = pbVar18 + 2;
            } while (bVar2 != 0);
            pSVar3 = pSVar4;
            if ((pSVar4 == (SNotesSection *)0x0) &&
               (pSVar3 = pSVar12, pSVar12 == (SNotesSection *)0x0)) {
              _sprintf(&DAT_01d0d010,"Didn't expect '\\title' in %s, line %d");
              goto LAB_004aaa32;
            }
            pbVar15 = local_1f4;
            pcVar13 = pSVar3->title;
            do {
              bVar2 = *pbVar15;
              *pcVar13 = bVar2;
              if (bVar2 == 0) break;
              bVar2 = pbVar15[1];
              pbVar15 = pbVar15 + 2;
              pcVar13[1] = bVar2;
              pcVar13 = pcVar13 + 2;
            } while (bVar2 != 0);
            if ((pSVar4 != (SNotesSection *)0x0) && (iVar7 != 0)) {
              pcVar13 = pSVar4->title;
              _strncpy(local_90,pcVar13,0x3f);
              pcVar14 = &DAT_005c1298;
              pcVar17 = pcVar13;
              do {
                cVar1 = *pcVar14;
                *pcVar17 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar14[1];
                pcVar14 = pcVar14 + 2;
                pcVar17[1] = cVar1;
                pcVar17 = pcVar17 + 2;
              } while (cVar1 != '\0');
              pcVar17 = local_90;
              iVar7 = -1;
              do {
                pcVar14 = pcVar13;
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                pcVar14 = pcVar13 + (uint)bVar20 * -2 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              pcVar14 = pcVar14 + -1;
              do {
                cVar1 = *pcVar17;
                *pcVar14 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar17[1];
                pcVar17 = pcVar17 + 2;
                pcVar14[1] = cVar1;
                pcVar14 = pcVar14 + 2;
              } while (cVar1 != '\0');
            }
          }
          else {
LAB_004aac4c:
            pcVar13 = "entry";
            local_34 = local_1f4;
            pbVar15 = local_5f4;
            do {
              pbVar11 = pbVar15;
              pbVar15 = pbVar11 + 1;
            } while (((&DAT_006074b8)[(byte)(*pbVar11 + 1)] & 2) != 0);
            pbVar18 = local_34;
            pSVar12 = local_44;
            bVar2 = "entry"[0];
            if (*pbVar11 == 0x5c) {
              while (local_44 = pSVar12, local_34 = pbVar18, bVar2 != 0) {
                iVar7 = toupper((uint)*pbVar15);
                iVar9 = toupper((uint)(byte)*pcVar13);
                if (iVar7 != iVar9) goto LAB_004aadd9;
                pbVar11 = (byte *)(pcVar13 + 1);
                pcVar13 = pcVar13 + 1;
                pbVar15 = pbVar15 + 1;
                pbVar18 = local_34;
                pSVar12 = local_44;
                bVar2 = *pbVar11;
              }
              while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
                pbVar15 = pbVar15 + 1;
              }
              do {
                bVar2 = *pbVar15;
                *pbVar18 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar15[1];
                pbVar15 = pbVar15 + 2;
                pbVar18[1] = bVar2;
                pbVar18 = pbVar18 + 2;
              } while (bVar2 != 0);
              local_50 = 0;
              if (pSVar12 == (SNotesSection *)0x0) {
                _sprintf(&DAT_01d0d010,"Didn't expect '\\entry' in %s, line %d");
                goto LAB_004aaa32;
              }
              local_30 = (int *)0x0;
              iVar7 = 0;
              if (0 < _DAT_01d0d210) {
                pSVar12 = SNotesSection_ARRAY_01d0d214;
                do {
                  iVar9 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30
                                    (pSVar12,(char *)local_1f4);
                  if (iVar9 != 0) {
                    if (local_30 != (int *)0x0) {
                      *local_30 = iVar7;
                    }
                    if (iVar9 != 0) {
                      _sprintf(&DAT_01d0d010,"Duplicate entry '%s' in %s");
                      goto LAB_004aaa32;
                    }
                    break;
                  }
                  iVar7 = iVar7 + 1;
                  pSVar12 = pSVar12 + 1;
                } while (iVar7 < _DAT_01d0d210);
              }
              local_40 = (SNotesSection *)
                         core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a9c80
                                   (local_44,(char *)local_1f4,0);
            }
            else {
LAB_004aadd9:
              pbVar11 = &DAT_005c12e1;
              local_2c = local_1f4;
              pbVar15 = local_5f4;
              do {
                pbVar18 = pbVar15;
                pbVar15 = pbVar18 + 1;
              } while (((&DAT_006074b8)[(byte)(*pbVar18 + 1)] & 2) != 0);
              pbVar19 = local_2c;
              pSVar12 = local_44;
              bVar2 = 0x74;
              if (*pbVar18 == 0x5c) {
                while (local_44 = pSVar12, local_2c = pbVar19, bVar2 != 0) {
                  iVar7 = toupper((uint)*pbVar15);
                  iVar9 = toupper((uint)*pbVar11);
                  if (iVar7 != iVar9) goto LAB_004aaf4a;
                  pbVar18 = pbVar11 + 1;
                  pbVar11 = pbVar11 + 1;
                  pbVar15 = pbVar15 + 1;
                  pbVar19 = local_2c;
                  pSVar12 = local_44;
                  bVar2 = *pbVar18;
                }
                while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
                  pbVar15 = pbVar15 + 1;
                }
                do {
                  bVar2 = *pbVar15;
                  *pbVar19 = bVar2;
                  if (bVar2 == 0) break;
                  bVar2 = pbVar15[1];
                  pbVar15 = pbVar15 + 2;
                  pbVar19[1] = bVar2;
                  pbVar19 = pbVar19 + 2;
                } while (bVar2 != 0);
                local_50 = 0;
                if (pSVar12 == (SNotesSection *)0x0) {
                  _sprintf(&DAT_01d0d010,"Didn't expect '\\task' in %s, line %d");
                  goto LAB_004aaa32;
                }
                iVar7 = 0;
                local_28 = (int *)0x0;
                if (0 < _DAT_01d0d210) {
                  pSVar12 = SNotesSection_ARRAY_01d0d214;
                  do {
                    iVar9 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30
                                      (pSVar12,(char *)local_1f4);
                    if (iVar9 != 0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar7;
                      }
                      if (iVar9 != 0) {
                        _sprintf(&DAT_01d0d010,"Duplicate entry '%s' in %s");
                        goto LAB_004aaa32;
                      }
                      break;
                    }
                    iVar7 = iVar7 + 1;
                    pSVar12 = pSVar12 + 1;
                  } while (iVar7 < _DAT_01d0d210);
                }
                local_40 = (SNotesSection *)
                           core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a9c80
                                     (local_44,(char *)local_1f4,2);
              }
              else {
LAB_004aaf4a:
                pbVar11 = &DAT_005c1326;
                local_24 = local_1f4;
                pbVar15 = local_5f4;
                do {
                  pbVar18 = pbVar15;
                  pbVar15 = pbVar18 + 1;
                } while (((&DAT_006074b8)[(byte)(*pbVar18 + 1)] & 2) != 0);
                pbVar19 = local_24;
                pSVar12 = local_44;
                bVar2 = 0x6D;
                if (*pbVar18 == 0x5c) {
                  while (local_44 = pSVar12, local_24 = pbVar19, bVar2 != 0) {
                    iVar7 = toupper((uint)*pbVar15);
                    iVar9 = toupper((uint)*pbVar11);
                    if (iVar7 != iVar9) goto LAB_004ab0bd;
                    pbVar18 = pbVar11 + 1;
                    pbVar11 = pbVar11 + 1;
                    pbVar15 = pbVar15 + 1;
                    pbVar19 = local_24;
                    pSVar12 = local_44;
                    bVar2 = *pbVar18;
                  }
                  while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
                    pbVar15 = pbVar15 + 1;
                  }
                  do {
                    bVar2 = *pbVar15;
                    *pbVar19 = bVar2;
                    if (bVar2 == 0) break;
                    bVar2 = pbVar15[1];
                    pbVar15 = pbVar15 + 2;
                    pbVar19[1] = bVar2;
                    pbVar19 = pbVar19 + 2;
                  } while (bVar2 != 0);
                  local_50 = 1;
                  if (pSVar12 == (SNotesSection *)0x0) {
                    _sprintf(&DAT_01d0d010,"Didn't expect '\\map' in %s, line %d");
                    goto LAB_004aaa32;
                  }
                  if (9 < (int)_DAT_01d0e36c) {
                    pcVar13 = "Too many maps!  (max is %d)";
                    goto LAB_004aaa25;
                  }
                  local_40 = (SNotesSection *)
                             core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a9c80
                                       (pSVar12,(char *)local_1f4,5);
                  local_40->entries[1] = _DAT_01d0e36c;
                  pSVar10 = SNotesMap_ARRAY_01d0e370 + (int)_DAT_01d0e36c;
                  SNotesMap_ARRAY_01d0e370[(int)_DAT_01d0e36c].annotation_count = 0;
                  _DAT_01d0e36c = (SNotesEntry *)(_DAT_01d0e36c->name + 1);
                  pSVar10->entry = (SNotesEntry *)local_40;
                }
                else {
LAB_004ab0bd:
                  pcVar13 = "image";
                  local_20 = local_1f4;
                  pbVar15 = local_5f4;
                  do {
                    pbVar11 = pbVar15;
                    pbVar15 = pbVar11 + 1;
                  } while (((&DAT_006074b8)[(byte)(*pbVar11 + 1)] & 2) != 0);
                  pbVar18 = local_20;
                  pSVar12 = local_40;
                  bVar2 = "image"[0];
                  if (*pbVar11 == 0x5c) {
                    while (local_40 = pSVar12, local_20 = pbVar18, bVar2 != 0) {
                      iVar7 = toupper((uint)*pbVar15);
                      iVar9 = toupper((uint)(byte)*pcVar13);
                      if (iVar7 != iVar9) goto LAB_004ab1fb;
                      pbVar11 = (byte *)(pcVar13 + 1);
                      pcVar13 = pcVar13 + 1;
                      pbVar15 = pbVar15 + 1;
                      pbVar18 = local_20;
                      pSVar12 = local_40;
                      bVar2 = *pbVar11;
                    }
                    while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
                      pbVar15 = pbVar15 + 1;
                    }
                    do {
                      bVar2 = *pbVar15;
                      *pbVar18 = bVar2;
                      if (bVar2 == 0) break;
                      bVar2 = pbVar15[1];
                      pbVar15 = pbVar15 + 2;
                      pbVar18[1] = bVar2;
                      pbVar18 = pbVar18 + 2;
                    } while (bVar2 != 0);
                    if ((pSVar12 == (SNotesSection *)0x0) || (pSVar12->first_page != 5)) {
                      pcVar13 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004aaa25;
                    }
                    if ((int)_DAT_01d0e36c < 1) {
                      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
                      _DAT_01d71de4 = 0x976;
                      core_main_c_FUN_004e4330("Hell froze!");
                    }
                    puVar8 = (byte *)((int)&_DAT_01d0e36c[-1].map_index + 3);
                    iVar7 = sscanf((char *)local_1f4,"%s %d %d");
                    if (iVar7 != 3) {
                      pcVar13 = "Syntax error in \\image parms on line %d";
                      goto LAB_004aaa25;
                    }
                    if (SNotesMap_ARRAY_01d0e370[(int)puVar8].image_name[0] != '\0') {
                      _sprintf(&DAT_01d0d010,"Multiple \\image tags found in map %s at line %d");
                      goto LAB_004aaa32;
                    }
                    engine_dosio_cpp_splitPath_FUN_00465e50
                              (local_f4,(char *)0x0,(char *)0x0,
                               SNotesMap_ARRAY_01d0e370[(int)puVar8].image_name,(char *)0x0);
                  }
                  else {
LAB_004ab1fb:
                    pbVar11 = &DAT_005c1442;
                    local_1c = local_1f4;
                    pbVar15 = local_5f4;
                    do {
                      pbVar18 = pbVar15;
                      pbVar15 = pbVar18 + 1;
                    } while (((&DAT_006074b8)[(byte)(*pbVar18 + 1)] & 2) != 0);
                    pbVar19 = local_1c;
                    pSVar12 = local_40;
                    bVar2 = 0x73;
                    if (*pbVar18 == 0x5c) {
                      while (local_40 = pSVar12, local_1c = pbVar19, bVar2 != 0) {
                        iVar7 = toupper((uint)*pbVar15);
                        iVar9 = toupper((uint)*pbVar11);
                        if (iVar7 != iVar9) goto LAB_004ab379;
                        pbVar18 = pbVar11 + 1;
                        pbVar11 = pbVar11 + 1;
                        pbVar15 = pbVar15 + 1;
                        pbVar19 = local_1c;
                        pSVar12 = local_40;
                        bVar2 = *pbVar18;
                      }
                      while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
                        pbVar15 = pbVar15 + 1;
                      }
                      do {
                        bVar2 = *pbVar15;
                        *pbVar19 = bVar2;
                        if (bVar2 == 0) break;
                        bVar2 = pbVar15[1];
                        pbVar15 = pbVar15 + 2;
                        pbVar19[1] = bVar2;
                        pbVar19 = pbVar19 + 2;
                      } while (bVar2 != 0);
                      if ((pSVar12 == (SNotesSection *)0x0) || (pSVar12->first_page != 5)) {
                        pcVar13 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004aaa25;
                      }
                      if ((int)_DAT_01d0e36c < 1) {
                        _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
                        _DAT_01d71de4 = 0x99a;
                        core_main_c_FUN_004e4330("Hell froze!");
                      }
                      puVar8 = (byte *)((int)&_DAT_01d0e36c[-1].map_index + 3);
                      iVar7 = SNotesMap_ARRAY_01d0e370[(int)puVar8].set_count;
                      if (9 < iVar7) {
                        _sprintf(&DAT_01d0d010,"Too many \\sets in map %s at line %d.");
                        goto LAB_004aaa32;
                      }
                      SNotesMap_ARRAY_01d0e370[(int)puVar8].set_count = iVar7 + 1;
                      iVar9 = sscanf
                                        ((char *)local_1f4,"%s %d , %d , %d , %d , %f , %f , %f , %f");
                      if (iVar9 != 9) {
                        pcVar13 = "Syntax error in \\image parms on line %d";
                        goto LAB_004aaa25;
                      }
                      engine_dosio_cpp_changeFileExtension_FUN_00465f80
                                ((char *)((int)puVar8 * 0x126c + 0x1d0e410 + iVar7 * 0x88),
                                 &DAT_005c150b);
                    }
                    else {
LAB_004ab379:
                      pcVar13 = "annotation";
                      local_18 = local_1f4;
                      pbVar15 = local_5f4;
                      do {
                        pbVar11 = pbVar15;
                        pbVar15 = pbVar11 + 1;
                      } while (((&DAT_006074b8)[(byte)(*pbVar11 + 1)] & 2) != 0);
                      pbVar18 = local_18;
                      pSVar12 = local_40;
                      bVar2 = "annotation"[0];
                      if (*pbVar11 == 0x5c) {
                        while (local_40 = pSVar12, local_18 = pbVar18, bVar2 != 0) {
                          iVar7 = toupper((uint)*pbVar15);
                          iVar9 = toupper((uint)(byte)*pcVar13);
                          if (iVar7 != iVar9) goto LAB_004ab518;
                          pbVar11 = (byte *)(pcVar13 + 1);
                          pcVar13 = pcVar13 + 1;
                          pbVar15 = pbVar15 + 1;
                          pbVar18 = local_18;
                          pSVar12 = local_40;
                          bVar2 = *pbVar11;
                        }
                        while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
                          pbVar15 = pbVar15 + 1;
                        }
                        do {
                          bVar2 = *pbVar15;
                          *pbVar18 = bVar2;
                          if (bVar2 == 0) break;
                          bVar2 = pbVar15[1];
                          pbVar15 = pbVar15 + 2;
                          pbVar18[1] = bVar2;
                          pbVar18 = pbVar18 + 2;
                        } while (bVar2 != 0);
                        if ((pSVar12 == (SNotesSection *)0x0) || (pSVar12->first_page != 5)) {
                          pcVar13 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004aaa25;
                        }
                        if ((int)_DAT_01d0e36c < 1) {
                          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
                          _DAT_01d71de4 = 0x9c6;
                          core_main_c_FUN_004e4330("Hell froze!");
                        }
                        puVar8 = (byte *)((int)&_DAT_01d0e36c[-1].map_index + 3);
                        iVar7 = SNotesMap_ARRAY_01d0e370[(int)puVar8].annotation_count;
                        if (0xe < iVar7) {
                          _sprintf(&DAT_01d0d010,"Too many \\annotations in map %s at line %d.");
                          goto LAB_004aaa32;
                        }
                        iVar9 = iVar7 * 0xd4 + (int)puVar8 * 0x126c + 0x1d0e964;
                        SNotesMap_ARRAY_01d0e370[(int)puVar8].annotation_count = iVar7 + 1;
                        iVar7 = sscanf((char *)local_1f4,"%[^,], %d , %d , \"%[^\"]\"");
                        if (iVar7 != 4) {
                          pcVar13 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004aaa25;
                        }
                        unkaddr_004a76f0_cpp_FUN_004a7890(iVar9);
                        unkaddr_004a76f0_cpp_FUN_004a7890(iVar9 + 100);
                        *(uint *)(iVar9 + 0xd0) = 0;
                      }
                      else {
LAB_004ab518:
                        pbVar11 = &DAT_005c15e3;
                        local_14 = local_1f4;
                        pbVar15 = local_5f4;
                        do {
                          pbVar18 = pbVar15;
                          pbVar15 = pbVar18 + 1;
                        } while (((&DAT_006074b8)[(byte)(*pbVar18 + 1)] & 2) != 0);
                        pbVar19 = local_14;
                        p_Var5 = local_4c;
                        bVar2 = 0x65;
                        if (*pbVar18 == 0x5c) {
                          while( true ) {
                            local_14 = pbVar19;
                            if (bVar2 == 0) goto LAB_004ab716;
                            local_4c = p_Var5;
                            iVar7 = toupper((uint)*pbVar15);
                            iVar9 = toupper((uint)*pbVar11);
                            if (iVar7 != iVar9) break;
                            pbVar18 = pbVar11 + 1;
                            pbVar11 = pbVar11 + 1;
                            pbVar15 = pbVar15 + 1;
                            pbVar19 = local_14;
                            p_Var5 = local_4c;
                            bVar2 = *pbVar18;
                          }
                        }
                        if (local_5f4[0] == 0x5c) {
                          _sprintf(&DAT_01d0d010,"Unknown tag: '%s' in %s, line %d");
                          goto LAB_004aaa32;
                        }
                        if (local_40 == (SNotesSection *)0x0) {
                          _sprintf(&DAT_01d0d010,"No entry started in %s, line %d");
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
  pcVar13 = "Can't open field notes file %s";
LAB_004aaa25:
  _sprintf(&DAT_01d0d010,pcVar13);
LAB_004aaa32:
  if (local_4c != (_FILE *)0x0) {
    _fclose(local_4c);
  }
  if (param_3 == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,&DAT_01d0d010);
  }
  else {
    pcVar13 = &DAT_01d0d010;
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
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(this_ptr);
  return 0;
LAB_004ab716:
  while (((&DAT_006074b8)[(byte)(*pbVar15 + 1)] & 2) != 0) {
    pbVar15 = pbVar15 + 1;
  }
  do {
    bVar20 = *pbVar15;
    *pbVar19 = bVar20;
    local_4c = p_Var5;
    if (bVar20 == 0) break;
    bVar20 = pbVar15[1];
    pbVar15 = pbVar15 + 2;
    pbVar19[1] = bVar20;
    pbVar19 = pbVar19 + 2;
  } while (bVar20 != 0);
LAB_004aa931:
  iVar7 = 0;
  _fclose(local_4c);
  local_4c = (_FILE *)0x0;
  if (0 < (int)_DAT_01d0e36c) {
    pSVar10 = SNotesMap_ARRAY_01d0e370;
    do {
      core_fldnotes_cpp_SNotesMap_load_FUN_004a9f30(pSVar10);
      iVar7 = iVar7 + 1;
      pSVar10 = pSVar10 + 1;
    } while (iVar7 < (int)_DAT_01d0e36c);
  }
  DAT_005fe374 = 1;
  DAT_005fe370 = 1;
  if (param_3 != (char *)0x0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    core_fldnotes_cpp_STextView_reset_FUN_004a8e00(&g_STextViewInstance);
    DAT_01d0d010 = 0;
    DAT_005fe374 = 0;
    iVar7 = 0;
    if (0 < _DAT_01d0d210) {
      pSVar12 = SNotesSection_ARRAY_01d0d214;
      do {
        bVar6 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(pSVar12,0x1d19d30);
        if (CONCAT31(extraout_var,bVar6) == 0) goto LAB_004aaa32;
        iVar7 = iVar7 + 1;
        pSVar12 = pSVar12 + 1;
      } while (iVar7 < _DAT_01d0d210);
    }
  }
  return 1;
}
