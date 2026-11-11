// Name: core_game.cpp_FUN_004bbf70
// Address: 004bbf70
// Address Range: [[004bbf70, 004bc830]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bbf70(CGame *this_ptr,char *save_filename,int load_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bbf70(CGame *this_ptr,char *save_filename,int load_mode)

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
  char local_56c [260];
  char local_468 [260];
  char local_364 [256];
  char local_264 [256];
  char local_164 [200];
  CLZWDecompress local_9c;
  CInStreamFile local_68;
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
  FUN_005ba1e0("save\\$$SAVE$$.TMP");
  this_ptr->is_loading = 1;
  splitpath(&DAT_01cb7b50,(char *)0x0,(char *)0x0,(char *)0x0,local_364);
  iVar2 = _stricmp(local_364,&DAT_005d852a);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_364,&DAT_005d852e), iVar2 == 0)) {
    pcVar9 = local_56c;
    pcVar6 = &DAT_01cb7b50;
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
    local_56c[0] = '\0';
  }
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(g_CFieldNotesPtr);
  local_30 = _DAT_01c25590;
  if (load_mode != 0) {
    _DAT_01c25590 = _DAT_01511cc0;
  }
  local_28 = this_ptr->chapter_reload_filename;
  local_24 = &this_ptr->total_kill_count;
  local_2c = &this_ptr->damageable_enemy_count;
  local_20 = &this_ptr->total_game_time;
  local_1c = &this_ptr->total_play_time;
  do {
    pcVar9 = save_filename;
    pcVar6 = local_56c;
    if (save_filename == (char *)0x0) {
      uVar14 = 1;
      file_pattern = "*.noc";
      search_directory = &DAT_005d8539;
      pcVar9 = local_56c;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select file to load");
      iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970
                        (g_CEditorToolsPtr,pcVar6,search_directory,file_pattern,pcVar9,uVar14);
      if (iVar2 == 0) {
LAB_004bc415:
        _DAT_01c25590 = local_30;
        core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(g_CFieldNotesPtr);
        this_ptr->is_loading = 0;
        FUN_005ba1e0("save\\$$SAVE$$.TMP");
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
    core_event_cpp_FUN_004910b0(0x01C38BC0);
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    core_level_cpp_FUN_004e1480(0x01D03000,9,0,0xffffffff);
    file_handle = engine_dosio_cpp_FUN_00460c70(&DAT_005d8555,local_56c,&DAT_005d8552);
    local_18 = _ftell(file_handle);
    iVar5 = 1;
    iVar2 = _stricmp(&DAT_01cb7b50,local_56c);
    if (iVar2 != 0) {
      pcVar6 = &DAT_01cb7b50;
      pcVar9 = local_56c;
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
    pbVar10 = &DAT_006164dc;
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
LAB_004bc1c9:
      _fclose(file_handle);
      unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_68);
      support_trstream_cpp_COutStreamFile_ctor_FUN_0057db80(&local_40);
      _sprintf(local_468,"%s\\%s");
      iVar2 = support_trstream_cpp_CInStreamFile_open_FUN_0057d320(&local_68,local_468);
      if (iVar2 == 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                           ("Can't open saved game file.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,pcVar9);
        support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_40,0);
        unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_68,0);
        return;
      }
      unkaddr_0057b9a0_cpp_CInStreamFile_seek_FUN_0057d0c0(&local_68,4,0);
      iVar2 = support_trstream_cpp_COutStreamFile_open_FUN_0057dd90
                        (&local_40,"save\\$$SAVE$$.TMP",&DAT_005d8585);
      if (iVar2 == 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                           ("Can't create temp file to load saved game file.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,pcVar9);
        support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_40,0);
        unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_68,0);
        return;
      }
      support_codec_cpp_CLZWDecompress_ctor_FUN_00434990(&local_9c,0x8000,8);
      support_codec_cpp_CLZWDecompress_init_FUN_004349d0(&local_9c);
      support_codec_cpp_FUN_00434a10(&local_9c,&local_68,&local_40);
      support_codec_cpp_FUN_00434a70(&local_9c,&local_40);
      unkaddr_0057b9a0_cpp_CInStreamFile_close_FUN_0057d180(&local_68);
      support_trstream_cpp_COutStreamFile_close_FUN_0057dd60(&local_40);
      file_handle = (_FILE *)_fopen("save\\$$SAVE$$.TMP",&DAT_005d85b8);
      if (file_handle == (_FILE *)0x0) {
        _DAT_01d046a0 = "..\\core\\game.cpp";
        _DAT_01d046a4 = 0x106f;
        core_main_c_FUN_004e4500("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      support_codec_cpp_CLZWDictionary_dtor_FUN_00434270(&local_9c.lzw_dict,0);
      support_codec_cpp_CCodec_dtor_FUN_00433e90(&local_9c.base,1);
      support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_40,0);
      unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_68,0);
    }
    else {
      iVar4 = 3;
      bVar11 = false;
      iVar2 = 0;
      bVar12 = true;
      pbVar7 = local_38;
      pbVar10 = &DAT_005d855a;
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
      if (iVar2 == 0) goto LAB_004bc1c9;
    }
    _fgets(local_264,0xff,file_handle);
    iVar2 = _strnicmp(local_264,"CInventory",10);
    if (iVar2 == 0) {
      _fclose(file_handle);
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.");
    }
    else {
      _fscanf(file_handle,&DAT_005d8611,&local_34);
      if (local_34 < 3) {
        _fclose(file_handle);
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                  (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.");
      }
      else {
        core_mission_cpp_CDemonMission_readMissionFile_FUN_004fb590(0x01D182F0,file_handle,iVar5);
        _fgets(local_264,0xff,file_handle);
        _fscanf(file_handle,"%d, %d\n",&DAT_01cedee0,&DAT_01cedef4);
        local_14 = 0;
        if (0 < _DAT_01cedee0) {
          iVar2 = 0;
          do {
            pcVar9 = "(file corrupt)";
            pcVar6 = local_164;
            for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pcVar6 = *(uint *)pcVar9;
              pcVar9 = pcVar9 + ((uint)bVar13 * -2 + 1) * 4;
              pcVar6 = pcVar6 + ((uint)bVar13 * -2 + 1) * 4;
            }
            _fscanf(file_handle,"%[^\n]\n",local_164);
            uVar14 = g_CHeroClassInfo.name_hash;
            pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004fc740
                               (0x01D182F0,local_164);
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar3,uVar14);
            *(int *)(iVar2 + 0x1cedee4) = iVar5;
            if (iVar5 == 0) {
              _fclose(file_handle);
              shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                        (g_CEditorToolsPtr,"Can't find hero %s.  Sorry.");
            }
            local_14 = local_14 + 1;
            iVar2 = iVar2 + 4;
          } while (local_14 < _DAT_01cedee0);
        }
        iVar2 = core_mission_cpp_FUN_004fce00(0x01D182F0);
        if (iVar2 == 0) goto LAB_004bc415;
        core_event_cpp_CEventList_loadState_FUN_00491ca0(0x01C38BC0,file_handle);
        core_script_cpp_CScript_loadState_FUN_0052a0d0(g_CScriptPtr,file_handle);
        if (local_34 < 4) {
          core_gore_cpp_CGore_reset_FUN_004c93f0(g_CGorePtr);
        }
        else if (local_34 == 4) {
          core_gore_cpp_CGore_load_FUN_004c9e70(g_CGorePtr,file_handle);
        }
        if (local_34 < 7) {
          core_fire_cpp_CFireEffect_init_FUN_0049c190(0x01C3DEB4);
        }
        else {
          core_fire_cpp_CFireEffect_load_FUN_0049ea80(0x01C3DEB4,file_handle);
        }
        if (local_34 < 6) {
          _DAT_01cb7c50 = 0;
        }
        else {
          _fgets(local_264,0xff,file_handle);
          iVar2 = 1;
          _fscanf(file_handle,&DAT_005d866a,&DAT_01cb7c54);
          if (0 < _DAT_01cb7c54) {
            puVar8 = &DAT_01cb7c58;
            do {
              iVar2 = iVar2 + 1;
              _fscanf(file_handle,&DAT_005d866e,puVar8);
              puVar8 = puVar8 + 4;
            } while (iVar2 <= _DAT_01cb7c54);
          }
          _DAT_01cb7c50 = 1;
        }
        if (7 < local_34) {
          _fgets(local_264,0xff,file_handle);
          _fscanf(file_handle,"%f,%f,%d,%d\n",local_1c,local_20,local_2c,local_24);
        }
        if (8 < local_34) {
          core_set_cpp_CDemonSet_loadStateInfo_FUN_00534a90(g_CDemonSetPtr,file_handle);
        }
        if (9 < local_34) {
          core_fldnotes_cpp_FUN_004a61b0(g_CFieldNotesPtr,file_handle);
        }
        _fclose(file_handle);
        if (load_mode == 0) {
          return;
        }
        core_mission_cpp_CDemonMission_run_FUN_004fcb00(0x01D182F0);
        if (this_ptr->need_chapter_reload == 0) goto LAB_004bc415;
        save_filename = local_28;
        this_ptr->need_chapter_reload = 0;
      }
    }
  } while( true );
}
