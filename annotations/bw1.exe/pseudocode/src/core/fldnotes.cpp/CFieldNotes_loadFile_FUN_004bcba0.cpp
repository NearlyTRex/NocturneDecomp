// Name: core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0
// Address: 004bcba0
// Address Range: [[004bcba0, 004bda9d]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0(CFieldNotes *this_ptr,char *file_name,char *error_text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0(CFieldNotes *this_ptr,char *file_name,char *error_text)

{
  char cVar1;
  byte bVar2;
  _FILE *p_Var3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  SNotesEntry *pSVar7;
  SNotesMap *pSVar8;
  SNotesSection *pSVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
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
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(this_ptr);
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
  _DAT_01cc4268 = (uint)(error_text != (char *)0x0);
  local_4c = engine_dosio_cpp_getFileSize_FUN_00478fb0("world",this_ptr->file_name);
  if (-1 < local_4c) {
    local_50 = engine_dosio_cpp_FUN_00479180("world",this_ptr->file_name,&DAT_005dfd0d);
    if (local_50 == (_FILE *)0x0) {
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0x8ee;
      core_main_c_FUN_005030e0("Can't open field notes file %s",this_ptr);
    }
    lVar4 = _ftell(local_50);
    local_48 = (SNotesSection *)0x0;
    local_44 = (SNotesEntry *)0x0;
    local_4c = local_4c + lVar4;
    do {
      lVar4 = _ftell(local_50);
      if ((local_4c <= lVar4) ||
         (pcVar5 = _fgets((char *)local_5b4,0x400,local_50),
         (byte *)pcVar5 != local_5b4)) goto LAB_004bccbd;
      pcVar5 = strstr((char *)local_5b4,&DAT_005df822);
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      core_flashlit_cpp_FUN_004b9c50(local_5b4);
      if (local_5b4[0] != 0) {
        pcVar5 = "section";
        local_40 = local_1b4;
        pbVar13 = local_5b4;
        do {
          pbVar10 = pbVar13;
          pbVar13 = pbVar10 + 1;
        } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
        pbVar15 = local_40;
        bVar2 = "section"[0];
        if (*pbVar10 == 0x5c) {
          while (local_40 = pbVar15, bVar2 != 0) {
            iVar12 = toupper((uint)*pbVar13);
            iVar6 = toupper((uint)(byte)*pcVar5);
            if (iVar12 != iVar6) goto LAB_004bceb4;
            pbVar10 = (byte *)(pcVar5 + 1);
            pcVar5 = pcVar5 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar15 = local_40;
            bVar2 = *pbVar10;
          }
          while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
          if (5 < _DAT_01cc4470) {
            _sprintf(&DAT_01cc4270,"Too many field notes sections in %s, line %d");
            goto LAB_004bcdbb;
          }
          local_48 = SNotesSection_ARRAY_01cc4474 + _DAT_01cc4470;
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
          _DAT_01cc4470 = _DAT_01cc4470 + 1;
        }
        else {
LAB_004bceb4:
          pcVar5 = "title";
          local_3c = local_1b4;
          pbVar13 = local_5b4;
          do {
            pbVar10 = pbVar13;
            pbVar13 = pbVar10 + 1;
          } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
          pbVar15 = local_3c;
          pSVar9 = local_48;
          pSVar7 = local_44;
          bVar2 = "title"[0];
          if (*pbVar10 == 0x5c) {
            while (local_48 = pSVar9, local_44 = pSVar7, local_3c = pbVar15, bVar2 != 0) {
              iVar12 = toupper((uint)*pbVar13);
              iVar6 = toupper((uint)(byte)*pcVar5);
              if (iVar12 != iVar6) goto LAB_004bcfcf;
              pbVar10 = (byte *)(pcVar5 + 1);
              pcVar5 = pcVar5 + 1;
              pbVar13 = pbVar13 + 1;
              pbVar15 = local_3c;
              pSVar9 = local_48;
              pSVar7 = local_44;
              bVar2 = *pbVar10;
            }
            while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
              if (pSVar9 == (SNotesSection *)0x0) {
                _sprintf(&DAT_01cc4270,"Didn't expect '\\title' in %s, line %d");
                goto LAB_004bcdbb;
              }
              pbVar13 = local_1b4;
              pcVar5 = pSVar9->title;
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
LAB_004bcfcf:
            pcVar5 = "entry";
            local_38 = local_1b4;
            pbVar13 = local_5b4;
            do {
              pbVar10 = pbVar13;
              pbVar13 = pbVar10 + 1;
            } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
            pbVar15 = local_38;
            pSVar9 = local_48;
            bVar2 = "entry"[0];
            if (*pbVar10 == 0x5c) {
              while (local_48 = pSVar9, local_38 = pbVar15, bVar2 != 0) {
                iVar12 = toupper((uint)*pbVar13);
                iVar6 = toupper((uint)(byte)*pcVar5);
                if (iVar12 != iVar6) goto LAB_004bd0f5;
                pbVar10 = (byte *)(pcVar5 + 1);
                pcVar5 = pcVar5 + 1;
                pbVar13 = pbVar13 + 1;
                pbVar15 = local_38;
                pSVar9 = local_48;
                bVar2 = *pbVar10;
              }
              while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                _sprintf(&DAT_01cc4270,"Didn't expect '\\entry' in %s, line %d");
                goto LAB_004bcdbb;
              }
              iVar12 = 0;
              local_34 = (int *)0x0;
              if (0 < _DAT_01cc4470) {
                pSVar9 = SNotesSection_ARRAY_01cc4474;
                do {
                  pSVar7 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0
                                     (pSVar9,(char *)local_1b4);
                  if (pSVar7 != (SNotesEntry *)0x0) {
                    if (local_34 != (int *)0x0) {
                      *local_34 = iVar12;
                    }
                    if (pSVar7 != (SNotesEntry *)0x0) {
                      _sprintf(&DAT_01cc4270,"Duplicate entry '%s' in %s");
                      goto LAB_004bcdbb;
                    }
                    break;
                  }
                  iVar12 = iVar12 + 1;
                  pSVar9 = pSVar9 + 1;
                } while (iVar12 < _DAT_01cc4470);
              }
              local_44 = core_fldnotes_cpp_SNotesSection_addEntry_FUN_004bc020
                                   (local_48,(char *)local_1b4,0);
            }
            else {
LAB_004bd0f5:
              pbVar10 = &DAT_005dfdf2;
              local_30 = local_1b4;
              pbVar13 = local_5b4;
              do {
                pbVar15 = pbVar13;
                pbVar13 = pbVar15 + 1;
              } while (((&DAT_00626114)[(byte)(*pbVar15 + 1)] & 2) != 0);
              pbVar16 = local_30;
              pSVar9 = local_48;
              bVar2 = 0x74;
              if (*pbVar15 == 0x5c) {
                while (local_48 = pSVar9, local_30 = pbVar16, bVar2 != 0) {
                  iVar12 = toupper((uint)*pbVar13);
                  iVar6 = toupper((uint)*pbVar10);
                  if (iVar12 != iVar6) goto LAB_004bd25d;
                  pbVar15 = pbVar10 + 1;
                  pbVar10 = pbVar10 + 1;
                  pbVar13 = pbVar13 + 1;
                  pbVar16 = local_30;
                  pSVar9 = local_48;
                  bVar2 = *pbVar15;
                }
                while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                  _sprintf(&DAT_01cc4270,"Didn't expect '\\task' in %s, line %d");
                  goto LAB_004bcdbb;
                }
                local_2c = local_1b4;
                iVar12 = 0;
                local_28 = (int *)0x0;
                if (0 < _DAT_01cc4470) {
                  pSVar9 = SNotesSection_ARRAY_01cc4474;
                  do {
                    pSVar7 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0
                                       (pSVar9,(char *)local_2c);
                    if (pSVar7 != (SNotesEntry *)0x0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar12;
                      }
                      if (pSVar7 != (SNotesEntry *)0x0) {
                        _sprintf(&DAT_01cc4270,"Duplicate entry '%s' in %s");
                        goto LAB_004bcdbb;
                      }
                      break;
                    }
                    iVar12 = iVar12 + 1;
                    pSVar9 = pSVar9 + 1;
                  } while (iVar12 < _DAT_01cc4470);
                }
                local_44 = core_fldnotes_cpp_SNotesSection_addEntry_FUN_004bc020
                                     (local_48,(char *)local_1b4,2);
              }
              else {
LAB_004bd25d:
                pbVar10 = &DAT_005dfe37;
                local_24 = local_1b4;
                pbVar13 = local_5b4;
                do {
                  pbVar15 = pbVar13;
                  pbVar13 = pbVar15 + 1;
                } while (((&DAT_00626114)[(byte)(*pbVar15 + 1)] & 2) != 0);
                pbVar16 = local_24;
                pSVar9 = local_48;
                bVar2 = 0x6D;
                if (*pbVar15 == 0x5c) {
                  while (local_48 = pSVar9, local_24 = pbVar16, bVar2 != 0) {
                    iVar12 = toupper((uint)*pbVar13);
                    iVar6 = toupper((uint)*pbVar10);
                    if (iVar12 != iVar6) goto LAB_004bd3d9;
                    pbVar15 = pbVar10 + 1;
                    pbVar10 = pbVar10 + 1;
                    pbVar13 = pbVar13 + 1;
                    pbVar16 = local_24;
                    pSVar9 = local_48;
                    bVar2 = *pbVar15;
                  }
                  while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                    _sprintf(&DAT_01cc4270,"Didn't expect '\\map' in %s, line %d");
                    goto LAB_004bcdbb;
                  }
                  if (3 < _DAT_01cc55cc) {
                    pcVar5 = "Too many maps!  (max is %d)";
                    goto LAB_004bcdae;
                  }
                  local_44 = core_fldnotes_cpp_SNotesSection_addEntry_FUN_004bc020
                                       (pSVar9,(char *)local_1b4,5);
                  local_44->map_index = _DAT_01cc55cc;
                  pSVar8 = SNotesMap_ARRAY_01cc55d0 + _DAT_01cc55cc;
                  SNotesMap_ARRAY_01cc55d0[_DAT_01cc55cc].annotation_count = 0;
                  _DAT_01cc55cc = _DAT_01cc55cc + 1;
                  pSVar8->entry = local_44;
                }
                else {
LAB_004bd3d9:
                  pcVar5 = "image";
                  local_20 = local_1b4;
                  pbVar13 = local_5b4;
                  do {
                    pbVar10 = pbVar13;
                    pbVar13 = pbVar10 + 1;
                  } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
                  pbVar15 = local_20;
                  pSVar7 = local_44;
                  bVar2 = "image"[0];
                  if (*pbVar10 == 0x5c) {
                    while (local_44 = pSVar7, local_20 = pbVar15, bVar2 != 0) {
                      iVar12 = toupper((uint)*pbVar13);
                      iVar6 = toupper((uint)(byte)*pcVar5);
                      if (iVar12 != iVar6) goto LAB_004bd503;
                      pbVar10 = (byte *)(pcVar5 + 1);
                      pcVar5 = pcVar5 + 1;
                      pbVar13 = pbVar13 + 1;
                      pbVar15 = local_20;
                      pSVar7 = local_44;
                      bVar2 = *pbVar10;
                    }
                    while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                      goto LAB_004bcdae;
                    }
                    if (_DAT_01cc55cc < 1) {
                      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                      _DAT_01d1d404 = 0x969;
                      core_main_c_FUN_005030e0("Hell froze!");
                    }
                    iVar12 = _DAT_01cc55cc + -1;
                    iVar6 = sscanf((char *)local_1b4,"%s %d %d");
                    if (iVar6 != 3) {
                      pcVar5 = "Syntax error in \\image parms on line %d";
                      goto LAB_004bcdae;
                    }
                    if (SNotesMap_ARRAY_01cc55d0[iVar12].image_name[0] != '\0') {
                      _sprintf(&DAT_01cc4270,"Multiple \\image tags found in map %s at line %d");
                      goto LAB_004bcdbb;
                    }
                    engine_dosio_cpp_splitPath_FUN_00479580
                              (local_b4,(char *)0x0,(char *)0x0,
                               SNotesMap_ARRAY_01cc55d0[iVar12].image_name,(char *)0x0);
                  }
                  else {
LAB_004bd503:
                    pbVar10 = &DAT_005dff53;
                    local_1c = local_1b4;
                    pbVar13 = local_5b4;
                    do {
                      pbVar15 = pbVar13;
                      pbVar13 = pbVar15 + 1;
                    } while (((&DAT_00626114)[(byte)(*pbVar15 + 1)] & 2) != 0);
                    pbVar16 = local_1c;
                    pSVar7 = local_44;
                    bVar2 = 0x73;
                    if (*pbVar15 == 0x5c) {
                      while (local_44 = pSVar7, local_1c = pbVar16, bVar2 != 0) {
                        iVar12 = toupper((uint)*pbVar13);
                        iVar6 = toupper((uint)*pbVar10);
                        if (iVar12 != iVar6) goto LAB_004bd681;
                        pbVar15 = pbVar10 + 1;
                        pbVar10 = pbVar10 + 1;
                        pbVar13 = pbVar13 + 1;
                        pbVar16 = local_1c;
                        pSVar7 = local_44;
                        bVar2 = *pbVar15;
                      }
                      while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                      if ((pSVar7 == (SNotesEntry *)0x0) || (pSVar7->kind != 5)) {
                        pcVar5 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004bcdae;
                      }
                      if (_DAT_01cc55cc < 1) {
                        _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                        _DAT_01d1d404 = 0x98d;
                        core_main_c_FUN_005030e0("Hell froze!");
                      }
                      iVar6 = _DAT_01cc55cc + -1;
                      iVar12 = SNotesMap_ARRAY_01cc55d0[iVar6].set_count;
                      if (3 < iVar12) {
                        _sprintf(&DAT_01cc4270,"Too many \\sets in map %s at line %d.");
                        goto LAB_004bcdbb;
                      }
                      SNotesMap_ARRAY_01cc55d0[iVar6].set_count = iVar12 + 1;
                      iVar11 = sscanf
                                         ((char *)local_1b4,"%s %d , %d , %d , %d , %f , %f , %f , %f");
                      if (iVar11 != 9) {
                        pcVar5 = "Syntax error in \\image parms on line %d";
                        goto LAB_004bcdae;
                      }
                      engine_dosio_cpp_changeFileExtension_FUN_004796b0
                                ((char *)(iVar6 * 0x970 + 0x1cc5670 + iVar12 * 0x88),&DAT_005e001c);
                    }
                    else {
LAB_004bd681:
                      pcVar5 = "annotation";
                      local_18 = local_1b4;
                      pbVar13 = local_5b4;
                      do {
                        pbVar10 = pbVar13;
                        pbVar13 = pbVar10 + 1;
                      } while (((&DAT_00626114)[(byte)(*pbVar10 + 1)] & 2) != 0);
                      pbVar15 = local_18;
                      pSVar7 = local_44;
                      bVar2 = "annotation"[0];
                      if (*pbVar10 == 0x5c) {
                        while (local_44 = pSVar7, local_18 = pbVar15, bVar2 != 0) {
                          iVar12 = toupper((uint)*pbVar13);
                          iVar6 = toupper((uint)(byte)*pcVar5);
                          if (iVar12 != iVar6) goto LAB_004bd820;
                          pbVar10 = (byte *)(pcVar5 + 1);
                          pcVar5 = pcVar5 + 1;
                          pbVar13 = pbVar13 + 1;
                          pbVar15 = local_18;
                          pSVar7 = local_44;
                          bVar2 = *pbVar10;
                        }
                        while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
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
                          goto LAB_004bcdae;
                        }
                        if (_DAT_01cc55cc < 1) {
                          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                          _DAT_01d1d404 = 0x9b9;
                          core_main_c_FUN_005030e0("Hell froze!");
                        }
                        iVar6 = _DAT_01cc55cc + -1;
                        iVar12 = SNotesMap_ARRAY_01cc55d0[iVar6].annotation_count;
                        if (7 < iVar12) {
                          _sprintf(&DAT_01cc4270,"Too many \\annotations in map %s at line %d.");
                          goto LAB_004bcdbb;
                        }
                        iVar11 = iVar12 * 0xd4 + iVar6 * 0x970 + 0x1cc5894;
                        SNotesMap_ARRAY_01cc55d0[iVar6].annotation_count = iVar12 + 1;
                        iVar12 = sscanf((char *)local_1b4,"%[^,], %d , %d , \"%[^\"]\"");
                        if (iVar12 != 4) {
                          pcVar5 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004bcdae;
                        }
                        core_flashlit_cpp_FUN_004b9c50(iVar11);
                        core_flashlit_cpp_FUN_004b9c50(iVar11 + 100);
                        *(uint *)(iVar11 + 0xd0) = 0;
                      }
                      else {
LAB_004bd820:
                        pbVar10 = &DAT_005e00f4;
                        local_14 = local_1b4;
                        pbVar13 = local_5b4;
                        do {
                          pbVar15 = pbVar13;
                          pbVar13 = pbVar15 + 1;
                        } while (((&DAT_00626114)[(byte)(*pbVar15 + 1)] & 2) != 0);
                        pbVar16 = local_14;
                        p_Var3 = local_50;
                        bVar2 = 0x65;
                        if (*pbVar15 == 0x5c) {
                          while( true ) {
                            local_14 = pbVar16;
                            if (bVar2 == 0) goto LAB_004bda1e;
                            local_50 = p_Var3;
                            iVar12 = toupper((uint)*pbVar13);
                            iVar6 = toupper((uint)*pbVar10);
                            if (iVar12 != iVar6) break;
                            pbVar15 = pbVar10 + 1;
                            pbVar10 = pbVar10 + 1;
                            pbVar13 = pbVar13 + 1;
                            pbVar16 = local_14;
                            p_Var3 = local_50;
                            bVar2 = *pbVar15;
                          }
                        }
                        if (local_5b4[0] == 0x5c) {
                          _sprintf(&DAT_01cc4270,"Unknown tag: '%s' in %s, line %d");
                          goto LAB_004bcdbb;
                        }
                        if (local_44 == (SNotesEntry *)0x0) {
                          _sprintf(&DAT_01cc4270,"No entry started in %s, line %d");
                          goto LAB_004bcdbb;
                        }
                        shape_edittool_cpp_CStrList_add_FUN_004994d0
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
LAB_004bcdae:
  _sprintf(&DAT_01cc4270,pcVar5);
LAB_004bcdbb:
  if (local_50 != (_FILE *)0x0) {
    _fclose(local_50);
  }
  if (error_text == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(g_CEditorToolsPtr,&DAT_01cc4270);
  }
  else {
    pcVar5 = &DAT_01cc4270;
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
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(this_ptr);
  return 0;
LAB_004bda1e:
  while (((&DAT_00626114)[(byte)(*pbVar13 + 1)] & 2) != 0) {
    pbVar13 = pbVar13 + 1;
  }
  do {
    bVar2 = *pbVar13;
    *pbVar16 = bVar2;
    local_50 = p_Var3;
    if (bVar2 == 0) break;
    bVar2 = pbVar13[1];
    pbVar13 = pbVar13 + 2;
    pbVar16[1] = bVar2;
    pbVar16 = pbVar16 + 2;
  } while (bVar2 != 0);
LAB_004bccbd:
  iVar12 = 0;
  _fclose(local_50);
  local_50 = (_FILE *)0x0;
  if (0 < _DAT_01cc55cc) {
    pSVar8 = SNotesMap_ARRAY_01cc55d0;
    do {
      core_fldnotes_cpp_SNotesMap_load_FUN_004bc2d0(pSVar8);
      iVar12 = iVar12 + 1;
      pSVar8 = pSVar8 + 1;
    } while (iVar12 < _DAT_01cc55cc);
  }
  DAT_0061d2e4 = 1;
  DAT_0061d2e0 = 1;
  if (error_text != (char *)0x0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar12 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
    DAT_01cc4270 = 0;
    DAT_0061d2e4 = 0;
    if (0 < _DAT_01cc4470) {
      pSVar9 = SNotesSection_ARRAY_01cc4474;
      do {
        iVar6 = core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(pSVar9,&g_STextViewInstance);
        if (iVar6 == 0) goto LAB_004bcdbb;
        iVar12 = iVar12 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iVar12 < _DAT_01cc4470);
    }
  }
  return 1;
}
