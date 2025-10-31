// Name: core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
// Address: 004e1cb0
// Address Range: [[004e1cb0, 004e2881]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame * this_ptr, int unknown)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050777b [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005131af [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rt_0062cc71
//   TerminatedCString s_world_0062cc74
//   TerminatedCString s_core_game_cpp_0062cc7a
//   TerminatedCString s_rb_0062cc8b
//   TerminatedCString s_enemy_pod_0062cc8e
//   undefined4 g_PodDir
//   TerminatedCString s_core_game_cpp_0062cc99
//   TerminatedCString s_core_game_cpp_0062ccaa
//   TerminatedCString s_rt_0062ccbb
//   TerminatedCString s_pod_ini_0062ccbe
//   TerminatedCString s_core_game_cpp_0062ccc6
//   TerminatedCString s_Game_0062ccd7
//   TerminatedCString s_system_nocturne_ini_0062ccdc
//   TerminatedCString s_Act1Code_0062ccf0
//   TerminatedCString s_Act2Code_0062ccf9
//   TerminatedCString s_Act3Code_0062cd02
//   TerminatedCString s_Act4Code_0062cd0b
//   TerminatedCString s_Dark_Reign_of_the_Vampir_0062cd14
//   TerminatedCString s_Tomb_of_the_Underground__0062cd35
//   TerminatedCString s_Windy_City_Massacre_0062cd53
//   TerminatedCString s_The_House_on_the_Edge_of_0062cd69
//   TerminatedCString s_Epilogue_0062cd89
//   TerminatedCString s_Volume_1_Dark_Reign_of_t_0062cd94
//   TerminatedCString s_Volume_2_Tomb_of_the_Und_0062cdc0
//   TerminatedCString s_Volume_3_Windy_City_Mass_0062cde9
//   TerminatedCString s_Volume_4_The_House_on_th_0062ce0a
//   TerminatedCString s_Volume_5_Epilogue_0062ce35
//   TerminatedCString s_rt_0062ce4b
//   TerminatedCString s_world_0062ce4e
//   TerminatedCString s_core_game_cpp_0062ce54
//   TerminatedCString s_Choose_a_story_to_play_0062ce65
//   TerminatedCString s_Chapter_1_Your_New_Partn_0062ce7c
//   TerminatedCString s_Chapter_2_Sentinels_0062ce9b
//   TerminatedCString s_Chapter_3_Werewolf_Fores_0062ceb3
//   TerminatedCString s_Chapter_4_Castle_Gaustad_0062ced1
//   TerminatedCString s_Chapter_5_Dungeon_0062ceef
//   TerminatedCString s_Dark_Reign_of_the_Vampir_0062cf05
//   TerminatedCString s_Chapter_1_Train_to_Redey_0062cf26
//   TerminatedCString s_Chapter_2_Zombie_Town_0062cf44
//   TerminatedCString s_Chapter_3_Underground_Mi_0062cf5e
//   TerminatedCString s_Chapter_4_Hidden_Entranc_0062cf7d
//   TerminatedCString s_Chapter_5_Temple_of_the__0062cf9b
//   TerminatedCString s_Chapter_6_Epilogue_0062cfbb
//   TerminatedCString s_Chapter_X_Failure_0062cfd2
//   TerminatedCString s_Tomb_of_the_Underground__0062cfe8
//   TerminatedCString s_Chapter_1_Headquarters_0062d006
//   TerminatedCString s_Chapter_2_Chicago_River_0062d021
//   TerminatedCString s_Chapter_3_The_Vendome_0062d03d
//   TerminatedCString s_Chapter_4_Night_on_the_T_0062d057
//   TerminatedCString s_Chapter_5_Water_Works_0062d077
//   TerminatedCString s_Chapter_6_Windy_City_0062d091
//   TerminatedCString s_Chapter_7_Crescent_Theat_0062d0aa
//   TerminatedCString s_Chapter_8_Rooftop_to_Roo_0062d0c9
//   TerminatedCString s_Chapter_9_Warehouse_of_H_0062d0ea
//   TerminatedCString s_Chapter_10_Mobster_Facto_0062d10a
//   TerminatedCString s_Chapter_11_Not_You_Again_0062d129
//   TerminatedCString s_Windy_City_Massacre_0062d146
//   TerminatedCString s_Chapter_1_Headquarters_0062d15c
//   TerminatedCString s_Chapter_2_Graveyard_0062d177
//   TerminatedCString s_Chapter_3_House_of_Hell_0062d18f
//   TerminatedCString s_Chapter_4_Back_from_Hell_0062d1ab
//   TerminatedCString s_The_House_on_the_Edge_of_0062d1c8
//   TerminatedCString s_Chapter_1_Headquarters_0062d1e8
//   TerminatedCString s_Epilogue_0062d203
//   TerminatedCString s_rt_0062d20e
//   TerminatedCString s_world_0062d211
//   TerminatedCString s_core_game_cpp_0062d217
//   TerminatedCString s_msn_0062d228
//   TerminatedCString s_world_0062d22e
//   TerminatedCString s_Select_mission_to_play_0062d234
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEventList* g_CEventListInstance = 02d05310
//   undefined4 DAT_0067b718
//   undefined4 PTR_s_hq_act1_msn_0067b750
//   undefined4 PTR_s_hq_act1_msn_0067b750+1
//   void* PTR_s_gtown_msn_0062d684_0067b754 = 0062d684
//   undefined4 PTR_s_train_msn_0067b784+1
//   undefined4 DAT_0067b850
//   undefined4 DAT_0067b854
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CBitFont* g_ThemeFont
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02d05310
//   char g_CurrentSaveFile
//   undefined1 DAT_02d82c81
//   undefined1 DAT_02d82c82
//   undefined1 DAT_02d82c83
//   undefined1 DAT_02d830a8
//   undefined1 DAT_02d830a9
//   undefined1 DAT_02d830aa
//   undefined1 DAT_02d830ab
//   char* g_CurrentDisplayText
//   float g_OverlayDisplayTimer
//   CLevelLoader g_CLevelLoaderInstance
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_event.cpp_FUN_004b0460
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   core_mission.cpp_CDemonMission_FUN_00524760
//   core_mission.cpp_CDemonMission_load_FUN_00522d90
//   core_mission.cpp_CDemonMission_run_FUN_00524420
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004e1e53) */
/* WARNING: Removing unreachable block (ram,0x004e1e60) */
/* WARNING: Removing unreachable block (ram,0x004e1e6d) */
/* WARNING: Removing unreachable block (ram,0x004e1e7a) */

void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame *this_ptr,int unknown)

