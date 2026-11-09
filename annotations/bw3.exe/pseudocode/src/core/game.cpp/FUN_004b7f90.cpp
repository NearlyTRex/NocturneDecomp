// Name: core_game.cpp_FUN_004b7f90
// Address: 004b7f90
// Address Range: [[004b7f90, 004b8e54]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_FUN_004b7f90(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_game_cpp_FUN_004b7f90(CGame *this_ptr)

{
  char cVar1;
  bool bVar2;
  CFieldNotes *pCVar3;
  CKeys *this_ptr_00;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  float10 fVar9;
  uint uVar10;
  CPickList local_8a4;
  CPickList local_4e4;
  char local_124 [256];
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  engine_console_cpp_CConsole_reset_FUN_00442190(g_CConsolePtr);
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Blair Witch 3 started\n");
  engine_console_cpp_FUN_00441ff0
            (g_CConsolePtr,"game.cpp built on %s %s\n\n","Oct 30 2000",
             "16:06:32");
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"System RAM: %d\n",_DAT_02d21b88);
  local_18 = 1;
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Swap file: %d\n",_DAT_02d21b8c);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0(g_CEditorToolsPtr,local_124)
  ;
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,&DAT_005c2661,local_124);
  local_24 = (byte *)&local_8a4;
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"ESP: %08X\n",&local_8a4);
  *(uint *)&this_ptr->field_0x320 = 0;
  *(uint *)&this_ptr->field_0x220 = 0;
  *(uint *)&this_ptr->field_0x324 = 1;
  *(uint *)&this_ptr->field_0x208 = 0;
  *(uint *)&this_ptr->field_0x20c = 0;
  *(uint *)&this_ptr->field_0x328 = 0;
  *(uint *)&this_ptr->field_0x1f4 = 0;
  *(uint *)&this_ptr->field_0x204 = 0;
  *(uint *)&this_ptr->field_0x1f8 = 0;
  *(uint *)&this_ptr->field_0x1fc = 0;
  *(uint *)&this_ptr->field_0x200 = 0;
  *(uint *)&this_ptr->field_0x32c = 0;
  *(uint *)&this_ptr->field_0x330 = 0;
  *(uint *)&this_ptr->field_0x210 = 0x3f800000;
  *(uint *)&this_ptr->field_0x214 = 0;
  *(uint *)&this_ptr->field_0x218 = 0;
  *(uint *)&this_ptr->field_0x21c = 0;
  this_ptr->field_0x968 = 0;
  *(uint *)&this_ptr->field_0xa68 = 0;
  *(uint *)&this_ptr->field_0xa6c = 0;
  *(uint *)&this_ptr->field_0x260 = 0;
  *(uint *)&this_ptr->field_0xe8 = 0;
  *(uint *)&this_ptr->field_0x22c = 0;
  *(uint *)&this_ptr->field_0x25c = 0;
  *(uint *)&this_ptr->field_0x230 = 0;
  *(uint *)&this_ptr->field_0xb7c = 0;
  *(uint *)&this_ptr->field_0x264 = 0;
  *(uint *)&this_ptr->field_0x268 = 0;
  *(uint *)&this_ptr->field_0x26c = 0;
  *(uint *)&this_ptr->field_0x244 = 0;
  *(uint *)&this_ptr->field_0x23c = 0;
  *(uint *)&this_ptr->field_0x240 = 0;
  _DAT_01d22200 = 0;
  *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
  unkafter_alphabit_cpp_FUN_00411a40();
  _DAT_01d22c2c = 0;
  *(uint *)&this_ptr->field_0x234 = 0;
  core_game_cpp_CGame_setGameRes_FUN_004b7de0(this_ptr);
  pcVar4 = getenv("VELOCITY");
  if (pcVar4 != (char *)0x0) {
    *(uint *)&this_ptr->field_0x234 = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_0045c2a0(&g_CDemonLightInstance);
  pcVar4 = "Flashlight";
  core_game_cpp_FUN_004c48b0(this_ptr);
  pcVar8 = &g_CDemonLightInstance.field_0x40;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  g_CDemonLightInstance._320_4_ = 0x42000000;
  g_CDemonLightInstance._7348_1_ = 0;
  g_CDemonLightInstance._7349_3_ = 0;
  core_set_cpp_CDemonSet_initScene_FUN_00534420(g_CDemonSetPtr);
  if (_DAT_01d226c8 == 0) {
    core_fire_cpp_FUN_004a1480(0x01C73654);
  }
  else {
    _DAT_01d226c8 = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0053b660(g_CDemonSetPtr,(int *)&DAT_01d226cc);
  }
  if (*(int *)&this_ptr->field_0x248 < 0x8000) {
    *(uint *)&this_ptr->field_0x248 = 0x8000;
  }
  else if (0x10000 < *(int *)&this_ptr->field_0x248) {
    *(uint *)&this_ptr->field_0x248 = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,*(int *)&this_ptr->field_0x248);
  core_game_cpp_FUN_004b4710(this_ptr);
  shape_edittool_cpp_FUN_00484f10(&g_CPickList);
  if (*(int *)&this_ptr->field_0x324 == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_00534890(g_CDemonSetPtr,*(int *)&this_ptr->field_0x320)
    ;
  }
  else {
    core_setdir_cpp_FUN_0053f940(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc,1);
  }
  core_game_cpp_FUN_004bd620(this_ptr);
  core_game_cpp_CGame_loadAssets_FUN_004bd430(this_ptr);
  iVar5 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(g_CNetGamePtr,3);
  if ((iVar5 != 0) &&
     (iVar5 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(g_CNetGamePtr,4), iVar5 != 0)) {
    *(uint *)&g_CNetGamePtr->field_0x4 = 3;
    core_game_cpp_FUN_004b4430(this_ptr);
    core_game_cpp_FUN_004ba490(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00507790(g_CNetGamePtr);
    core_level_cpp_FUN_004dfc40(0x01D70AB8);
    *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
         *(uint *)&this_ptr->field_0xdc;
    _DAT_01d22c68 = 0;
    *(uint *)&this_ptr->field_0x284 = 0;
LAB_004b8391:
    iVar5 = _DAT_01d22c68;
    if (_DAT_01d22c3c != 0) {
      if ((DAT_007dffb4 == 0) && (*(int *)&g_CFieldNotesPtr->field_0x40 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 1;
      }
      if ((iVar5 != 0) && (_DAT_01d22c68 == 0)) {
        core_game_cpp_FUN_004b7ee0(this_ptr);
      }
      if ((iVar5 == 0) && (_DAT_01d22c68 != 0)) {
        core_game_cpp_CGame_setGameRes_FUN_004b7de0(this_ptr);
        core_set_cpp_CDemonSet_setCameraView_FUN_00534890
                  (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
      }
    }
    _DAT_01d22c68 = iVar5;
    if ((*(int *)&this_ptr->field_0x220 == 0) && (_DAT_01d22200 == 0)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(0x01D70A78,iVar5);
    core_game_cpp_CGame_processHotkeys_FUN_004ba540(this_ptr);
    core_game_cpp_FUN_004b4d50(this_ptr);
    core_game_cpp_FUN_004b4f00(this_ptr);
    core_game_cpp_CGame_playerControls_FUN_004b92e0(this_ptr);
    core_game_cpp_FUN_004c4bc0(this_ptr);
    iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), pCVar3 = g_CFieldNotesPtr,
       iVar5 != 0)) {
      *(uint *)&this_ptr->field_0x264 = 0;
      if (*(int *)&pCVar3->field_0x40 != 0) {
        *(uint *)&pCVar3->field_0x40 = 0;
      }
      if (DAT_007dffb4 != 0) {
        unkafter_alphabit_cpp_FUN_004119a0(DAT_007dffb4,0);
      }
    }
    if (*(int *)&g_CDemonSetPtr->field_0x15aeb8 < 0) {
      *(uint *)&g_CScriptPtr->field_0x10 = 2;
LAB_004b84e1:
      iVar5 = core_setdir_cpp_FUN_0053f940
                        (g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc,
                         *(uint *)&g_CScriptPtr->field_0x10);
      if (iVar5 != 0) {
        core_game_cpp_FUN_004b4430(this_ptr);
      }
      *(uint *)&g_CScriptPtr->field_0x10 = 0;
    }
    else if ((((*(int *)&this_ptr->field_0x324 != 0) && (*(int *)&this_ptr->field_0xe8 == 0)) &&
             (*(int *)&g_CNetGamePtr->field_0x178 == 0)) && (*(int *)&this_ptr->field_0x264 == 0))
    goto LAB_004b84e1;
    bVar2 = false;
    core_game_cpp_FUN_004b6f30(this_ptr);
    if (_DAT_01d22200 == 0) {
      iVar5 = (**(code **)(*(int *)0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar5 == 0) goto LAB_004b8719;
      if (*(int *)(0x01D81080 + 0x1014) != 0) goto LAB_004b8391;
      shape_edittool_cpp_FUN_00484f10(&g_CPickList);
      *(uint *)&this_ptr->field_0x224 = 0;
      if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
        if (DAT_007dffb4 == 0) {
          iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
          if (1 < iVar5) goto LAB_004b8594;
          if (*(int *)g_CNetGamePtr == 2) {
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&g_CPickList,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&g_CPickList,pcVar4);
            uVar10 = 1;
            iVar5 = 0;
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("You are connect to a network game.\nDo you want to leave the game?");
            shape_edittool_cpp_FUN_00483520(&g_CPickList,pcVar4,iVar5,uVar10);
            _DAT_01d22200 = 1;
          }
          else if (*(int *)g_CNetGamePtr == 1) {
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&g_CPickList,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&g_CPickList,pcVar4);
            uVar10 = 1;
            iVar5 = 0;
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("You are hosting a network game.\nDo you want to abort the game?");
            shape_edittool_cpp_FUN_00483520(&g_CPickList,pcVar4,iVar5,uVar10);
            _DAT_01d22200 = 1;
          }
          else {
            core_game_cpp_FUN_004c4cc0(this_ptr);
            core_sound_cpp_CSound_shutdown_FUN_0055fee0(0x02CF5680);
            shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_8a4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Return");
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_8a4,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Options");
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_8a4,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Load game");
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_8a4,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Save game");
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_8a4,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c276c);
            shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_8a4,pcVar4);
            if (*(int *)&this_ptr->field_0x24c == 1) {
              pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Skip cinematic.")
              ;
              shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_8a4,pcVar4);
            }
            if (*(int *)&this_ptr->field_0x24c != 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(&local_8a4,3,0);
            }
            uVar10 = 0;
            iVar5 = -1;
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Game paused");
            iVar5 = shape_edittool_cpp_FUN_00483450(&local_8a4,pcVar4,iVar5,uVar10);
            if (iVar5 == 1) {
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(0x01D70A78,0);
              core_game_cpp_FUN_004b7ee0(this_ptr);
              core_menu_cpp_FUN_004ea280(1);
              core_game_cpp_CGame_setGameRes_FUN_004b7de0(this_ptr);
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0
                        (0x01D70A78,(uint)(*(int *)&this_ptr->field_0x220 == 0));
              core_set_cpp_CDemonSet_setCameraView_FUN_00534890
                        (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
              _DAT_01c5b0e0 = _DAT_01549ab4;
              if (0xf0 < DAT_005fba1c) {
                _DAT_01c5b0e0 = _DAT_01549aa8;
              }
            }
            if (iVar5 == 2) {
              core_game_cpp_FUN_004bfa40(this_ptr);
            }
            if (iVar5 == 3) {
              core_game_cpp_FUN_004bda10(this_ptr,(char *)0x0);
            }
            if (iVar5 == 4) {
              pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c278d);
              iVar7 = shape_edittool_cpp_FUN_0047d8c0(g_CEditorToolsPtr,pcVar4);
              if (iVar7 != 0) {
                shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_8a4,0);
                goto LAB_004b8594;
              }
            }
            if (iVar5 == 5) {
              core_game_cpp_FUN_004bd470(this_ptr);
              iVar5 = core_script_cpp_FUN_00530530(g_CScriptPtr);
              *(uint *)&this_ptr->field_0xe8 = (uint)(iVar5 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_004032b0();
            core_sound_cpp_FUN_0055fd30(0x02CF5680);
            *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
                 *(uint *)&this_ptr->field_0xdc;
            bVar2 = true;
            shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_8a4,0);
          }
        }
        else {
          unkafter_alphabit_cpp_FUN_004119a0(DAT_007dffb4,0);
        }
      }
      else {
        *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
      }
    }
    else {
      if ((int)g_CPickList._0_4_ < 1) {
        _DAT_01d22200 = 0;
        goto LAB_004b8719;
      }
      iVar5 = shape_edittool_cpp_FUN_00483970(&g_CPickList);
      if (iVar5 != -2) {
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
        shape_edittool_cpp_FUN_00484f10(&g_CPickList);
        _DAT_01d22200 = 0;
      }
      if (iVar5 == 0) {
        core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(g_CNetGamePtr,1);
        goto LAB_004b8594;
      }
    }
