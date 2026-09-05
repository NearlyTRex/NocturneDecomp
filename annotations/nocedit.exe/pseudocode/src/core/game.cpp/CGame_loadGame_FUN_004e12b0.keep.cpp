// Name: core_game.cpp_CGame_loadGame_FUN_004e12b0
// Address: 004e12b0
// MANUAL RECONSTRUCTION
// Address Range: [[004e12b0, 004e1c24]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_loadGame_FUN_004e12b0(CGame *this_ptr,char *save_filename,int load_mode)

#include "nocturne.h"
#include "core/stream_compat.h"

void __cdecl core_game_cpp_CGame_loadGame_FUN_004e12b0(CGame *this_ptr,char *save_filename,int load_mode)

{
  int iVar2;
  _FILE *file_handle;
  CDemonActor *actor_ptr;
  CHero *pCVar3;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  char *search_directory;
  char *file_pattern;
  uint uVar12;
  char local_638 [260];
  char local_534 [260];
  char local_430 [256];
  char local_330 [256];
  char local_230 [200];
  CLZWDecompress local_6c;
  CBitFont *local_3c;
  byte local_38 [4];
  int local_34;
  int local_30;
  int *local_2c;
  float *local_28;
  int *local_24;
  char *local_20;
  float *local_1c;
  long local_18;
  int local_14;
  
  bVar11 = 0;
  remove("save\\$$SAVE$$.TMP");
  this_ptr->is_loading = 1;
  splitpath
            (g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_430);
  iVar2 = _stricmp(local_430,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_430,".noc"), iVar2 == 0)) {
    strcpy(local_638, g_CurrentSaveFile);
  }
  else {
    local_638[0] = '\0';
  }
  local_3c = g_EditorFont;
  if (load_mode != 0) {
    g_EditorFont = g_ThemeFont;
  }
  local_20 = this_ptr->chapter_reload_filename;
  local_2c = &this_ptr->total_kill_count;
  local_24 = &this_ptr->damageable_enemy_count;
  local_1c = &this_ptr->total_game_time;
  local_28 = &this_ptr->total_play_time;
  do {
    pcVar7 = save_filename;
    pcVar5 = local_638;
    if (save_filename == (char *)0x0) {
      uVar12 = 1;
      file_pattern = "*.noc";
      search_directory = "save";
      pcVar7 = local_638;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select file to load");
      iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,pcVar5,search_directory,file_pattern,pcVar7,uVar12);
      if (iVar2 == 0) {
LAB_004e17ac:
        g_EditorFont = local_3c;
        this_ptr->is_loading = 0;
        remove("save\\$$SAVE$$.TMP");
        return;
      }
    }
    else {
      strcpy(local_638, save_filename);
    }
    core_event_cpp_CEventList_resetGameFlags_FUN_004b0460(g_CEventListPtr);
    core_level_cpp_CLevelLoader_show_FUN_00503dc0(g_CLevelLoaderPtr,9,0,-1);
    file_handle = engine_dosio_cpp_getFile_FUN_00481a50("save",local_638,"rt");
    local_18 = _ftell(file_handle);
    iVar4 = 1;
    iVar2 = _stricmp(g_CurrentSaveFile,local_638);
    if (iVar2 != 0) {
      strcpy(g_CurrentSaveFile, local_638);
      iVar4 = 0;
    }
    if (load_mode == 0) {
      iVar4 = 1;
    }
    _fread(local_38,4,1,file_handle);
    _fseek(file_handle,local_18,0);
    iVar3 = 4;
    bVar9 = false;
    iVar2 = 0;
    bVar10 = true;
    pbVar6 = local_38;
    pbVar8 = (byte *)"EFD";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pbVar6 < *pbVar8;
      bVar10 = *pbVar6 == *pbVar8;
      pbVar6 = pbVar6 + (uint)bVar11 * -2 + 1;
      pbVar8 = pbVar8 + (uint)bVar11 * -2 + 1;
    } while (bVar10);
    if (!bVar10) {
      iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if (iVar2 == 0) {
LAB_004e14f5:
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",3567);
      local_30 = engine_dosio_cpp_getFileSize_FUN_00481880("save",local_638);
      local_30 = local_30 + -4;
      {
        std::ifstream ifs;
        std::ofstream ofs;
        _sprintf(local_534,"%s\\%s","save",local_638);
        watcom_stream_open(ifs, local_534, std::ios::in | std::ios::binary);
        ifs.seekg(4);
        if (ifs.fail()) {
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Can't open saved game file.");
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar7);
          return;
        }
        watcom_stream_open(ofs, "save\\$$SAVE$$.TMP", std::ios::out | std::ios::binary | std::ios::trunc);
        if (ofs.fail()) {
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Can't create temp file to load saved game file.");
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar7);
          return;
        }
        support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(&local_6c,0x8000,8);
        support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(&local_6c);
        support_codec_cpp_CLZWDecompress_process_FUN_0043f510
                  (&local_6c,watcom_istream_from(ifs),&local_30,watcom_ostream_from(ofs));
        support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590(&local_6c,watcom_ostream_from(ofs));
        ifs.sync();
        ofs.flush();
        if (local_30 != 0) {
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Error writing temp file to load saved game.");
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar7);
          support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&local_6c.lzw_dict,0);
          support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&local_6c.base,1);
          return;
        }
        file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                ("save\\$$SAVE$$.TMP",(char *)0x0,"rt",
                                 "..\\core\\game.cpp",3614);
        if (file_handle == (_FILE *)0x0) {
          g_CurrentFilename = "..\\core\\game.cpp";
          g_CurrentLineNumber = 3615;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Can't reopen %s","save\\$$SAVE$$.TMP");
        }
        support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&local_6c.lzw_dict,0);
        support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&local_6c.base,1);
      }
    }
    else {
      iVar3 = 3;
      bVar9 = false;
      iVar2 = 0;
      bVar10 = true;
      pbVar6 = local_38;
      pbVar8 = (byte *)"LZW";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pbVar6 < *pbVar8;
        bVar10 = *pbVar6 == *pbVar8;
        pbVar6 = pbVar6 + (uint)bVar11 * -2 + 1;
        pbVar8 = pbVar8 + (uint)bVar11 * -2 + 1;
      } while (bVar10);
      if (!bVar10) {
        iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar2 == 0) goto LAB_004e14f5;
    }
    _fgets(local_330,0xff,file_handle);
    iVar2 = _strnicmp(local_330,"CInventory",10);
    if (iVar2 == 0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",3624);
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.",local_638);
    }
    else {
      _fscanf(file_handle,"%d\n",&local_34);
      if (local_34 < 3) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",3639);
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.",local_638);
      }
      else {
        core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0
                  (g_CDemonMissionPtr,file_handle,iVar4);
        _fgets(local_330,0xff,file_handle);
        iVar2 = 0;
        _fscanf(file_handle,"%d, %d\n",&g_HeroCount,&g_LocalHeroIndex);
        local_14 = 0;
        if (0 < g_HeroCount) {
          do {
            memcpy(local_230,g_LoadSavefileStatus,0xc8);
            _fscanf(file_handle,"%[^\n]\n",local_230);
            uVar12 = g_CHeroClassInfo.name_hash;
            actor_ptr = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                                  (g_CDemonMissionPtr,local_230);
            pCVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,uVar12);
            g_HeroActors[iVar2] = pCVar3;
            if (pCVar3 == (CHero *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",3658);
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't find hero %s.  Sorry.",local_230);
            }
            local_14 = local_14 + 1;
            iVar2 = iVar2 + 1;
          } while (local_14 < g_HeroCount);
        }
        iVar2 = core_mission_cpp_CDemonMission_startMission_FUN_00524760(g_CDemonMissionPtr);
        if (iVar2 == 0) goto LAB_004e17ac;
        core_event_cpp_CEventList_loadState_FUN_004b0fc0(g_CEventListPtr,file_handle);
        core_script_cpp_CScript_loadState_FUN_00560820(g_CScriptPtr,file_handle);
        if (local_34 < 4) {
          core_gore_cpp_CGore_reset_FUN_004ed760(g_CGorePtr);
        }
        else if (local_34 == 4) {
          core_gore_cpp_CGore_load_FUN_004ee1e0(g_CGorePtr,file_handle);
        }
        if (local_34 < 7) {
          core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
        }
        else {
          core_fire_cpp_CFireEffect_load_FUN_004c9300(g_CFireEffectPtr,file_handle);
        }
        if (local_34 < 6) {
          g_HasSavedLightState = 0;
        }
        else {
          _fgets(local_330,0xff,file_handle);
          iVar2 = 1;
          _fscanf(file_handle,"%d\n",g_MasterLightStateSaveBuffer);
          if (0 < g_MasterLightStateSaveBuffer[0]) {
            int *pLightState = &g_MasterLightStateSaveBuffer[1];
            do {
              iVar2 = iVar2 + 1;
              _fscanf(file_handle,"%d\n",pLightState);
              pLightState = pLightState + 1;
            } while (iVar2 <= g_MasterLightStateSaveBuffer[0]);
          }
          g_HasSavedLightState = 1;
        }
        if (7 < local_34) {
          _fgets(local_330,0xff,file_handle);
          _fscanf(file_handle,"%f,%f,%d,%d\n",local_28,local_1c,local_24,local_2c);
        }
        if (8 < local_34) {
          core_set_cpp_CDemonSet_loadStateInfo_FUN_00571230(g_CDemonSetPtr,file_handle);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",3724);
        if (load_mode == 0) {
          return;
        }
        core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
        if (this_ptr->need_chapter_reload == 0) goto LAB_004e17ac;
        save_filename = local_20;
        this_ptr->need_chapter_reload = 0;
      }
    }
  } while( true );
}
