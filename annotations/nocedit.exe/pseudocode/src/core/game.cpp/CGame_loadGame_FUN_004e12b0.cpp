// Name: core_game.cpp_CGame_loadGame_FUN_004e12b0
// Address: 004e12b0
// Address Range: [[004e12b0, 004e1c24]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_loadGame_FUN_004e12b0(CGame *this_ptr,char *save_filename,int load_mode)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_loadGame_FUN_004e12b0(CGame *this_ptr,char *save_filename,int load_mode)

{
  char cVar1;
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
  char *directory;
  char *target_filename;
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
  CBitFont *local_3c;
  byte local_38 [4];
  int local_34;
  int local_30;
  int *local_2c;
  float *local_28;
  float *local_24;
  char *local_20;
  float *local_1c;
  long local_18;
  int local_14;
  
  bVar12 = 0;
  remove("save\\$$SAVE$$.TMP");
  this_ptr->is_loading = 1;
  splitpath
            (g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_430);
  iVar2 = _stricmp(local_430,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_430,".noc"), iVar2 == 0)) {
    pcVar8 = local_638;
    pcVar6 = g_CurrentSaveFile;
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
    local_638[0] = '\0';
  }
  local_3c = g_EditorFont;
  if (load_mode != 0) {
    g_EditorFont = g_ThemeFont;
  }
  local_20 = this_ptr->chapter_reload_filename;
  local_2c = &this_ptr->game_state_flags;
  local_24 = &this_ptr->damageable_enemy_count;
  local_1c = &this_ptr->game_stat_1;
  local_28 = &this_ptr->total_play_time;
  do {
    pcVar8 = save_filename;
    pcVar6 = local_638;
    if (save_filename == (char *)0x0) {
      uVar13 = 1;
      target_filename = "*.noc";
      directory = "save";
      pcVar8 = local_638;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select file to load");
      iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,pcVar6,directory,target_filename,(int)pcVar8,uVar13);
      if (iVar2 == 0) {
LAB_004e17ac:
        g_EditorFont = local_3c;
        this_ptr->is_loading = 0;
        remove("save\\$$SAVE$$.TMP");
        return;
      }
    }
    else {
      do {
        cVar1 = *pcVar8;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar6[1] = cVar1;
        pcVar8 = pcVar8 + 2;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    core_event_cpp_CEventList_resetGameFlags_FUN_004b0460(g_CEventListPtr);
    core_level_cpp_CLevelLoader_show_FUN_00503dc0(g_CLevelLoaderPtr,9,0,-1);
    file_handle = engine_dosio_c_getFile_FUN_00481a50("save",local_638,"rt");
    local_18 = _ftell(file_handle);
    iVar5 = 1;
    iVar2 = _stricmp(g_CurrentSaveFile,local_638);
    if (iVar2 != 0) {
      pcVar6 = g_CurrentSaveFile;
      pcVar8 = local_638;
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
    _fread(local_38,4,1,file_handle);
    _fseek(file_handle,local_18,0);
    iVar4 = 4;
    bVar10 = false;
    iVar2 = 0;
    bVar11 = true;
    pbVar7 = local_38;
    pbVar9 = &g_MagicNumEFD;
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
LAB_004e14f5:
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xdef);
      local_30 = engine_dosio_c_getFileSize_FUN_00481880("save",local_638);
      local_30 = local_30 + -4;
      crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(local_168,0);
      crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(local_e8,0);
      _sprintf(local_534,"%s\\%s","save",local_638);
      iVar2 = g_DefaultStreamBufferSize;
      crt_fstream_cpp_openFile_FUN_00600e85(local_168,local_534,0x121,g_DefaultStreamBufferSize);
      crt_fstream_cpp_istream_seekg_FUN_00600ee4(&local_124,4);
      if (local_124._ios.__enabled_exceptions != 0) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Can't open saved game file.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8);
        crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(local_e8,0);
        crt_fstream_cpp_ifstream_dtor_FUN_005ff856(local_168,0);
        return;
      }
                    /* this must be creating the temporary savefile */
      crt_fstream_cpp_openFile_FUN_00600e85(local_e8,"save\\$$SAVE$$.TMP",0x112,iVar2);
                    /* at this point the file should exist but it will be empty */
      if (local_a4._ios.__enabled_exceptions != 0) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Can't create temp file to load saved game file.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8);
        crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(local_e8,0);
        crt_fstream_cpp_ifstream_dtor_FUN_005ff856(local_168,0);
        return;
      }
      support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(&local_6c,0x8000,8);
      support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(&local_6c);
      support_codec_cpp_CLZWDecompress_process_FUN_0043f510
                (&local_6c,&local_124,(int)&local_30,&local_a4);
      support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590(&local_6c,&local_a4);
      _fflush(local_168);
      _fflush(local_e8);
      if (local_30 != 0) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Error writing temp file to load saved game.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8);
        support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&local_6c.lzw_dict,0);
        support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&local_6c.base,1);
        crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(local_e8,0);
        crt_fstream_cpp_ifstream_dtor_FUN_005ff856(local_168,0);
        return;
      }
      file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                              ("save\\$$SAVE$$.TMP",(char *)0x0,"rt",
                               "..\\core\\game.cpp",0xe1e);
      if (file_handle == (_FILE *)0x0) {
        g_CurrentFilename = "..\\core\\game.cpp";
        g_CurrentLineNumber = 0xe1f;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("Can't reopen %s","save\\$$SAVE$$.TMP");
      }
      support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&local_6c.lzw_dict,0);
      support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&local_6c.base,1);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(local_e8,0);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856(local_168,0);
    }
    else {
      iVar4 = 3;
      bVar10 = false;
      iVar2 = 0;
      bVar11 = true;
      pbVar7 = local_38;
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
      if (iVar2 == 0) goto LAB_004e14f5;
    }
    _fgets(local_330,0xff,file_handle);
    iVar2 = _strnicmp(local_330,"CInventory",10);
    if (iVar2 == 0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xe28);
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.",local_638);
    }
    else {
      _fscanf(file_handle,"%d\n",&local_34);
      if (local_34 < 3) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xe37);
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.",local_638);
      }
      else {
        core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0
                  (g_CDemonMissionPtr,file_handle,iVar5);
        _fgets(local_330,0xff,file_handle);
        iVar2 = 0;
        _fscanf(file_handle,"%d, %d\n",&g_HeroCount,&g_LocalHeroIndex);
        local_14 = 0;
        if (0 < g_HeroCount) {
          do {
            pcVar8 = "(file corrupt)";
            pcVar6 = local_230;
            for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(uint *)pcVar6 = *(uint *)pcVar8;
              pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
              pcVar6 = pcVar6 + ((uint)bVar12 * -2 + 1) * 4;
            }
            _fscanf(file_handle,"%[^\n]\n",local_230);
            uVar13 = g_CHeroClassInfo.name_hash;
            pCVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                               (g_CDemonMissionPtr,local_230);
            pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar3,uVar13);
            *(CDemonActor **)((int)g_HeroActors + iVar2) = pCVar3;
            if (pCVar3 == (CDemonActor *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xe4a);
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't find hero %s.  Sorry.",local_230);
            }
            local_14 = local_14 + 1;
            iVar2 = iVar2 + 4;
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
            iVar5 = 0x2d82d88;
            do {
              iVar2 = iVar2 + 1;
              _fscanf(file_handle,"%d\n",iVar5);
              iVar5 = iVar5 + 4;
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
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xe8c);
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