LAB_004b8719:
    if (((*(int *)&this_ptr->field_0xe8 != 0) || (*(int *)&g_CNetGamePtr->field_0x178 != 0)) ||
       (bVar2)) {
      wincore_winrun_cpp_FUN_00580f70();
    }
    else {
      if (*(int *)&this_ptr->field_0x280 < 3) {
        engine_special_cpp_clearScreen_FUN_00560d70();
        *(int *)&this_ptr->field_0x280 = *(int *)&this_ptr->field_0x280 + 1;
      }
      if (_DAT_01c6cee8 == 0) {
        wincore_wddvmem_cpp_FUN_0057a8a0();
        *(int *)&this_ptr->field_0x31c = *(int *)&this_ptr->field_0x31c + 1;
      }
      else {
        engine_special_cpp_presentToExternalRenderer_FUN_00566260(1);
        wincore_winrun_cpp_FUN_00580f70();
        *(int *)&this_ptr->field_0x31c = *(int *)&this_ptr->field_0x31c + 1;
      }
    }
    if (_DAT_02d21b84 != 0) {
      _DAT_02d21b84 = 0;
      core_set_cpp_CDemonSet_setCameraView_FUN_00534890
                (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
    }
    if (*(float *)&this_ptr->field_0x294 <= 0.0) {
      this_ptr->field_0xb80 = 0;
    }
    else {
      *(float *)&this_ptr->field_0x294 =
           *(float *)&this_ptr->field_0x294 - *(float *)&this_ptr->field_0x314;
      fVar9 = (float10)1 + (float10)*(float *)&this_ptr->field_0x294;
      round();
      local_20 = (int)ROUND(fVar9);
      FUN_005a28c0(&this_ptr->field_0xb80,&DAT_005c2792,local_20);
      if (*(float *)&this_ptr->field_0x294 <= 0.0) {
        *(uint *)&this_ptr->field_0x294 = 0;
        core_game_cpp_CGame_beginFadeOut_FUN_004bd660(this_ptr);
        local_14 = -1.0;
      }
    }
    iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
    if ((iVar5 == 2) || ((*(uint *)&this_ptr->field_0x294 & 0x7fffffff) == 0)) {
      iVar5 = (**(code **)(*(int *)0x01D70A78 + 4))(0x01D70A78,0x1c);
      if (iVar5 != 0) goto LAB_004b8594;
      if (local_14 < 0.0) {
        uVar10 = core_game_cpp_CGame_fadeIn_FUN_004bd8d0(this_ptr);
        if (uVar10 != 0) goto LAB_004b8594;
      }
      else {
        local_14 = local_14 + *(float *)&this_ptr->field_0x314;
        if ((float)_DAT_005c27b8 < local_14) {
          core_game_cpp_CGame_beginFadeOut_FUN_004bd660(this_ptr);
          local_14 = -1.0;
        }
      }
    }
    if (*(int *)g_CScriptPtr != 0) {
      local_1c = 1;
      goto LAB_004b8594;
    }
    core_game_cpp_FUN_004bec20(this_ptr);
    if (*(int *)&this_ptr->field_0x224 != 0) {
      wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    }
    if (*(int *)&this_ptr->field_0xa78 == 0) {
      if (local_18 != 0) {
        local_18 = *(int *)&this_ptr->field_0xa78;
        core_sound_cpp_FUN_0055fd30(0x02CF5680);
      }
      if (*(int *)&this_ptr->field_0x290 != 0) {
        core_event_cpp_FUN_004946f0(0x01C6E360,"NewSet",1);
        *(int *)&this_ptr->field_0x290 = *(int *)&this_ptr->field_0x290 + -1;
      }
      goto LAB_004b8391;
    }
    local_1c = 0;
  }
