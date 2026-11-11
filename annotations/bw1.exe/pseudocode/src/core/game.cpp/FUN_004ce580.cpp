// Name: core_game.cpp_FUN_004ce580
// Address: 004ce580
// Address Range: [[004ce580, 004cf429]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004ce580(CGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004ce580(CGame *param_1)

{
  char cVar1;
  CNetGame *this_ptr;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  int aiStackY_1074 [579];
  int *piVar12;
  int iStack_728;
  CSfxSample CStack_724;
  char acStack_4d4 [256];
  char acStack_3d4 [256];
  char acStack_2d4 [256];
  char acStack_1d4 [200];
  char acStack_10c [100];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  int iStack_8c;
  int aiStack_88 [5];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int iStack_68;
  int aiStack_64 [4];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  _FILE *p_Stack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar11 = 0;
  local_44 = 0;
  if (param_1->profile_mode != 0) {
    local_48 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  this_ptr = g_CNetGamePtr;
  _DAT_01e7dac8 = 0;
  if ((param_1->cinematic_skip_in_progress == 0) && (g_CNetGamePtr->has_pending_sim_frame == 0)) {
    if (_DAT_01c50948 != 0) {
      wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10();
      local_44 = 1;
    }
    if ((param_1->screen_clear_enabled != 0) || (param_1->screen_clear_condition != 0)) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
    }
    if (((g_CFieldNotesPtr->is_displayed == 0) && (param_1->goggles_active == 0)) &&
       (DAT_007c3978 == (int *)0x0)) {
      core_set_cpp_FUN_00550580(g_CDemonSetPtr,1);
    }
    if (DAT_007c3978 != (int *)0x0) {
      (**(code **)(*DAT_007c3978 + 0x1c))(DAT_007c3978);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(g_CNetGamePtr);
    if (param_1->is_paused == 0) {
      core_game_cpp_CGame_process_FUN_004d8060(param_1);
      core_sound_cpp_CSound_process_FUN_0057ce10(0x02C82A60);
    }
    else {
      core_slew_cpp_FUN_0056ba00(&uStack_a8);
      iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (&uStack_a8 != (uint *)(iVar2 + 0x20)) {
        uStack_a8 = *(uint *)(iVar2 + 0x20);
        uStack_a4 = *(uint *)(iVar2 + 0x24);
        uStack_a0 = *(uint *)(iVar2 + 0x28);
      }
      iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (&uStack_9c != (uint *)(iVar2 + 0x30)) {
        uStack_9c = *(uint *)(iVar2 + 0x30);
        uStack_98 = *(uint *)(iVar2 + 0x34);
        uStack_94 = *(uint *)(iVar2 + 0x38);
      }
      core_slew_cpp_FUN_0056ba50(&uStack_a8);
      iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x68))(iVar2,&uStack_a8,&uStack_9c);
      if ((DAT_01c43544 & 1) != 0) {
        core_dcamera_cpp_FUN_0044dd70(&g_CDemonCameraInstance,_DAT_01c4353c,_DAT_01c43540);
        piVar12 = &iStack_8c;
        iStack_8c = iStack_68;
        aiStack_88[(uint)bVar11 * -2] = aiStack_64[(uint)bVar11 * -2];
        aiStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             aiStack_64[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_dcamera_cpp_FUN_0044de40(&g_CDemonCameraInstance,piVar12);
        iStack_8c = aiStack_88[2];
        aiStack_88[(uint)bVar11 * -2] = aiStack_88[(uint)bVar11 * -2 + 3];
        aiStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             aiStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_74 = (float)iStack_8c * _DAT_00600f74;
        fStack_70 = (float)aiStack_88[0] * _DAT_00600f74;
        fStack_6c = (float)aiStack_88[1] * _DAT_00600f74;
        iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        (**(code **)(*(int *)(iVar2 + 0x154) + 0x68))(iVar2,&fStack_74,iVar2 + 0x30);
        DAT_01c43544 = DAT_01c43544 & 0xfe;
      }
    }
    core_game_cpp_FUN_004cbf20(param_1);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(g_CNetGamePtr);
    if (((g_CFieldNotesPtr->is_displayed == 0) && (param_1->goggles_active == 0)) &&
       (DAT_007c3978 == (int *)0x0)) {
      core_set_cpp_CDemonSet_renderStaticLights_FUN_00550260(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
    if (param_1->profile_mode != 0) {
      iStack_18 = wincore_winrun_cpp_getTime_FUN_005b2420();
      iStack_18 = iStack_18 - local_48;
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"screen paint : %3.2f ms\n",
                 ((double)iStack_18 * _DAT_005e171c * _DAT_005e1724 * _DAT_005e172c) /
                 (double)g_CGamePtr->delta_time_float);
    }
    if (param_1->skip_frame_render == 0) {
      engine_special_cpp_FUN_00581f50();
      if (g_CFieldNotesPtr->is_displayed == 0) {
        if (DAT_007c3978 == (int *)0x0) {
          if (param_1->goggles_active == 0) {
            if (param_1->special_view_active != 0) {
              core_set_cpp_FUN_00551170(g_CDemonSetPtr);
            }
          }
          else {
            core_set_cpp_FUN_00550da0(g_CDemonSetPtr);
          }
        }
        else {
          (**(code **)(*DAT_007c3978 + 0x18))(DAT_007c3978);
        }
      }
      else {
        core_fldnotes_cpp_FUN_004be0f0(g_CFieldNotesPtr);
      }
      if (((param_1->developer_mode_enabled != 0) ||
          (pcVar10 = getenv("SPOOKHOUSE"), pcVar10 != (char *)0x0))
         && (iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x3e), iVar2 != 0)) {
        _DAT_01ccfe94 = _DAT_01ccfe94 + 1;
        _sprintf((char *)0x1ccfe98,"demon%d.pcx");
        engine_pcx_c_saveScreenshotGeneral_FUN_00535d80((char *)0x1ccfe98);
      }
      core_inv_cpp_FUN_004fae10(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8);
      if (param_1->screen_clear_enabled != 0) {
        core_set_cpp_CDemonSet_renderLightDebugView_FUN_00551a50(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004cc0c0(param_1);
      if (_DAT_01cd0c38 != 0) {
        iVar2 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
        if ((iVar2 != 0) &&
           (iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2f), iVar2 != 0)) {
          iVar2 = _DAT_01cd0c3c;
          if (_DAT_01cd0c3c == 0) {
            _DAT_01cd0c3c = 1;
            _DAT_01cd0c44 = iVar2;
          }
          else {
            _DAT_01cd0c3c = 0;
          }
        }
        if ((_DAT_01cd0c40 < 1) || (_DAT_01cd0c44 < _DAT_01cd0c40)) {
          if (_DAT_01cd0c3c != 0) {
            _sprintf(acStack_10c,"noc%05d.raw");
            _sprintf(acStack_1d4,"Movie recording active: movie\\%s");
            p_Stack_38 = engine_dosio_cpp_FUN_00479180("movie",acStack_10c,&DAT_005e135d);
            if (p_Stack_38 != (_FILE *)0x0) {
              iStack_3c = 0;
              if (0 < 0x00000040) {
                do {
                  iStack_34 = 0;
                  if (0 < 0x00000040) {
                    iStack_40 = iStack_3c + 1;
                    do {
                      iStack_2c = (iStack_34 * DAT_0061b498) / 0x00000040;
                      iStack_24 = ((iStack_34 + 1) * DAT_0061b498) / 0x00000040;
                      iVar2 = (iStack_3c * DAT_0061b49c) / 0x00000040;
                      iVar5 = (iStack_40 * DAT_0061b49c) / 0x00000040;
                      iStack_1c = 0;
                      iStack_20 = 0;
                      iVar8 = 0;
                      iVar9 = 0;
                      if (iVar2 < iVar5) {
                        iStack_28 = iVar2 << 2;
                        iStack_30 = iVar5 << 2;
                        do {
                          if (iStack_2c < iStack_24) {
                            puVar7 = (uint *)(iStack_2c * 4 + *(int *)(&DAT_01c4354c + iStack_28));
                            iVar2 = iStack_2c;
                            do {
                              uVar4 = *puVar7;
                              puVar7 = puVar7 + 1;
                              iStack_20 = iStack_20 + (uVar4 >> 0x10 & 0xff);
                              iVar2 = iVar2 + 1;
                              iVar8 = iVar8 + (uVar4 & 0xff);
                              iStack_1c = iStack_1c + 1;
                              iVar9 = iVar9 + (uVar4 >> 8 & 0xff);
                            } while (iVar2 < iStack_24);
                          }
                          iStack_28 = iStack_28 + 4;
                        } while (iStack_28 < iStack_30);
                      }
                      iStack_20 = iStack_20 / iStack_1c;
                      iVar9 = iVar9 / iStack_1c;
                      iVar8 = iVar8 / iStack_1c;
                      _fputc(iStack_20,p_Stack_38);
                      _fputc(iVar9,p_Stack_38);
                      _fputc(iVar8,p_Stack_38);
                      iStack_34 = iStack_34 + 1;
                    } while (iStack_34 < 0x00000040);
                  }
                  iStack_3c = iStack_3c + 1;
                } while (iStack_3c < 0x00000040);
              }
              _fclose(p_Stack_38);
              engine_2d_c_drawText_FUN_00401fe0(acStack_1d4,0,0);
              _DAT_01cd0c44 = _DAT_01cd0c44 + 1;
            }
          }
        }
        else {
          _DAT_01cd0c3c = 0;
        }
      }
      core_script_cpp_CScript_renderSubtitles_FUN_005439b0(g_CScriptPtr);
      core_game_cpp_CGame_renderOverlay_FUN_004cc2b0(param_1);
      core_game_cpp_CGame_renderIrisFade_FUN_004d61e0(param_1);
      if (param_1->camera_debug_enabled == 0) {
        _DAT_01cc9ba0 = 0.0;
        _DAT_01cc9ba8 = 0;
      }
      else {
        engine_dosio_cpp_splitPath_FUN_00479580
                  (g_CDemonSetPtr->geometry_filename,(char *)0x0,(char *)0x0,
                   (char *)&CStack_724.taken,(char *)0x0);
        _sprintf(acStack_2d4,"Set: %s Camera: \"%s\" group %d");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x16);
        _DAT_01cc9ba8 = _DAT_01cc9ba8 + 1;
        _DAT_01cc9ba0 = _DAT_01cc9ba0 + (double)param_1->delta_time_float;
        _sprintf(acStack_2d4,"FR: %f, AVG: %f, PC: %d");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0xb);
        _sprintf(acStack_2d4,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0);
        _sprintf(acStack_2d4,"Slew : %s, Virtual Director : %s");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0xb);
        if (param_1->debug_fudge_target != (CVector3f *)0x0) {
          _sprintf(acStack_2d4,"Fudge: %g,%g,%g");
          engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x4d);
        }
        sound_sndmain_cpp_getSoundMemoryStats_FUN_005746e0
                  (aiStack_64 + 4,&stack0xfffff8d8,&iStack_50,(int *)&stack0xfffff8d4,&iStack_4c,
                   (int *)&stack0xfffff8d0);
        iStack_18 = iStack_728;
        sound_sndmain_cpp_countActiveSfx_FUN_00573e20();
        _sprintf(acStack_2d4,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_00597cd0(acStack_2d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x37);
        core_skeleton_cpp_FUN_0056b780(acStack_2d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x2c);
        engine_2d_c_drawText_FUN_00401fe0(param_1->debug_info_string,0,DAT_0061b49c + -0x21);
        if (_DAT_02c83370 != 0) {
          uVar3 = engine_special_cpp_FUN_00582bf0(0x400);
          uVar3 = engine_special_cpp_FUN_00582bf0(0x200,uVar3);
          uVar3 = engine_special_cpp_FUN_00582bf0(0x100,uVar3);
          uVar3 = engine_special_cpp_FUN_00582bf0(0x80,uVar3);
          uVar3 = engine_special_cpp_FUN_00582bf0(0x40,uVar3);
          engine_special_cpp_FUN_00582bf0(0x20,uVar3);
          _sprintf(acStack_2d4,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d");
          engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0x2c);
        }
      }
      if (_DAT_01cd0c48 != 0) {
        uVar4 = sound_sndmain_cpp_getFirstActiveSfx_FUN_00573d20();
        iVar2 = 0x37;
        for (; uVar4 != 0; uVar4 = sound_sndmain_cpp_FUN_00573d60(uVar4)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_00572340(&CStack_724);
          iVar5 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00573620(uVar4,&CStack_724);
          if (iVar5 != 0) {
            engine_2d_c_drawTextXY_FUN_00402140(0,iVar2,(char *)&CStack_724);
            iVar2 = iVar2 + 0xb;
          }
        }
      }
      if (param_1->event_processing_enabled != 0) {
        core_event_cpp_CEventList_render_FUN_004a6d80(0x01C51D80);
      }
      if ((param_1->subtitle_system_enabled != 0) && (param_1->screen_clear_enabled != 0)) {
        core_script_cpp_CScript_renderEditor_FUN_00543c00
                  (g_CScriptPtr,0,0xf0,DAT_0061b498 + -1,DAT_0061b49c + -1);
      }
      if (param_1->editor_tools_enabled != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40
                  (g_CEditorToolsPtr,acStack_4d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_4d4,0,DAT_0061b49c + -0x42);
      }
      iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if (iVar2 == 2) {
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("You're dead.  Game over.");
        pcVar10 = acStack_3d4;
        do {
          cVar1 = *pcVar6;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
      }
      if (param_1->show_customizable_keys != 0) {
        core_game_cpp_CGame_showCustomizableKeys_FUN_004ccc40(param_1);
      }
      if (param_1->console_enabled != 0) {
        engine_console_cpp_CConsole_render_FUN_00445690(g_CConsolePtr);
      }
      if (0 < g_CPickList.base.item_count) {
        shape_edittool_cpp_CPickList_renderDialog_FUN_0049b830(&g_CPickList);
      }
      if (param_1->is_paused != 0) {
        shape_edittool_cpp_FUN_00497870(g_CEditorToolsPtr,0);
      }
      if ((param_1->game_control == CONTROL_MODE_POINT_AND_CLICK) &&
         (core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (0x01C51D80,"MouseControlMode"), -1 < _DAT_01cd0b40)) {
        core_game_cpp_FUN_004dc1a0(param_1);
      }
      uVar4 = param_1->goggles_active | param_1->special_view_active;
      if ((uVar4 == 0) && (_DAT_01cd0c5c != 0)) {
        engine_special_cpp_clearScreen_FUN_0057dc40();
      }
      _DAT_01cd0c5c = uVar4;
      engine_special_cpp_unlockFrame_FUN_00581fa0(0);
    }
    if (local_44 != 0) {
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005acc00();
      return;
    }
  }
  else {
    param_1->is_paused = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(this_ptr);
    core_game_cpp_CGame_process_FUN_004d8060(param_1);
    if (param_1->cinematic_skip_in_progress == 0) {
      core_game_cpp_FUN_004cbf20(param_1);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004d7f50(param_1,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(g_CNetGamePtr);
  }
  return;
}
