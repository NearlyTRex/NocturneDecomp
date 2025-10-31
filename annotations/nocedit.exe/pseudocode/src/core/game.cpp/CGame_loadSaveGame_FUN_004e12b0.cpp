// Name: core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
// Address: 004e12b0
// Address Range: [[004e12b0, 004e1c24]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_loadSaveGame_FUN_004e12b0(CGame * this_ptr, char * save_filename, int load_mode, char * chapter_name)
// Cross-references:
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2087 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005133ff [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053ce34 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_noc_0062ca88
//   TerminatedCString s_noc_0062ca8c
//   TerminatedCString s_noc_0062ca91
//   TerminatedCString s_save_0062ca97
//   TerminatedCString s_Select_file_to_load_0062ca9c
//   TerminatedCString s_rt_0062cab0
//   TerminatedCString s_save_0062cab3
//   undefined1 DAT_0062cab8
//   undefined1 DAT_0062cab9
//   TerminatedCString s_core_game_cpp_0062cabc
//   TerminatedCString s_save_0062cacd
//   TerminatedCString s_save_0062cad2
//   TerminatedCString s_s_s_0062cad7
//   TerminatedCString s_Can_t_open_saved_game_fi_0062cadd
//   TerminatedCString s_Can_t_create_temp_file_t_0062caf9
//   TerminatedCString s_Error_writing_temp_file__0062cb29
//   TerminatedCString s_core_game_cpp_0062cb55
//   TerminatedCString s_rt_0062cb66
//   TerminatedCString s_core_game_cpp_0062cb69
//   TerminatedCString s_Can_t_reopen_s_0062cb7a
//   TerminatedCString s_CInventory_0062cb8a
//   TerminatedCString s_core_game_cpp_0062cb95
//   TerminatedCString s_Can_t_load_old_save_game_0062cba6
//   TerminatedCString s_d_0062cbd0
//   TerminatedCString s_core_game_cpp_0062cbd4
//   TerminatedCString s_Can_t_load_old_save_game_0062cbe5
//   TerminatedCString s_d_d_0062cc0f
//   TerminatedCString s_anon_0062cc17
//   TerminatedCString s_core_game_cpp_0062cc1e
//   TerminatedCString s_Can_t_find_hero_s_Sorry_0062cc2f
//   TerminatedCString s_d_0062cc4b
//   TerminatedCString s_d_0062cc4f
//   TerminatedCString s_f_f_d_d_0062cc53
//   TerminatedCString s_core_game_cpp_0062cc60
//   int g_DefaultStreamBufferSize = 0x1a4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEventList* g_CEventListInstance = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   TerminatedCString s_save_SAVE_TMP_0067b670
//   undefined1 g_MagicNumEFD
//   undefined1 DAT_0067b685
//   TerminatedCString s_file_corrupt_0067b688
//   undefined4 s_e_corrupt)_0067b68c
//   CGore* g_CGorePtr = 02d83364
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CBitFont* g_ThemeFont
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02d05310
//   CFireEffect g_CFireEffectInstance
//   char g_CurrentSaveFile
//   undefined1 DAT_02d82c81
//   undefined1 DAT_02d82c82
//   undefined1 DAT_02d82c83
//   undefined4 DAT_02d82d80
//   undefined4 DAT_02d82d84
//   undefined4 DAT_02d82d88
//   undefined4 DAT_02d82d8c
//   CGore g_CGoreInstance
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 g_CHeroClassInfo.name_hash
//   CLevelLoader g_CLevelLoaderInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
//   CScript g_CScriptInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_event.cpp_CEventList_loadState_FUN_004b0fc0
//   core_event.cpp_FUN_004b0460
//   core_fire.cpp_CFireEffect_FUN_004c6c80
//   core_fire.cpp_CFireEffect_FUN_004c9300
//   core_gore.cpp_FUN_004ed760
//   core_gore.cpp_FUN_004ee1e0
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_mission.cpp_CDemonMission_FUN_00524760
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
//   core_mission.cpp_CDemonMission_run_FUN_00524420
//   core_script.cpp_CScript_loadState_FUN_00560820
//   core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230
//   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   crt_fstream.cpp_openFile_FUN_00600e85
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fflush_FUN_00600e29
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strnicmp_FUN_005ff070
//   crt_unknown.c_FUN_00600ee4
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
//   support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590
//   support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
//   support_codec.cpp_CLZWDecompress_process_FUN_0043f510
//   support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

void __cdecl
core_game_cpp_CGame_loadSaveGame_FUN_004e12b0
          (CGame *this_ptr,char *save_filename,int load_mode,char *chapter_name)

{
  char cVar1;
  int iVar2;
  FILE *file_handle;
  int iVar3;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  int in_stack_00000014;
  char *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000034;
  char *in_stack_00000038;
  char *in_stack_fffff998;
  void *in_stack_fffff99c;
  void *pvVar16;
  char *in_stack_fffff9a0;
  char *in_stack_fffff9a4;
  uint in_stack_fffff9a8;
  uint d2;
  uint d3;
  CEditorTools *d4;
  char *pcVar17;
  CEditorTools *in_stack_fffff9e0;
  char acStack_578 [4];
  char acStack_574 [328];
  char acStack_42c [4];
  FILE aFStack_428 [8];
  char acStack_334 [4];
  char local_330 [12];
  char acStack_324 [28];
  char acStack_308 [236];
  undefined4 auStack_21c [26];
  undefined1 auStack_1b4 [32];
  undefined1 auStack_194 [8];
  FILE FStack_18c;
  undefined1 auStack_170 [52];
  ostream *poStack_13c;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [20];
  void *pvStack_bc;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [12];
  byte abStack_8c [16];
  CLZWDictionary CStack_7c;
  undefined1 auStack_5c [16];
  int iStack_4c;
  CBitFont *local_2c;
  CBitFont *local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  crt_io_c_deleteFile_FUN_005ff9d0("save\\$$SAVE$$.TMP");
  save_filename[0x234] = '\x01';
  save_filename[0x235] = '\0';
  save_filename[0x236] = '\0';
  save_filename[0x237] = '\0';
  d3 = 0;
  d2 = 0;
  crt_string_c_splitpath_FUN_005ff178
            (&g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,acStack_42c);
  pcVar17 = (char *)aFStack_428;
  d4 = (CEditorTools *)0x4e1305;
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar17,"noc");
  if (iVar2 != 0) {
    pcVar17 = (char *)0x4e131e;
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0((char *)&aFStack_428[0]._cnt,".noc");
    if (iVar2 != 0) goto LAB_004e134a;
  }
  pcVar9 = &stack0xfffff9d8;
  pcVar7 = &g_CurrentSaveFile;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
LAB_004e134a:
  local_2c = g_EditorFont;
  if (in_stack_0000001c != 0) {
    g_EditorFont = g_ThemeFont;
  }
  local_1c = in_stack_00000014 + 0x254;
  local_14 = in_stack_00000014 + 0x24c;
  iVar2 = in_stack_00000014 + 0x248;
  local_18 = in_stack_00000014 + 0x250;
  do {
    pcVar10 = &stack0xfffff9d8;
    pcVar7 = &stack0xfffff9d8;
    pcVar9 = in_stack_00000018;
    if (in_stack_00000018 == (char *)0x0) {
      bVar13 = true;
      pcVar9 = "*.noc";
      pcVar17 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select file to load");
      d3 = 0x4e17a1;
      d4 = g_CEditorToolsPtr;
      iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,pcVar17,pcVar9,pcVar7,bVar13);
      if (iVar3 == 0) {
LAB_004e17ac:
        g_EditorFont = local_24;
        *(undefined4 *)(in_stack_0000001c + 0x234) = 0;
        crt_io_c_deleteFile_FUN_005ff9d0("save\\$$SAVE$$.TMP");
        return;
      }
    }
    else {
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    core_event_cpp_FUN_004b0460();
    core_level_cpp_CLevelLoader_show_FUN_00503dc0(g_CLevelLoaderPtr,9,0,-1);
    file_handle = engine_dosio_c_getFile_FUN_00481a50
                            ("save",&stack0xfffff960,"rt");
    CStack_7c.num_bits = crt_stdio_c_ftell_FUN_00601560(file_handle);
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(&g_CurrentSaveFile,&stack0xfffff968);
    pcVar9 = &stack0xfffff96c;
    if (iVar3 != 0) {
      pcVar7 = &g_CurrentSaveFile;
      do {
        cVar1 = *pcVar9;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    crt_stdio_c_fread_FUN_005fd990(auStack_98 + 4,4,1,file_handle);
    crt_stdio_c_fseek_FUN_005ffacc(file_handle,CStack_7c.max_entries,0);
    iVar5 = 4;
    bVar13 = false;
    iVar3 = 0;
    bVar14 = true;
    pbVar8 = abStack_8c;
    pbVar11 = &g_MagicNumEFD;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar13 = *pbVar8 < *pbVar11;
      bVar14 = *pbVar8 == *pbVar11;
      pbVar8 = pbVar8 + (uint)bVar15 * -2 + 1;
      pbVar11 = pbVar11 + (uint)bVar15 * -2 + 1;
    } while (bVar14);
    if (!bVar14) {
      iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
    }
    if (iVar3 == 0) {
LAB_004e14f5:
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xdef);
      CStack_7c.dict_size =
           engine_dosio_c_getFileSize_FUN_00481880("save",&stack0xfffff978);
      CStack_7c.dict_size = CStack_7c.dict_size + -4;
      crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0((ifstream *)auStack_1b4,0);
      crt_fstream_cpp_ofstream_ctor_FUN_005ff95c((ofstream *)auStack_130,0);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_578,"%s\\%s");
      iVar3 = g_DefaultStreamBufferSize;
      crt_fstream_cpp_openFile_FUN_00600e85
                ((ifstream *)(auStack_1b4 + 0xc),acStack_574,0x121,g_DefaultStreamBufferSize);
      crt_unknown_c_FUN_00600ee4();
      if (poStack_13c != (ostream *)0x0) {
        pcVar17 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("Can't open saved game file.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar17);
        crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                  ((ofstream *)auStack_118,0,(uint)in_stack_fffff998,(uint)in_stack_fffff99c,
                   (uint)in_stack_fffff9a0);
        crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                  ((ifstream *)auStack_194,0,(uint)in_stack_fffff99c,(uint)in_stack_fffff9a0,
                   (uint)in_stack_fffff9a4);
        return;
      }
                    /* this must be creating the temporary savefile */
      crt_fstream_cpp_openFile_FUN_00600e85
                ((ifstream *)(auStack_130 + 0x10),"save\\$$SAVE$$.TMP",0x112,iVar3);
      pvVar16 = pvStack_bc;
                    /* at this point the file should exist but it will be empty */
      if (pvStack_bc != (void *)0x0) {
        pcVar17 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("Can't create temp file to load saved game file.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar17);
        crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                  ((ofstream *)(auStack_118 + 4),0,(uint)in_stack_fffff99c,(uint)in_stack_fffff9a0,
                   (uint)in_stack_fffff9a4);
        crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                  ((ifstream *)(auStack_194 + 4),0,(uint)in_stack_fffff9a0,(uint)in_stack_fffff9a4,
                   in_stack_fffff9a8);
        return;
      }
      support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490((CLZWDecompress *)auStack_a0,0x8000,8);
      support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0((CLZWDecompress *)(auStack_a0 + 4));
      support_codec_cpp_CLZWDecompress_process_FUN_0043f510
                ((CLZWDecompress *)auStack_98,(FILE *)(auStack_170 + 0x20),(int)auStack_5c,
                 (FILE *)auStack_d0);
      support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590
                ((CLZWDecompress *)(auStack_98 + 4),(FILE *)(auStack_d0 + 4));
      crt_stdio_c_fflush_FUN_00600e29(&FStack_18c);
      crt_stdio_c_fflush_FUN_00600e29((FILE *)auStack_108);
      if (iStack_4c != 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Error writing temp file to load saved game.");
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar9);
        support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&CStack_7c);
        support_codec_cpp_CCodec_dtor_FUN_0043e9b0((CCodec *)&CStack_7c,1);
        crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
                  ((ofstream *)(auStack_108 + 0x14),0,d2,d3,(uint)d4);
        crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                  ((ifstream *)auStack_170,0,d3,(uint)d4,(uint)pcVar17);
        return;
      }
      in_stack_fffff9a4 = "..\\core\\game.cpp";
      in_stack_fffff9a0 = "rt";
      in_stack_fffff998 = "save\\$$SAVE$$.TMP";
      file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                              ("save\\$$SAVE$$.TMP",(char *)0x0,"rt",
                               "..\\core\\game.cpp",0xe1e);
      in_stack_fffff99c = pvVar16;
      if (file_handle == (FILE *)0x0) {
        g_CurrentFilename = "..\\core\\game.cpp";
        g_CurrentLineNumber = 0xe1f;
        in_stack_fffff9a4 = (char *)0x4e16ae;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't reopen %s");
        in_stack_fffff99c = pvVar16;
      }
      in_stack_fffff9a8 = 0x4e16c0;
      support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&CStack_7c);
      support_codec_cpp_CCodec_dtor_FUN_0043e9b0((CCodec *)&CStack_7c,1);
      crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc((ofstream *)(auStack_108 + 0x14),0,d2,d3,(uint)d4);
      crt_fstream_cpp_ifstream_dtor_FUN_005ff856
                ((ifstream *)auStack_170,0,d3,(uint)d4,(uint)pcVar17);
    }
    else {
      iVar5 = 3;
      bVar13 = false;
      iVar3 = 0;
      bVar14 = true;
      pbVar8 = abStack_8c;
      pbVar11 = &DAT_0062cab8;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar13 = *pbVar8 < *pbVar11;
        bVar14 = *pbVar8 == *pbVar11;
        pbVar8 = pbVar8 + (uint)bVar15 * -2 + 1;
        pbVar11 = pbVar11 + (uint)bVar15 * -2 + 1;
      } while (bVar14);
      if (!bVar14) {
        iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      }
      if (iVar3 == 0) goto LAB_004e14f5;
    }
    crt_stdio_c_fgets_FUN_005fefd0(acStack_334,0xff,file_handle);
    iVar3 = crt_string_c_strnicmp_FUN_005ff070(local_330,"CInventory",10);
    if (iVar3 == 0) {
      d2 = 0x4e173e;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xe28);
      pcVar17 = "Can't load old save game file %s.  Sorry.";
      d3 = 0x4e1755;
      d4 = g_CEditorToolsPtr;
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.");
    }
    else {
      d2 = 0x4e18f9;
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
      if ((int)local_2c < 3) {
        d3 = 0x4e1bd0;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xe37);
        d4 = (CEditorTools *)0x4e1be7;
        pcVar17 = &g_CEditorToolsPtr->field0_0x0;
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Can't load old save game file %s.  Sorry.");
      }
      else {
        d3 = 0x4e1918;
        core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0(g_CDemonMissionPtr);
        crt_stdio_c_fgets_FUN_005fefd0(acStack_324,0xff,file_handle);
        iVar3 = 0;
        d4 = (CEditorTools *)0x4e1948;
        pcVar17 = (char *)file_handle;
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d, %d\n");
        iVar5 = 0;
        if (0 < g_HeroCount) {
          do {
            pcVar9 = "(file corrupt)";
            puVar12 = auStack_21c;
            for (iVar6 = 0x32; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar12 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + ((uint)bVar15 * -2 + 1) * 4;
              puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
            }
            crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n");
            pCVar4 = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
            pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,(uint)in_stack_fffff9e0);
            *(CDemonActor **)((int)g_HeroActors + iVar3) = pCVar4;
            if (pCVar4 == (CDemonActor *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xe4a);
              in_stack_fffff9e0 = g_CEditorToolsPtr;
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't find hero %s.  Sorry.");
            }
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar5 < g_HeroCount);
        }
        iVar3 = core_mission_cpp_CDemonMission_FUN_00524760(g_CDemonMissionPtr);
        if (iVar3 == 0) goto LAB_004e17ac;
        core_event_cpp_CEventList_loadState_FUN_004b0fc0();
        core_script_cpp_CScript_loadState_FUN_00560820();
        if (local_14 < 4) {
          core_gore_cpp_FUN_004ed760();
        }
        else if (local_14 == 4) {
          core_gore_cpp_FUN_004ee1e0();
        }
        if (in_stack_00000014 + 0x9c8 < 7) {
          core_fire_cpp_CFireEffect_FUN_004c6c80(g_CFireEffectPtr);
        }
        else {
          core_fire_cpp_CFireEffect_FUN_004c9300(g_CFireEffectPtr);
        }
        if (iVar2 < 6) {
          DAT_02d82d80 = 0;
        }
        else {
          crt_stdio_c_fgets_FUN_005fefd0(acStack_308,0xff,file_handle);
          iVar3 = 1;
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
          if (0 < DAT_02d82d84) {
            do {
              iVar3 = iVar3 + 1;
              crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
            } while (iVar3 <= DAT_02d82d84);
          }
          DAT_02d82d80 = 1;
        }
        if (7 < iVar2) {
          crt_stdio_c_fgets_FUN_005fefd0(acStack_308,0xff,file_handle);
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%d,%d\n");
        }
        if (8 < iVar2) {
          core_set_cpp_CDemonSet_saveStateInfo_FUN_00571230(g_CDemonSetPtr);
        }
        in_stack_fffff9e0 = (CEditorTools *)0x4e1b68;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\game.cpp",0xe8c);
        if (in_stack_00000038 == (char *)0x0) {
          return;
        }
        core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
        if (*(int *)(in_stack_00000034 + 0x9c4) == 0) goto LAB_004e17ac;
        in_stack_00000038 = chapter_name;
        *(undefined4 *)(in_stack_00000034 + 0x9c4) = 0;
      }
    }
  } while( true );
}