{
  char cVar1;
  FILE *pFVar2;
  CStrList_vtable *pCVar3;
  char **ppcVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int in_stack_0000000c;
  int in_stack_00000018;
  CBitFont *in_stack_00000020;
  CGame *in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  CBitFont *in_stack_00000050;
  int in_stack_00000074;
  int in_stack_0000007c;
  CEventList *chapter_name;
  CStrList_vtable *pCVar10;
  CStrList_vtable *in_stack_fffff978;
  CStrList_vtable *in_stack_fffff980;
  CStrList_vtable *in_stack_fffff984;
  CStrList_vtable *in_stack_fffff988;
  CStrList_vtable *in_stack_fffff98c;
  char **in_stack_fffff990;
  char *in_stack_fffff9a8;
  CStrList_vtable *in_stack_fffff9ac;
  CStrList_vtable *in_stack_fffff9b4;
  char *in_stack_fffff9b8;
  CStrList_vtable *in_stack_fffff9bc;
  CStrList_vtable *in_stack_fffff9c0;
  CStrList_vtable *in_stack_fffff9c4;
  char **in_stack_fffff9c8;
  CStrList_vtable *in_stack_fffff9cc;
  CStrList_vtable *in_stack_fffff9d0;
  CStrList_swap *in_stack_fffff9d4;
  undefined1 auStack_334 [8];
  undefined1 auStack_32c [8];
  CIniFile CStack_324;
  char acStack_124 [4];
  char acStack_120 [20];
  char acStack_10c [244];
  char *local_18;
  CBitFont *local_14;
  
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50(&g_PodDir,"enemy.pod","rb");
  if (pFVar2 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\game.cpp",0xecf);
  }
  *(undefined4 *)(in_stack_0000000c + 0x24c) = 0;
  *(undefined4 *)(in_stack_0000000c + 0x254) = 0;
  *(undefined4 *)(in_stack_0000000c + 0x248) = 0;
  *(undefined4 *)(in_stack_0000000c + 0x250) = 0;
  *(undefined4 *)(in_stack_0000000c + 0x234) = 0;
  local_14 = g_EditorFont;
  g_EditorFont = g_ThemeFont;
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pod.ini",(char *)0x0,"rt","..\\core\\game.cpp",0xeea);
  if (pFVar2 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\game.cpp",0xeec);
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70
            ((CIniFile *)auStack_334,"system\\nocturne.ini",0x62ccd7);
  local_18 = (char *)0x0;
  local_14 = (CBitFont *)0x0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)(auStack_334 + 4),"Act1Code",(int *)&local_18);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)auStack_32c,"Act2Code",(int *)&stack0xfffffff0);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)(auStack_32c + 4),"Act3Code",(int *)&stack0xfffffff8);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&CStack_324,"Act4Code",(int *)&stack0x00000000);
  local_18 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Dark Reign of the Vampire King'")
  ;
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Tomb of the Underground God'");
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Windy City Massacre'");
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("'The House on the Edge of Hell'");
  iVar5 = -1;
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Epilogue'");
  iVar8 = -1;
  if (in_stack_00000018 != 1 && pFVar2 == (FILE *)0x0) {
LAB_004e1ef8:
    do {
      if (-1 < iVar8) goto code_r0x004e1f00;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff94c);
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 1 - 'Dark Reign of the Vampire King'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff954,pcVar9);
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 2 - 'Tomb of the Underground God'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff95c,pcVar9);
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 3 - 'Windy City Massacre'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff964,pcVar9);
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Volume 4 - 'The House on the Edge of Hell'");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff96c,pcVar9);
      if (in_stack_00000044 != 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Volume 5 - 'Epilogue'");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff974,pcVar9);
      }
      if (in_stack_00000050 == (CBitFont *)0x0) {
        iVar7 = 0;
        iVar5 = 0;
        if (0 < (int)in_stack_fffff978) {
          do {
            pFVar2 = engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar5),
                                "rt");
            if (pFVar2 == (FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff974,iVar7,false);
            }
            else {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\game.cpp",0xf29);
            }
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 0x34;
          } while (iVar7 < (int)in_stack_fffff978);
        }
      }
      pCVar10 = (CStrList_vtable *)0x0;
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Choose a story to play")
      ;
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff97c,pcVar9,(int)pCVar10,(int)in_stack_fffff978);
      if (iVar5 < 0) {
        g_EditorFont = in_stack_00000050;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff980,0,(uint)in_stack_fffff980,(uint)in_stack_fffff984,
                   (uint)in_stack_fffff988,(uint)in_stack_fffff98c,(uint)in_stack_fffff990);
        return;
      }
      if ((iVar5 == 0) && (in_stack_00000040 == 0x331)) {
        in_stack_00000074 = 1;
      }
      if ((iVar5 == 1) && (in_stack_00000044 == 0x3cc)) {
        in_stack_00000074 = 1;
      }
      if ((iVar5 == 2) && (in_stack_00000048 == 0x3ac)) {
        in_stack_00000074 = 1;
      }
      if ((iVar5 == 3) && (in_stack_0000004c == 0xd6)) {
        in_stack_00000074 = 1;
LAB_004e2250:
        in_stack_fffff978 = (CStrList_vtable *)0x4e2258;
        shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&stack0xfffff980);
        if (iVar5 == 0) {
          iVar8 = 0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Your New Partner'");
          in_stack_fffff980 = (CStrList_vtable *)&stack0xfffff988;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff988,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Sentinels'");
          in_stack_fffff988 = (CStrList_vtable *)&stack0xfffff990;
          in_stack_fffff984 = (CStrList_vtable *)0x4e2299;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff990,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'Werewolf Forest'");
          in_stack_fffff990 = (char **)&stack0xfffff998;
          in_stack_fffff98c = (CStrList_vtable *)0x4e22b4;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff998,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Castle Gaustadt'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a0,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Chapter 5 - 'Dungeon'");
          ppcVar4 = (char **)0x0;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a8,pcVar9);
          while ((int)ppcVar4 < (int)in_stack_fffff9a8) {
            pCVar10 = (CStrList_vtable *)
                      engine_dosio_c_getFile_FUN_00481a50
                                ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar8),
                                 "rt");
            if (pCVar10 == (CStrList_vtable *)0x0) {
              in_stack_fffff9a8 = (char *)ppcVar4;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9a8,(int)ppcVar4,false);
              ppcVar4 = (char **)((int)ppcVar4 + 1);
              iVar8 = iVar8 + 4;
              in_stack_fffff9ac = pCVar10;
            }
            else {
              in_stack_fffff9ac = (CStrList_vtable *)0xec1;
              in_stack_fffff9a8 = "..\\core\\game.cpp";
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)pCVar10,"..\\core\\game.cpp",0xec1);
              ppcVar4 = (char **)((int)ppcVar4 + 1);
              iVar8 = iVar8 + 4;
            }
          }
          in_stack_fffff9a8 = (char *)0x0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Dark Reign of the Vampire King'");
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9b0,pcVar9,(int)in_stack_fffff9a8,
                             (int)in_stack_fffff9ac);
        }
        if (iVar5 == 1) {
          pCVar10 = (CStrList_vtable *)0x4e23da;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Train to Redeye'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff978,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Zombie Town'");
          in_stack_fffff978 = (CStrList_vtable *)&stack0xfffff980;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff980,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'Underground Mine'");
          in_stack_fffff980 = (CStrList_vtable *)&stack0xfffff988;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff988,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Hidden Entrance'");
          in_stack_fffff988 = (CStrList_vtable *)&stack0xfffff990;
          in_stack_fffff984 = (CStrList_vtable *)0x4e2439;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff990,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 5 - 'Temple of the God'");
          in_stack_fffff990 = (char **)&stack0xfffff998;
          in_stack_fffff98c = (CStrList_vtable *)0x4e2454;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff998,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Chapter 6 - 'Epilogue'")
          ;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a0,pcVar9);
          if (in_stack_0000007c == 0) {
            pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Chapter X - 'Failure'");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a8,pcVar9);
          }
          iVar7 = 0x34;
          for (iVar8 = 0; iVar8 < (int)pCVar10; iVar8 = iVar8 + 1) {
            pCVar3 = (CStrList_vtable *)
                     engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar7),
                                "rt");
            if (pCVar3 == (CStrList_vtable *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9ac,iVar8,false);
              pCVar10 = pCVar3;
            }
            else {
              pCVar10 = (CStrList_vtable *)0xec1;
              shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar3,"..\\core\\game.cpp",0xec1)
              ;
            }
            iVar7 = iVar7 + 4;
          }
          in_stack_fffff9a8 = (char *)0x0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Tomb of the Underground God'");
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9b0,pcVar9,(int)in_stack_fffff9a8,
                             (int)pCVar10);
        }
        if (iVar5 == 2) {
          pCVar10 = (CStrList_vtable *)0x4e251a;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff958,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Chicago River'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff960,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'The Vendome'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff968,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Night on the Town'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff970,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 5 - 'Water Works'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff978,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 6 - 'Windy City'");
          in_stack_fffff978 = (CStrList_vtable *)&stack0xfffff980;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff980,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 7 - 'Crescent Theater'");
          in_stack_fffff980 = (CStrList_vtable *)&stack0xfffff988;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff988,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 8 - 'Rooftop to Rooftop'");
          in_stack_fffff988 = (CStrList_vtable *)&stack0xfffff990;
          in_stack_fffff984 = (CStrList_vtable *)0x4e25e5;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff990,pcVar9);
          iVar8 = 0x68;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 9 - 'Warehouse of Hell'");
          in_stack_fffff990 = (char **)&stack0xfffff998;
          in_stack_fffff98c = (CStrList_vtable *)0x4e2603;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff998,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 10 - 'Mobster Factory'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a0,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 11 - 'Not You Again'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a8,pcVar9);
          for (ppcVar4 = (char **)0x0; (int)ppcVar4 < (int)in_stack_fffff9a8;
              ppcVar4 = (char **)((int)ppcVar4 + 1)) {
            pCVar3 = (CStrList_vtable *)
                     engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar8),
                                "rt");
            if (pCVar3 == (CStrList_vtable *)0x0) {
              in_stack_fffff9a8 = (char *)ppcVar4;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9a8,(int)ppcVar4,false);
              pCVar10 = pCVar3;
            }
            else {
              pCVar10 = (CStrList_vtable *)0xec1;
              in_stack_fffff9a8 = "..\\core\\game.cpp";
              shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar3,"..\\core\\game.cpp",0xec1)
              ;
            }
            iVar8 = iVar8 + 4;
          }
          in_stack_fffff9a8 = (char *)0x0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'Windy City Massacre'");
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9b0,pcVar9,(int)in_stack_fffff9a8,
                             (int)pCVar10);
        }
        if (iVar5 == 3) {
          iVar8 = 0x9c;
          pCVar10 = (CStrList_vtable *)0x4e26bf;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Headquarters'");
          in_stack_fffff988 = (CStrList_vtable *)&stack0xfffff990;
          in_stack_fffff984 = (CStrList_vtable *)0x4e26cd;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff990,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 2 - 'Graveyard'");
          in_stack_fffff990 = (char **)&stack0xfffff998;
          in_stack_fffff98c = (CStrList_vtable *)0x4e26e8;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff998,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 3 - 'House of Hell'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a0,pcVar9);
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 4 - 'Back from Hell'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9a8,pcVar9);
          for (ppcVar4 = (char **)0x0; (int)ppcVar4 < (int)in_stack_fffff9a8;
              ppcVar4 = (char **)((int)ppcVar4 + 1)) {
            pCVar3 = (CStrList_vtable *)
                     engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar8),
                                "rt");
            if (pCVar3 == (CStrList_vtable *)0x0) {
              in_stack_fffff9a8 = (char *)ppcVar4;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9a8,(int)ppcVar4,false);
              pCVar10 = pCVar3;
            }
            else {
              pCVar10 = (CStrList_vtable *)0xec1;
              in_stack_fffff9a8 = "..\\core\\game.cpp";
              shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar3,"..\\core\\game.cpp",0xec1)
              ;
            }
            iVar8 = iVar8 + 4;
          }
          in_stack_fffff9a8 = (char *)0x0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("'The House on the Edge of Hell'");
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9b0,pcVar9,(int)in_stack_fffff9a8,
                             (int)pCVar10);
        }
        if (iVar5 == 4) {
          iVar8 = 0xd0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff9b8,pcVar9);
          for (pCVar10 = (CStrList_vtable *)0x0; (int)pCVar10 < (int)in_stack_fffff9b8;
              pCVar10 = (CStrList_vtable *)((int)&pCVar10->dtor + 1)) {
            pCVar3 = (CStrList_vtable *)
                     engine_dosio_c_getFile_FUN_00481a50
                               ("world",*(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar8),
                                "rt");
            if (pCVar3 == (CStrList_vtable *)0x0) {
              in_stack_fffff9b8 = (char *)pCVar10;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff9b8,(int)pCVar10,false);
              in_stack_fffff9bc = pCVar3;
            }
            else {
              in_stack_fffff9bc = (CStrList_vtable *)0xec1;
              in_stack_fffff9b8 = "..\\core\\game.cpp";
              shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar3,"..\\core\\game.cpp",0xec1)
              ;
            }
            iVar8 = iVar8 + 4;
          }
          pCVar10 = (CStrList_vtable *)0x0;
          in_stack_fffff9b4 =
               (CStrList_vtable *)
               support_newmsg_cpp_getLocalizedString_FUN_005441f0("'Epilogue'");
          in_stack_fffff9ac = (CStrList_vtable *)0x4e281d;
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff9c0,(char *)in_stack_fffff9b4,(int)pCVar10,
                             (int)in_stack_fffff9bc);
          in_stack_fffff9bc = (CStrList_vtable *)&stack0xfffff9c4;
          in_stack_fffff9c0 = (CStrList_vtable *)0x0;
          in_stack_fffff9b8 = (char *)0x4e282e;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffff9c4,0,(uint)in_stack_fffff9c4,(uint)in_stack_fffff9c8
                     ,(uint)in_stack_fffff9cc,(uint)in_stack_fffff9d0,(uint)in_stack_fffff9d4);
          goto LAB_004e1ef8;
        }
      }
      else {
        if (in_stack_00000074 != 0) goto LAB_004e2250;
        iVar8 = 0;
      }
      in_stack_fffff9ac = (CStrList_vtable *)&stack0xfffff9b4;
      in_stack_fffff9a8 = (char *)0x4e2382;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff9b4,0,(uint)in_stack_fffff9b4,(uint)in_stack_fffff9b8,
                 (uint)in_stack_fffff9bc,(uint)in_stack_fffff9c0,(uint)in_stack_fffff9c4);
    } while( true );
  }
  iVar8 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select mission to play","world",
                     "*.msn",SUB41(acStack_10c,0));
  if (iVar8 == 0) {
    g_EditorFont = in_stack_00000020;
    return;
  }
  g_CurrentDisplayText = (char *)0x0;
  g_OverlayDisplayTimer = 0.0;
  DAT_02d830a8 = 0;
  goto LAB_004e1fac;
