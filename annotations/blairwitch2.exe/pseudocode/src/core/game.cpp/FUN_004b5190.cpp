// Name: core_game.cpp_FUN_004b5190
// Address: 004b5190
// Address Range: [[004b5190, 004b5fcd]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b5190(CGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b5190(CGame *param_1)

{
  char cVar1;
  CNetGame *this_ptr;
  CBitFont *this_ptr_00;
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
  float afStackY_1080 [518];
  CVector3i *input_ptr;
  CSfxSample local_830;
  char local_5e0 [256];
  char local_4e0 [256];
  char local_3e0 [256];
  char local_2e0 [256];
  char local_1e0 [200];
  char local_118 [100];
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_98;
  float afStack_94 [4];
  float local_84;
  CVector3i local_80;
  CVector3i local_74 [2];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  _FILE *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  local_40 = 0;
  if (param_1->profile_mode != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  this_ptr = g_CNetGamePtr;
  _DAT_01e61b58 = 0;
  if ((param_1->cinematic_skip_in_progress == 0) && (g_CNetGamePtr->has_pending_sim_frame == 0)) {
    if (_DAT_01c37788 != 0) {
      wincore_wddvmem_cpp_openScreenDevice_FUN_005890c0();
      local_40 = 1;
    }
    if ((param_1->screen_clear_enabled != 0) || (param_1->screen_clear_condition != 0)) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
    }
    if (((g_CFieldNotesPtr->is_displayed == 0) && (param_1->goggles_active == 0)) &&
       (_DAT_026677e0 == (int *)0x0)) {
      core_set_cpp_FUN_0052f2a0(g_CDemonSetPtr,1);
    }
    if (_DAT_026677e0 != (int *)0x0) {
      (**(code **)(*_DAT_026677e0 + 0x1c))(_DAT_026677e0);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_0050f120(g_CNetGamePtr);
    if (param_1->is_paused == 0) {
      core_game_cpp_CGame_process_FUN_004bd570(param_1);
      core_sound_cpp_CSound_process_FUN_0055a3c0(0x0264B290);
    }
    else {
      core_slew_cpp_FUN_00549380(&local_b4);
      iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      if (&local_b4 != (uint *)(iVar2 + 0x20)) {
        local_b4 = *(uint *)(iVar2 + 0x20);
        local_b0 = *(uint *)(iVar2 + 0x24);
        local_ac = *(uint *)(iVar2 + 0x28);
      }
      iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      if (&local_a8 != (uint *)(iVar2 + 0x30)) {
        local_a8 = *(uint *)(iVar2 + 0x30);
        local_a4 = *(uint *)(iVar2 + 0x34);
        local_a0 = *(uint *)(iVar2 + 0x38);
      }
      core_slew_cpp_FUN_005493d0(&local_b4);
      iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x70))(iVar2,&local_b4,&local_a8);
      if ((DAT_01c2a384 & 1) != 0) {
        core_dcamera_cpp_FUN_0043c6b0(&g_CDemonCameraInstance,_DAT_01c2a37c,_DAT_01c2a380);
        input_ptr = &local_80;
        local_80.x = local_98;
        *(float *)((int)local_74 + (uint)bVar11 * -8 + -8) = afStack_94[(uint)bVar11 * -2];
        *(float *)((int)local_74 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -4) =
             afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                  (&g_CDemonCameraInstance,input_ptr,local_74);
        local_80.x = local_74[0].x;
        *(uint *)((int)local_74 + (uint)bVar11 * -8 + -8) =
             *(uint *)((int)local_74 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)local_74 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -4) =
             *(uint *)((int)local_74 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        afStack_94[2] = (float)local_80.x * _DAT_005f7558;
        afStack_94[3] = (float)local_80.y * _DAT_005f7558;
        local_84 = (float)local_80.z * _DAT_005f7558;
        iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x70))(iVar2,afStack_94 + 2,iVar2 + 0x30);
        DAT_01c2a384 = DAT_01c2a384 & 0xfe;
      }
    }
    core_game_cpp_CGame_updateDT_FUN_004b3010(param_1);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(g_CNetGamePtr);
    if (((g_CFieldNotesPtr->is_displayed == 0) && (param_1->goggles_active == 0)) &&
       (_DAT_026677e0 == (int *)0x0)) {
      core_set_cpp_CDemonSet_renderStaticLights_FUN_0052ef80(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
    if (param_1->profile_mode != 0) {
      local_14 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
      local_14 = local_14 - local_44;
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"screen paint : %3.2f ms\n")
      ;
    }
    if (param_1->skip_frame_render == 0) {
      engine_special_cpp_FUN_0055f500();
      if (g_CFieldNotesPtr->is_displayed == 0) {
        if (_DAT_026677e0 == (int *)0x0) {
          if (param_1->goggles_active == 0) {
            if (param_1->special_view_active != 0) {
              core_set_cpp_FUN_0052fea0(g_CDemonSetPtr);
            }
          }
          else {
            core_set_cpp_FUN_0052fad0(g_CDemonSetPtr);
          }
        }
        else {
          (**(code **)(*_DAT_026677e0 + 0x18))(_DAT_026677e0);
        }
      }
      else {
        core_fldnotes_cpp_FUN_004a5700(g_CFieldNotesPtr);
      }
      if (((param_1->developer_mode_enabled != 0) ||
          (pcVar10 = getenv("SPOOKHOUSE"), pcVar10 != (char *)0x0))
         && (iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x3e), iVar2 != 0)) {
        _DAT_01cb7420 = _DAT_01cb7420 + 1;
        _sprintf((char *)0x1cb7428,"demon%d.pcx");
        engine_pcx_c_saveScreenshotGeneral_FUN_00514a30((char *)0x1cb7428);
      }
      iVar2 = core_event_cpp_CEventList_findTimer_FUN_004915e0(0x01C38BC0,"blood_timer");
      if (-1 < iVar2) {
        local_14 = core_event_cpp_FUN_00491240(0x01C38BC0,iVar2);
        this_ptr_00 = _DAT_01511cc0;
        _sprintf(local_4e0,&DAT_005d750f);
        engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr_00,0x58);
        iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(this_ptr_00,local_4e0);
        engine_font_cpp_FUN_004a8df0(this_ptr_00,local_4e0,(DAT_006141b8 - iVar2) / 2,0x32,1,0);
      }
      core_inv_cpp_FUN_004dd9b0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c);
      if (param_1->screen_clear_enabled != 0) {
        core_set_cpp_CDemonSet_renderLightDebugView_FUN_005307a0(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004b30d0(param_1);
      if (_DAT_01cb80d0 != 0) {
        iVar2 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
        if ((iVar2 != 0) &&
           (iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2f), iVar2 != 0)) {
          iVar2 = _DAT_01cb80d4;
          if (_DAT_01cb80d4 == 0) {
            _DAT_01cb80d4 = 1;
            _DAT_01cb80dc = iVar2;
          }
          else {
            _DAT_01cb80d4 = 0;
          }
        }
        if ((_DAT_01cb80d8 < 1) || (_DAT_01cb80dc < _DAT_01cb80d8)) {
          if (_DAT_01cb80d4 != 0) {
            _sprintf(local_118,"noc%05d.raw");
            _sprintf(local_1e0,"Movie recording active: movie\\%s");
            local_34 = engine_dosio_cpp_FUN_00460c70("movie",local_118,&DAT_005d72e4);
            if (local_34 != (_FILE *)0x0) {
              local_38 = 0;
              if (0 < 0x00000040) {
                do {
                  local_30 = 0;
                  if (0 < 0x00000040) {
                    local_3c = local_38 + 1;
                    do {
                      local_28 = (local_30 * DAT_006141b8) / 0x00000040;
                      local_20 = ((local_30 + 1) * DAT_006141b8) / 0x00000040;
                      iVar2 = (local_38 * DAT_006141bc) / 0x00000040;
                      iVar5 = (local_3c * DAT_006141bc) / 0x00000040;
                      iVar8 = 0;
                      local_1c = 0;
                      local_18 = 0;
                      iVar9 = 0;
                      if (iVar2 < iVar5) {
                        local_24 = iVar2 * 4;
                        local_2c = iVar5 << 2;
                        do {
                          if (local_28 < local_20) {
                            puVar7 = (uint *)(local_28 * 4 + *(int *)(&DAT_01c2a38c + local_24));
                            iVar2 = local_28;
                            do {
                              uVar4 = *puVar7;
                              iVar9 = iVar9 + (uVar4 >> 0x10 & 0xff);
                              puVar7 = puVar7 + 1;
                              iVar8 = iVar8 + (uVar4 >> 8 & 0xff);
                              iVar2 = iVar2 + 1;
                              local_18 = local_18 + (uVar4 & 0xff);
                              local_1c = local_1c + 1;
                            } while (iVar2 < local_20);
                          }
                          local_24 = local_24 + 4;
                        } while (local_24 < local_2c);
                      }
                      iVar8 = iVar8 / local_1c;
                      local_18 = local_18 / local_1c;
                      _fputc(iVar9 / local_1c,local_34);
                      _fputc(iVar8,local_34);
                      iVar2 = local_30 + 1;
                      local_30 = iVar2;
                      _fputc(local_18,local_34);
                    } while (iVar2 < 0x00000040);
                  }
                  local_38 = local_38 + 1;
                } while (local_38 < 0x00000040);
              }
              _fclose(local_34);
              engine_2d_c_drawText_FUN_00401fe0(local_1e0,0,0);
              _DAT_01cb80dc = _DAT_01cb80dc + 1;
            }
          }
        }
        else {
          _DAT_01cb80d4 = 0;
        }
      }
      core_script_cpp_CScript_renderSubtitles_FUN_005218a0(g_CScriptPtr);
      core_game_cpp_CGame_renderOverlay_FUN_004b32c0(param_1);
      core_game_cpp_FUN_004bb3d0(param_1);
      if (param_1->camera_debug_enabled == 0) {
        _DAT_01cb1110 = 0.0;
        _DAT_01cb1118 = 0;
      }
      else {
        engine_dosio_cpp_splitPath_FUN_00461070
                  (g_CDemonSetPtr->geometry_filename,(char *)0x0,(char *)0x0,local_3e0,(char *)0x0);
        _sprintf((char *)&local_830.taken,"Set: %s Camera: \"%s\" group %d");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,DAT_006141bc + -0x16);
        _DAT_01cb1118 = _DAT_01cb1118 + 1;
        _DAT_01cb1110 = _DAT_01cb1110 + (double)param_1->delta_time_float;
        _sprintf((char *)&local_830.taken,"FR: %f, AVG: %f, PC: %d");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,DAT_006141bc + -0xb);
        _sprintf((char *)&local_830.taken,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,0);
        _sprintf((char *)&local_830.taken,"Slew : %s, Virtual Director : %s");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,0xb);
        if (param_1->debug_fudge_target != (CVector3f *)0x0) {
          _sprintf((char *)&local_830.taken,"Fudge: %g,%g,%g");
          engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,DAT_006141bc + -0x4d);
        }
        sound_sndmain_cpp_getSoundMemoryStats_FUN_00551cb0
                  (&local_50,&local_5c,&local_4c,&local_48,&local_58,&local_54);
        local_14 = local_5c;
        sound_sndmain_cpp_countActiveSfx_FUN_005513f0();
        _sprintf((char *)&local_830.taken,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,DAT_006141bc + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_005750b0((char *)&local_830.taken);
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,DAT_006141bc + -0x37);
        core_skeleton_cpp_FUN_005490d0((char *)&local_830.taken);
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,DAT_006141bc + -0x2c);
        engine_2d_c_drawText_FUN_00401fe0(param_1->debug_info_string,0,DAT_006141bc + -0x21);
        if (_DAT_0264bba0 != 0) {
          uVar3 = engine_special_cpp_FUN_005601a0(0x400);
          uVar3 = engine_special_cpp_FUN_005601a0(0x200,uVar3);
          uVar3 = engine_special_cpp_FUN_005601a0(0x100,uVar3);
          uVar3 = engine_special_cpp_FUN_005601a0(0x80,uVar3);
          uVar3 = engine_special_cpp_FUN_005601a0(0x40,uVar3);
          engine_special_cpp_FUN_005601a0(0x20,uVar3);
          _sprintf((char *)&local_830.taken,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d");
          engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,0x2c);
        }
      }
      if (_DAT_01cb80e4 != 0) {
        uVar4 = sound_sndmain_cpp_getFirstActiveSfx_FUN_005512f0();
        iVar2 = 0x37;
        for (; uVar4 != 0; uVar4 = sound_sndmain_cpp_FUN_00551330(uVar4)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(&local_830);
          iVar5 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00550bf0(uVar4,&local_830);
          if (iVar5 != 0) {
            engine_2d_c_drawTextXY_FUN_00402140(0,iVar2,(char *)&local_830);
            iVar2 = iVar2 + 0xb;
          }
        }
      }
      if (param_1->event_processing_enabled != 0) {
        core_event_cpp_CEventList_render_FUN_0048e490(0x01C38BC0);
      }
      if ((param_1->subtitle_system_enabled != 0) && (param_1->screen_clear_enabled != 0)) {
        core_script_cpp_CScript_renderEditor_FUN_00521af0
                  (g_CScriptPtr,0,0xf0,DAT_006141b8 + -1,DAT_006141bc + -1);
      }
      if (param_1->editor_tools_enabled != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0
                  (g_CEditorToolsPtr,local_5e0);
        engine_2d_c_drawText_FUN_00401fe0(local_5e0,0,DAT_006141bc + -0x42);
      }
      iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x114))(iVar2);
      if (iVar2 == 2) {
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You have failed");
        pcVar10 = local_2e0;
        do {
          cVar1 = *pcVar6;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                  (_DAT_01511cb8,0,DAT_006141b8,DAT_006141bc + _DAT_01511cb8->max_char_height * -2,
                   (uint)DAT_01c34510,0,local_2e0);
      }
      if (param_1->show_customizable_keys != 0) {
        core_game_cpp_CGame_showCustomizableKeys_FUN_004b3c50(param_1);
      }
      if (param_1->console_enabled != 0) {
        engine_console_cpp_CConsole_render_FUN_00436970(g_CConsolePtr);
      }
      if (0 < g_CPickList.base.item_count) {
        shape_edittool_cpp_CPickList_renderDialog_FUN_004831d0(&g_CPickList);
      }
      if ((param_1->is_paused != 0) || (param_1->game_control == CONTROL_MODE_POINT_AND_CLICK)) {
        shape_edittool_cpp_FUN_0047f210(g_CEditorToolsPtr,0);
      }
      engine_special_cpp_unlockFrame_FUN_0055f550(0);
    }
    if (local_40 != 0) {
      wincore_wddvmem_cpp_closeScreenDevice_FUN_00589170();
      return;
    }
  }
  else {
    param_1->is_paused = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_0050f120(this_ptr);
    core_game_cpp_CGame_process_FUN_004bd570(param_1);
    if (param_1->cinematic_skip_in_progress == 0) {
      core_game_cpp_CGame_updateDT_FUN_004b3010(param_1);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004bd460(param_1,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(g_CNetGamePtr);
  }
  return;
}
