// Name: core_game.cpp_FUN_004d6990
// Address: 004d6990
// Address Range: [[004d6990, 004d724d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d6990(CGame *this_ptr,char *save_filename,int load_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004d6990(CGame *this_ptr,char *save_filename,int load_mode)

{
  char cVar1;
  int iVar2;
  _FILE *file_handle;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *puVar8;
  char *pcVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  char *search_directory;
  char *file_pattern;
  uint uVar14;
  char local_570 [260];
  char local_46c [260];
  char local_368 [256];
  char local_268 [256];
  char local_168 [200];
  CLZWDecompress local_a0;
  CInStreamFile local_6c;
  COutStreamFile local_40;
  byte local_38 [4];
  int local_34;
  uint local_30;
  int *local_2c;
  char *local_28;
  int *local_24;
  float *local_20;
  float *local_1c;
  uint local_18;
  int local_14;
  
  bVar13 = 0;
  FUN_005c25c0("save\\$$SAVE$$.TMP");
  this_ptr->is_loading = 1;
  splitpath(&DAT_01cd05c0,(char *)0x0,(char *)0x0,(char *)0x0,local_368);
  iVar2 = _stricmp(local_368,&DAT_005e2faf);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_368,&DAT_005e2fb3), iVar2 == 0)) {
    pcVar9 = local_570;
    pcVar6 = &DAT_01cd05c0;
    do {
      cVar1 = *pcVar6;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_570[0] = '\0';
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(g_CFieldNotesPtr);
  local_30 = _DAT_01c3eb50;
  if (load_mode != 0) {
    _DAT_01c3eb50 = _DAT_0152d244;
  }
  local_28 = this_ptr->chapter_reload_filename;
  local_24 = &this_ptr->total_kill_count;
  local_2c = &this_ptr->damageable_enemy_count;
  local_20 = &this_ptr->total_game_time;
  local_1c = &this_ptr->total_play_time;
  do {
    pcVar9 = save_filename;
    pcVar6 = local_570;
    if (save_filename == (char *)0x0) {
      uVar14 = 1;
      file_pattern = "*.noc";
      search_directory = &DAT_005e2fbe;
      pcVar9 = local_570;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select file to load");
      iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0
                        (g_CEditorToolsPtr,pcVar6,search_directory,file_pattern,pcVar9,uVar14);
      if (iVar2 == 0) {
LAB_004d6e32:
        _DAT_01c3eb50 = local_30;
        core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(g_CFieldNotesPtr);
        this_ptr->is_loading = 0;
        FUN_005c25c0("save\\$$SAVE$$.TMP");
        return;
      }
    }
    else {
      do {
        cVar1 = *pcVar9;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar6[1] = cVar1;
        pcVar9 = pcVar9 + 2;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    core_event_cpp_FUN_004a9a00(0x01C51D80);
    core_level_cpp_FUN_004fe840(0x01D1BD1C,9,0,0xffffffff);
    file_handle = engine_dosio_cpp_FUN_00479180(&DAT_005e2fda,local_570,&DAT_005e2fd7);
    local_18 = _ftell(file_handle);
    iVar5 = 1;
    iVar2 = _stricmp(&DAT_01cd05c0,local_570);
    if (iVar2 != 0) {
      pcVar6 = &DAT_01cd05c0;
      pcVar9 = local_570;
      do {
        cVar1 = *pcVar9;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar5 = 0;
    }
    if (load_mode == 0) {
      iVar5 = 1;
    }
    _fread(local_38,4,1,file_handle);
    _fseek(file_handle,local_18,0);
    iVar4 = 4;
    bVar11 = false;
    iVar2 = 0;
    bVar12 = true;
    pbVar7 = local_38;
    pbVar10 = &DAT_0061d98c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = *pbVar7 < *pbVar10;
      bVar12 = *pbVar7 == *pbVar10;
      pbVar7 = pbVar7 + (uint)bVar13 * -2 + 1;
      pbVar10 = pbVar10 + (uint)bVar13 * -2 + 1;
    } while (bVar12);
    if (!bVar12) {
      iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
    }
    if (iVar2 == 0) {
LAB_004d6be4:
      _fclose(file_handle);
      unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_6c);
      support_trstream_cpp_COutStreamFile_ctor_FUN_005a17d0(&local_40);
      _sprintf(local_46c,"%s\\%s");
      iVar2 = support_trstream_cpp_CInStreamFile_open_FUN_005a0f60(&local_6c,local_46c,1);
      if (iVar2 == 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("Can't open saved game file.");
        shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,pcVar9);
        support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_40,0);
        unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_6c,0);
        return;
      }
      unkaddr_0059f520_cpp_CInStreamFile_seek_FUN_005a0d00(&local_6c,4,0);
      iVar2 = support_trstream_cpp_COutStreamFile_open_FUN_005a19e0
                        (&local_40,"save\\$$SAVE$$.TMP",&DAT_005e300a);
      if (iVar2 == 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("Can't create temp file to load saved game file.");
        shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,pcVar9);
        support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_40,0);
        unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_6c,0);
        return;
      }
      support_codec_cpp_CLZWDecompress_ctor_FUN_004436b0(&local_a0,0x8000,8);
      support_codec_cpp_CLZWDecompress_init_FUN_004436f0(&local_a0);
      support_codec_cpp_FUN_00443730(&local_a0,&local_6c,&local_40);
      support_codec_cpp_FUN_00443790(&local_a0,&local_40);
      unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&local_6c);
      support_trstream_cpp_COutStreamFile_close_FUN_005a19b0(&local_40);
      file_handle = (_FILE *)_fopen("save\\$$SAVE$$.TMP",&DAT_005e303d);
      if (file_handle == (_FILE *)0x0) {
        _DAT_01d1d400 = "..\\core\\game.cpp";
        _DAT_01d1d404 = 0x1050;
        core_main_c_FUN_005030e0("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      support_codec_cpp_CLZWDictionary_dtor_FUN_00442f90(&local_a0.lzw_dict,0);
      support_codec_cpp_CCodec_dtor_FUN_00442bb0(&local_a0.base,1);
      support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_40,0);
      unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_6c,0);
    }
    else {
      iVar4 = 3;
      bVar11 = false;
      iVar2 = 0;
      bVar12 = true;
      pbVar7 = local_38;
      pbVar10 = &DAT_005e2fdf;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar11 = *pbVar7 < *pbVar10;
        bVar12 = *pbVar7 == *pbVar10;
        pbVar7 = pbVar7 + (uint)bVar13 * -2 + 1;
        pbVar10 = pbVar10 + (uint)bVar13 * -2 + 1;
      } while (bVar12);
      if (!bVar12) {
        iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      }
      if (iVar2 == 0) goto LAB_004d6be4;
    }
    _fgets(local_268,0xff,file_handle);
    iVar2 = _strnicmp(local_268,"CInventory",10);
    if (iVar2 == 0) {
      _fclose(file_handle);
      shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.");
    }
    else {
      _fscanf(file_handle,&DAT_005e3096,&local_34);
      if (local_34 < 3) {
        _fclose(file_handle);
        shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                  (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.");
      }
      else {
        core_mission_cpp_CDemonMission_readMissionFile_FUN_0051a4f0(0x01D2C900,file_handle,iVar5);
        _fgets(local_268,0xff,file_handle);
        _fscanf(file_handle,"%d, %d\n",&DAT_01d06aa0,&DAT_01d06ab4);
        local_14 = 0;
        if (0 < _DAT_01d06aa0) {
          iVar2 = 0;
          do {
            pcVar9 = "(file corrupt)";
            pcVar6 = local_168;
            for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pcVar6 = *(uint *)pcVar9;
              pcVar9 = pcVar9 + ((uint)bVar13 * -2 + 1) * 4;
              pcVar6 = pcVar6 + ((uint)bVar13 * -2 + 1) * 4;
            }
            _fscanf(file_handle,"%[^\n]\n",local_168);
            uVar14 = g_CHeroClassInfo.name_hash;
            pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0
                               (0x01D2C900,local_168);
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar3,uVar14);
            *(int *)(iVar2 + 0x1d06aa4) = iVar5;
            if (iVar5 == 0) {
              _fclose(file_handle);
              shape_edittool_cpp_FUN_004943a0
                        (g_CEditorToolsPtr,"Can't find hero %s.  Sorry.",local_168);
            }
            local_14 = local_14 + 1;
            iVar2 = iVar2 + 4;
          } while (local_14 < _DAT_01d06aa0);
        }
        iVar2 = core_mission_cpp_FUN_0051bdc0(0x01D2C900);
        if (iVar2 == 0) goto LAB_004d6e32;
        core_event_cpp_CEventList_loadState_FUN_004aa610(0x01C51D80,file_handle);
        core_script_cpp_CScript_loadState_FUN_0054b3e0(g_CScriptPtr,file_handle);
        if (local_34 < 4) {
          core_gore_cpp_CGore_reset_FUN_004e5c00(g_CGorePtr);
        }
        else if (local_34 == 4) {
          core_gore_cpp_CGore_load_FUN_004e6680(g_CGorePtr,file_handle);
        }
        if (local_34 < 7) {
          core_fire_cpp_CFireEffect_init_FUN_004b4b30(0x01C57074);
        }
        else {
          core_fire_cpp_CFireEffect_load_FUN_004b7370(0x01C57074,file_handle);
        }
        if (local_34 < 6) {
          _DAT_01cd06c0 = 0;
        }
        else {
          _fgets(local_268,0xff,file_handle);
          iVar2 = 1;
          _fscanf(file_handle,&DAT_005e30ef,&DAT_01cd06c4);
          if (0 < _DAT_01cd06c4) {
            puVar8 = &DAT_01cd06c8;
            do {
              iVar2 = iVar2 + 1;
              _fscanf(file_handle,&DAT_005e30f3,puVar8);
              puVar8 = puVar8 + 4;
            } while (iVar2 <= _DAT_01cd06c4);
          }
          _DAT_01cd06c0 = 1;
        }
        if (7 < local_34) {
          _fgets(local_268,0xff,file_handle);
          _fscanf(file_handle,"%f,%f,%d,%d\n",local_1c,local_20,local_2c,local_24);
        }
        if (8 < local_34) {
          core_set_cpp_FUN_00555e30(g_CDemonSetPtr,file_handle);
        }
        if (9 < local_34) {
          core_fldnotes_cpp_CFieldNotes_loadState_FUN_004bebc0(g_CFieldNotesPtr,file_handle);
        }
        _fclose(file_handle);
        if (load_mode == 0) {
          return;
        }
        core_mission_cpp_CDemonMission_run_FUN_0051bad0(0x01D2C900);
        if (this_ptr->need_chapter_reload == 0) goto LAB_004d6e32;
        save_filename = local_28;
        this_ptr->need_chapter_reload = 0;
      }
    }
  } while( true );
}