code_r0x004e1f00:
  pcVar6 = *(char **)(&PTR_s_hq_act1_msn_0067b750 + iVar5 * 0x34 + iVar8 * 4);
  pcVar9 = acStack_10c;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("world",acStack_10c,"rt");
  if (pFVar2 == (FILE *)0x0) {
    g_EditorFont = in_stack_00000020;
    return;
  }
  pcVar6 = &DAT_02d830a8;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\game.cpp",0xf77);
  g_CurrentDisplayText = *(char **)(&DAT_0067b854 + iVar5 * 4);
  pcVar9 = *(char **)(&stack0x00000000 + iVar5 * 4);
  do {
    cVar1 = *pcVar9;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  g_OverlayDisplayTimer = 8.0;
LAB_004e1fac:
  chapter_name = g_CEventListInstance;
  core_event_cpp_FUN_004b0460();
  iVar7 = 1;
  iVar8 = crt_string_c_stricmp_FUN_005fe7f0(&g_CurrentSaveFile,acStack_124);
  if (iVar8 != 0) {
    pcVar9 = acStack_120;
    pcVar6 = &g_CurrentSaveFile;
    do {
      cVar1 = *pcVar9;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar7 = 0;
  }
  core_level_cpp_CLevelLoader_show_FUN_00503dc0(g_CLevelLoaderPtr,10,0,iVar5);
  core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,acStack_120 + 4,iVar7);
  iVar5 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
  if (iVar5 != 0) {
    core_mission_cpp_CDemonMission_FUN_00524760(g_CDemonMissionPtr);
    core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
    if (in_stack_0000003c->need_chapter_reload != 0) {
      in_stack_0000003c->need_chapter_reload = 0;
      core_game_cpp_CGame_loadSaveGame_FUN_004e12b0
                (in_stack_0000003c,(char *)&in_stack_0000003c->save_version,1,(char *)chapter_name);
    }
  }
  g_EditorFont = in_stack_00000020;
  return;
}