LAB_004b8594:
  iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
  if (((iVar5 == 2) || ((*(uint *)&this_ptr->field_0x294 & 0x7fffffff) == 0)) &&
     (*(int *)&this_ptr->field_0xa78 == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_4e4);
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Load game");
    shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_4e4,pcVar4);
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c27a6);
    shape_edittool_cpp_CStrList_add_FUN_00482070((CStrList *)&local_4e4,pcVar4);
    do {
      uVar10 = 0;
      iVar5 = -1;
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Game Over");
      iVar5 = shape_edittool_cpp_FUN_00483450(&local_4e4,pcVar4,iVar5,uVar10);
      if (iVar5 == 0) {
        core_game_cpp_FUN_004bfa40(this_ptr);
        break;
      }
    } while (iVar5 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_4e4,0);
  }
  uVar6 = unkafter_mission_cpp_FUN_004f7bf0(0x01D81080);
  this_ptr_00 = 0x01D70A78;
  *(uint *)&this_ptr->field_0x274 = uVar6;
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(this_ptr_00,0);
  core_sound_cpp_CSound_shutdown_FUN_0055fee0(0x02CF5680);
  unkafter_alphabit_cpp_FUN_00411a40();
  core_game_cpp_FUN_004c49f0(this_ptr);
  core_game_cpp_FUN_004b7ee0(this_ptr);
  (**(code **)(*(int *)0x01D70A78 + 8))(0x01D70A78);
  core_set_cpp_FUN_00537520(g_CDemonSetPtr);
  *(uint *)&this_ptr->field_0x210 = 0x3f800000;
  shape_edittool_cpp_FUN_00484f10(&g_CPickList);
  core_inv_cpp_FUN_004da840();
  return local_1c;
}
