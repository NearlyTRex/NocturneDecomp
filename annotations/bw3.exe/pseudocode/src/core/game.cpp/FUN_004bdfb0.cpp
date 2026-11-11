// Name: core_game.cpp_FUN_004bdfb0
// Address: 004bdfb0
// Address Range: [[004bdfb0, 004be8c5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bdfb0(CGame *this_ptr,char *save_filename,int load_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bdfb0(CGame *this_ptr,char *save_filename,int load_mode)

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
  char local_578 [260];
  char local_474 [260];
  char local_370 [256];
  char local_270 [256];
  char local_170 [200];
  CLZWDecompress local_a8;
  CInStreamFile local_74;
  COutStreamFile local_48;
  int *local_40;
  byte local_3c [4];
  int local_38;
  uint local_34;
  int *local_30;
  float *local_2c;
  float *local_28;
  char *local_24;
  char *local_20;
  float *local_1c;
  uint local_18;
  int local_14;
  
  bVar13 = 0;
  FUN_005a54b0("save\\$$SAVE$$.TMP");
  this_ptr->is_loading = 1;
  splitpath(&DAT_01d225c8,(char *)0x0,(char *)0x0,(char *)0x0,local_370);
  iVar2 = _stricmp(local_370,&DAT_005c3662);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_370,&DAT_005c3666), iVar2 == 0)) {
    pcVar9 = local_578;
    pcVar6 = &DAT_01d225c8;
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
    local_578[0] = '\0';
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(g_CFieldNotesPtr);
  local_34 = _DAT_01c5b0e0;
  if (load_mode != 0) {
    _DAT_01c5b0e0 = _DAT_01549aa8;
  }
  local_24 = this_ptr->chapter_reload_filename;
  local_20 = this_ptr->music_name;
  local_30 = &this_ptr->total_kill_count;
  local_40 = &this_ptr->damageable_enemy_count;
  local_2c = &this_ptr->end_timer;
  local_28 = &this_ptr->total_game_time;
  local_1c = &this_ptr->total_play_time;
  do {
    pcVar9 = save_filename;
    pcVar6 = local_578;
    if (save_filename == (char *)0x0) {
      uVar14 = 1;
      file_pattern = "*.sav";
      search_directory = &DAT_005c3671;
      pcVar9 = local_578;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select file to load");
      iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0047db70
                        (g_CEditorToolsPtr,pcVar6,search_directory,file_pattern,pcVar9,uVar14);
      if (iVar2 == 0) {
LAB_004be478:
        _DAT_01c5b0e0 = local_34;
        core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(g_CFieldNotesPtr);
        this_ptr->is_loading = 0;
        FUN_005a54b0("save\\$$SAVE$$.TMP");
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
    core_event_cpp_FUN_00494880(0x01C6E360);
    core_level_cpp_FUN_004dfc50(0x01D70AB8,9,0,0xffffffff);
    file_handle = engine_dosio_cpp_FUN_004659c0(&DAT_005c368d,local_578,&DAT_005c368a);
    local_18 = _ftell(file_handle);
    iVar5 = 1;
    iVar2 = _stricmp(&DAT_01d225c8,local_578);
    if (iVar2 != 0) {
      pcVar6 = &DAT_01d225c8;
      pcVar9 = local_578;
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
    _fread(local_3c,4,1,file_handle);
    _fseek(file_handle,local_18,0);
    iVar4 = 4;
    bVar11 = false;
    iVar2 = 0;
    bVar12 = true;
    pbVar7 = local_3c;
    pbVar10 = &DAT_005fea0c;
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
LAB_004be22a:
      _fclose(file_handle);
      unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&local_74);
      support_trstream_cpp_COutStreamFile_ctor_FUN_005747c0(&local_48);
      _sprintf(local_474,"%s\\%s");
      iVar2 = support_trstream_cpp_CInStreamFile_open_FUN_00573f50(&local_74,local_474,1);
      if (iVar2 == 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                           ("Can't open saved game file.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,pcVar9);
        support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_48,0);
        unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_74,0);
        return;
      }
      unkafter_turret_cpp_CInStreamFile_seek_FUN_00573cf0(&local_74,4,0);
      iVar2 = support_trstream_cpp_COutStreamFile_open_FUN_005749d0
                        (&local_48,"save\\$$SAVE$$.TMP",&DAT_005c36bd);
      if (iVar2 == 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                           ("Can't create temp file to load saved game file.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,pcVar9);
        support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_48,0);
        unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_74,0);
        return;
      }
      support_codec_cpp_CLZWDecompress_ctor_FUN_00441310(&local_a8,0x8000,8);
      support_codec_cpp_CLZWDecompress_init_FUN_00441350(&local_a8);
      support_codec_cpp_FUN_00441390(&local_a8,&local_74,&local_48);
      support_codec_cpp_FUN_004413f0(&local_a8,&local_48);
      unkafter_turret_cpp_CInStreamFile_close_FUN_00573db0(&local_74);
      support_trstream_cpp_COutStreamFile_close_FUN_005749a0(&local_48);
      file_handle = (_FILE *)_fopen("save\\$$SAVE$$.TMP",&DAT_005c36f0);
      if (file_handle == (_FILE *)0x0) {
        _DAT_01d71de0 = "..\\core\\game.cpp";
        _DAT_01d71de4 = 0x1079;
        core_main_c_FUN_004e4330("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      support_codec_cpp_CLZWDictionary_dtor_FUN_00440bf0(&local_a8.lzw_dict,0);
      support_codec_cpp_CCodec_dtor_FUN_00440810(&local_a8.base,1);
      support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_48,0);
      unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_74,0);
    }
    else {
      iVar4 = 3;
      bVar11 = false;
      iVar2 = 0;
      bVar12 = true;
      pbVar7 = local_3c;
      pbVar10 = &DAT_005c3692;
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
      if (iVar2 == 0) goto LAB_004be22a;
    }
    _fgets(local_270,0xff,file_handle);
    iVar2 = _strnicmp(local_270,"CInventory",10);
    if (iVar2 == 0) {
      _fclose(file_handle);
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.");
    }
    else {
      _fscanf(file_handle,&DAT_005c3749,&local_38);
      if (local_38 < 3) {
        _fclose(file_handle);
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                  (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.");
      }
      else {
        core_mission_cpp_CDemonMission_readMissionFile_FUN_004f5cc0(0x01D81080,file_handle,iVar5);
        _fgets(local_270,0xff,file_handle);
        _fscanf(file_handle,"%d, %d\n",&DAT_01d5ba00,&DAT_01d5ba14);
        local_14 = 0;
        if (0 < _DAT_01d5ba00) {
          iVar2 = 0;
          do {
            pcVar9 = "(file corrupt)";
            pcVar6 = local_170;
            for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pcVar6 = *(uint *)pcVar9;
              pcVar9 = pcVar9 + ((uint)bVar13 * -2 + 1) * 4;
              pcVar6 = pcVar6 + ((uint)bVar13 * -2 + 1) * 4;
            }
            _fscanf(file_handle,"%[^\n]\n",local_170);
            uVar14 = g_CHeroClassInfo.name_hash;
            pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90
                               (0x01D81080,local_170);
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar3,uVar14);
            *(int *)(iVar2 + 0x1d5ba04) = iVar5;
            if (iVar5 == 0) {
              _fclose(file_handle);
              shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                        (g_CEditorToolsPtr,"Can't find hero %s.  Sorry.");
            }
            local_14 = local_14 + 1;
            iVar2 = iVar2 + 4;
          } while (local_14 < _DAT_01d5ba00);
        }
        iVar2 = core_mission_cpp_FUN_004f7590(0x01D81080);
        if (iVar2 == 0) goto LAB_004be478;
        core_event_cpp_CEventList_loadState_FUN_00495490(0x01C6E360,file_handle);
        core_script_cpp_CScript_loadState_FUN_00530ad0(g_CScriptPtr,file_handle);
        if (local_38 < 4) {
          core_gore_cpp_CGore_reset_FUN_004ce560(g_CGorePtr);
        }
        else if (local_38 == 4) {
          core_gore_cpp_CGore_load_FUN_004cf010(g_CGorePtr,file_handle);
        }
        if (local_38 < 7) {
          core_fire_cpp_FUN_004a1480(0x01C73654);
        }
        else {
          core_fire_cpp_CFireEffect_load_FUN_004a4030(0x01C73654,file_handle);
        }
        if (local_38 < 6) {
          _DAT_01d226c8 = 0;
        }
        else {
          _fgets(local_270,0xff,file_handle);
          iVar2 = 1;
          _fscanf(file_handle,&DAT_005c37a2,&DAT_01d226cc);
          if (0 < _DAT_01d226cc) {
            puVar8 = &DAT_01d226d0;
            do {
              iVar2 = iVar2 + 1;
              _fscanf(file_handle,&DAT_005c37a6,puVar8);
              puVar8 = puVar8 + 4;
            } while (iVar2 <= _DAT_01d226cc);
          }
          _DAT_01d226c8 = 1;
        }
        if (7 < local_38) {
          _fgets(local_270,0xff,file_handle);
          _fscanf(file_handle,"%f,%f,%f,%d,%d\n",local_1c,local_28,local_2c,local_40,local_30);
        }
        _fscanf(file_handle,&DAT_005c37ba,local_20);
        if (8 < local_38) {
          core_set_cpp_FUN_0053b7f0(g_CDemonSetPtr,file_handle);
        }
        if (9 < local_38) {
          core_fldnotes_cpp_CFieldNotes_loadState_FUN_004ac900(g_CFieldNotesPtr,file_handle);
        }
        core_event_cpp_CEventList_executeCommands_FUN_0048c150
                  (0x01C6E360,"JustLoadedGame");
        _fclose(file_handle);
        if (load_mode == 0) {
          return;
        }
        core_mission_cpp_CDemonMission_run_FUN_004f72a0(0x01D81080);
        if (this_ptr->need_chapter_reload == 0) goto LAB_004be478;
        save_filename = local_24;
        this_ptr->need_chapter_reload = 0;
      }
    }
  } while( true );
}
