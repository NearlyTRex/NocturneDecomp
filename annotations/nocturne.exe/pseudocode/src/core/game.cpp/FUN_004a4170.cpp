// Name: core_game.cpp_FUN_004a4170
// Address: 004a4170
// Address Range: [[004a4170, 004a4ad3]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004a4170(CGame *this_ptr,char *save_filename,int load_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004a4170(CGame *this_ptr,char *save_filename,int load_mode)

{
  char cVar1;
  SIZE_T buffer_size;
  int iVar2;
  _FILE *file_handle;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  char *search_directory;
  char *file_pattern;
  uint uVar13;
  char local_638 [260];
  char local_534 [260];
  char local_430 [256];
  char local_330 [256];
  char local_230 [200];
  _FILE local_168 [2];
  _istream local_124;
  _FILE local_e8 [2];
  _ostream local_a4;
  CLZWDecompress local_6c;
  byte local_3c [4];
  int local_38;
  int local_34;
  CBitFont *local_30;
  char *local_2c;
  int *local_28;
  float *local_24;
  int *local_20;
  float *local_1c;
  long local_18;
  int local_14;
  
  bVar12 = 0;
  remove("save\\$$SAVE$$.TMP");
  this_ptr->is_loading = 1;
  splitpath(&DAT_01c78598,(char *)0x0,(char *)0x0,(char *)0x0,local_430);
  iVar2 = _stricmp(local_430,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_430,".noc"), iVar2 == 0)) {
    pcVar6 = &DAT_01c78598;
    pcVar8 = local_534;
    do {
      cVar1 = *pcVar6;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_534[0] = '\0';
  }
  local_30 = _DAT_01bcd070;
  if (load_mode != 0) {
    _DAT_01bcd070 = g_CBitFont_PTR_014b9900;
  }
  local_2c = this_ptr->chapter_reload_filename;
  local_28 = &this_ptr->total_kill_count;
  local_20 = &this_ptr->damageable_enemy_count;
  local_24 = &this_ptr->total_game_time;
  local_1c = &this_ptr->total_play_time;
  do {
    if (save_filename == (char *)0x0) {
      uVar13 = 1;
      pcVar8 = local_534;
      file_pattern = "*.noc";
      search_directory = "save";
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select file to load");
      iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
                        (g_CEditorTools_PTR_005b6d50,pcVar6,search_directory,file_pattern,pcVar8,
                         uVar13);
      if (iVar2 == 0) {
LAB_004a4674:
        _DAT_01bcd070 = local_30;
        this_ptr->is_loading = 0;
        remove("save\\$$SAVE$$.TMP");
        return;
      }
    }
    else {
      pcVar8 = local_534;
      pcVar6 = save_filename;
      do {
        cVar1 = *pcVar6;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
    }
    core_event_cpp_CEventList_resetGameFlags_FUN_00480410(0x01C03A10);
    core_level_cpp_CLevelLoader_show_FUN_004c5640(g_CLevelLoader_PTR_005baca0,9,0,-1);
    file_handle = engine_dosio_cpp_getFile_FUN_00456a60("save",local_534,"rt");
    local_18 = _ftell(file_handle);
    iVar5 = 1;
    iVar2 = _stricmp(&DAT_01c78598,local_534);
    if (iVar2 != 0) {
      pcVar8 = local_534;
      pcVar6 = &DAT_01c78598;
      do {
        cVar1 = *pcVar8;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
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
    bVar10 = false;
    iVar2 = 0;
    bVar11 = true;
    pbVar7 = local_3c;
    pbVar9 = &DAT_005b9384;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar10 = *pbVar7 < *pbVar9;
      bVar11 = *pbVar7 == *pbVar9;
      pbVar7 = pbVar7 + (uint)bVar12 * -2 + 1;
      pbVar9 = pbVar9 + (uint)bVar12 * -2 + 1;
    } while (bVar11);
    if (!bVar11) {
      iVar2 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
    }
    if (iVar2 == 0) {
LAB_004a43cc:
      _fclose(file_handle);
      local_34 = engine_dosio_cpp_getFileSize_FUN_004568c0("save",local_534);
      local_34 = local_34 + -4;
      crt_fstream_cpp_ifstream_ctor_FUN_005652fe(local_168,0);
      crt_fstream_cpp_ofstream_ctor_FUN_0056536a(local_e8,0);
      _sprintf(local_638,"%s\\%s","save",local_534);
      buffer_size = 0x000001A4;
      crt_fstream_cpp_openFile_FUN_00565eb5(local_168,local_638,0x121,0x000001A4);
      crt_fstream_cpp_istream_seekg_FUN_00565f14(&local_124,4);
      if (local_124._ios.__enabled_exceptions != 0) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("Can't open saved game file.");
        shape_edittool_cpp_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,pcVar8);
        crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_e8,0);
        crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_168,0);
        return;
      }
      crt_fstream_cpp_openFile_FUN_00565eb5(local_e8,"save\\$$SAVE$$.TMP",0x112,buffer_size);
      if (local_a4._ios.__enabled_exceptions != 0) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("Can't create temp file to load saved game file.");
        shape_edittool_cpp_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,pcVar8);
        crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_e8,0);
        crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_168,0);
        return;
      }
      support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(&local_6c,0x8000,8);
      support_codec_cpp_CLZWDecompress_init_FUN_00439a30(&local_6c);
      support_codec_cpp_CLZWDecompress_process_FUN_00439a70
                (&local_6c,&local_124,&local_34,&local_a4);
      support_codec_cpp_CLZWDecompress_finalize_FUN_00439af0(&local_6c,&local_a4);
      _fflush(local_168);
      _fflush(local_e8);
      if (local_34 != 0) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("Error writing temp file to load saved game.");
        shape_edittool_cpp_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,pcVar8);
        support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(&local_6c.lzw_dict,0);
        support_codec_cpp_CCodec_dtor_FUN_00438f30(&local_6c.base,1);
        crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_e8,0);
        crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_168,0);
        return;
      }
      file_handle = _fopen("save\\$$SAVE$$.TMP","rt");
      if (file_handle == (_FILE *)0x0) {
        g_CHAR_PTR_01cc4800 = "..\\core\\game.cpp";
        g_INT_01cc4804 = 0xe2f;
        core_main_c_FUN_004c8440("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(&local_6c.lzw_dict,0);
      support_codec_cpp_CCodec_dtor_FUN_00438f30(&local_6c.base,1);
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_e8,0);
      crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_168,0);
    }
    else {
      iVar4 = 3;
      bVar10 = false;
      iVar2 = 0;
      bVar11 = true;
      pbVar7 = local_3c;
      pbVar9 = (byte *)"LZW";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar10 = *pbVar7 < *pbVar9;
        bVar11 = *pbVar7 == *pbVar9;
        pbVar7 = pbVar7 + (uint)bVar12 * -2 + 1;
        pbVar9 = pbVar9 + (uint)bVar12 * -2 + 1;
      } while (bVar11);
      if (!bVar11) {
        iVar2 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      }
      if (iVar2 == 0) goto LAB_004a43cc;
    }
    _fgets(local_330,0xff,file_handle);
    iVar2 = _strnicmp(local_330,"CInventory",10);
    if (iVar2 == 0) {
      _fclose(file_handle);
      shape_edittool_cpp_FUN_0046fe60
                (g_CEditorTools_PTR_005b6d50,"Can't load old save game file %s.  Sorry.",local_534);
    }
    else {
      _fscanf(file_handle,"%d\n");
      if (local_38 < 3) {
        _fclose(file_handle);
        shape_edittool_cpp_FUN_0046fe60
                  (g_CEditorTools_PTR_005b6d50,"Can't load old save game file %s.  Sorry.",local_534);
      }
      else {
        core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0
                  (g_CDemonMission_PTR_005baf90,file_handle,iVar5);
        _fgets(local_330,0xff,file_handle);
        iVar2 = 0;
        _fscanf(file_handle,"%d, %d\n");
        local_14 = 0;
        if (0 < _DAT_01cae0d4) {
          do {
            pcVar8 = "(file corrupt)";
            pcVar6 = local_230;
            for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pcVar6 = *(uint *)pcVar8;
              pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
              pcVar6 = pcVar6 + ((uint)bVar12 * -2 + 1) * 4;
            }
            _fscanf(file_handle,"%[^\n]\n");
            uVar13 = g_CHeroActorType_01cae0ec.name_hash;
            pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                               (g_CDemonMission_PTR_005baf90,local_230);
            pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(pCVar3,uVar13);
            *(CDemonActor **)(iVar2 + 0x1cae0d8) = pCVar3;
            if (pCVar3 == (CDemonActor *)0x0) {
              _fclose(file_handle);
              shape_edittool_cpp_FUN_0046fcd0
                        (g_CEditorTools_PTR_005b6d50,"Can't find hero %s.  Sorry.",local_230);
            }
            local_14 = local_14 + 1;
            iVar2 = iVar2 + 4;
          } while (local_14 < _DAT_01cae0d4);
        }
        iVar2 = core_mission_cpp_CDemonMission_startMission_FUN_004d9780
                          (g_CDemonMission_PTR_005baf90);
        if (iVar2 == 0) goto LAB_004a4674;
        core_event_cpp_CEventList_loadState_FUN_00480f70(0x01C03A10,file_handle);
        core_script_cpp_CScript_loadState_FUN_005052c0(0x01E56DA0,file_handle);
        if (local_38 < 4) {
          core_gore_cpp_CGore_reset_FUN_004afdb0(g_CGore_PTR_005b96c4);
        }
        else if (local_38 == 4) {
          core_gore_cpp_CGore_load_FUN_004b0820(g_CGore_PTR_005b96c4,file_handle);
        }
        if (local_38 < 7) {
          core_fire_cpp_CFireEffect_init_FUN_0048a150(g_CFireEffect_PTR_005b80f0);
        }
        else {
          core_fire_cpp_CFireEffect_load_FUN_0048c7d0(g_CFireEffect_PTR_005b80f0,file_handle);
        }
        if (local_38 < 6) {
          _DAT_01c78698 = 0;
        }
        else {
          _fgets(local_330,0xff,file_handle);
          iVar2 = 1;
          _fscanf(file_handle,"%d\n");
          if (0 < _DAT_01c7869c) {
            do {
              iVar2 = iVar2 + 1;
              _fscanf(file_handle,"%d\n");
            } while (iVar2 <= _DAT_01c7869c);
          }
          _DAT_01c78698 = 1;
        }
        if (7 < local_38) {
          _fgets(local_330,0xff,file_handle);
          _fscanf(file_handle,"%f,%f,%d,%d\n");
        }
        if (8 < local_38) {
          core_set_cpp_CDemonSet_loadStateInfo_FUN_0050e920(g_CDemonSet_PTR_005be368,file_handle);
        }
        _fclose(file_handle);
        if (load_mode == 0) {
          return;
        }
        core_mission_cpp_CDemonMission_run_FUN_004d9440(g_CDemonMission_PTR_005baf90);
        if (this_ptr->need_chapter_reload == 0) goto LAB_004a4674;
        save_filename = local_2c;
        this_ptr->need_chapter_reload = 0;
      }
    }
  } while( true );
}