// Assembly code:
// 004e1cb0: PUSH EBX
//   Label: core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
// 004e1cb1: PUSH ESI
// 004e1cb2: PUSH EDI
// 004e1cb3: PUSH EBP
// 004e1cb4: SUB ESP,0x6dc
// 004e1cba: PUSH 0x62cc8b
//   XREF to: 0062cc8b (DATA)
// 004e1cbf: PUSH 0x62cc8e
//   XREF to: 0062cc8e (DATA)
// 004e1cc4: PUSH 0x62cc98
//   XREF to: 0062cc98 (DATA)
// 004e1cc9: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e1cce: ADD ESP,0xc
// 004e1cd1: TEST EAX,EAX
// 004e1cd3: JNZ 0x004e20a6
//   XREF to: 004e20a6 (CONDITIONAL_JUMP)
// 004e1cd9: MOV dword ptr [ESP + 0x6d8],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 004e1ce4: MOV EAX,dword ptr [ESP + 0x6f0]
//   Label: LAB_004e1ce4
//   XREF to: Stack[0x4] (READ)
// 004e1ceb: MOV dword ptr [EAX + 0x24c],0x0
// 004e1cf5: PUSH 0xeea
// 004e1cfa: MOV dword ptr [EAX + 0x254],0x0
// 004e1d04: PUSH 0x62ccaa
//   XREF to: 0062ccaa (DATA)
// 004e1d09: MOV dword ptr [EAX + 0x248],0x0
// 004e1d13: XOR EBX,EBX
// 004e1d15: MOV dword ptr [EAX + 0x250],0x0
// 004e1d1f: PUSH 0x62ccbb
//   XREF to: 0062ccbb (DATA)
// 004e1d24: MOV dword ptr [EAX + 0x234],0x0
// 004e1d2e: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004e1d33: PUSH EBX
// 004e1d34: MOV dword ptr [ESP + 0x6e0],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e1d3b: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 004e1d40: PUSH 0x62ccbe
//   XREF to: 0062ccbe (DATA)
// 004e1d45: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 004e1d4a: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004e1d4f: ADD ESP,0x14
// 004e1d52: TEST EAX,EAX
// 004e1d54: JZ 0x004e1d6e
//   XREF to: 004e1d6e (CONDITIONAL_JUMP)
// 004e1d56: PUSH 0xeec
// 004e1d5b: PUSH 0x62ccc6
//   XREF to: 0062ccc6 (DATA)
// 004e1d60: PUSH EAX
// 004e1d61: MOV EBX,0x1
// 004e1d66: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e1d6b: ADD ESP,0xc
// 004e1d6e: MOV ESI,dword ptr [ESP + 0x6f4]
//   Label: LAB_004e1d6e
//   XREF to: Stack[0x8] (READ)
// 004e1d75: CMP ESI,0x1
// 004e1d78: JNZ 0x004e1d7c
//   XREF to: 004e1d7c (CONDITIONAL_JUMP)
// 004e1d7a: MOV EBX,ESI
// 004e1d7c: CMP dword ptr [ESP + 0x6d8],0x0
//   Label: LAB_004e1d7c
//   XREF to: Stack[-0x14] (READ)
// 004e1d84: JZ 0x004e1d91
//   XREF to: 004e1d91 (CONDITIONAL_JUMP)
// 004e1d86: MOV dword ptr [ESP + 0x6f4],0x1
//   XREF to: Stack[0x8] (WRITE)
// 004e1d91: PUSH 0x62ccd7
//   Label: LAB_004e1d91
//   XREF to: 0062ccd7 (DATA)
// 004e1d96: XOR EAX,EAX
// 004e1d98: PUSH 0x62ccdc
//   XREF to: 0062ccdc (DATA)
// 004e1d9d: MOV dword ptr [ESP + 0x6dc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004e1da4: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x344] (DATA)
// 004e1dab: PUSH EAX
// 004e1dac: CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   XREF to: 004fba70 (UNCONDITIONAL_CALL)
// 004e1db1: ADD ESP,0xc
// 004e1db4: LEA EAX,[ESP + 0x6c0]
//   XREF to: Stack[-0x2c] (DATA)
// 004e1dbb: XOR EDX,EDX
// 004e1dbd: PUSH EAX
// 004e1dbe: MOV dword ptr [ESP + 0x6c4],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004e1dc5: PUSH 0x62ccf0
//   XREF to: 0062ccf0 (DATA)
// 004e1dca: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x344] (DATA)
// 004e1dd1: MOV dword ptr [ESP + 0x6cc],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004e1dd8: PUSH EAX
// 004e1dd9: MOV dword ptr [ESP + 0x6d4],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004e1de0: MOV dword ptr [ESP + 0x6d8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004e1de7: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004e1dec: ADD ESP,0xc
// 004e1def: LEA EAX,[ESP + 0x6c4]
//   XREF to: Stack[-0x28] (DATA)
// 004e1df6: PUSH EAX
// 004e1df7: PUSH 0x62ccf9
//   XREF to: 0062ccf9 (DATA)
// 004e1dfc: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x344] (DATA)
// 004e1e03: PUSH EAX
// 004e1e04: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004e1e09: ADD ESP,0xc
// 004e1e0c: LEA EAX,[ESP + 0x6c8]
//   XREF to: Stack[-0x24] (DATA)
// 004e1e13: PUSH EAX
// 004e1e14: PUSH 0x62cd02
//   XREF to: 0062cd02 (DATA)
// 004e1e19: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x344] (DATA)
// 004e1e20: PUSH EAX
// 004e1e21: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004e1e26: ADD ESP,0xc
// 004e1e29: LEA EAX,[ESP + 0x6cc]
//   XREF to: Stack[-0x20] (DATA)
// 004e1e30: PUSH EAX
// 004e1e31: PUSH 0x62cd0b
//   XREF to: 0062cd0b (DATA)
// 004e1e36: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x344] (DATA)
// 004e1e3d: PUSH EAX
// 004e1e3e: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 004e1e43: ADD ESP,0xc
// 004e1e46: CMP dword ptr [ESP + 0x6c0],0x331
//   XREF to: Stack[-0x2c] (READ)
// 004e1e51: JNZ 0x004e1e85
//   XREF to: 004e1e85 (CONDITIONAL_JUMP)
// 004e1e53: CMP dword ptr [ESP + 0x6c4],0x3cc
//   XREF to: Stack[-0x28] (READ)
// 004e1e5e: JNZ 0x004e1e85
//   XREF to: 004e1e85 (CONDITIONAL_JUMP)
// 004e1e60: CMP dword ptr [ESP + 0x6c8],0x3ac
//   XREF to: Stack[-0x24] (READ)
// 004e1e6b: JNZ 0x004e1e85
//   XREF to: 004e1e85 (CONDITIONAL_JUMP)
// 004e1e6d: CMP dword ptr [ESP + 0x6cc],0xd6
//   XREF to: Stack[-0x20] (READ)
// 004e1e78: JNZ 0x004e1e85
//   XREF to: 004e1e85 (CONDITIONAL_JUMP)
// 004e1e7a: MOV dword ptr [ESP + 0x6d4],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 004e1e85: PUSH 0x62cd14
//   Label: LAB_004e1e85
//   XREF to: 0062cd14 (DATA)
// 004e1e8a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1e8f: ADD ESP,0x4
// 004e1e92: PUSH 0x62cd35
//   XREF to: 0062cd35 (DATA)
// 004e1e97: MOV dword ptr [ESP + 0x6b0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004e1e9e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1ea3: ADD ESP,0x4
// 004e1ea6: PUSH 0x62cd53
//   XREF to: 0062cd53 (DATA)
// 004e1eab: MOV dword ptr [ESP + 0x6b4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004e1eb2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1eb7: ADD ESP,0x4
// 004e1eba: PUSH 0x62cd69
//   XREF to: 0062cd69 (DATA)
// 004e1ebf: MOV dword ptr [ESP + 0x6b8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004e1ec6: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1ecb: ADD ESP,0x4
// 004e1ece: PUSH 0x62cd89
//   XREF to: 0062cd89 (DATA)
// 004e1ed3: MOV EBP,0xffffffff
// 004e1ed8: MOV dword ptr [ESP + 0x6bc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004e1edf: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e1ee4: ADD ESP,0x4
// 004e1ee7: MOV EDI,EBP
// 004e1ee9: MOV dword ptr [ESP + 0x6bc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004e1ef0: TEST EBX,EBX
// 004e1ef2: JNZ 0x004e2836
//   XREF to: 004e2836 (CONDITIONAL_JUMP)
// 004e1ef8: TEST EDI,EDI
//   Label: LAB_004e1ef8
// 004e1efa: JL 0x004e20c7
//   XREF to: 004e20c7 (CONDITIONAL_JUMP)
// 004e1f00: LEA EAX,[EBP*0x4 + 0x0]
// 004e1f07: SUB EAX,EBP
// 004e1f09: SHL EAX,0x2
// 004e1f0c: SHL EDI,0x2
// 004e1f0f: ADD EAX,EBP
// 004e1f11: MOV ESI,dword ptr [EDI + EAX*0x4 + 0x67b750]
//   XREF to: 0067b718 (READ)
// 004e1f18: LEA EDI,[ESP + 0x5a8]
//   XREF to: Stack[-0x144] (DATA)
// 004e1f1f: PUSH EDI
// 004e1f20: MOV AL,byte ptr [ESI]
//   Label: LAB_004e1f20
// 004e1f22: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x144] (DATA)
// 004e1f24: CMP AL,0x0
// 004e1f26: JZ 0x004e1f38
//   XREF to: 004e1f38 (CONDITIONAL_JUMP)
// 004e1f28: MOV AL,byte ptr [ESI + 0x1]
// 004e1f2b: ADD ESI,0x2
// 004e1f2e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x143] (WRITE)
// 004e1f31: ADD EDI,0x2
// 004e1f34: CMP AL,0x0
// 004e1f36: JNZ 0x004e1f20
//   XREF to: 004e1f20 (CONDITIONAL_JUMP)
// 004e1f38: POP EDI
//   Label: LAB_004e1f38
// 004e1f39: PUSH 0x62d20e
//   XREF to: 0062d20e (DATA)
// 004e1f3e: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x144] (DATA)
// 004e1f45: PUSH EAX
// 004e1f46: PUSH 0x62d211
//   XREF to: 0062d211 (DATA)
// 004e1f4b: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e1f50: ADD ESP,0xc
// 004e1f53: TEST EAX,EAX
// 004e1f55: JZ 0x004e208f
//   XREF to: 004e208f (CONDITIONAL_JUMP)
// 004e1f5b: PUSH 0xf77
// 004e1f60: PUSH 0x62d217
//   XREF to: 0062d217 (DATA)
// 004e1f65: PUSH EAX
// 004e1f66: MOV EDI,0x2d830a8
//   XREF to: 02d830a8 (DATA)
// 004e1f6b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e1f70: MOV ECX,0x41000000
// 004e1f75: ADD ESP,0xc
// 004e1f78: MOV EBX,dword ptr [EBP*0x4 + 0x67b854]
//   XREF to: 0067b850 (READ)
//   XREF to: 0067b854 (DATA)
// 004e1f7f: MOV ESI,dword ptr [ESP + EBP*0x4 + 0x6ac]
// 004e1f86: MOV dword ptr [0x02d831a8],EBX
//   XREF to: 02d831a8 (WRITE)
// 004e1f8c: PUSH EDI
//   XREF to: 02d830a8 (DATA)
// 004e1f8d: MOV AL,byte ptr [ESI]
//   Label: LAB_004e1f8d
// 004e1f8f: MOV byte ptr [EDI],AL
//   XREF to: 02d830a8 (WRITE)
//   XREF to: 02d830aa (WRITE)
// 004e1f91: CMP AL,0x0
// 004e1f93: JZ 0x004e1fa5
//   XREF to: 004e1fa5 (CONDITIONAL_JUMP)
// 004e1f95: MOV AL,byte ptr [ESI + 0x1]
// 004e1f98: ADD ESI,0x2
// 004e1f9b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d830a9 (WRITE)
//   XREF to: 02d830ab (WRITE)
// 004e1f9e: ADD EDI,0x2
// 004e1fa1: CMP AL,0x0
// 004e1fa3: JNZ 0x004e1f8d
//   XREF to: 004e1f8d (CONDITIONAL_JUMP)
// 004e1fa5: POP EDI
//   Label: LAB_004e1fa5
// 004e1fa6: MOV dword ptr [0x02d831ac],ECX
//   XREF to: 02d831ac (WRITE)
// 004e1fac: MOV EDX,dword ptr [0x006793d0]
//   Label: LAB_004e1fac
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004e1fb2: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004e1fb3: CALL core_event.cpp_FUN_004b0460
//   XREF to: 004b0460 (UNCONDITIONAL_CALL)
// 004e1fb8: ADD ESP,0x4
// 004e1fbb: LEA EAX,[ESP + 0x5a8]
//   XREF to: Stack[-0x144] (DATA)
// 004e1fc2: PUSH EAX
// 004e1fc3: PUSH 0x2d82c80
//   XREF to: 02d82c80 (DATA)
// 004e1fc8: MOV ESI,0x1
// 004e1fcd: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e1fd2: ADD ESP,0x8
// 004e1fd5: TEST EAX,EAX
// 004e1fd7: JZ 0x004e2001
//   XREF to: 004e2001 (CONDITIONAL_JUMP)
// 004e1fd9: LEA ESI,[ESP + 0x5a8]
//   XREF to: Stack[-0x144] (DATA)
// 004e1fe0: MOV EDI,0x2d82c80
//   XREF to: 02d82c80 (DATA)
// 004e1fe5: PUSH EDI
//   XREF to: 02d82c80 (DATA)
// 004e1fe6: MOV AL,byte ptr [ESI]
//   Label: LAB_004e1fe6
//   XREF to: Stack[-0x144] (DATA)
// 004e1fe8: MOV byte ptr [EDI],AL
//   XREF to: 02d82c80 (WRITE)
//   XREF to: 02d82c82 (WRITE)
// 004e1fea: CMP AL,0x0
// 004e1fec: JZ 0x004e1ffe
//   XREF to: 004e1ffe (CONDITIONAL_JUMP)
// 004e1fee: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x143] (READ)
// 004e1ff1: ADD ESI,0x2
// 004e1ff4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d82c81 (WRITE)
//   XREF to: 02d82c83 (WRITE)
// 004e1ff7: ADD EDI,0x2
// 004e1ffa: CMP AL,0x0
// 004e1ffc: JNZ 0x004e1fe6
//   XREF to: 004e1fe6 (CONDITIONAL_JUMP)
// 004e1ffe: POP EDI
//   Label: LAB_004e1ffe
// 004e1fff: XOR ESI,ESI
// 004e2001: PUSH EBP
//   Label: LAB_004e2001
// 004e2002: PUSH 0x0
// 004e2004: PUSH 0xa
// 004e2006: MOV ECX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 004e200c: PUSH ECX
//   XREF to: 02dcd850 (DATA)
// 004e200d: CALL core_level.cpp_CLevelLoader_show_FUN_00503dc0
//   XREF to: 00503dc0 (UNCONDITIONAL_CALL)
// 004e2012: ADD ESP,0x10
// 004e2015: PUSH ESI
// 004e2016: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x144] (DATA)
// 004e201d: PUSH EAX
// 004e201e: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004e2024: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 004e2025: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 004e202a: ADD ESP,0xc
// 004e202d: PUSH 0x0
// 004e202f: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e2035: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004e2036: CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   XREF to: 00524a80 (UNCONDITIONAL_CALL)
// 004e203b: ADD ESP,0x8
// 004e203e: TEST EAX,EAX
// 004e2040: JZ 0x004e208f
//   XREF to: 004e208f (CONDITIONAL_JUMP)
// 004e2042: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e2048: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 004e2049: CALL core_mission.cpp_CDemonMission_FUN_00524760
//   XREF to: 00524760 (UNCONDITIONAL_CALL)
// 004e204e: ADD ESP,0x4
// 004e2051: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e2057: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 004e2058: CALL core_mission.cpp_CDemonMission_run_FUN_00524420
//   XREF to: 00524420 (UNCONDITIONAL_CALL)
// 004e205d: ADD ESP,0x4
// 004e2060: MOV EAX,dword ptr [ESP + 0x6f0]
//   XREF to: Stack[0x4] (READ)
// 004e2067: CMP dword ptr [EAX + 0x9c4],0x0
// 004e206e: JZ 0x004e208f
//   XREF to: 004e208f (CONDITIONAL_JUMP)
// 004e2070: PUSH 0x1
// 004e2072: ADD EAX,0x9c8
// 004e2077: PUSH EAX
// 004e2078: MOV ECX,dword ptr [ESP + 0x6f8]
//   XREF to: Stack[0x4] (READ)
// 004e207f: PUSH ECX
// 004e2080: MOV dword ptr [EAX + -0x4],0x0
// 004e2087: CALL core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
//   XREF to: 004e12b0 (UNCONDITIONAL_CALL)
// 004e208c: ADD ESP,0xc
// 004e208f: MOV EAX,dword ptr [ESP + 0x6d0]
//   Label: LAB_004e208f
//   XREF to: Stack[-0x1c] (READ)
// 004e2096: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 004e209b: ADD ESP,0x6dc
// 004e20a1: POP EBP
// 004e20a2: POP EDI
// 004e20a3: POP ESI
// 004e20a4: POP EBX
// 004e20a5: RET
// 004e20a6: PUSH 0xecf
//   Label: LAB_004e20a6
// 004e20ab: PUSH 0x62cc99
//   XREF to: 0062cc99 (DATA)
// 004e20b0: PUSH EAX
// 004e20b1: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e20b6: ADD ESP,0xc
// 004e20b9: XOR ECX,ECX
// 004e20bb: MOV dword ptr [ESP + 0x6d8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004e20c2: JMP 0x004e1ce4
//   XREF to: 004e1ce4 (UNCONDITIONAL_JUMP)
// 004e20c7: MOV EAX,ESP
//   Label: LAB_004e20c7
// 004e20c9: PUSH EAX
// 004e20ca: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004e20cf: ADD ESP,0x4
// 004e20d2: PUSH 0x62cd94
//   XREF to: 0062cd94 (DATA)
// 004e20d7: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e20dc: ADD ESP,0x4
// 004e20df: PUSH EAX
// 004e20e0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e20e4: PUSH EAX
// 004e20e5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e20ea: ADD ESP,0x8
// 004e20ed: PUSH 0x62cdc0
//   XREF to: 0062cdc0 (DATA)
// 004e20f2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e20f7: ADD ESP,0x4
// 004e20fa: PUSH EAX
// 004e20fb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e20ff: PUSH EAX
// 004e2100: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2105: ADD ESP,0x8
// 004e2108: PUSH 0x62cde9
//   XREF to: 0062cde9 (DATA)
// 004e210d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2112: ADD ESP,0x4
// 004e2115: PUSH EAX
// 004e2116: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e211a: PUSH EAX
// 004e211b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2120: ADD ESP,0x8
// 004e2123: PUSH 0x62ce0a
//   XREF to: 0062ce0a (DATA)
// 004e2128: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e212d: ADD ESP,0x4
// 004e2130: PUSH EAX
// 004e2131: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2135: PUSH EAX
// 004e2136: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e213b: ADD ESP,0x8
// 004e213e: CMP dword ptr [ESP + 0x6d4],0x0
//   XREF to: Stack[-0x18] (READ)
// 004e2146: JZ 0x004e2163
//   XREF to: 004e2163 (CONDITIONAL_JUMP)
// 004e2148: PUSH 0x62ce35
//   XREF to: 0062ce35 (DATA)
// 004e214d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2152: ADD ESP,0x4
// 004e2155: PUSH EAX
// 004e2156: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e215a: PUSH EAX
// 004e215b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2160: ADD ESP,0x8
// 004e2163: MOV ESI,dword ptr [ESP + 0x6d8]
//   Label: LAB_004e2163
//   XREF to: Stack[-0x14] (READ)
// 004e216a: TEST ESI,ESI
// 004e216c: JNZ 0x004e21b2
//   XREF to: 004e21b2 (CONDITIONAL_JUMP)
// 004e216e: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2171: XOR EBX,EBX
// 004e2173: TEST EBP,EBP
// 004e2175: JLE 0x004e21b2
//   XREF to: 004e21b2 (CONDITIONAL_JUMP)
// 004e2177: PUSH 0x62ce4b
//   Label: LAB_004e2177
//   XREF to: 0062ce4b (DATA)
// 004e217c: MOV EDX,dword ptr [ESI + 0x67b750]
//   XREF to: 0067b751 (READ)
//   XREF to: 0067b785 (READ)
// 004e2182: PUSH EDX
// 004e2183: PUSH 0x62ce4e
//   XREF to: 0062ce4e (DATA)
// 004e2188: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e218d: ADD ESP,0xc
// 004e2190: TEST EAX,EAX
// 004e2192: JNZ 0x004e232b
//   XREF to: 004e232b (CONDITIONAL_JUMP)
// 004e2198: PUSH EAX
// 004e2199: PUSH EBX
// 004e219a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e219e: PUSH EAX
// 004e219f: CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   XREF to: 004a5410 (UNCONDITIONAL_CALL)
// 004e21a4: ADD ESP,0xc
//   Label: LAB_004e21a4
// 004e21a7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e21aa: INC EBX
// 004e21ab: ADD ESI,0x34
// 004e21ae: CMP EBX,EAX
// 004e21b0: JL 0x004e2177
//   XREF to: 004e2177 (CONDITIONAL_JUMP)
// 004e21b2: PUSH 0x0
//   Label: LAB_004e21b2
// 004e21b4: PUSH -0x1
// 004e21b6: PUSH 0x62ce65
//   XREF to: 0062ce65 (DATA)
// 004e21bb: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e21c0: ADD ESP,0x4
// 004e21c3: PUSH EAX
// 004e21c4: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e21c8: PUSH EAX
// 004e21c9: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004e21ce: ADD ESP,0x10
// 004e21d1: MOV EBP,EAX
// 004e21d3: TEST EAX,EAX
// 004e21d5: JL 0x004e2340
//   XREF to: 004e2340 (CONDITIONAL_JUMP)
// 004e21db: JNZ 0x004e21f5
//   XREF to: 004e21f5 (CONDITIONAL_JUMP)
// 004e21dd: CMP dword ptr [ESP + 0x6c0],0x331
//   XREF to: Stack[-0x2c] (READ)
// 004e21e8: JNZ 0x004e21f5
//   XREF to: 004e21f5 (CONDITIONAL_JUMP)
// 004e21ea: MOV dword ptr [ESP + 0x6f4],0x1
//   XREF to: Stack[0x8] (WRITE)
// 004e21f5: CMP EBP,0x1
//   Label: LAB_004e21f5
// 004e21f8: JNZ 0x004e220e
//   XREF to: 004e220e (CONDITIONAL_JUMP)
// 004e21fa: CMP dword ptr [ESP + 0x6c4],0x3cc
//   XREF to: Stack[-0x28] (READ)
// 004e2205: JNZ 0x004e220e
//   XREF to: 004e220e (CONDITIONAL_JUMP)
// 004e2207: MOV dword ptr [ESP + 0x6f4],EBP
//   XREF to: Stack[0x8] (WRITE)
// 004e220e: CMP EBP,0x2
//   Label: LAB_004e220e
// 004e2211: JNZ 0x004e222b
//   XREF to: 004e222b (CONDITIONAL_JUMP)
// 004e2213: CMP dword ptr [ESP + 0x6c8],0x3ac
//   XREF to: Stack[-0x24] (READ)
// 004e221e: JNZ 0x004e222b
//   XREF to: 004e222b (CONDITIONAL_JUMP)
// 004e2220: MOV dword ptr [ESP + 0x6f4],0x1
//   XREF to: Stack[0x8] (WRITE)
// 004e222b: CMP EBP,0x3
//   Label: LAB_004e222b
// 004e222e: JNZ 0x004e2366
//   XREF to: 004e2366 (CONDITIONAL_JUMP)
// 004e2234: CMP dword ptr [ESP + 0x6cc],0xd6
//   XREF to: Stack[-0x20] (READ)
// 004e223f: JNZ 0x004e2366
//   XREF to: 004e2366 (CONDITIONAL_JUMP)
// 004e2245: MOV dword ptr [ESP + 0x6f4],0x1
//   XREF to: Stack[0x8] (WRITE)
// 004e2250: MOV EAX,ESP
//   Label: LAB_004e2250
// 004e2252: PUSH EAX
// 004e2253: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 004e2258: ADD ESP,0x4
// 004e225b: TEST EBP,EBP
// 004e225d: JNZ 0x004e23c7
//   XREF to: 004e23c7 (CONDITIONAL_JUMP)
// 004e2263: IMUL ESI,EBP,0x34
// 004e2266: PUSH 0x62ce7c
//   XREF to: 0062ce7c (DATA)
// 004e226b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2270: ADD ESP,0x4
// 004e2273: PUSH EAX
// 004e2274: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2278: PUSH EAX
// 004e2279: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e227e: ADD ESP,0x8
// 004e2281: PUSH 0x62ce9b
//   XREF to: 0062ce9b (DATA)
// 004e2286: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e228b: ADD ESP,0x4
// 004e228e: PUSH EAX
// 004e228f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2293: PUSH EAX
// 004e2294: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2299: ADD ESP,0x8
// 004e229c: PUSH 0x62ceb3
//   XREF to: 0062ceb3 (DATA)
// 004e22a1: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e22a6: ADD ESP,0x4
// 004e22a9: PUSH EAX
// 004e22aa: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e22ae: PUSH EAX
// 004e22af: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e22b4: ADD ESP,0x8
// 004e22b7: PUSH 0x62ced1
//   XREF to: 0062ced1 (DATA)
// 004e22bc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e22c1: ADD ESP,0x4
// 004e22c4: PUSH EAX
// 004e22c5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e22c9: PUSH EAX
// 004e22ca: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e22cf: ADD ESP,0x8
// 004e22d2: PUSH 0x62ceef
//   XREF to: 0062ceef (DATA)
// 004e22d7: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e22dc: ADD ESP,0x4
// 004e22df: PUSH EAX
// 004e22e0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e22e4: PUSH EAX
// 004e22e5: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e22e9: XOR EBX,EBX
// 004e22eb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e22f0: ADD ESP,0x8
// 004e22f3: MOV EAX,dword ptr [EDI]
//   Label: LAB_004e22f3
//   XREF to: Stack[-0x6ec] (DATA)
// 004e22f5: CMP EBX,EAX
// 004e22f7: JGE 0x004e23a6
//   XREF to: 004e23a6 (CONDITIONAL_JUMP)
// 004e22fd: PUSH 0x62cc71
//   XREF to: 0062cc71 (DATA)
// 004e2302: MOV EDX,dword ptr [ESI + 0x67b750]
//   XREF to: 0067b750 (DATA)
//   XREF to: 0067b754 (DATA)
// 004e2308: PUSH EDX
// 004e2309: PUSH 0x62cc74
//   XREF to: 0062cc74 (DATA)
// 004e230e: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e2313: ADD ESP,0xc
// 004e2316: TEST EAX,EAX
// 004e2318: JNZ 0x004e238a
//   XREF to: 004e238a (CONDITIONAL_JUMP)
// 004e231a: PUSH EAX
// 004e231b: PUSH EBX
// 004e231c: PUSH EDI
// 004e231d: CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   XREF to: 004a5410 (UNCONDITIONAL_CALL)
// 004e2322: ADD ESP,0xc
// 004e2325: INC EBX
// 004e2326: ADD ESI,0x4
// 004e2329: JMP 0x004e22f3
//   XREF to: 004e22f3 (UNCONDITIONAL_JUMP)
// 004e232b: PUSH 0xf29
//   Label: LAB_004e232b
// 004e2330: PUSH 0x62ce54
//   XREF to: 0062ce54 (DATA)
// 004e2335: PUSH EAX
// 004e2336: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e233b: JMP 0x004e21a4
//   XREF to: 004e21a4 (UNCONDITIONAL_JUMP)
// 004e2340: MOV EAX,dword ptr [ESP + 0x6d0]
//   Label: LAB_004e2340
//   XREF to: Stack[-0x1c] (READ)
// 004e2347: PUSH 0x0
// 004e2349: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 004e234e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2352: PUSH EAX
// 004e2353: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004e2358: ADD ESP,0x8
// 004e235b: ADD ESP,0x6dc
// 004e2361: POP EBP
// 004e2362: POP EDI
// 004e2363: POP ESI
// 004e2364: POP EBX
// 004e2365: RET
// 004e2366: CMP dword ptr [ESP + 0x6f4],0x0
//   Label: LAB_004e2366
//   XREF to: Stack[0x8] (READ)
// 004e236e: JNZ 0x004e2250
//   XREF to: 004e2250 (CONDITIONAL_JUMP)
// 004e2374: XOR EDI,EDI
// 004e2376: PUSH 0x0
//   Label: LAB_004e2376
// 004e2378: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e237c: PUSH EAX
// 004e237d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004e2382: ADD ESP,0x8
// 004e2385: JMP 0x004e1ef8
//   XREF to: 004e1ef8 (UNCONDITIONAL_JUMP)
// 004e238a: PUSH 0xec1
//   Label: LAB_004e238a
// 004e238f: PUSH 0x62cc7a
//   XREF to: 0062cc7a (DATA)
// 004e2394: PUSH EAX
// 004e2395: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e239a: ADD ESP,0xc
// 004e239d: INC EBX
// 004e239e: ADD ESI,0x4
// 004e23a1: JMP 0x004e22f3
//   XREF to: 004e22f3 (UNCONDITIONAL_JUMP)
// 004e23a6: PUSH 0x0
//   Label: LAB_004e23a6
// 004e23a8: PUSH -0x1
// 004e23aa: PUSH 0x62cf05
//   XREF to: 0062cf05 (DATA)
// 004e23af: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e23b4: ADD ESP,0x4
// 004e23b7: PUSH EAX
// 004e23b8: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e23bc: PUSH EAX
// 004e23bd: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004e23c2: ADD ESP,0x10
// 004e23c5: MOV EDI,EAX
// 004e23c7: CMP EBP,0x1
//   Label: LAB_004e23c7
// 004e23ca: JNZ 0x004e2507
//   XREF to: 004e2507 (CONDITIONAL_JUMP)
// 004e23d0: PUSH 0x62cf26
//   XREF to: 0062cf26 (DATA)
// 004e23d5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e23da: ADD ESP,0x4
// 004e23dd: PUSH EAX
// 004e23de: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e23e2: PUSH EAX
// 004e23e3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e23e8: ADD ESP,0x8
// 004e23eb: PUSH 0x62cf44
//   XREF to: 0062cf44 (DATA)
// 004e23f0: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e23f5: ADD ESP,0x4
// 004e23f8: PUSH EAX
// 004e23f9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e23fd: PUSH EAX
// 004e23fe: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2403: ADD ESP,0x8
// 004e2406: PUSH 0x62cf5e
//   XREF to: 0062cf5e (DATA)
// 004e240b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2410: ADD ESP,0x4
// 004e2413: PUSH EAX
// 004e2414: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2418: PUSH EAX
// 004e2419: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e241e: ADD ESP,0x8
// 004e2421: PUSH 0x62cf7d
//   XREF to: 0062cf7d (DATA)
// 004e2426: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e242b: ADD ESP,0x4
// 004e242e: PUSH EAX
// 004e242f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2433: PUSH EAX
// 004e2434: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2439: ADD ESP,0x8
// 004e243c: PUSH 0x62cf9b
//   XREF to: 0062cf9b (DATA)
// 004e2441: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2446: ADD ESP,0x4
// 004e2449: PUSH EAX
// 004e244a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e244e: PUSH EAX
// 004e244f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2454: ADD ESP,0x8
// 004e2457: PUSH 0x62cfbb
//   XREF to: 0062cfbb (DATA)
// 004e245c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2461: ADD ESP,0x4
// 004e2464: PUSH EAX
// 004e2465: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2469: PUSH EAX
// 004e246a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e246f: ADD ESP,0x8
// 004e2472: CMP dword ptr [ESP + 0x6d8],0x0
//   XREF to: Stack[-0x14] (READ)
// 004e247a: JZ 0x004e24b7
//   XREF to: 004e24b7 (CONDITIONAL_JUMP)
// 004e247c: MOV EDI,ESP
//   Label: LAB_004e247c
// 004e247e: XOR EBX,EBX
// 004e2480: IMUL ESI,EBP,0x34
// 004e2483: MOV EAX,dword ptr [EDI]
//   Label: LAB_004e2483
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2485: CMP EBX,EAX
// 004e2487: JGE 0x004e24e6
//   XREF to: 004e24e6 (CONDITIONAL_JUMP)
// 004e2489: PUSH 0x62cc71
//   XREF to: 0062cc71 (DATA)
// 004e248e: MOV EAX,dword ptr [ESI + 0x67b750]
//   XREF to: 0067b750 (DATA)
//   XREF to: 0067b754 (DATA)
// 004e2494: PUSH EAX
// 004e2495: PUSH 0x62cc74
//   XREF to: 0062cc74 (DATA)
// 004e249a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e249f: ADD ESP,0xc
// 004e24a2: TEST EAX,EAX
// 004e24a4: JNZ 0x004e24d4
//   XREF to: 004e24d4 (CONDITIONAL_JUMP)
// 004e24a6: PUSH EAX
// 004e24a7: PUSH EBX
// 004e24a8: PUSH EDI
// 004e24a9: CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   XREF to: 004a5410 (UNCONDITIONAL_CALL)
// 004e24ae: ADD ESP,0xc
//   Label: LAB_004e24ae
// 004e24b1: INC EBX
// 004e24b2: ADD ESI,0x4
// 004e24b5: JMP 0x004e2483
//   XREF to: 004e2483 (UNCONDITIONAL_JUMP)
// 004e24b7: PUSH 0x62cfd2
//   Label: LAB_004e24b7
//   XREF to: 0062cfd2 (DATA)
// 004e24bc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e24c1: ADD ESP,0x4
// 004e24c4: PUSH EAX
// 004e24c5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e24c9: PUSH EAX
// 004e24ca: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e24cf: ADD ESP,0x8
// 004e24d2: JMP 0x004e247c
//   XREF to: 004e247c (UNCONDITIONAL_JUMP)
// 004e24d4: PUSH 0xec1
//   Label: LAB_004e24d4
// 004e24d9: PUSH 0x62cc7a
//   XREF to: 0062cc7a (DATA)
// 004e24de: PUSH EAX
// 004e24df: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e24e4: JMP 0x004e24ae
//   XREF to: 004e24ae (UNCONDITIONAL_JUMP)
// 004e24e6: PUSH 0x0
//   Label: LAB_004e24e6
// 004e24e8: PUSH -0x1
// 004e24ea: PUSH 0x62cfe8
//   XREF to: 0062cfe8 (DATA)
// 004e24ef: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e24f4: ADD ESP,0x4
// 004e24f7: PUSH EAX
// 004e24f8: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e24fc: PUSH EAX
// 004e24fd: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004e2502: ADD ESP,0x10
// 004e2505: MOV EDI,EAX
// 004e2507: CMP EBP,0x2
//   Label: LAB_004e2507
// 004e250a: JNZ 0x004e26a9
//   XREF to: 004e26a9 (CONDITIONAL_JUMP)
// 004e2510: PUSH 0x62d006
//   XREF to: 0062d006 (DATA)
// 004e2515: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e251a: ADD ESP,0x4
// 004e251d: PUSH EAX
// 004e251e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2522: PUSH EAX
// 004e2523: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2528: ADD ESP,0x8
// 004e252b: PUSH 0x62d021
//   XREF to: 0062d021 (DATA)
// 004e2530: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2535: ADD ESP,0x4
// 004e2538: PUSH EAX
// 004e2539: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e253d: PUSH EAX
// 004e253e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2543: ADD ESP,0x8
// 004e2546: PUSH 0x62d03d
//   XREF to: 0062d03d (DATA)
// 004e254b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2550: ADD ESP,0x4
// 004e2553: PUSH EAX
// 004e2554: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2558: PUSH EAX
// 004e2559: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e255e: ADD ESP,0x8
// 004e2561: PUSH 0x62d057
//   XREF to: 0062d057 (DATA)
// 004e2566: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e256b: ADD ESP,0x4
// 004e256e: PUSH EAX
// 004e256f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2573: PUSH EAX
// 004e2574: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2579: ADD ESP,0x8
// 004e257c: PUSH 0x62d077
//   XREF to: 0062d077 (DATA)
// 004e2581: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2586: ADD ESP,0x4
// 004e2589: PUSH EAX
// 004e258a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e258e: PUSH EAX
// 004e258f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2594: ADD ESP,0x8
// 004e2597: PUSH 0x62d091
//   XREF to: 0062d091 (DATA)
// 004e259c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e25a1: ADD ESP,0x4
// 004e25a4: PUSH EAX
// 004e25a5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e25a9: PUSH EAX
// 004e25aa: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e25af: ADD ESP,0x8
// 004e25b2: PUSH 0x62d0aa
//   XREF to: 0062d0aa (DATA)
// 004e25b7: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e25bc: ADD ESP,0x4
// 004e25bf: PUSH EAX
// 004e25c0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e25c4: PUSH EAX
// 004e25c5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e25ca: ADD ESP,0x8
// 004e25cd: PUSH 0x62d0c9
//   XREF to: 0062d0c9 (DATA)
// 004e25d2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e25d7: ADD ESP,0x4
// 004e25da: PUSH EAX
// 004e25db: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e25df: PUSH EAX
// 004e25e0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e25e5: ADD ESP,0x8
// 004e25e8: IMUL ESI,EBP,0x34
// 004e25eb: PUSH 0x62d0ea
//   XREF to: 0062d0ea (DATA)
// 004e25f0: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e25f5: ADD ESP,0x4
// 004e25f8: PUSH EAX
// 004e25f9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e25fd: PUSH EAX
// 004e25fe: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2603: ADD ESP,0x8
// 004e2606: PUSH 0x62d10a
//   XREF to: 0062d10a (DATA)
// 004e260b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2610: ADD ESP,0x4
// 004e2613: PUSH EAX
// 004e2614: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2618: PUSH EAX
// 004e2619: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e261e: ADD ESP,0x8
// 004e2621: PUSH 0x62d129
//   XREF to: 0062d129 (DATA)
// 004e2626: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e262b: ADD ESP,0x4
// 004e262e: PUSH EAX
// 004e262f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2633: PUSH EAX
// 004e2634: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2638: XOR EBX,EBX
// 004e263a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e263f: ADD ESP,0x8
// 004e2642: MOV EAX,dword ptr [EDI]
//   Label: LAB_004e2642
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2644: CMP EBX,EAX
// 004e2646: JGE 0x004e2688
//   XREF to: 004e2688 (CONDITIONAL_JUMP)
// 004e2648: PUSH 0x62cc71
//   XREF to: 0062cc71 (DATA)
// 004e264d: MOV EDX,dword ptr [ESI + 0x67b750]
//   XREF to: 0067b750 (DATA)
//   XREF to: 0067b754 (DATA)
// 004e2653: PUSH EDX
// 004e2654: PUSH 0x62cc74
//   XREF to: 0062cc74 (DATA)
// 004e2659: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e265e: ADD ESP,0xc
// 004e2661: TEST EAX,EAX
// 004e2663: JNZ 0x004e2676
//   XREF to: 004e2676 (CONDITIONAL_JUMP)
// 004e2665: PUSH EAX
// 004e2666: PUSH EBX
// 004e2667: PUSH EDI
// 004e2668: CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   XREF to: 004a5410 (UNCONDITIONAL_CALL)
// 004e266d: ADD ESP,0xc
//   Label: LAB_004e266d
// 004e2670: INC EBX
// 004e2671: ADD ESI,0x4
// 004e2674: JMP 0x004e2642
//   XREF to: 004e2642 (UNCONDITIONAL_JUMP)
// 004e2676: PUSH 0xec1
//   Label: LAB_004e2676
// 004e267b: PUSH 0x62cc7a
//   XREF to: 0062cc7a (DATA)
// 004e2680: PUSH EAX
// 004e2681: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e2686: JMP 0x004e266d
//   XREF to: 004e266d (UNCONDITIONAL_JUMP)
// 004e2688: PUSH 0x0
//   Label: LAB_004e2688
// 004e268a: PUSH -0x1
// 004e268c: PUSH 0x62d146
//   XREF to: 0062d146 (DATA)
// 004e2691: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2696: ADD ESP,0x4
// 004e2699: PUSH EAX
// 004e269a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e269e: PUSH EAX
// 004e269f: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004e26a4: ADD ESP,0x10
// 004e26a7: MOV EDI,EAX
// 004e26a9: CMP EBP,0x3
//   Label: LAB_004e26a9
// 004e26ac: JNZ 0x004e278e
//   XREF to: 004e278e (CONDITIONAL_JUMP)
// 004e26b2: IMUL ESI,EBP,0x34
// 004e26b5: PUSH 0x62d15c
//   XREF to: 0062d15c (DATA)
// 004e26ba: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e26bf: ADD ESP,0x4
// 004e26c2: PUSH EAX
// 004e26c3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e26c7: PUSH EAX
// 004e26c8: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e26cd: ADD ESP,0x8
// 004e26d0: PUSH 0x62d177
//   XREF to: 0062d177 (DATA)
// 004e26d5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e26da: ADD ESP,0x4
// 004e26dd: PUSH EAX
// 004e26de: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e26e2: PUSH EAX
// 004e26e3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e26e8: ADD ESP,0x8
// 004e26eb: PUSH 0x62d18f
//   XREF to: 0062d18f (DATA)
// 004e26f0: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e26f5: ADD ESP,0x4
// 004e26f8: PUSH EAX
// 004e26f9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e26fd: PUSH EAX
// 004e26fe: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2703: ADD ESP,0x8
// 004e2706: PUSH 0x62d1ab
//   XREF to: 0062d1ab (DATA)
// 004e270b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e2710: ADD ESP,0x4
// 004e2713: PUSH EAX
// 004e2714: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2718: PUSH EAX
// 004e2719: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e271d: XOR EBX,EBX
// 004e271f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e2724: ADD ESP,0x8
// 004e2727: MOV EAX,dword ptr [EDI]
//   Label: LAB_004e2727
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2729: CMP EBX,EAX
// 004e272b: JGE 0x004e276d
//   XREF to: 004e276d (CONDITIONAL_JUMP)
// 004e272d: PUSH 0x62cc71
//   XREF to: 0062cc71 (DATA)
// 004e2732: MOV ECX,dword ptr [ESI + 0x67b750]
//   XREF to: 0067b750 (DATA)
//   XREF to: 0067b754 (DATA)
// 004e2738: PUSH ECX
// 004e2739: PUSH 0x62cc74
//   XREF to: 0062cc74 (DATA)
// 004e273e: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e2743: ADD ESP,0xc
// 004e2746: TEST EAX,EAX
// 004e2748: JNZ 0x004e275b
//   XREF to: 004e275b (CONDITIONAL_JUMP)
// 004e274a: PUSH EAX
// 004e274b: PUSH EBX
// 004e274c: PUSH EDI
// 004e274d: CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   XREF to: 004a5410 (UNCONDITIONAL_CALL)
// 004e2752: ADD ESP,0xc
//   Label: LAB_004e2752
// 004e2755: INC EBX
// 004e2756: ADD ESI,0x4
// 004e2759: JMP 0x004e2727
//   XREF to: 004e2727 (UNCONDITIONAL_JUMP)
// 004e275b: PUSH 0xec1
//   Label: LAB_004e275b
// 004e2760: PUSH 0x62cc7a
//   XREF to: 0062cc7a (DATA)
// 004e2765: PUSH EAX
// 004e2766: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e276b: JMP 0x004e2752
//   XREF to: 004e2752 (UNCONDITIONAL_JUMP)
// 004e276d: PUSH 0x0
//   Label: LAB_004e276d
// 004e276f: PUSH -0x1
// 004e2771: PUSH 0x62d1c8
//   XREF to: 0062d1c8 (DATA)
// 004e2776: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e277b: ADD ESP,0x4
// 004e277e: PUSH EAX
// 004e277f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2783: PUSH EAX
// 004e2784: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004e2789: ADD ESP,0x10
// 004e278c: MOV EDI,EAX
// 004e278e: CMP EBP,0x4
//   Label: LAB_004e278e
// 004e2791: JNZ 0x004e2376
//   XREF to: 004e2376 (CONDITIONAL_JUMP)
// 004e2797: IMUL ESI,EBP,0x34
// 004e279a: PUSH 0x62d1e8
//   XREF to: 0062d1e8 (DATA)
// 004e279f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e27a4: ADD ESP,0x4
// 004e27a7: PUSH EAX
// 004e27a8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e27ac: PUSH EAX
// 004e27ad: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e27b1: XOR EBX,EBX
// 004e27b3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004e27b8: ADD ESP,0x8
// 004e27bb: MOV EAX,dword ptr [EDI]
//   Label: LAB_004e27bb
//   XREF to: Stack[-0x6ec] (DATA)
// 004e27bd: CMP EBX,EAX
// 004e27bf: JGE 0x004e2801
//   XREF to: 004e2801 (CONDITIONAL_JUMP)
// 004e27c1: PUSH 0x62cc71
//   XREF to: 0062cc71 (DATA)
// 004e27c6: MOV EAX,dword ptr [ESI + 0x67b750]
//   XREF to: 0067b750 (DATA)
//   XREF to: 0067b754 (DATA)
// 004e27cc: PUSH EAX
// 004e27cd: PUSH 0x62cc74
//   XREF to: 0062cc74 (DATA)
// 004e27d2: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e27d7: ADD ESP,0xc
// 004e27da: TEST EAX,EAX
// 004e27dc: JNZ 0x004e27ef
//   XREF to: 004e27ef (CONDITIONAL_JUMP)
// 004e27de: PUSH EAX
// 004e27df: PUSH EBX
// 004e27e0: PUSH EDI
// 004e27e1: CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   XREF to: 004a5410 (UNCONDITIONAL_CALL)
// 004e27e6: ADD ESP,0xc
//   Label: LAB_004e27e6
// 004e27e9: INC EBX
// 004e27ea: ADD ESI,0x4
// 004e27ed: JMP 0x004e27bb
//   XREF to: 004e27bb (UNCONDITIONAL_JUMP)
// 004e27ef: PUSH 0xec1
//   Label: LAB_004e27ef
// 004e27f4: PUSH 0x62cc7a
//   XREF to: 0062cc7a (DATA)
// 004e27f9: PUSH EAX
// 004e27fa: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e27ff: JMP 0x004e27e6
//   XREF to: 004e27e6 (UNCONDITIONAL_JUMP)
// 004e2801: PUSH 0x0
//   Label: LAB_004e2801
// 004e2803: PUSH -0x1
// 004e2805: PUSH 0x62d203
//   XREF to: 0062d203 (DATA)
// 004e280a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e280f: ADD ESP,0x4
// 004e2812: PUSH EAX
// 004e2813: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2817: PUSH EAX
// 004e2818: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004e281d: ADD ESP,0x10
// 004e2820: MOV EDI,EAX
// 004e2822: PUSH 0x0
// 004e2824: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6ec] (DATA)
// 004e2828: PUSH EAX
// 004e2829: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004e282e: ADD ESP,0x8
// 004e2831: JMP 0x004e1ef8
//   XREF to: 004e1ef8 (UNCONDITIONAL_JUMP)
// 004e2836: PUSH 0x0
//   Label: LAB_004e2836
// 004e2838: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x144] (DATA)
// 004e283f: PUSH EAX
// 004e2840: PUSH 0x62d228
//   XREF to: 0062d228 (DATA)
// 004e2845: PUSH 0x62d22e
//   XREF to: 0062d22e (DATA)
// 004e284a: PUSH 0x62d234
//   XREF to: 0062d234 (DATA)
// 004e284f: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e2855: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004e2856: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 004e285b: ADD ESP,0x18
// 004e285e: TEST EAX,EAX
// 004e2860: JZ 0x004e208f
//   XREF to: 004e208f (CONDITIONAL_JUMP)
// 004e2866: XOR EAX,EAX
// 004e2868: XOR EDX,EDX
// 004e286a: MOV [0x02d831a8],EAX
//   XREF to: 02d831a8 (WRITE)
// 004e286f: XOR AH,AH
// 004e2871: MOV dword ptr [0x02d831ac],EDX
//   XREF to: 02d831ac (WRITE)
// 004e2877: MOV byte ptr [0x02d830a8],AH
//   XREF to: 02d830a8 (WRITE)
// 004e287d: JMP 0x004e1fac
//   XREF to: 004e1fac (UNCONDITIONAL_JUMP)
