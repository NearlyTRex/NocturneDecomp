// Name: FUN_004a4b50
// Address: 004a4b50
// Address Range: [[004a4b50, 004a573a]]
// Convention: unknown
// Signature: void FUN_004a4b50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4b50(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  byte local_4b4 [512];
  int local_2b4 [92];
  char local_144 [260];
  uint local_40 [4];
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60
                    (&CHAR_00h_00583dcc,"enemy.pod","rb");
  if (iVar2 != 0) {
    _fclose(iVar2);
  }
  local_14 = (uint)(iVar2 == 0);
  *(uint *)(param_1 + 0x24c) = 0;
  *(uint *)(param_1 + 0x254) = 0;
  *(uint *)(param_1 + 0x248) = 0;
  *(uint *)(param_1 + 0x250) = 0;
  *(uint *)(param_1 + 0x234) = 0;
  local_1c = _DAT_01bcd070;
  _DAT_01bcd070 = _DAT_014b9900;
  iVar2 = _fopen("pod.ini","rt");
  if (iVar2 != 0) {
    _fclose(iVar2);
  }
  bVar9 = param_2 == 1;
  if (local_14 != 0) {
    param_2 = 1;
  }
  local_18 = 0;
  engine_ini_cpp_CIniFile_ctor_FUN_004bd860
            (local_4b4,"system\\nocturne.ini","Game");
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_4b4,"Act1Code",&local_2c);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_4b4,"Act2Code",&local_28);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_4b4,"Act3Code",&local_24);
  engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(local_4b4,"Act4Code",&local_20);
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
  iVar4 = -1;
  local_30 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("'Epilogue'");
  iVar7 = -1;
  if (bVar9 || iVar2 != 0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
                      (0x01BCD074,"Select mission to play","world",
                       "*.msn",local_144,0);
    if (iVar2 == 0) {
      return;
    }
    _DAT_01c78ac0 = 0;
    _DAT_01c78ac4 = 0;
    DAT_01c789c0 = 0;
  }
  else {
    while (iVar7 < 0) {
      FUN_00474c90(local_2b4);
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("Volume 1 - 'Dark Reign of the Vampire King'");
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("Volume 2 - 'Tomb of the Underground God'");
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("Volume 3 - 'Windy City Massacre'");
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("Volume 4 - 'The House on the Edge of Hell'");
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
      if (local_18 != 0) {
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Volume 5 - 'Epilogue'");
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
      }
      if (local_14 == 0) {
        iVar4 = 0;
        iVar2 = 0;
        if (0 < local_2b4[0]) {
          do {
            iVar3 = engine_dosio_cpp_getFile_FUN_00456a60
                              ("world",*(uint *)(&DAT_005b9450 + iVar2),"rt"
                              );
            if (iVar3 == 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(local_2b4,iVar4,0);
            }
            else {
              _fclose(iVar3);
            }
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + 0x34;
          } while (iVar4 < local_2b4[0]);
        }
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("Choose a story to play",0xffffffff);
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                        (local_2b4,uVar6);
      if (iVar4 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_2b4,0);
        return;
      }
      if ((iVar4 == 0) && (local_2c == 0x331)) {
        param_2 = 1;
      }
      if ((iVar4 == 1) && (local_28 == 0x3cc)) {
        param_2 = 1;
      }
      if ((iVar4 == 2) && (local_24 == 0x3ac)) {
        param_2 = 1;
      }
      if ((iVar4 == 3) && (local_20 == 0xd6)) {
        param_2 = 1;
LAB_004a50dc:
        FUN_00476160(local_2b4);
        if (iVar4 == 0) {
          iVar7 = 0;
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 1 - 'Your New Partner'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Chapter 2 - 'Sentinels'")
          ;
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 3 - 'Werewolf Forest'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 4 - 'Castle Gaustadt'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Chapter 5 - 'Dungeon'");
          iVar2 = 0;
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          while (iVar2 < local_2b4[0]) {
            iVar3 = engine_dosio_cpp_getFile_FUN_00456a60
                              ("world",*(uint *)(&DAT_005b9450 + iVar7),"rt"
                              );
            if (iVar3 == 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(local_2b4,iVar2,0);
              iVar2 = iVar2 + 1;
              iVar7 = iVar7 + 4;
            }
            else {
              _fclose(iVar3);
              iVar2 = iVar2 + 1;
              iVar7 = iVar7 + 4;
            }
          }
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("'Dark Reign of the Vampire King'",0xffffffff);
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,uVar6);
        }
        if (iVar4 == 1) {
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 1 - 'Train to Redeye'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 2 - 'Zombie Town'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 3 - 'Underground Mine'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 4 - 'Hidden Entrance'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 5 - 'Temple of the God'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Chapter 6 - 'Epilogue'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          if (local_14 == 0) {
            uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Chapter X - 'Failure'")
            ;
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          }
          iVar7 = 0x34;
          for (iVar2 = 0; iVar2 < local_2b4[0]; iVar2 = iVar2 + 1) {
            iVar3 = engine_dosio_cpp_getFile_FUN_00456a60
                              ("world",*(uint *)(&DAT_005b9450 + iVar7),"rt"
                              );
            if (iVar3 == 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(local_2b4,iVar2,0);
            }
            else {
              _fclose(iVar3);
            }
            iVar7 = iVar7 + 4;
          }
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("'Tomb of the Underground God'",0xffffffff);
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,uVar6);
        }
        if (iVar4 == 2) {
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 2 - 'Chicago River'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 3 - 'The Vendome'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 4 - 'Night on the Town'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 5 - 'Water Works'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 6 - 'Windy City'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 7 - 'Crescent Theater'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 8 - 'Rooftop to Rooftop'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          iVar7 = 0x68;
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 9 - 'Warehouse of Hell'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 10 - 'Mobster Factory'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 11 - 'Not You Again'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          for (iVar2 = 0; iVar2 < local_2b4[0]; iVar2 = iVar2 + 1) {
            iVar3 = engine_dosio_cpp_getFile_FUN_00456a60
                              ("world",*(uint *)(&DAT_005b9450 + iVar7),"rt"
                              );
            if (iVar3 == 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(local_2b4,iVar2,0);
            }
            else {
              _fclose(iVar3);
            }
            iVar7 = iVar7 + 4;
          }
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("'Windy City Massacre'",0xffffffff);
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,uVar6);
        }
        if (iVar4 == 3) {
          iVar7 = 0x9c;
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Chapter 2 - 'Graveyard'")
          ;
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 3 - 'House of Hell'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 4 - 'Back from Hell'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          for (iVar2 = 0; iVar2 < local_2b4[0]; iVar2 = iVar2 + 1) {
            iVar3 = engine_dosio_cpp_getFile_FUN_00456a60
                              ("world",*(uint *)(&DAT_005b9450 + iVar7),"rt"
                              );
            if (iVar3 == 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(local_2b4,iVar2,0);
            }
            else {
              _fclose(iVar3);
            }
            iVar7 = iVar7 + 4;
          }
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("'The House on the Edge of Hell'",0xffffffff);
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,uVar6);
        }
        if (iVar4 == 4) {
          iVar7 = 0xd0;
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Chapter 1 - 'Headquarters'");
          shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_2b4,uVar6);
          for (iVar2 = 0; iVar2 < local_2b4[0]; iVar2 = iVar2 + 1) {
            iVar3 = engine_dosio_cpp_getFile_FUN_00456a60
                              ("world",*(uint *)(&DAT_005b9450 + iVar7),"rt"
                              );
            if (iVar3 == 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(local_2b4,iVar2,0);
            }
            else {
              _fclose(iVar3);
            }
            iVar7 = iVar7 + 4;
          }
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("'Epilogue'",0xffffffff)
          ;
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                            (local_2b4,uVar6);
        }
      }
      else {
        if (param_2 != 0) goto LAB_004a50dc;
        iVar7 = 0;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_2b4,0);
    }
    pcVar8 = local_144;
    pcVar5 = *(char **)(&DAT_005b9450 + iVar4 * 0x34 + iVar7 * 4);
    do {
      cVar1 = *pcVar5;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("world",local_144,"rt");
    if (iVar2 == 0) {
      return;
    }
    pcVar5 = &DAT_01c789c0;
    _fclose(iVar2);
    _DAT_01c78ac0 = *(uint *)(&DAT_005b9554 + iVar4 * 4);
    pcVar8 = (char *)local_40[iVar4];
    do {
      cVar1 = *pcVar8;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    _DAT_01c78ac4 = 0x41000000;
  }
  core_event_cpp_CEventList_resetGameFlags_FUN_00480410(0x01C03A10);
  uVar6 = 1;
  iVar2 = _stricmp(&DAT_01c78598,local_144);
  if (iVar2 != 0) {
    pcVar8 = local_144;
    pcVar5 = &DAT_01c78598;
    do {
      cVar1 = *pcVar8;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    uVar6 = 0;
  }
  core_level_cpp_CLevelLoader_show_FUN_004c5640(0x01CC3160,10,0,iVar4);
  core_mission_cpp_CDemonMission_load_FUN_004d7ee0(0x01CC9450,local_144,uVar6);
  iVar2 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(0x01CC9450,0);
  if (iVar2 != 0) {
    core_mission_cpp_CDemonMission_startMission_FUN_004d9780(0x01CC9450);
    core_mission_cpp_CDemonMission_run_FUN_004d9440(0x01CC9450);
    if (*(int *)(param_1 + 0x9c4) != 0) {
      *(uint *)(param_1 + 0x9c4) = 0;
      FUN_004a4170(param_1,param_1 + 0x9c8,1);
    }
  }
  _DAT_01bcd070 = local_1c;
  return;
}
