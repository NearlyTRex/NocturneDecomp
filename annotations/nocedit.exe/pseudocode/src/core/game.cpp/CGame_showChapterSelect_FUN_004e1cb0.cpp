// Name: core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
// Address: 004e1cb0
// Address Range: [[004e1cb0, 004e2881]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame *this_ptr,int unknown)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame *this_ptr,int unknown)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  uint uVar9;
  CPickList local_6ec;
  CIniFile local_344;
  char local_144 [260];
  char *local_40 [4];
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CBitFont *local_1c;
  int local_18;
  uint local_14;
  
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50(&g_PodDir,"enemy.pod","rb");
  if (p_Var2 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xecf);
  }
  local_14 = (uint)(p_Var2 == (_FILE *)0x0);
  this_ptr->game_stat_2 = 0.0;
  this_ptr->game_state_flags = 0;
  this_ptr->game_stat_1 = 0.0;
  this_ptr->total_play_time = 0.0;
  this_ptr->is_loading = 0;
  local_1c = g_EditorFont;
  g_EditorFont = g_ThemeFont;
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pod.ini",(char *)0x0,"rt","..\\core\\game.cpp",0xeea);
  if (p_Var2 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xeec);
  }
  bVar8 = unknown == 1;
  if (local_14 != 0) {
    unknown = 1;
  }
  local_18 = 0;
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70(&local_344,"system\\nocturne.ini",0x62ccd7);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(&local_344,"Act1Code",&local_2c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(&local_344,"Act2Code",&local_28);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(&local_344,"Act3Code",&local_24);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(&local_344,"Act4Code",&local_20);
  if ((((local_2c == 0x331) && (local_28 == 0x3cc)) && (local_24 == 0x3ac)) && (local_20 == 0xd6)) {
    local_18 = 1;
  }
  local_40[0] = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("'Dark Reign of the Vampire King'");
  local_40[1] = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("'Tomb of the Underground God'");
  local_40[2] = support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Windy City Massacre'");
  local_40[3] = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("'The House on the Edge of Hell'");
  iVar3 = -1;
  local_30 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Epilogue'");
  iVar6 = -1;
  if (bVar8 || p_Var2 != (_FILE *)0x0) {
    iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",(int)local_144,0);
    if (iVar6 == 0) {
      g_EditorFont = local_1c;
      return;
    }
    g_CurrentDisplayText = (char *)0x0;
    g_OverlayDisplayTimer = 0.0;
    g_ChapterDisplayName[0] = '\0';
  }
  else {
    while (iVar6 < 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_6ec);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 1 - 'Dark Reign of the Vampire King'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 2 - 'Tomb of the Underground God'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 3 - 'Windy City Massacre'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 4 - 'The House on the Edge of Hell'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
      if (local_18 != 0) {
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Volume 5 - 'Epilogue'");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
      }
      if (local_14 == 0) {
        iVar5 = 0;
        iVar3 = 0;
        if (0 < local_6ec.base.item_count) {
          do {
            p_Var2 = engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)((int)g_ChapterMissionFiles[0] + iVar3),
                                "rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&local_6ec,iVar5,0);
            }
            else {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xf29);
            }
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + 0x34;
          } while (iVar5 < local_6ec.base.item_count);
        }
      }
      uVar9 = 0;
      iVar3 = -1;
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Choose a story to play")
      ;
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_6ec,pcVar7,iVar3,uVar9);
      if (iVar3 < 0) {
        g_EditorFont = local_1c;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_6ec,0);
        return;
      }
      if ((iVar3 == 0) && (local_2c == 0x331)) {
        unknown = 1;
      }
      if ((iVar3 == 1) && (local_28 == 0x3cc)) {
        unknown = 1;
      }
      if ((iVar3 == 2) && (local_24 == 0x3ac)) {
        unknown = 1;
      }
      if ((iVar3 == 3) && (local_20 == 0xd6)) {
        unknown = 1;
LAB_004e2250:
        shape_edittool_cpp_CPickList_clear_FUN_004a5770(&local_6ec);
        if (iVar3 == 0) {
          iVar5 = 0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Your New Partner'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Sentinels'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'Werewolf Forest'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Castle Gaustadt'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Chapter 5 - 'Dungeon'");
          iVar6 = 0;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          while (iVar6 < local_6ec.base.item_count) {
            p_Var2 = engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)((int)g_ChapterMissionFiles[0] + iVar5),
                                "rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&local_6ec,iVar6,0);
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xec1);
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          uVar9 = 0;
          iVar6 = -1;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Dark Reign of the Vampire King'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_6ec,pcVar7,iVar6,uVar9);
        }
        if (iVar3 == 1) {
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Train to Redeye'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Zombie Town'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'Underground Mine'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Hidden Entrance'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 5 - 'Temple of the God'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Chapter 6 - 'Epilogue'")
          ;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          if (local_14 == 0) {
            pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Chapter X - 'Failure'");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          }
          iVar5 = 0x34;
          for (iVar6 = 0; iVar6 < local_6ec.base.item_count; iVar6 = iVar6 + 1) {
            p_Var2 = engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)((int)g_ChapterMissionFiles[0] + iVar5),
                                "rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&local_6ec,iVar6,0);
            }
            else {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xec1);
            }
            iVar5 = iVar5 + 4;
          }
          uVar9 = 0;
          iVar6 = -1;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Tomb of the Underground God'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_6ec,pcVar7,iVar6,uVar9);
        }
        if (iVar3 == 2) {
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Chicago River'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'The Vendome'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Night on the Town'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 5 - 'Water Works'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 6 - 'Windy City'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 7 - 'Crescent Theater'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 8 - 'Rooftop to Rooftop'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          iVar5 = 0x68;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 9 - 'Warehouse of Hell'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 10 - 'Mobster Factory'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 11 - 'Not You Again'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          for (iVar6 = 0; iVar6 < local_6ec.base.item_count; iVar6 = iVar6 + 1) {
            p_Var2 = engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)((int)g_ChapterMissionFiles[0] + iVar5),
                                "rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&local_6ec,iVar6,0);
            }
            else {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xec1);
            }
            iVar5 = iVar5 + 4;
          }
          uVar9 = 0;
          iVar6 = -1;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Windy City Massacre'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_6ec,pcVar7,iVar6,uVar9);
        }
        if (iVar3 == 3) {
          iVar5 = 0x9c;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Graveyard'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'House of Hell'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Back from Hell'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
          for (iVar6 = 0; iVar6 < local_6ec.base.item_count; iVar6 = iVar6 + 1) {
            p_Var2 = engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)((int)g_ChapterMissionFiles[0] + iVar5),
                                "rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&local_6ec,iVar6,0);
            }
            else {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xec1);
            }
            iVar5 = iVar5 + 4;
          }
          uVar9 = 0;
          iVar6 = -1;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'The House on the Edge of Hell'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_6ec,pcVar7,iVar6,uVar9);
        }
        if (iVar3 != 4) goto LAB_004e2376;
        iVar5 = 0xd0;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Chapter 1 - 'Headquarters'");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_6ec.base,pcVar7);
        for (iVar6 = 0; iVar6 < local_6ec.base.item_count; iVar6 = iVar6 + 1) {
          p_Var2 = engine_dosio_c_getFile_FUN_00481a50
                             ("world",*(char **)((int)g_ChapterMissionFiles[0] + iVar5),
                              "rt");
          if (p_Var2 == (_FILE *)0x0) {
            shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&local_6ec,iVar6,0);
          }
          else {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xec1);
          }
          iVar5 = iVar5 + 4;
        }
        uVar9 = 0;
        iVar6 = -1;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Epilogue'");
        iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_6ec,pcVar7,iVar6,uVar9);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_6ec,0);
      }
      else {
        if (unknown != 0) goto LAB_004e2250;
        iVar6 = 0;
LAB_004e2376:
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_6ec,0);
      }
    }
    pcVar4 = g_ChapterMissionFiles[iVar3][iVar6];
    pcVar7 = local_144;
    do {
      cVar1 = *pcVar4;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    p_Var2 = engine_dosio_c_getFile_FUN_00481a50("world",local_144,"rt");
    if (p_Var2 == (_FILE *)0x0) {
      g_EditorFont = local_1c;
      return;
    }
    pcVar4 = g_ChapterDisplayName;
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\game.cpp",0xf77);
    g_CurrentDisplayText = g_ChapterDisplayTexts[iVar3];
    pcVar7 = local_40[iVar3];
    do {
      cVar1 = *pcVar7;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    g_OverlayDisplayTimer = 8.0;
  }
  core_event_cpp_CEventList_resetGameFlags_FUN_004b0460(g_CEventListPtr);
  iVar5 = 1;
  iVar6 = _stricmp(&g_CurrentSaveFile,local_144);
  if (iVar6 != 0) {
    pcVar7 = local_144;
    pcVar4 = &g_CurrentSaveFile;
    do {
      cVar1 = *pcVar7;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    iVar5 = 0;
  }
  core_level_cpp_CLevelLoader_show_FUN_00503dc0(g_CLevelLoaderPtr,10,0,iVar3);
  core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,local_144,iVar5);
  iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80
                    (g_CDemonMissionPtr,(CCharacter *)0x0);
  if (iVar3 != 0) {
    core_mission_cpp_CDemonMission_startMission_FUN_00524760(g_CDemonMissionPtr);
    core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
    if (this_ptr->need_chapter_reload != 0) {
      this_ptr->need_chapter_reload = 0;
      core_game_cpp_CGame_loadGame_FUN_004e12b0(this_ptr,this_ptr->chapter_reload_filename,1);
    }
  }
  g_EditorFont = local_1c;
  return;
}
