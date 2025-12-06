// Name: core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
// Address: 004e12b0
// Address Range: [[004e12b0, 004e1c24]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_loadSaveGame_FUN_004e12b0(CGame * this_ptr, char * save_filename, int load_mode, char * chapter_name)

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
  uint *puVar12;
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
  uint auStack_21c [26];
  byte auStack_1b4 [32];
  byte auStack_194 [8];
  FILE FStack_18c;
  byte auStack_170 [52];
  ostream *poStack_13c;
  byte auStack_130 [24];
  byte auStack_118 [16];
  byte auStack_108 [56];
  byte auStack_d0 [20];
  void *pvStack_bc;
  byte auStack_a0 [8];
  byte auStack_98 [12];
  byte abStack_8c [16];
  CLZWDictionary CStack_7c;
  byte auStack_5c [16];
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
        *(uint *)(in_stack_0000001c + 0x234) = 0;
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
    core_event_cpp_CEventList_FUN_004b0460(g_CEventListPtr);
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
      pbVar11 = (byte *)"LZW";
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
              *puVar12 = *(uint *)pcVar9;
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
        core_event_cpp_CEventList_loadState_FUN_004b0fc0(g_CEventListPtr);
        core_script_cpp_CScript_loadState_FUN_00560820();
        if (local_14 < 4) {
          core_gore_cpp_FUN_004ed760();
        }
        else if (local_14 == 4) {
          core_gore_cpp_FUN_004ee1e0();
        }
        if (in_stack_00000014 + 0x9c8 < 7) {
          core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
        }
        else {
          core_fire_cpp_CFireEffect_load_FUN_004c9300(g_CFireEffectPtr,file_handle);
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
        *(uint *)(in_stack_00000034 + 0x9c4) = 0;
      }
    }
  } while( true );
}
