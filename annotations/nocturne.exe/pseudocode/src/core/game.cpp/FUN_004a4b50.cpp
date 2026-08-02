// Name: core_game.cpp_FUN_004a4b50
// Address: 004a4b50
// Address Range: [[004a4b50, 004a573a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004a4b50(CGame *this_ptr,int select_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004a4b50(CGame *this_ptr,int select_mode)

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
  CIniFile local_4b4;
  CStrList local_2b4 [23];
  char local_144 [260];
  char *local_40 [4];
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1c [4];
  int local_18;
  uint local_14;
  
  p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60
                     (&CHAR_00h_00583dcc,"enemy.pod","rb");
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
  }
  local_14 = (uint)(p_Var2 == (_FILE *)0x0);
  this_ptr->damageable_enemy_count = 0;
  this_ptr->total_kill_count = 0;
  this_ptr->total_game_time = 0.0;
  this_ptr->total_play_time = 0.0;
  this_ptr->is_loading = 0;
  local_1c[0] = DAT_01bcd070;
  local_1c[1] = (char)DAT_01bcd070_1;
  local_1c[2] = DAT_01bcd070_1._1_1_;
  local_1c[3] = DAT_01bcd070_1._2_1_;
  _DAT_01bcd070 = _DAT_014b9900;
  p_Var2 = _fopen("pod.ini","rt");
  if (p_Var2 != (_FILE *)0x0) {
    _fclose(p_Var2);
  }
  bVar8 = select_mode == 1;
  if (local_14 != 0) {
    select_mode = 1;
  }
  local_18 = 0;
  engine_ini_cpp_CIniFile_ctor_FUN_004bd860
            (&local_4b4,"system\\nocturne.ini","Game");
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(&local_4b4,"Act1Code",&local_2c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(&local_4b4,"Act2Code",&local_28);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(&local_4b4,"Act3Code",&local_24);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(&local_4b4,"Act4Code",&local_20);
  if ((((local_2c == 0x331) && (local_28 == 0x3cc)) && (local_24 == 0x3ac)) && (local_20 == 0xd6)) {
    local_18 = 1;
  }
  local_40[0] = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("'Dark Reign of the Vampire King'");
  local_40[1] = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("'Tomb of the Underground God'");
  local_40[2] = support_newmsg_cpp_getLocalizedString_FUN_004ee370("'Windy City Massacre'");
  local_40[3] = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("'The House on the Edge of Hell'");
  iVar3 = -1;
  local_30 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("'Epilogue'");
  iVar6 = -1;
  if (bVar8 || p_Var2 != (_FILE *)0x0) {
    iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
                      (0x01BCD074,"Select mission to play","world",
                       "*.msn",local_144,0);
    if (iVar6 == 0) {
      return;
    }
    _DAT_01c78ac0 = 0;
    _DAT_01c78ac4 = 0;
    DAT_01c789c0 = 0;
  }
  else {
    while (iVar6 < 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)local_2b4);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Volume 1 - 'Dark Reign of the Vampire King'");
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Volume 2 - 'Tomb of the Underground God'");
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Volume 3 - 'Windy City Massacre'");
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Volume 4 - 'The House on the Edge of Hell'");
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
      if (local_18 != 0) {
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Volume 5 - 'Epilogue'");
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
      }
      if (local_14 == 0) {
        iVar5 = 0;
        iVar3 = 0;
        if (0 < local_2b4[0].item_count) {
          do {
            p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60
                               ("world",*(char **)(&DAT_005b9450 + iVar3),"rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80((CPickList *)local_2b4,iVar5,0);
            }
            else {
              _fclose(p_Var2);
            }
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + 0x34;
          } while (iVar5 < local_2b4[0].item_count);
        }
      }
      uVar9 = 0xffffffff;
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Choose a story to play")
      ;
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                        (local_2b4,pcVar7,uVar9);
      if (iVar3 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)local_2b4,0);
        return;
      }
      if ((iVar3 == 0) && (local_2c == 0x331)) {
        select_mode = 1;
      }
      if ((iVar3 == 1) && (local_28 == 0x3cc)) {
        select_mode = 1;
      }
      if ((iVar3 == 2) && (local_24 == 0x3ac)) {
        select_mode = 1;
      }
      if ((iVar3 == 3) && (local_20 == 0xd6)) {
        select_mode = 1;
LAB_004a50dc:
        shape_edittool_cpp_FUN_00476160(local_2b4);
        if (iVar3 == 0) {
          iVar5 = 0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 1 - 'Your New Partner'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 2 - 'Sentinels'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 3 - 'Werewolf Forest'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 4 - 'Castle Gaustadt'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Chapter 5 - 'Dungeon'");
          iVar6 = 0;
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          while (iVar6 < local_2b4[0].item_count) {
            p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60
                               ("world",*(char **)(&DAT_005b9450 + iVar5),"rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80((CPickList *)local_2b4,iVar6,0);
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              _fclose(p_Var2);
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          uVar9 = 0xffffffff;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("'Dark Reign of the Vampire King'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,pcVar7,uVar9);
        }
        if (iVar3 == 1) {
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 1 - 'Train to Redeye'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 2 - 'Zombie Town'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 3 - 'Underground Mine'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 4 - 'Hidden Entrance'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 5 - 'Temple of the God'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Chapter 6 - 'Epilogue'")
          ;
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          if (local_14 == 0) {
            pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("Chapter X - 'Failure'");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          }
          iVar5 = 0x34;
          for (iVar6 = 0; iVar6 < local_2b4[0].item_count; iVar6 = iVar6 + 1) {
            p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60
                               ("world",*(char **)(&DAT_005b9450 + iVar5),"rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80((CPickList *)local_2b4,iVar6,0);
            }
            else {
              _fclose(p_Var2);
            }
            iVar5 = iVar5 + 4;
          }
          uVar9 = 0xffffffff;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("'Tomb of the Underground God'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,pcVar7,uVar9);
        }
        if (iVar3 == 2) {
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 2 - 'Chicago River'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 3 - 'The Vendome'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 4 - 'Night on the Town'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 5 - 'Water Works'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 6 - 'Windy City'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 7 - 'Crescent Theater'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 8 - 'Rooftop to Rooftop'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          iVar5 = 0x68;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 9 - 'Warehouse of Hell'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 10 - 'Mobster Factory'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 11 - 'Not You Again'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          for (iVar6 = 0; iVar6 < local_2b4[0].item_count; iVar6 = iVar6 + 1) {
            p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60
                               ("world",*(char **)(&DAT_005b9450 + iVar5),"rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80((CPickList *)local_2b4,iVar6,0);
            }
            else {
              _fclose(p_Var2);
            }
            iVar5 = iVar5 + 4;
          }
          uVar9 = 0xffffffff;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("'Windy City Massacre'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,pcVar7,uVar9);
        }
        if (iVar3 == 3) {
          iVar5 = 0x9c;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 2 - 'Graveyard'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 3 - 'House of Hell'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 4 - 'Back from Hell'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          for (iVar6 = 0; iVar6 < local_2b4[0].item_count; iVar6 = iVar6 + 1) {
            p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60
                               ("world",*(char **)(&DAT_005b9450 + iVar5),"rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80((CPickList *)local_2b4,iVar6,0);
            }
            else {
              _fclose(p_Var2);
            }
            iVar5 = iVar5 + 4;
          }
          uVar9 = 0xffffffff;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("'The House on the Edge of Hell'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,pcVar7,uVar9);
        }
        if (iVar3 == 4) {
          iVar5 = 0xd0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,pcVar7);
          for (iVar6 = 0; iVar6 < local_2b4[0].item_count; iVar6 = iVar6 + 1) {
            p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60
                               ("world",*(char **)(&DAT_005b9450 + iVar5),"rt");
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80((CPickList *)local_2b4,iVar6,0);
            }
            else {
              _fclose(p_Var2);
            }
            iVar5 = iVar5 + 4;
          }
          uVar9 = 0xffffffff;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("'Epilogue'");
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,pcVar7,uVar9);
        }
      }
      else {
        if (select_mode != 0) goto LAB_004a50dc;
        iVar6 = 0;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)local_2b4,0);
    }
    pcVar7 = local_144;
    pcVar4 = *(char **)(&DAT_005b9450 + iVar3 * 0x34 + iVar6 * 4);
    do {
      cVar1 = *pcVar4;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60("world",local_144,"rt");
    if (p_Var2 == (_FILE *)0x0) {
      return;
    }
    pcVar4 = &DAT_01c789c0;
    _fclose(p_Var2);
    _DAT_01c78ac0 = *(uint *)(&DAT_005b9554 + iVar3 * 4);
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
    _DAT_01c78ac4 = 0x41000000;
  }
  core_event_cpp_CEventList_resetGameFlags_FUN_00480410(0x01C03A10);
  iVar5 = 1;
  iVar6 = _stricmp(&DAT_01c78598,local_144);
  if (iVar6 != 0) {
    pcVar7 = local_144;
    pcVar4 = &DAT_01c78598;
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
  core_level_cpp_CLevelLoader_show_FUN_004c5640((CLevelLoader *)INT_005baca0,10,0,iVar3);
  core_mission_cpp_CDemonMission_load_FUN_004d7ee0(0x01CC9450,local_144,iVar5);
  iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(0x01CC9450,(CCharacter *)0x0);
  if (iVar3 != 0) {
    core_mission_cpp_CDemonMission_startMission_FUN_004d9780(0x01CC9450);
    core_mission_cpp_CDemonMission_run_FUN_004d9440(0x01CC9450);
    if (this_ptr->need_chapter_reload != 0) {
      this_ptr->need_chapter_reload = 0;
      core_game_cpp_FUN_004a4170(this_ptr,this_ptr->chapter_reload_filename,1);
    }
  }
  DAT_01bcd070 = local_1c[0];
  DAT_01bcd070_1._0_1_ = local_1c[1];
  DAT_01bcd070_1._1_1_ = local_1c[2];
  DAT_01bcd070_1._2_1_ = local_1c[3];
  return;
}
