// Name: core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0
// Address: 004bcba0
// Address Range: [[004bcba0, 004bda9d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0(CFieldNotes *this_ptr,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0(CFieldNotes *this_ptr,char *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  SNotesEntry *pSVar3;
  _FILE *p_Var4;
  bool bVar5;
  int iVar6;
  byte *puVar7;
  undefined3 extraout_var;
  int iVar8;
  SNotesMap *pSVar9;
  SNotesSection *pSVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  byte *pbVar14;
  CFieldNotes *pCVar15;
  byte *pbVar16;
  byte *pbVar17;
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
  pCVar15 = this_ptr;
  do {
    cVar1 = *param_2;
    pCVar15->file_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pCVar15->file_name[1] = cVar1;
    pCVar15 = (CFieldNotes *)(pCVar15->file_name + 2);
  } while (cVar1 != '\0');
  _DAT_01cc4268 = (uint)(param_3 != (char *)0x0);
  local_4c = engine_dosio_cpp_getFileSize_FUN_00478fb0("world",this_ptr->file_name);
  if (-1 < local_4c) {
    local_50 = engine_dosio_cpp_FUN_00479180("world",this_ptr->file_name,&DAT_005dfd0d);
    if (local_50 == (_FILE *)0x0) {
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0x8ee;
      core_main_c_FUN_005030e0("Can't open field notes file %s",this_ptr);
    }
    iVar6 = _ftell(local_50);
    local_48 = (SNotesSection *)0x0;
    local_44 = (SNotesEntry *)0x0;
    local_4c = local_4c + iVar6;
    do {
      iVar6 = _ftell(local_50);
      if ((local_4c <= iVar6) ||
         (puVar7 = (byte *)_fgets(local_5b4,0x400,local_50),
         puVar7 != local_5b4)) goto LAB_004bccbd;
      pcVar13 = strstr((char *)local_5b4,&DAT_005df822);
      if (pcVar13 != (char *)0x0) {
        *pcVar13 = '\0';
      }
      unkaddr_004b9ab0_cpp_FUN_004b9c50(local_5b4);
      if (local_5b4[0] != 0) {
        pcVar13 = "section";
        local_40 = local_1b4;
        pbVar14 = local_5b4;
        do {
          pbVar11 = pbVar14;
          pbVar14 = pbVar11 + 1;
        } while (((&DAT_00626114)[(byte)(*pbVar11 + 1)] & 2) != 0);
        pbVar16 = local_40;
        bVar2 = "section"[0];
        if (*pbVar11 == 0x5c) {
          while (local_40 = pbVar16, bVar2 != 0) {
            iVar6 = toupper((uint)*pbVar14);
            iVar8 = toupper((uint)(byte)*pcVar13);
            if (iVar6 != iVar8) goto LAB_004bceb4;
            pbVar11 = (byte *)(pcVar13 + 1);
            pcVar13 = pcVar13 + 1;
            pbVar14 = pbVar14 + 1;
            pbVar16 = local_40;
            bVar2 = *pbVar11;
          }
          while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
            pbVar14 = pbVar14 + 1;
          }
          do {
            bVar2 = *pbVar14;
            *pbVar16 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar14[1];
            pbVar14 = pbVar14 + 2;
            pbVar16[1] = bVar2;
            pbVar16 = pbVar16 + 2;
          } while (bVar2 != 0);
          if (5 < _DAT_01cc4470) {
            _sprintf(&DAT_01cc4270,"Too many field notes sections in %s, line %d");
            goto LAB_004bcdbb;
          }
          local_48 = SNotesSection_ARRAY_01cc4474 + _DAT_01cc4470;
          pbVar14 = local_1b4;
          pSVar10 = local_48;
          do {
            bVar2 = *pbVar14;
            pSVar10->name[0] = bVar2;
            if (bVar2 == 0) break;
            bVar2 = pbVar14[1];
            pbVar14 = pbVar14 + 2;
            pSVar10->name[1] = bVar2;
            pSVar10 = (SNotesSection *)(pSVar10->name + 2);
          } while (bVar2 != 0);
          local_44 = (SNotesEntry *)0x0;
          _DAT_01cc4470 = _DAT_01cc4470 + 1;
        }
        else {
LAB_004bceb4:
          pcVar13 = "title";
          local_3c = local_1b4;
          pbVar14 = local_5b4;
          do {
            pbVar11 = pbVar14;
            pbVar14 = pbVar11 + 1;
          } while (((&DAT_00626114)[(byte)(*pbVar11 + 1)] & 2) != 0);
          pbVar16 = local_3c;
          pSVar10 = local_48;
          pSVar3 = local_44;
          bVar2 = "title"[0];
          if (*pbVar11 == 0x5c) {
            while (local_48 = pSVar10, local_44 = pSVar3, local_3c = pbVar16, bVar2 != 0) {
              iVar6 = toupper((uint)*pbVar14);
              iVar8 = toupper((uint)(byte)*pcVar13);
              if (iVar6 != iVar8) goto LAB_004bcfcf;
              pbVar11 = (byte *)(pcVar13 + 1);
              pcVar13 = pcVar13 + 1;
              pbVar14 = pbVar14 + 1;
              pbVar16 = local_3c;
              pSVar10 = local_48;
              pSVar3 = local_44;
              bVar2 = *pbVar11;
            }
            while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
              pbVar14 = pbVar14 + 1;
            }
            do {
              bVar2 = *pbVar14;
              *pbVar16 = bVar2;
              if (bVar2 == 0) break;
              bVar2 = pbVar14[1];
              pbVar14 = pbVar14 + 2;
              pbVar16[1] = bVar2;
              pbVar16 = pbVar16 + 2;
            } while (bVar2 != 0);
            if (pSVar3 == (SNotesEntry *)0x0) {
              if (pSVar10 == (SNotesSection *)0x0) {
                _sprintf(&DAT_01cc4270,"Didn't expect '\\title' in %s, line %d");
                goto LAB_004bcdbb;
              }
              pbVar14 = local_1b4;
              pcVar13 = pSVar10->title;
              do {
                bVar2 = *pbVar14;
                *pcVar13 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar14[1];
                pbVar14 = pbVar14 + 2;
                pcVar13[1] = bVar2;
                pcVar13 = pcVar13 + 2;
              } while (bVar2 != 0);
            }
            else {
              pbVar14 = local_1b4;
              pcVar13 = pSVar3->title;
              do {
                bVar2 = *pbVar14;
                *pcVar13 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar14[1];
                pbVar14 = pbVar14 + 2;
                pcVar13[1] = bVar2;
                pcVar13 = pcVar13 + 2;
              } while (bVar2 != 0);
            }
          }
          else {
LAB_004bcfcf:
            pcVar13 = "entry";
            local_38 = local_1b4;
            pbVar14 = local_5b4;
            do {
              pbVar11 = pbVar14;
              pbVar14 = pbVar11 + 1;
            } while (((&DAT_00626114)[(byte)(*pbVar11 + 1)] & 2) != 0);
            pbVar16 = local_38;
            pSVar10 = local_48;
            bVar2 = "entry"[0];
            if (*pbVar11 == 0x5c) {
              while (local_48 = pSVar10, local_38 = pbVar16, bVar2 != 0) {
                iVar6 = toupper((uint)*pbVar14);
                iVar8 = toupper((uint)(byte)*pcVar13);
                if (iVar6 != iVar8) goto LAB_004bd0f5;
                pbVar11 = (byte *)(pcVar13 + 1);
                pcVar13 = pcVar13 + 1;
                pbVar14 = pbVar14 + 1;
                pbVar16 = local_38;
                pSVar10 = local_48;
                bVar2 = *pbVar11;
              }
              while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
                pbVar14 = pbVar14 + 1;
              }
              do {
                bVar2 = *pbVar14;
                *pbVar16 = bVar2;
                if (bVar2 == 0) break;
                bVar2 = pbVar14[1];
                pbVar14 = pbVar14 + 2;
                pbVar16[1] = bVar2;
                pbVar16 = pbVar16 + 2;
              } while (bVar2 != 0);
              if (pSVar10 == (SNotesSection *)0x0) {
                _sprintf(&DAT_01cc4270,"Didn't expect '\\entry' in %s, line %d");
                goto LAB_004bcdbb;
              }
              iVar6 = 0;
              local_34 = (int *)0x0;
              if (0 < _DAT_01cc4470) {
                pSVar10 = SNotesSection_ARRAY_01cc4474;
                do {
                  iVar8 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0
                                    (pSVar10,(char *)local_1b4);
                  if (iVar8 != 0) {
                    if (local_34 != (int *)0x0) {
                      *local_34 = iVar6;
                    }
                    if (iVar8 != 0) {
                      _sprintf(&DAT_01cc4270,"Duplicate entry '%s' in %s");
                      goto LAB_004bcdbb;
                    }
                    break;
                  }
                  iVar6 = iVar6 + 1;
                  pSVar10 = pSVar10 + 1;
                } while (iVar6 < _DAT_01cc4470);
              }
              local_44 = (SNotesEntry *)
                         core_fldnotes_cpp_SNotesSection_addEntry_FUN_004bc020
                                   (local_48,(char *)local_1b4,0);
            }
            else {
LAB_004bd0f5:
              pbVar11 = &DAT_005dfdf2;
              local_30 = local_1b4;
              pbVar14 = local_5b4;
              do {
                pbVar16 = pbVar14;
                pbVar14 = pbVar16 + 1;
              } while (((&DAT_00626114)[(byte)(*pbVar16 + 1)] & 2) != 0);
              pbVar17 = local_30;
              pSVar10 = local_48;
              bVar2 = 0x74;
              if (*pbVar16 == 0x5c) {
                while (local_48 = pSVar10, local_30 = pbVar17, bVar2 != 0) {
                  iVar6 = toupper((uint)*pbVar14);
                  iVar8 = toupper((uint)*pbVar11);
                  if (iVar6 != iVar8) goto LAB_004bd25d;
                  pbVar16 = pbVar11 + 1;
                  pbVar11 = pbVar11 + 1;
                  pbVar14 = pbVar14 + 1;
                  pbVar17 = local_30;
                  pSVar10 = local_48;
                  bVar2 = *pbVar16;
                }
                while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
                  pbVar14 = pbVar14 + 1;
                }
                do {
                  bVar2 = *pbVar14;
                  *pbVar17 = bVar2;
                  if (bVar2 == 0) break;
                  bVar2 = pbVar14[1];
                  pbVar14 = pbVar14 + 2;
                  pbVar17[1] = bVar2;
                  pbVar17 = pbVar17 + 2;
                } while (bVar2 != 0);
                if (pSVar10 == (SNotesSection *)0x0) {
                  _sprintf(&DAT_01cc4270,"Didn't expect '\\task' in %s, line %d");
                  goto LAB_004bcdbb;
                }
                local_2c = local_1b4;
                iVar6 = 0;
                local_28 = (int *)0x0;
                if (0 < _DAT_01cc4470) {
                  pSVar10 = SNotesSection_ARRAY_01cc4474;
                  do {
                    iVar8 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0
                                      (pSVar10,(char *)local_2c);
                    if (iVar8 != 0) {
                      if (local_28 != (int *)0x0) {
                        *local_28 = iVar6;
                      }
                      if (iVar8 != 0) {
                        _sprintf(&DAT_01cc4270,"Duplicate entry '%s' in %s");
                        goto LAB_004bcdbb;
                      }
                      break;
                    }
                    iVar6 = iVar6 + 1;
                    pSVar10 = pSVar10 + 1;
                  } while (iVar6 < _DAT_01cc4470);
                }
                local_44 = (SNotesEntry *)
                           core_fldnotes_cpp_SNotesSection_addEntry_FUN_004bc020
                                     (local_48,(char *)local_1b4,2);
              }
              else {
LAB_004bd25d:
                pbVar11 = &DAT_005dfe37;
                local_24 = local_1b4;
                pbVar14 = local_5b4;
                do {
                  pbVar16 = pbVar14;
                  pbVar14 = pbVar16 + 1;
                } while (((&DAT_00626114)[(byte)(*pbVar16 + 1)] & 2) != 0);
                pbVar17 = local_24;
                pSVar10 = local_48;
                bVar2 = 0x6D;
                if (*pbVar16 == 0x5c) {
                  while (local_48 = pSVar10, local_24 = pbVar17, bVar2 != 0) {
                    iVar6 = toupper((uint)*pbVar14);
                    iVar8 = toupper((uint)*pbVar11);
                    if (iVar6 != iVar8) goto LAB_004bd3d9;
                    pbVar16 = pbVar11 + 1;
                    pbVar11 = pbVar11 + 1;
                    pbVar14 = pbVar14 + 1;
                    pbVar17 = local_24;
                    pSVar10 = local_48;
                    bVar2 = *pbVar16;
                  }
                  while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
                    pbVar14 = pbVar14 + 1;
                  }
                  do {
                    bVar2 = *pbVar14;
                    *pbVar17 = bVar2;
                    if (bVar2 == 0) break;
                    bVar2 = pbVar14[1];
                    pbVar14 = pbVar14 + 2;
                    pbVar17[1] = bVar2;
                    pbVar17 = pbVar17 + 2;
                  } while (bVar2 != 0);
                  if (pSVar10 == (SNotesSection *)0x0) {
                    _sprintf(&DAT_01cc4270,"Didn't expect '\\map' in %s, line %d");
                    goto LAB_004bcdbb;
                  }
                  if (3 < _DAT_01cc55cc) {
                    pcVar13 = "Too many maps!  (max is %d)";
                    goto LAB_004bcdae;
                  }
                  local_44 = (SNotesEntry *)
                             core_fldnotes_cpp_SNotesSection_addEntry_FUN_004bc020
                                       (pSVar10,(char *)local_1b4,5);
                  local_44->map_index = _DAT_01cc55cc;
                  pSVar9 = SNotesMap_ARRAY_01cc55d0 + _DAT_01cc55cc;
                  SNotesMap_ARRAY_01cc55d0[_DAT_01cc55cc].annotation_count = 0;
                  _DAT_01cc55cc = _DAT_01cc55cc + 1;
                  pSVar9->entry = local_44;
                }
                else {
LAB_004bd3d9:
                  pcVar13 = "image";
                  local_20 = local_1b4;
                  pbVar14 = local_5b4;
                  do {
                    pbVar11 = pbVar14;
                    pbVar14 = pbVar11 + 1;
                  } while (((&DAT_00626114)[(byte)(*pbVar11 + 1)] & 2) != 0);
                  pbVar16 = local_20;
                  pSVar3 = local_44;
                  bVar2 = "image"[0];
                  if (*pbVar11 == 0x5c) {
                    while (local_44 = pSVar3, local_20 = pbVar16, bVar2 != 0) {
                      iVar6 = toupper((uint)*pbVar14);
                      iVar8 = toupper((uint)(byte)*pcVar13);
                      if (iVar6 != iVar8) goto LAB_004bd503;
                      pbVar11 = (byte *)(pcVar13 + 1);
                      pcVar13 = pcVar13 + 1;
                      pbVar14 = pbVar14 + 1;
                      pbVar16 = local_20;
                      pSVar3 = local_44;
                      bVar2 = *pbVar11;
                    }
                    while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
                      pbVar14 = pbVar14 + 1;
                    }
                    do {
                      bVar2 = *pbVar14;
                      *pbVar16 = bVar2;
                      if (bVar2 == 0) break;
                      bVar2 = pbVar14[1];
                      pbVar14 = pbVar14 + 2;
                      pbVar16[1] = bVar2;
                      pbVar16 = pbVar16 + 2;
                    } while (bVar2 != 0);
                    if ((pSVar3 == (SNotesEntry *)0x0) || (pSVar3->kind != 5)) {
                      pcVar13 = "Can only use \\image in a \\map entry on line %d.  (Did you mean to use <image>?)";
                      goto LAB_004bcdae;
                    }
                    if (_DAT_01cc55cc < 1) {
                      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                      _DAT_01d1d404 = 0x969;
                      core_main_c_FUN_005030e0("Hell froze!");
                    }
                    iVar6 = _DAT_01cc55cc + -1;
                    iVar8 = sscanf((char *)local_1b4,"%s %d %d");
                    if (iVar8 != 3) {
                      pcVar13 = "Syntax error in \\image parms on line %d";
                      goto LAB_004bcdae;
                    }
                    if (SNotesMap_ARRAY_01cc55d0[iVar6].image_name[0] != '\0') {
                      _sprintf(&DAT_01cc4270,"Multiple \\image tags found in map %s at line %d");
                      goto LAB_004bcdbb;
                    }
                    engine_dosio_cpp_splitPath_FUN_00479580
                              (local_b4,(char *)0x0,(char *)0x0,
                               SNotesMap_ARRAY_01cc55d0[iVar6].image_name,(char *)0x0);
                  }
                  else {
LAB_004bd503:
                    pbVar11 = &DAT_005dff53;
                    local_1c = local_1b4;
                    pbVar14 = local_5b4;
                    do {
                      pbVar16 = pbVar14;
                      pbVar14 = pbVar16 + 1;
                    } while (((&DAT_00626114)[(byte)(*pbVar16 + 1)] & 2) != 0);
                    pbVar17 = local_1c;
                    pSVar3 = local_44;
                    bVar2 = 0x73;
                    if (*pbVar16 == 0x5c) {
                      while (local_44 = pSVar3, local_1c = pbVar17, bVar2 != 0) {
                        iVar6 = toupper((uint)*pbVar14);
                        iVar8 = toupper((uint)*pbVar11);
                        if (iVar6 != iVar8) goto LAB_004bd681;
                        pbVar16 = pbVar11 + 1;
                        pbVar11 = pbVar11 + 1;
                        pbVar14 = pbVar14 + 1;
                        pbVar17 = local_1c;
                        pSVar3 = local_44;
                        bVar2 = *pbVar16;
                      }
                      while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
                        pbVar14 = pbVar14 + 1;
                      }
                      do {
                        bVar2 = *pbVar14;
                        *pbVar17 = bVar2;
                        if (bVar2 == 0) break;
                        bVar2 = pbVar14[1];
                        pbVar14 = pbVar14 + 2;
                        pbVar17[1] = bVar2;
                        pbVar17 = pbVar17 + 2;
                      } while (bVar2 != 0);
                      if ((pSVar3 == (SNotesEntry *)0x0) || (pSVar3->kind != 5)) {
                        pcVar13 = "Can only use \\set in a \\map entry on line %d.";
                        goto LAB_004bcdae;
                      }
                      if (_DAT_01cc55cc < 1) {
                        _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                        _DAT_01d1d404 = 0x98d;
                        core_main_c_FUN_005030e0("Hell froze!");
                      }
                      iVar8 = _DAT_01cc55cc + -1;
                      iVar6 = SNotesMap_ARRAY_01cc55d0[iVar8].set_count;
                      if (3 < iVar6) {
                        _sprintf(&DAT_01cc4270,"Too many \\sets in map %s at line %d.");
                        goto LAB_004bcdbb;
                      }
                      SNotesMap_ARRAY_01cc55d0[iVar8].set_count = iVar6 + 1;
                      iVar12 = sscanf
                                         ((char *)local_1b4,"%s %d , %d , %d , %d , %f , %f , %f , %f");
                      if (iVar12 != 9) {
                        pcVar13 = "Syntax error in \\image parms on line %d";
                        goto LAB_004bcdae;
                      }
                      engine_dosio_cpp_changeFileExtension_FUN_004796b0
                                ((char *)(iVar8 * 0x970 + 0x1cc5670 + iVar6 * 0x88),&DAT_005e001c);
                    }
                    else {
LAB_004bd681:
                      pcVar13 = "annotation";
                      local_18 = local_1b4;
                      pbVar14 = local_5b4;
                      do {
                        pbVar11 = pbVar14;
                        pbVar14 = pbVar11 + 1;
                      } while (((&DAT_00626114)[(byte)(*pbVar11 + 1)] & 2) != 0);
                      pbVar16 = local_18;
                      pSVar3 = local_44;
                      bVar2 = "annotation"[0];
                      if (*pbVar11 == 0x5c) {
                        while (local_44 = pSVar3, local_18 = pbVar16, bVar2 != 0) {
                          iVar6 = toupper((uint)*pbVar14);
                          iVar8 = toupper((uint)(byte)*pcVar13);
                          if (iVar6 != iVar8) goto LAB_004bd820;
                          pbVar11 = (byte *)(pcVar13 + 1);
                          pcVar13 = pcVar13 + 1;
                          pbVar14 = pbVar14 + 1;
                          pbVar16 = local_18;
                          pSVar3 = local_44;
                          bVar2 = *pbVar11;
                        }
                        while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
                          pbVar14 = pbVar14 + 1;
                        }
                        do {
                          bVar2 = *pbVar14;
                          *pbVar16 = bVar2;
                          if (bVar2 == 0) break;
                          bVar2 = pbVar14[1];
                          pbVar14 = pbVar14 + 2;
                          pbVar16[1] = bVar2;
                          pbVar16 = pbVar16 + 2;
                        } while (bVar2 != 0);
                        if ((pSVar3 == (SNotesEntry *)0x0) || (pSVar3->kind != 5)) {
                          pcVar13 = "Can only use \\annotation in a \\map entry on line %d.";
                          goto LAB_004bcdae;
                        }
                        if (_DAT_01cc55cc < 1) {
                          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
                          _DAT_01d1d404 = 0x9b9;
                          core_main_c_FUN_005030e0("Hell froze!");
                        }
                        iVar8 = _DAT_01cc55cc + -1;
                        iVar6 = SNotesMap_ARRAY_01cc55d0[iVar8].annotation_count;
                        if (7 < iVar6) {
                          _sprintf(&DAT_01cc4270,"Too many \\annotations in map %s at line %d.");
                          goto LAB_004bcdbb;
                        }
                        iVar12 = iVar6 * 0xd4 + iVar8 * 0x970 + 0x1cc5894;
                        SNotesMap_ARRAY_01cc55d0[iVar8].annotation_count = iVar6 + 1;
                        iVar6 = sscanf((char *)local_1b4,"%[^,], %d , %d , \"%[^\"]\"");
                        if (iVar6 != 4) {
                          pcVar13 = "Syntax error in \\annotation parms on line %d";
                          goto LAB_004bcdae;
                        }
                        unkaddr_004b9ab0_cpp_FUN_004b9c50(iVar12);
                        unkaddr_004b9ab0_cpp_FUN_004b9c50(iVar12 + 100);
                        *(uint *)(iVar12 + 0xd0) = 0;
                      }
                      else {
LAB_004bd820:
                        pbVar11 = &DAT_005e00f4;
                        local_14 = local_1b4;
                        pbVar14 = local_5b4;
                        do {
                          pbVar16 = pbVar14;
                          pbVar14 = pbVar16 + 1;
                        } while (((&DAT_00626114)[(byte)(*pbVar16 + 1)] & 2) != 0);
                        pbVar17 = local_14;
                        p_Var4 = local_50;
                        bVar2 = 0x65;
                        if (*pbVar16 == 0x5c) {
                          while( true ) {
                            local_14 = pbVar17;
                            if (bVar2 == 0) goto LAB_004bda1e;
                            local_50 = p_Var4;
                            iVar6 = toupper((uint)*pbVar14);
                            iVar8 = toupper((uint)*pbVar11);
                            if (iVar6 != iVar8) break;
                            pbVar16 = pbVar11 + 1;
                            pbVar11 = pbVar11 + 1;
                            pbVar14 = pbVar14 + 1;
                            pbVar17 = local_14;
                            p_Var4 = local_50;
                            bVar2 = *pbVar16;
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
  pcVar13 = "Can't open field notes file %s";
LAB_004bcdae:
  _sprintf(&DAT_01cc4270,pcVar13);
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
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(this_ptr);
  return 0;
LAB_004bda1e:
  while (((&DAT_00626114)[(byte)(*pbVar14 + 1)] & 2) != 0) {
    pbVar14 = pbVar14 + 1;
  }
  do {
    bVar2 = *pbVar14;
    *pbVar17 = bVar2;
    local_50 = p_Var4;
    if (bVar2 == 0) break;
    bVar2 = pbVar14[1];
    pbVar14 = pbVar14 + 2;
    pbVar17[1] = bVar2;
    pbVar17 = pbVar17 + 2;
  } while (bVar2 != 0);
LAB_004bccbd:
  iVar6 = 0;
  _fclose(local_50);
  local_50 = (_FILE *)0x0;
  if (0 < _DAT_01cc55cc) {
    pSVar9 = SNotesMap_ARRAY_01cc55d0;
    do {
      core_fldnotes_cpp_SNotesMap_load_FUN_004bc2d0(pSVar9);
      iVar6 = iVar6 + 1;
      pSVar9 = pSVar9 + 1;
    } while (iVar6 < _DAT_01cc55cc);
  }
  DAT_0061d2e4 = 1;
  DAT_0061d2e0 = 1;
  if (param_3 != (char *)0x0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar6 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
    DAT_01cc4270 = 0;
    DAT_0061d2e4 = 0;
    if (0 < _DAT_01cc4470) {
      pSVar10 = SNotesSection_ARRAY_01cc4474;
      do {
        bVar5 = core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(pSVar10,0x1cc7cd4);
        if (CONCAT31(extraout_var,bVar5) == 0) goto LAB_004bcdbb;
        iVar6 = iVar6 + 1;
        pSVar10 = pSVar10 + 1;
      } while (iVar6 < _DAT_01cc4470);
    }
  }
  return 1;
}