// Assembly code:
// 004e12b0: PUSH EBX
//   Label: core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
// 004e12b1: PUSH ESI
// 004e12b2: PUSH EDI
// 004e12b3: PUSH EBP
// 004e12b4: SUB ESP,0x628
// 004e12ba: PUSH 0x67b670
//   XREF to: 0067b670 (DATA)
// 004e12bf: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004e12c4: ADD ESP,0x4
// 004e12c7: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[0x4] (READ)
// 004e12ce: MOV dword ptr [EAX + 0x234],0x1
// 004e12d8: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x430] (DATA)
// 004e12df: PUSH EAX
// 004e12e0: PUSH 0x0
// 004e12e2: PUSH 0x0
// 004e12e4: PUSH 0x0
// 004e12e6: PUSH 0x2d82c80
//   XREF to: 02d82c80 (DATA)
// 004e12eb: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 004e12f0: ADD ESP,0x14
// 004e12f3: PUSH 0x62ca88
//   XREF to: 0062ca88 (DATA)
// 004e12f8: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x430] (DATA)
// 004e12ff: PUSH EAX
// 004e1300: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e1305: ADD ESP,0x8
// 004e1308: TEST EAX,EAX
// 004e130a: JZ 0x004e1329
//   XREF to: 004e1329 (CONDITIONAL_JUMP)
// 004e130c: PUSH 0x62ca8c
//   XREF to: 0062ca8c (DATA)
// 004e1311: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x430] (DATA)
// 004e1318: PUSH EAX
// 004e1319: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e131e: ADD ESP,0x8
// 004e1321: TEST EAX,EAX
// 004e1323: JNZ 0x004e175d
//   XREF to: 004e175d (CONDITIONAL_JUMP)
// 004e1329: MOV ESI,0x2d82c80
//   Label: LAB_004e1329
//   XREF to: 02d82c80 (DATA)
// 004e132e: MOV EDI,ESP
// 004e1330: PUSH EDI
// 004e1331: MOV AL,byte ptr [ESI]
//   Label: LAB_004e1331
//   XREF to: 02d82c80 (READ)
//   XREF to: 02d82c82 (READ)
// 004e1333: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x638] (DATA)
// 004e1335: CMP AL,0x0
// 004e1337: JZ 0x004e1349
//   XREF to: 004e1349 (CONDITIONAL_JUMP)
// 004e1339: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02d82c81 (READ)
//   XREF to: 02d82c83 (READ)
// 004e133c: ADD ESI,0x2
// 004e133f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x637] (WRITE)
// 004e1342: ADD EDI,0x2
// 004e1345: CMP AL,0x0
// 004e1347: JNZ 0x004e1331
//   XREF to: 004e1331 (CONDITIONAL_JUMP)
// 004e1349: POP EDI
//   Label: LAB_004e1349
// 004e134a: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004e134a
//   XREF to: 02cf1cd0 (READ)
// 004e134f: MOV EDX,dword ptr [ESP + 0x644]
//   XREF to: Stack[0xc] (READ)
// 004e1356: MOV dword ptr [ESP + 0x5fc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004e135d: TEST EDX,EDX
// 004e135f: JNZ 0x004e1767
//   XREF to: 004e1767 (CONDITIONAL_JUMP)
// 004e1365: MOV EAX,dword ptr [ESP + 0x63c]
//   Label: LAB_004e1365
//   XREF to: Stack[0x4] (READ)
// 004e136c: ADD EAX,0x9c8
// 004e1371: MOV dword ptr [ESP + 0x618],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004e1378: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[0x4] (READ)
// 004e137f: ADD EAX,0x254
// 004e1384: MOV dword ptr [ESP + 0x60c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004e138b: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[0x4] (READ)
// 004e1392: ADD EAX,0x24c
// 004e1397: MOV dword ptr [ESP + 0x614],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004e139e: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[0x4] (READ)
// 004e13a5: ADD EAX,0x248
// 004e13aa: MOV dword ptr [ESP + 0x61c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e13b1: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[0x4] (READ)
// 004e13b8: ADD EAX,0x250
// 004e13bd: MOV dword ptr [ESP + 0x610],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004e13c4: MOV ECX,dword ptr [ESP + 0x640]
//   Label: LAB_004e13c4
//   XREF to: Stack[0x8] (READ)
// 004e13cb: TEST ECX,ECX
// 004e13cd: JZ 0x004e1776
//   XREF to: 004e1776 (CONDITIONAL_JUMP)
// 004e13d3: MOV EDI,ESP
// 004e13d5: MOV ESI,ECX
// 004e13d7: PUSH EDI
// 004e13d8: MOV AL,byte ptr [ESI]
//   Label: LAB_004e13d8
// 004e13da: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x638] (DATA)
// 004e13dc: CMP AL,0x0
// 004e13de: JZ 0x004e13f0
//   XREF to: 004e13f0 (CONDITIONAL_JUMP)
// 004e13e0: MOV AL,byte ptr [ESI + 0x1]
// 004e13e3: ADD ESI,0x2
// 004e13e6: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x637] (WRITE)
// 004e13e9: ADD EDI,0x2
// 004e13ec: CMP AL,0x0
// 004e13ee: JNZ 0x004e13d8
//   XREF to: 004e13d8 (CONDITIONAL_JUMP)
// 004e13f0: POP EDI
//   Label: LAB_004e13f0
// 004e13f1: MOV ESI,dword ptr [0x006793d0]
//   Label: LAB_004e13f1
//   XREF to: 006793d0 (READ)
// 004e13f7: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 004e13f8: CALL core_event.cpp_FUN_004b0460
//   XREF to: 004b0460 (UNCONDITIONAL_CALL)
// 004e13fd: ADD ESP,0x4
// 004e1400: PUSH -0x1
// 004e1402: PUSH 0x0
// 004e1404: PUSH 0x9
// 004e1406: MOV EDI,dword ptr [0x0067cf80]
//   XREF to: 0067cf80 (READ)
// 004e140c: PUSH EDI
//   XREF to: 02dcd850 (DATA)
// 004e140d: CALL core_level.cpp_CLevelLoader_show_FUN_00503dc0
//   XREF to: 00503dc0 (UNCONDITIONAL_CALL)
// 004e1412: ADD ESP,0x10
// 004e1415: PUSH 0x62cab0
//   XREF to: 0062cab0 (DATA)
// 004e141a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x638] (DATA)
// 004e141e: PUSH EAX
// 004e141f: PUSH 0x62cab3
//   XREF to: 0062cab3 (DATA)
// 004e1424: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e1429: ADD ESP,0xc
// 004e142c: PUSH EAX
// 004e142d: MOV EBX,EAX
// 004e142f: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 004e1434: ADD ESP,0x4
// 004e1437: MOV dword ptr [ESP + 0x620],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004e143e: MOV EAX,ESP
// 004e1440: PUSH EAX
// 004e1441: PUSH 0x2d82c80
//   XREF to: 02d82c80 (DATA)
// 004e1446: MOV EBP,0x1
// 004e144b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e1450: ADD ESP,0x8
// 004e1453: TEST EAX,EAX
// 004e1455: JZ 0x004e147a
//   XREF to: 004e147a (CONDITIONAL_JUMP)
// 004e1457: MOV ESI,ESP
// 004e1459: MOV EDI,0x2d82c80
//   XREF to: 02d82c80 (DATA)
// 004e145e: PUSH EDI
//   XREF to: 02d82c80 (DATA)
// 004e145f: MOV AL,byte ptr [ESI]
//   Label: LAB_004e145f
//   XREF to: Stack[-0x638] (DATA)
// 004e1461: MOV byte ptr [EDI],AL
//   XREF to: 02d82c80 (WRITE)
//   XREF to: 02d82c82 (WRITE)
// 004e1463: CMP AL,0x0
// 004e1465: JZ 0x004e1477
//   XREF to: 004e1477 (CONDITIONAL_JUMP)
// 004e1467: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x637] (READ)
// 004e146a: ADD ESI,0x2
// 004e146d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d82c81 (WRITE)
//   XREF to: 02d82c83 (WRITE)
// 004e1470: ADD EDI,0x2
// 004e1473: CMP AL,0x0
// 004e1475: JNZ 0x004e145f
//   XREF to: 004e145f (CONDITIONAL_JUMP)
// 004e1477: POP EDI
//   Label: LAB_004e1477
// 004e1478: XOR EBP,EBP
// 004e147a: CMP dword ptr [ESP + 0x644],0x0
//   Label: LAB_004e147a
//   XREF to: Stack[0xc] (READ)
// 004e1482: JNZ 0x004e1489
//   XREF to: 004e1489 (CONDITIONAL_JUMP)
// 004e1484: MOV EBP,0x1
// 004e1489: PUSH EBX
//   Label: LAB_004e1489
// 004e148a: PUSH 0x1
// 004e148c: PUSH 0x4
// 004e148e: LEA EAX,[ESP + 0x60c]
//   XREF to: Stack[-0x38] (DATA)
// 004e1495: PUSH EAX
// 004e1496: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004e149b: ADD ESP,0x10
// 004e149e: PUSH 0x0
// 004e14a0: MOV EDX,dword ptr [ESP + 0x624]
//   XREF to: Stack[-0x18] (READ)
// 004e14a7: PUSH EDX
// 004e14a8: PUSH EBX
// 004e14a9: MOV EDI,0x67b684
//   XREF to: 0067b684 (DATA)
// 004e14ae: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004e14b3: ADD ESP,0xc
// 004e14b6: LEA ESI,[ESP + 0x600]
//   XREF to: Stack[-0x38] (DATA)
// 004e14bd: MOV ECX,0x4
// 004e14c2: XOR EAX,EAX
// 004e14c4: CMPSB.REPE ES:EDI,ESI
//   XREF to: 0067b684 (READ)
//   XREF to: 0067b685 (READ)
// 004e14c6: JZ 0x004e14cd
//   XREF to: 004e14cd (CONDITIONAL_JUMP)
// 004e14c8: SBB EAX,EAX
// 004e14ca: SBB EAX,-0x1
// 004e14cd: TEST EAX,EAX
//   Label: LAB_004e14cd
// 004e14cf: JZ 0x004e14f5
//   XREF to: 004e14f5 (CONDITIONAL_JUMP)
// 004e14d1: MOV ECX,0x3
// 004e14d6: MOV EDI,0x62cab8
//   XREF to: 0062cab8 (DATA)
// 004e14db: LEA ESI,[ESP + 0x600]
//   XREF to: Stack[-0x38] (DATA)
// 004e14e2: XOR EAX,EAX
// 004e14e4: CMPSB.REPE ES:EDI,ESI
//   XREF to: 0062cab8 (READ)
//   XREF to: 0062cab9 (READ)
// 004e14e6: JZ 0x004e14ed
//   XREF to: 004e14ed (CONDITIONAL_JUMP)
// 004e14e8: SBB EAX,EAX
// 004e14ea: SBB EAX,-0x1
// 004e14ed: TEST EAX,EAX
//   Label: LAB_004e14ed
// 004e14ef: JNZ 0x004e16f9
//   XREF to: 004e16f9 (CONDITIONAL_JUMP)
// 004e14f5: PUSH 0xdef
//   Label: LAB_004e14f5
// 004e14fa: PUSH 0x62cabc
//   XREF to: 0062cabc (DATA)
// 004e14ff: PUSH EBX
// 004e1500: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e1505: ADD ESP,0xc
// 004e1508: MOV EAX,ESP
// 004e150a: PUSH EAX
// 004e150b: PUSH 0x62cacd
//   XREF to: 0062cacd (DATA)
// 004e1510: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 004e1515: ADD ESP,0x8
// 004e1518: SUB EAX,0x4
// 004e151b: PUSH 0x0
// 004e151d: MOV dword ptr [ESP + 0x60c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004e1524: LEA EAX,[ESP + 0x4d4]
//   XREF to: Stack[-0x168] (DATA)
// 004e152b: PUSH EAX
// 004e152c: CALL crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
//   XREF to: 005ff8f0 (UNCONDITIONAL_CALL)
// 004e1531: ADD ESP,0x8
// 004e1534: PUSH 0x0
// 004e1536: LEA EAX,[ESP + 0x554]
//   XREF to: Stack[-0xe8] (DATA)
// 004e153d: PUSH EAX
// 004e153e: CALL crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
//   XREF to: 005ff95c (UNCONDITIONAL_CALL)
// 004e1543: ADD ESP,0x8
// 004e1546: MOV EAX,ESP
// 004e1548: PUSH EAX
// 004e1549: PUSH 0x62cad2
//   XREF to: 0062cad2 (DATA)
// 004e154e: PUSH 0x62cad7
//   XREF to: 0062cad7 (DATA)
// 004e1553: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x534] (DATA)
// 004e155a: PUSH EAX
// 004e155b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e1560: ADD ESP,0x10
// 004e1563: MOV EBX,dword ptr [0x00665c50]
//   XREF to: 00665c50 (READ)
// 004e1569: PUSH EBX
// 004e156a: PUSH 0x121
// 004e156f: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x534] (DATA)
// 004e1576: PUSH EAX
// 004e1577: LEA EAX,[ESP + 0x4dc]
//   XREF to: Stack[-0x168] (DATA)
// 004e157e: PUSH EAX
// 004e157f: CALL crt_fstream.cpp_openFile_FUN_00600e85
//   XREF to: 00600e85 (UNCONDITIONAL_CALL)
// 004e1584: ADD ESP,0x10
// 004e1587: PUSH 0x4
// 004e1589: LEA EAX,[ESP + 0x518]
//   XREF to: Stack[-0x124] (DATA)
// 004e1590: PUSH EAX
// 004e1591: CALL crt_unknown.c_FUN_00600ee4
//   XREF to: 00600ee4 (UNCONDITIONAL_CALL)
// 004e1596: ADD ESP,0x8
// 004e1599: CMP dword ptr [ESP + 0x534],0x0
//   XREF to: Stack[-0x104] (READ)
// 004e15a1: JNZ 0x004e17e1
//   XREF to: 004e17e1 (CONDITIONAL_JUMP)
// 004e15a7: PUSH EBX
// 004e15a8: PUSH 0x112
// 004e15ad: PUSH 0x67b670
//   XREF to: 0067b670 (DATA)
// 004e15b2: LEA EAX,[ESP + 0x55c]
//   XREF to: Stack[-0xe8] (DATA)
// 004e15b9: PUSH EAX
// 004e15ba: CALL crt_fstream.cpp_openFile_FUN_00600e85
//   XREF to: 00600e85 (UNCONDITIONAL_CALL)
// 004e15bf: ADD ESP,0x10
// 004e15c2: MOV ESI,dword ptr [ESP + 0x5b0]
//   XREF to: Stack[-0x88] (READ)
// 004e15c9: TEST ESI,ESI
// 004e15cb: JNZ 0x004e182d
//   XREF to: 004e182d (CONDITIONAL_JUMP)
// 004e15d1: PUSH 0x8
// 004e15d3: PUSH 0x8000
// 004e15d8: LEA EAX,[ESP + 0x5d4]
//   XREF to: Stack[-0x6c] (DATA)
// 004e15df: PUSH EAX
// 004e15e0: CALL support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
//   XREF to: 0043f490 (UNCONDITIONAL_CALL)
// 004e15e5: ADD ESP,0xc
// 004e15e8: LEA EAX,[ESP + 0x5cc]
//   XREF to: Stack[-0x6c] (DATA)
// 004e15ef: PUSH EAX
// 004e15f0: CALL support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
//   XREF to: 0043f4d0 (UNCONDITIONAL_CALL)
// 004e15f5: ADD ESP,0x4
// 004e15f8: LEA EAX,[ESP + 0x594]
//   XREF to: Stack[-0xa4] (DATA)
// 004e15ff: PUSH EAX
// 004e1600: LEA EAX,[ESP + 0x60c]
//   XREF to: Stack[-0x30] (DATA)
// 004e1607: PUSH EAX
// 004e1608: LEA EAX,[ESP + 0x51c]
//   XREF to: Stack[-0x124] (DATA)
// 004e160f: PUSH EAX
// 004e1610: LEA EAX,[ESP + 0x5d8]
//   XREF to: Stack[-0x6c] (DATA)
// 004e1617: PUSH EAX
// 004e1618: CALL support_codec.cpp_CLZWDecompress_process_FUN_0043f510
//   XREF to: 0043f510 (UNCONDITIONAL_CALL)
// 004e161d: ADD ESP,0x10
// 004e1620: LEA EAX,[ESP + 0x594]
//   XREF to: Stack[-0xa4] (DATA)
// 004e1627: PUSH EAX
// 004e1628: LEA EAX,[ESP + 0x5d0]
//   XREF to: Stack[-0x6c] (DATA)
// 004e162f: PUSH EAX
// 004e1630: CALL support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590
//   XREF to: 0043f590 (UNCONDITIONAL_CALL)
// 004e1635: ADD ESP,0x8
// 004e1638: LEA EAX,[ESP + 0x4d0]
//   XREF to: Stack[-0x168] (DATA)
// 004e163f: PUSH EAX
// 004e1640: CALL crt_stdio.c_fflush_FUN_00600e29
//   XREF to: 00600e29 (UNCONDITIONAL_CALL)
// 004e1645: ADD ESP,0x4
// 004e1648: LEA EAX,[ESP + 0x550]
//   XREF to: Stack[-0xe8] (DATA)
// 004e164f: PUSH EAX
// 004e1650: CALL crt_stdio.c_fflush_FUN_00600e29
//   XREF to: 00600e29 (UNCONDITIONAL_CALL)
// 004e1655: ADD ESP,0x4
// 004e1658: CMP dword ptr [ESP + 0x608],0x0
//   XREF to: Stack[-0x30] (READ)
// 004e1660: JNZ 0x004e1879
//   XREF to: 004e1879 (CONDITIONAL_JUMP)
// 004e1666: PUSH 0xe1e
// 004e166b: PUSH 0x62cb55
//   XREF to: 0062cb55 (DATA)
// 004e1670: PUSH 0x62cb66
//   XREF to: 0062cb66 (DATA)
// 004e1675: PUSH ESI
// 004e1676: PUSH 0x67b670
//   XREF to: 0067b670 (DATA)
// 004e167b: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004e1680: ADD ESP,0x14
// 004e1683: MOV EBX,EAX
// 004e1685: TEST EAX,EAX
// 004e1687: JNZ 0x004e16b1
//   XREF to: 004e16b1 (CONDITIONAL_JUMP)
// 004e1689: PUSH 0x67b670
//   XREF to: 0067b670 (DATA)
// 004e168e: MOV EDX,0x62cb69
//   XREF to: 0062cb69 (PARAM)
// 004e1693: MOV ECX,0xe1f
// 004e1698: PUSH 0x62cb7a
//   XREF to: 0062cb7a (DATA)
// 004e169d: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004e16a3: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004e16a9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004e16ae: ADD ESP,0x8
// 004e16b1: PUSH 0x0
//   Label: LAB_004e16b1
// 004e16b3: LEA EAX,[ESP + 0x5d4]
//   XREF to: Stack[-0x68] (DATA)
// 004e16ba: PUSH EAX
// 004e16bb: CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
//   XREF to: 0043edf0 (UNCONDITIONAL_CALL)
// 004e16c0: ADD ESP,0x8
// 004e16c3: PUSH 0x1
// 004e16c5: LEA EAX,[ESP + 0x5d0]
//   XREF to: Stack[-0x6c] (DATA)
// 004e16cc: PUSH EAX
// 004e16cd: CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)
// 004e16d2: ADD ESP,0x8
// 004e16d5: PUSH 0x0
// 004e16d7: LEA EAX,[ESP + 0x554]
//   XREF to: Stack[-0xe8] (DATA)
// 004e16de: PUSH EAX
// 004e16df: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 004e16e4: ADD ESP,0x8
// 004e16e7: PUSH 0x0
// 004e16e9: LEA EAX,[ESP + 0x4d4]
//   XREF to: Stack[-0x168] (DATA)
// 004e16f0: PUSH EAX
// 004e16f1: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 004e16f6: ADD ESP,0x8
// 004e16f9: PUSH EBX
//   Label: LAB_004e16f9
// 004e16fa: PUSH 0xff
// 004e16ff: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x330] (DATA)
// 004e1706: PUSH EAX
// 004e1707: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004e170c: ADD ESP,0xc
// 004e170f: PUSH 0xa
// 004e1711: PUSH 0x62cb8a
//   XREF to: 0062cb8a (DATA)
// 004e1716: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x330] (DATA)
// 004e171d: PUSH EAX
// 004e171e: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 004e1723: ADD ESP,0xc
// 004e1726: TEST EAX,EAX
// 004e1728: JNZ 0x004e18e6
//   XREF to: 004e18e6 (CONDITIONAL_JUMP)
// 004e172e: PUSH 0xe28
// 004e1733: PUSH 0x62cb95
//   XREF to: 0062cb95 (DATA)
// 004e1738: PUSH EBX
// 004e1739: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e173e: ADD ESP,0xc
// 004e1741: MOV EAX,ESP
// 004e1743: PUSH EAX
// 004e1744: PUSH 0x62cba6
//   XREF to: 0062cba6 (DATA)
// 004e1749: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004e174f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004e1750: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004e1755: ADD ESP,0xc
// 004e1758: JMP 0x004e13c4
//   XREF to: 004e13c4 (UNCONDITIONAL_JUMP)
// 004e175d: XOR AH,AH
//   Label: LAB_004e175d
// 004e175f: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0x638] (DATA)
// 004e1762: JMP 0x004e134a
//   XREF to: 004e134a (UNCONDITIONAL_JUMP)
// 004e1767: MOV EAX,[0x020a5720]
//   Label: LAB_004e1767
//   XREF to: 020a5720 (READ)
// 004e176c: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 004e1771: JMP 0x004e1365
//   XREF to: 004e1365 (UNCONDITIONAL_JUMP)
// 004e1776: PUSH 0x1
//   Label: LAB_004e1776
// 004e1778: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x638] (DATA)
// 004e177c: PUSH EAX
// 004e177d: PUSH 0x62ca91
//   XREF to: 0062ca91 (DATA)
// 004e1782: PUSH 0x62ca97
//   XREF to: 0062ca97 (DATA)
// 004e1787: PUSH 0x62ca9c
//   XREF to: 0062ca9c (DATA)
// 004e178c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1791: ADD ESP,0x4
// 004e1794: PUSH EAX
// 004e1795: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004e179b: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004e179c: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 004e17a1: ADD ESP,0x18
// 004e17a4: TEST EAX,EAX
// 004e17a6: JNZ 0x004e13f1
//   XREF to: 004e13f1 (CONDITIONAL_JUMP)
// 004e17ac: MOV EAX,dword ptr [ESP + 0x5fc]
//   Label: LAB_004e17ac
//   XREF to: Stack[-0x3c] (READ)
// 004e17b3: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 004e17b8: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[0x4] (READ)
// 004e17bf: PUSH 0x67b670
//   XREF to: 0067b670 (DATA)
// 004e17c4: MOV dword ptr [EAX + 0x234],0x0
// 004e17ce: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004e17d3: ADD ESP,0x4
// 004e17d6: ADD ESP,0x628
//   Label: LAB_004e17d6
// 004e17dc: POP EBP
// 004e17dd: POP EDI
// 004e17de: POP ESI
// 004e17df: POP EBX
// 004e17e0: RET
// 004e17e1: PUSH 0x62cadd
//   Label: LAB_004e17e1
//   XREF to: 0062cadd (DATA)
// 004e17e6: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e17eb: ADD ESP,0x4
// 004e17ee: PUSH EAX
// 004e17ef: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e17f5: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004e17f6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e17fb: ADD ESP,0x8
// 004e17fe: PUSH 0x0
// 004e1800: LEA EAX,[ESP + 0x554]
//   XREF to: Stack[-0xe8] (DATA)
// 004e1807: PUSH EAX
// 004e1808: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 004e180d: ADD ESP,0x8
// 004e1810: PUSH 0x0
// 004e1812: LEA EAX,[ESP + 0x4d4]
//   XREF to: Stack[-0x168] (DATA)
// 004e1819: PUSH EAX
// 004e181a: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 004e181f: ADD ESP,0x8
// 004e1822: ADD ESP,0x628
// 004e1828: POP EBP
// 004e1829: POP EDI
// 004e182a: POP ESI
// 004e182b: POP EBX
// 004e182c: RET
// 004e182d: PUSH 0x62caf9
//   Label: LAB_004e182d
//   XREF to: 0062caf9 (DATA)
// 004e1832: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1837: ADD ESP,0x4
// 004e183a: PUSH EAX
// 004e183b: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e1841: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004e1842: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e1847: ADD ESP,0x8
// 004e184a: PUSH 0x0
// 004e184c: LEA EAX,[ESP + 0x554]
//   XREF to: Stack[-0xe8] (DATA)
// 004e1853: PUSH EAX
// 004e1854: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 004e1859: ADD ESP,0x8
// 004e185c: PUSH 0x0
// 004e185e: LEA EAX,[ESP + 0x4d4]
//   XREF to: Stack[-0x168] (DATA)
// 004e1865: PUSH EAX
// 004e1866: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 004e186b: ADD ESP,0x8
// 004e186e: ADD ESP,0x628
// 004e1874: POP EBP
// 004e1875: POP EDI
// 004e1876: POP ESI
// 004e1877: POP EBX
// 004e1878: RET
// 004e1879: PUSH 0x62cb29
//   Label: LAB_004e1879
//   XREF to: 0062cb29 (DATA)
// 004e187e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1883: ADD ESP,0x4
// 004e1886: PUSH EAX
// 004e1887: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004e188d: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004e188e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e1893: ADD ESP,0x8
// 004e1896: PUSH ESI
// 004e1897: LEA EAX,[ESP + 0x5d4]
//   XREF to: Stack[-0x68] (DATA)
// 004e189e: PUSH EAX
// 004e189f: CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
//   XREF to: 0043edf0 (UNCONDITIONAL_CALL)
// 004e18a4: ADD ESP,0x8
// 004e18a7: PUSH 0x1
// 004e18a9: LEA EAX,[ESP + 0x5d0]
//   XREF to: Stack[-0x6c] (DATA)
// 004e18b0: PUSH EAX
// 004e18b1: CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)
// 004e18b6: ADD ESP,0x8
// 004e18b9: PUSH ESI
// 004e18ba: LEA EAX,[ESP + 0x554]
//   XREF to: Stack[-0xe8] (DATA)
// 004e18c1: PUSH EAX
// 004e18c2: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 004e18c7: ADD ESP,0x8
// 004e18ca: PUSH ESI
// 004e18cb: LEA EAX,[ESP + 0x4d4]
//   XREF to: Stack[-0x168] (DATA)
// 004e18d2: PUSH EAX
// 004e18d3: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 004e18d8: ADD ESP,0x8
// 004e18db: ADD ESP,0x628
// 004e18e1: POP EBP
// 004e18e2: POP EDI
// 004e18e3: POP ESI
// 004e18e4: POP EBX
// 004e18e5: RET
// 004e18e6: LEA EAX,[ESP + 0x604]
//   Label: LAB_004e18e6
//   XREF to: Stack[-0x34] (DATA)
// 004e18ed: PUSH EAX
// 004e18ee: PUSH 0x62cbd0
//   XREF to: 0062cbd0 (DATA)
// 004e18f3: PUSH EBX
// 004e18f4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004e18f9: ADD ESP,0xc
// 004e18fc: CMP dword ptr [ESP + 0x604],0x3
//   XREF to: Stack[-0x34] (READ)
// 004e1904: JL 0x004e1bc0
//   XREF to: 004e1bc0 (CONDITIONAL_JUMP)
// 004e190a: PUSH EBP
// 004e190b: PUSH EBX
// 004e190c: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e1912: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 004e1913: CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
//   XREF to: 00522eb0 (UNCONDITIONAL_CALL)
// 004e1918: ADD ESP,0xc
// 004e191b: PUSH EBX
// 004e191c: PUSH 0xff
// 004e1921: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x330] (DATA)
// 004e1928: PUSH EAX
// 004e1929: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004e192e: ADD ESP,0xc
// 004e1931: PUSH 0x2db87d0
//   XREF to: 02db87d0 (DATA)
// 004e1936: PUSH 0x2db87bc
//   XREF to: 02db87bc (DATA)
// 004e193b: PUSH 0x62cc0f
//   XREF to: 0062cc0f (DATA)
// 004e1940: PUSH EBX
// 004e1941: XOR EBP,EBP
// 004e1943: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004e1948: ADD ESP,0x10
// 004e194b: MOV EAX,[0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004e1950: MOV dword ptr [ESP + 0x624],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004e1957: TEST EAX,EAX
// 004e1959: JLE 0x004e1a08
//   XREF to: 004e1a08 (CONDITIONAL_JUMP)
// 004e195f: LEA EAX,[ESP + 0x408]
//   Label: LAB_004e195f
//   XREF to: Stack[-0x230] (DATA)
// 004e1966: PUSH EAX
// 004e1967: MOV ECX,0x32
// 004e196c: PUSH 0x62cc17
//   XREF to: 0062cc17 (DATA)
// 004e1971: LEA EDI,[ESP + 0x410]
//   XREF to: Stack[-0x230] (DATA)
// 004e1978: MOV ESI,0x67b688
//   XREF to: 0067b688 (DATA)
// 004e197d: PUSH EBX
// 004e197e: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067b688 (READ)
//   XREF to: 0067b68c (READ)
// 004e1980: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004e1985: ADD ESP,0xc
// 004e1988: MOV EDX,dword ptr [0x02db880c]
//   XREF to: 02db880c (READ)
// 004e198e: PUSH EDX
// 004e198f: LEA EAX,[ESP + 0x40c]
//   XREF to: Stack[-0x230] (DATA)
// 004e1996: PUSH EAX
// 004e1997: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004e199d: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 004e199e: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 004e19a3: ADD ESP,0x8
// 004e19a6: PUSH EAX
// 004e19a7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004e19ac: ADD ESP,0x8
// 004e19af: MOV dword ptr [EBP + 0x2db87c0],EAX
//   XREF to: 02db87c0 (WRITE)
// 004e19b5: TEST EAX,EAX
// 004e19b7: JNZ 0x004e19e8
//   XREF to: 004e19e8 (CONDITIONAL_JUMP)
// 004e19b9: PUSH 0xe4a
// 004e19be: PUSH 0x62cc1e
//   XREF to: 0062cc1e (DATA)
// 004e19c3: PUSH EBX
// 004e19c4: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e19c9: ADD ESP,0xc
// 004e19cc: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0x230] (DATA)
// 004e19d3: PUSH EAX
// 004e19d4: PUSH 0x62cc2f
//   XREF to: 0062cc2f (DATA)
// 004e19d9: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e19df: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004e19e0: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e19e5: ADD ESP,0xc
// 004e19e8: MOV ESI,dword ptr [ESP + 0x624]
//   Label: LAB_004e19e8
//   XREF to: Stack[-0x14] (READ)
// 004e19ef: MOV EDI,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004e19f5: INC ESI
// 004e19f6: ADD EBP,0x4
// 004e19f9: MOV dword ptr [ESP + 0x624],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004e1a00: CMP ESI,EDI
// 004e1a02: JL 0x004e195f
//   XREF to: 004e195f (CONDITIONAL_JUMP)
// 004e1a08: MOV EBP,dword ptr [0x0067d550]
//   Label: LAB_004e1a08
//   XREF to: 0067d550 (READ)
// 004e1a0e: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 004e1a0f: CALL core_mission.cpp_CDemonMission_FUN_00524760
//   XREF to: 00524760 (UNCONDITIONAL_CALL)
// 004e1a14: ADD ESP,0x4
// 004e1a17: TEST EAX,EAX
// 004e1a19: JZ 0x004e17ac
//   XREF to: 004e17ac (CONDITIONAL_JUMP)
// 004e1a1f: PUSH EBX
// 004e1a20: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004e1a25: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 004e1a26: CALL core_event.cpp_CEventList_loadState_FUN_004b0fc0
//   XREF to: 004b0fc0 (UNCONDITIONAL_CALL)
// 004e1a2b: ADD ESP,0x8
// 004e1a2e: PUSH EBX
// 004e1a2f: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004e1a35: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 004e1a36: CALL core_script.cpp_CScript_loadState_FUN_00560820
//   XREF to: 00560820 (UNCONDITIONAL_CALL)
// 004e1a3b: ADD ESP,0x8
// 004e1a3e: MOV ECX,dword ptr [ESP + 0x604]
//   XREF to: Stack[-0x34] (READ)
// 004e1a45: CMP ECX,0x4
// 004e1a48: JL 0x004e1bef
//   XREF to: 004e1bef (CONDITIONAL_JUMP)
// 004e1a4e: JNZ 0x004e1a60
//   XREF to: 004e1a60 (CONDITIONAL_JUMP)
// 004e1a50: PUSH EBX
// 004e1a51: MOV EDI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004e1a57: PUSH EDI
//   XREF to: 02d83364 (DATA)
// 004e1a58: CALL core_gore.cpp_FUN_004ee1e0
//   XREF to: 004ee1e0 (UNCONDITIONAL_CALL)
// 004e1a5d: ADD ESP,0x8
// 004e1a60: CMP dword ptr [ESP + 0x604],0x7
//   Label: LAB_004e1a60
//   XREF to: Stack[-0x34] (READ)
// 004e1a68: JGE 0x004e1c03
//   XREF to: 004e1c03 (CONDITIONAL_JUMP)
// 004e1a6e: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004e1a74: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004e1a75: CALL core_fire.cpp_CFireEffect_FUN_004c6c80
//   XREF to: 004c6c80 (UNCONDITIONAL_CALL)
// 004e1a7a: ADD ESP,0x4
// 004e1a7d: CMP dword ptr [ESP + 0x604],0x6
//   Label: LAB_004e1a7d
//   XREF to: Stack[-0x34] (READ)
// 004e1a85: JL 0x004e1c18
//   XREF to: 004e1c18 (CONDITIONAL_JUMP)
// 004e1a8b: PUSH EBX
// 004e1a8c: PUSH 0xff
// 004e1a91: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x330] (DATA)
// 004e1a98: PUSH EAX
// 004e1a99: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004e1a9e: ADD ESP,0xc
// 004e1aa1: PUSH 0x2d82d84
//   XREF to: 02d82d84 (DATA)
// 004e1aa6: PUSH 0x62cc4b
//   XREF to: 0062cc4b (DATA)
// 004e1aab: PUSH EBX
// 004e1aac: MOV EBP,0x1
// 004e1ab1: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004e1ab6: MOV EAX,[0x02d82d84]
//   XREF to: 02d82d84 (READ)
// 004e1abb: ADD ESP,0xc
// 004e1abe: CMP EAX,EBP
// 004e1ac0: JL 0x004e1ae6
//   XREF to: 004e1ae6 (CONDITIONAL_JUMP)
// 004e1ac2: MOV ESI,0x2d82d84
//   XREF to: 02d82d84 (DATA)
// 004e1ac7: ADD ESI,0x4
// 004e1aca: PUSH ESI
//   Label: LAB_004e1aca
//   XREF to: 02d82d88 (DATA)
//   XREF to: 02d82d8c (DATA)
// 004e1acb: PUSH 0x62cc4f
//   XREF to: 0062cc4f (DATA)
// 004e1ad0: PUSH EBX
// 004e1ad1: INC EBP
// 004e1ad2: ADD ESI,0x4
// 004e1ad5: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004e1ada: MOV EAX,[0x02d82d84]
//   XREF to: 02d82d84 (READ)
// 004e1adf: ADD ESP,0xc
// 004e1ae2: CMP EBP,EAX
// 004e1ae4: JLE 0x004e1aca
//   XREF to: 004e1aca (CONDITIONAL_JUMP)
// 004e1ae6: MOV dword ptr [0x02d82d80],0x1
//   Label: LAB_004e1ae6
//   XREF to: 02d82d80 (WRITE)
// 004e1af0: CMP dword ptr [ESP + 0x604],0x8
//   Label: LAB_004e1af0
//   XREF to: Stack[-0x34] (READ)
// 004e1af8: JL 0x004e1b3e
//   XREF to: 004e1b3e (CONDITIONAL_JUMP)
// 004e1afa: PUSH EBX
// 004e1afb: PUSH 0xff
// 004e1b00: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x330] (DATA)
// 004e1b07: PUSH EAX
// 004e1b08: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004e1b0d: ADD ESP,0xc
// 004e1b10: MOV ESI,dword ptr [ESP + 0x60c]
//   XREF to: Stack[-0x2c] (READ)
// 004e1b17: PUSH ESI
// 004e1b18: MOV EDI,dword ptr [ESP + 0x618]
//   XREF to: Stack[-0x24] (READ)
// 004e1b1f: PUSH EDI
// 004e1b20: MOV EBP,dword ptr [ESP + 0x624]
//   XREF to: Stack[-0x1c] (READ)
// 004e1b27: PUSH EBP
// 004e1b28: MOV EAX,dword ptr [ESP + 0x61c]
//   XREF to: Stack[-0x28] (READ)
// 004e1b2f: PUSH EAX
// 004e1b30: PUSH 0x62cc53
//   XREF to: 0062cc53 (DATA)
// 004e1b35: PUSH EBX
// 004e1b36: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004e1b3b: ADD ESP,0x18
// 004e1b3e: CMP dword ptr [ESP + 0x604],0x9
//   Label: LAB_004e1b3e
//   XREF to: Stack[-0x34] (READ)
// 004e1b46: JL 0x004e1b58
//   XREF to: 004e1b58 (CONDITIONAL_JUMP)
// 004e1b48: PUSH EBX
// 004e1b49: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004e1b4f: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004e1b50: CALL core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230
//   XREF to: 00571230 (UNCONDITIONAL_CALL)
// 004e1b55: ADD ESP,0x8
// 004e1b58: PUSH 0xe8c
//   Label: LAB_004e1b58
// 004e1b5d: PUSH 0x62cc60
//   XREF to: 0062cc60 (DATA)
// 004e1b62: PUSH EBX
// 004e1b63: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e1b68: ADD ESP,0xc
// 004e1b6b: CMP dword ptr [ESP + 0x644],0x0
//   XREF to: Stack[0xc] (READ)
// 004e1b73: JZ 0x004e17d6
//   XREF to: 004e17d6 (CONDITIONAL_JUMP)
// 004e1b79: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e1b7f: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004e1b80: CALL core_mission.cpp_CDemonMission_run_FUN_00524420
//   XREF to: 00524420 (UNCONDITIONAL_CALL)
// 004e1b85: ADD ESP,0x4
// 004e1b88: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[0x4] (READ)
// 004e1b8f: CMP dword ptr [EAX + 0x9c4],0x0
// 004e1b96: JZ 0x004e17ac
//   XREF to: 004e17ac (CONDITIONAL_JUMP)
// 004e1b9c: MOV EAX,dword ptr [ESP + 0x618]
//   XREF to: Stack[-0x20] (READ)
// 004e1ba3: MOV dword ptr [ESP + 0x640],EAX
//   XREF to: Stack[0x8] (WRITE)
// 004e1baa: MOV EAX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[0x4] (READ)
// 004e1bb1: MOV dword ptr [EAX + 0x9c4],0x0
// 004e1bbb: JMP 0x004e13c4
//   XREF to: 004e13c4 (UNCONDITIONAL_JUMP)
// 004e1bc0: PUSH 0xe37
//   Label: LAB_004e1bc0
// 004e1bc5: PUSH 0x62cbd4
//   XREF to: 0062cbd4 (DATA)
// 004e1bca: PUSH EBX
// 004e1bcb: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e1bd0: ADD ESP,0xc
// 004e1bd3: MOV EAX,ESP
// 004e1bd5: PUSH EAX
// 004e1bd6: PUSH 0x62cbe5
//   XREF to: 0062cbe5 (DATA)
// 004e1bdb: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004e1be1: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004e1be2: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004e1be7: ADD ESP,0xc
// 004e1bea: JMP 0x004e13c4
//   XREF to: 004e13c4 (UNCONDITIONAL_JUMP)
// 004e1bef: MOV EBP,dword ptr [0x0067b9a0]
//   Label: LAB_004e1bef
//   XREF to: 0067b9a0 (READ)
// 004e1bf5: PUSH EBP
//   XREF to: 02d83364 (DATA)
// 004e1bf6: CALL core_gore.cpp_FUN_004ed760
//   XREF to: 004ed760 (UNCONDITIONAL_CALL)
// 004e1bfb: ADD ESP,0x4
// 004e1bfe: JMP 0x004e1a60
//   XREF to: 004e1a60 (UNCONDITIONAL_JUMP)
// 004e1c03: PUSH EBX
//   Label: LAB_004e1c03
// 004e1c04: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004e1c0a: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004e1c0b: CALL core_fire.cpp_CFireEffect_FUN_004c9300
//   XREF to: 004c9300 (UNCONDITIONAL_CALL)
// 004e1c10: ADD ESP,0x8
// 004e1c13: JMP 0x004e1a7d
//   XREF to: 004e1a7d (UNCONDITIONAL_JUMP)
// 004e1c18: XOR EDI,EDI
//   Label: LAB_004e1c18
// 004e1c1a: MOV dword ptr [0x02d82d80],EDI
//   XREF to: 02d82d80 (WRITE)
// 004e1c20: JMP 0x004e1af0
//   XREF to: 004e1af0 (UNCONDITIONAL_JUMP)
