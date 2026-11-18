// Name: core_game.cpp_CGame_processFrame_FUN_004b5190
// Address: 004b5190
// Address Range: [[004b5190, 004b5fcd]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFrame_FUN_004b5190(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_game_cpp_CGame_processFrame_FUN_004b5190(CGame *this_ptr)

{
  char cVar1;
  CHero *pCVar2;
  CNetGame *this_ptr_00;
  CBitFont *this_ptr_01;
  int iVar3;
  uint uVar4;
  int iVar5;
  EDeathState EVar6;
  char *pcVar7;
  uint *puVar8;
  CLocation *pCVar9;
  UOrientationVector *pUVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  byte bVar14;
  uint auStackY_1080 [518];
  CVector3i *input_ptr;
  CSfxSample local_830;
  char local_5e0 [256];
  char local_4e0 [256];
  char local_3e0 [256];
  char local_2e0 [256];
  char local_1e0 [200];
  char local_118 [100];
  CSlew local_b4;
  CVector3i local_98;
  CVector3f local_8c;
  CVector3i local_80;
  CVector3i local_74 [2];
  float local_5c;
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
  float local_14;
  
  bVar14 = 0;
  local_40 = 0;
  if (this_ptr->profile_mode != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  this_ptr_00 = g_CNetGamePtr;
  g_RenderedTriangleCount = 0;
  if ((this_ptr->cinematic_skip_in_progress == 0) && (g_CNetGamePtr->has_pending_sim_frame == 0)) {
    if (g_INT_01c37788 != 0) {
      wincore_wddvmem_cpp_openScreenDevice_FUN_005890c0();
      local_40 = 1;
    }
    if ((this_ptr->screen_clear_enabled != 0) || (this_ptr->screen_clear_condition != 0)) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
    }
    if (((g_CFieldNotesPtr->is_displayed == 0) && (this_ptr->goggles_active == 0)) &&
       (g_INT_026677e0 == 0)) {
      core_set_cpp_CDemonSet_renderScene_FUN_0052f2a0(g_CDemonSetPtr,1);
    }
    if (g_INT_026677e0 != 0) {
      (**(code **)(*(int *)g_INT_026677e0 + 0x1c))(g_INT_026677e0);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_0050f120(g_CNetGamePtr);
    if (this_ptr->is_paused == 0) {
      core_game_cpp_CGame_process_FUN_004bd570(this_ptr);
      core_sound_cpp_CSound_process_FUN_0055a3c0(g_CSound_PTR_0061c068);
    }
    else {
      core_slew_cpp_CSlew_init_FUN_00549380(&local_b4);
      pCVar2 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
      pCVar9 = &(pCVar2->base).base.location;
      if (&local_b4 != (CSlew *)pCVar9) {
        local_b4.position.x = (pCVar9->position).x;
        local_b4.position.y = (pCVar2->base).base.location.position.y;
        local_b4.position.z = (pCVar2->base).base.location.position.z;
      }
      pCVar2 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
      pUVar10 = &(pCVar2->base).base.orient;
      if (&local_b4.orientation != pUVar10) {
        local_b4.orientation.vec.x = (pUVar10->vec).x;
        local_b4.orientation.vec.y = (pCVar2->base).base.orient.vec.y;
        local_b4.orientation.vec.z = (pCVar2->base).base.orient.vec.z;
      }
      core_slew_cpp_CSlew_processInput_FUN_005493d0(&local_b4);
      (*((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._ub)->
        setPositionAndOrientation)
                ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4],&local_b4.position,
                 (CVector3f *)&local_b4.orientation);
      if ((g_MouseButtonFlags.bytes[0] & 1) != 0) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
                  (&g_CDemonCameraInstance,g_MouseX,g_MouseY,&local_98);
        input_ptr = &local_80;
        local_80.x = local_98.x;
        *(uint *)((int)local_74 + (uint)bVar14 * -8 + -8) =
             *(uint *)((int)&local_98 + (uint)bVar14 * -8 + 4);
        *(uint *)((int)local_74 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + -4) =
             *(uint *)((int)&local_98 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                  (&g_CDemonCameraInstance,input_ptr,local_74);
        local_80.x = local_74[0].x;
        *(uint *)((int)local_74 + (uint)bVar14 * -8 + -8) =
             *(uint *)((int)local_74 + (uint)bVar14 * -8 + 4);
        *(uint *)((int)local_74 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + -4) =
             *(uint *)((int)local_74 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        local_8c.x = (float)local_80.x * 0.00390625f;
        local_8c.y = (float)local_80.y * 0.00390625f;
        local_8c.z = (float)local_80.z * 0.00390625f;
        pCVar2 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
        (*((pCVar2->base).base.vtable._ub)->setPositionAndOrientation)
                  ((CDemonActor *)pCVar2,&local_8c,(CVector3f *)&(pCVar2->base).base.orient);
        g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
      }
    }
    core_game_cpp_CGame_updateDT_FUN_004b3010(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(g_CNetGamePtr);
    if (((g_CFieldNotesPtr->is_displayed == 0) && (this_ptr->goggles_active == 0)) &&
       (g_INT_026677e0 == 0)) {
      core_set_cpp_CDemonSet_renderStaticLights_FUN_0052ef80(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (g_CDemonRenderer_PTR_0060b280,0xffff);
    if (this_ptr->profile_mode != 0) {
      iVar3 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
      local_14 = (float)(iVar3 - local_44);
      engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"screen paint : %3.2f ms\n")
      ;
    }
    if (this_ptr->skip_frame_render == 0) {
      engine_special_cpp_lockFrame_FUN_0055f500();
      if (g_CFieldNotesPtr->is_displayed == 0) {
        if (g_INT_026677e0 == 0) {
          if (this_ptr->goggles_active == 0) {
            if (this_ptr->special_view_active != 0) {
              core_set_cpp_CDemonSet_renderMonsterVisionView_FUN_0052fea0(g_CDemonSetPtr);
            }
          }
          else {
            core_set_cpp_CDemonSet_renderGogglesView_FUN_0052fad0(g_CDemonSetPtr);
          }
        }
        else {
          (**(code **)(*(int *)g_INT_026677e0 + 0x18))(g_INT_026677e0);
        }
      }
      else {
        core_fldnotes_cpp_CFieldNotes_draw_FUN_004a5700(g_CFieldNotesPtr);
      }
      if (((this_ptr->developer_mode_enabled != 0) ||
          (pcVar13 = getenv("SPOOKHOUSE"), pcVar13 != (char *)0x0))
         && (iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F4), iVar3 != 0)) {
        g_ScreenshotIndex = g_ScreenshotIndex + 1;
        _sprintf(g_ScreenshotFilename,"demon%d.pcx");
        engine_pcx_c_saveScreenshotGeneral_FUN_00514a30(g_ScreenshotFilename);
      }
      iVar3 = core_event_cpp_CEventList_findTimer_FUN_004915e0
                        (g_CEventListPtr,"blood_timer");
      if (-1 < iVar3) {
        local_14 = core_event_cpp_CEventList_getTimerValue_FUN_00491240(g_CEventListPtr,iVar3);
        this_ptr_01 = g_ThemeFont;
        _sprintf(local_4e0,"%.0f");
        engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr_01,0x58);
        iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(this_ptr_01,local_4e0);
        engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                  (this_ptr_01,local_4e0,(g_INT_006141b8 - iVar3) / 2,0x32,1,0);
      }
      core_inv_cpp_CInventory_renderAllItems_FUN_004dd9b0
                (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories);
      if (this_ptr->screen_clear_enabled != 0) {
        core_set_cpp_CDemonSet_renderLightDebugView_FUN_005307a0(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004b30d0(this_ptr);
      if (g_MovieRecordingArmed != 0) {
        iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
        if ((iVar3 != 0) &&
           (iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V), iVar3 != 0)) {
          iVar3 = g_MovieRecordingActive;
          if (g_MovieRecordingActive == 0) {
            g_MovieRecordingActive = 1;
            g_MovieRecordingFrameCounter = iVar3;
          }
          else {
            g_MovieRecordingActive = 0;
          }
        }
        if ((g_MovieRecordingMaxFrames < 1) ||
           (g_MovieRecordingFrameCounter < g_MovieRecordingMaxFrames)) {
          if (g_MovieRecordingActive != 0) {
            _sprintf(local_118,"noc%05d.raw");
            _sprintf(local_1e0,"Movie recording active: movie\\%s");
            local_34 = engine_dosio_cpp_getFile_FUN_00460c70
                                 ("movie",local_118,"wb");
            if (local_34 != (_FILE *)0x0) {
              local_38 = 0;
              if (0 < g_MovieRecordingHeight) {
                do {
                  local_30 = 0;
                  if (0 < g_MovieRecordingWidth) {
                    local_3c = local_38 + 1;
                    do {
                      local_28 = (local_30 * g_INT_006141b8) / g_MovieRecordingWidth;
                      local_20 = ((local_30 + 1) * g_INT_006141b8) / g_MovieRecordingWidth;
                      iVar3 = (local_38 * g_INT_006141bc) / g_MovieRecordingHeight;
                      iVar5 = (local_3c * g_INT_006141bc) / g_MovieRecordingHeight;
                      iVar11 = 0;
                      local_1c = 0;
                      local_18 = 0;
                      iVar12 = 0;
                      if (iVar3 < iVar5) {
                        local_24 = iVar3 * 4;
                        local_2c = iVar5 << 2;
                        do {
                          if (local_28 < local_20) {
                            puVar8 = (uint *)(local_28 * 4 +
                                             *(int *)((int)g_ScreenBufferArray + local_24));
                            iVar3 = local_28;
                            do {
                              uVar4 = *puVar8;
                              iVar12 = iVar12 + (uVar4 >> 0x10 & 0xff);
                              puVar8 = puVar8 + 1;
                              iVar11 = iVar11 + (uVar4 >> 8 & 0xff);
                              iVar3 = iVar3 + 1;
                              local_18 = local_18 + (uVar4 & 0xff);
                              local_1c = local_1c + 1;
                            } while (iVar3 < local_20);
                          }
                          local_24 = local_24 + 4;
                        } while (local_24 < local_2c);
                      }
                      iVar11 = iVar11 / local_1c;
                      local_18 = local_18 / local_1c;
                      _fputc(iVar12 / local_1c,local_34);
                      _fputc(iVar11,local_34);
                      iVar3 = local_30 + 1;
                      local_30 = iVar3;
                      _fputc(local_18,local_34);
                    } while (iVar3 < g_MovieRecordingWidth);
                  }
                  local_38 = local_38 + 1;
                } while (local_38 < g_MovieRecordingHeight);
              }
              _fclose(local_34);
              engine_2d_c_drawText_FUN_00401fe0(local_1e0,0,0);
              g_MovieRecordingFrameCounter = g_MovieRecordingFrameCounter + 1;
            }
          }
        }
        else {
          g_MovieRecordingActive = 0;
        }
      }
      core_script_cpp_CScript_renderSubtitles_FUN_005218a0(g_CScriptPtr);
      core_game_cpp_CGame_renderOverlay_FUN_004b32c0(this_ptr);
      core_game_cpp_CGame_renderIrisFade_FUN_004bb3d0(this_ptr);
      if (this_ptr->camera_debug_enabled == 0) {
        g_DOUBLE_01cb1110 = 0.0;
        g_INT_01cb1118 = 0;
      }
      else {
        engine_dosio_cpp_splitPath_FUN_00461070
                  (g_CDemonSetPtr->geometry_filename,(char *)0x0,(char *)0x0,local_3e0,(char *)0x0);
        _sprintf((char *)&local_830.taken,"Set: %s Camera: \"%s\" group %d");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,g_INT_006141bc + -0x16);
        g_INT_01cb1118 = g_INT_01cb1118 + 1;
        g_DOUBLE_01cb1110 = g_DOUBLE_01cb1110 + (double)this_ptr->delta_time_float;
        _sprintf((char *)&local_830.taken,"FR: %f, AVG: %f, PC: %d");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,g_INT_006141bc + -0xb);
        _sprintf((char *)&local_830.taken,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,0);
        _sprintf((char *)&local_830.taken,"Slew : %s, Virtual Director : %s");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,0xb);
        if (this_ptr->debug_fudge_target != (CVector3f *)0x0) {
          _sprintf((char *)&local_830.taken,"Fudge: %g,%g,%g");
          engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,g_INT_006141bc + -0x4d);
        }
        sound_sndmain_cpp_getSoundMemoryStats_FUN_00551cb0
                  (&local_50,(int *)&local_5c,&local_4c,&local_48,&local_58,&local_54);
        local_14 = local_5c;
        sound_sndmain_cpp_countActiveSfx_FUN_005513f0();
        _sprintf((char *)&local_830.taken,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,g_INT_006141bc + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_005750b0((char *)&local_830.taken);
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,g_INT_006141bc + -0x37);
        core_skeleton_cpp_getMemoryStats_FUN_005490d0((char *)&local_830.taken);
        engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,g_INT_006141bc + -0x2c);
        engine_2d_c_drawText_FUN_00401fe0(this_ptr->debug_info_string,0,g_INT_006141bc + -0x21);
        if (g_INT_0264bba0 != 0) {
          engine_special_cpp_getTextureInfo_FUN_005601a0(0x400);
          engine_special_cpp_getTextureInfo_FUN_005601a0(0x200);
          engine_special_cpp_getTextureInfo_FUN_005601a0(0x100);
          engine_special_cpp_getTextureInfo_FUN_005601a0(0x80);
          engine_special_cpp_getTextureInfo_FUN_005601a0(0x40);
          engine_special_cpp_getTextureInfo_FUN_005601a0(0x20);
          _sprintf((char *)&local_830.taken,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d");
          engine_2d_c_drawText_FUN_00401fe0((char *)&local_830.taken,0,0x2c);
        }
      }
      if (g_SoundDebugEnabled != 0) {
        uVar4 = sound_sndmain_cpp_getFirstActiveSfx_FUN_005512f0();
        iVar3 = 0x37;
        for (; uVar4 != 0; uVar4 = sound_sndmain_cpp_getNextActiveSfx_FUN_00551330(uVar4)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(&local_830);
          iVar5 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00550bf0(uVar4,&local_830);
          if (iVar5 != 0) {
            engine_2d_c_drawTextXY_FUN_00402140(0,iVar3,(char *)&local_830);
            iVar3 = iVar3 + 0xb;
          }
        }
      }
      if (this_ptr->event_processing_enabled != 0) {
        core_event_cpp_CEventList_render_FUN_0048e490(g_CEventListPtr);
      }
      if ((this_ptr->subtitle_system_enabled != 0) && (this_ptr->screen_clear_enabled != 0)) {
        core_script_cpp_CScript_renderEditor_FUN_00521af0
                  (g_CScriptPtr,0,0xf0,g_INT_006141b8 + -1,g_INT_006141bc + -1);
      }
      if (this_ptr->editor_tools_enabled != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0
                  (g_CEditorToolsPtr,local_5e0);
        engine_2d_c_drawText_FUN_00401fe0(local_5e0,0,g_INT_006141bc + -0x42);
      }
      EVar6 = (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uc)->_uc).
                getDeathState)(&g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base);
      if (EVar6 == DEATH_STATE_DEAD) {
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You have failed");
        pcVar13 = local_2e0;
        do {
          cVar1 = *pcVar7;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
        engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                  (g_MediumFont,0,g_INT_006141b8,g_INT_006141bc + g_MediumFont->max_char_height * -2
                   ,(uint)g_ColorCubeLookup[0x7c00],0,local_2e0);
      }
      if (this_ptr->show_customizable_keys != 0) {
        core_game_cpp_CGame_showCustomizableKeys_FUN_004b3c50(this_ptr);
      }
      if (this_ptr->console_enabled != 0) {
        engine_console_cpp_CConsole_render_FUN_00436970(g_CConsolePtr);
      }
      if (0 < g_CPickList.base.item_count) {
        shape_edittool_cpp_CPickList_renderDialog_FUN_004831d0(&g_CPickList);
      }
      if ((this_ptr->is_paused != 0) || (this_ptr->game_control == CONTROL_MODE_POINT_AND_CLICK)) {
        shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_0047f210(g_CEditorToolsPtr,0);
      }
      engine_special_cpp_unlockFrame_FUN_0055f550(0);
    }
    if (local_40 != 0) {
      wincore_wddvmem_cpp_closeScreenDevice_FUN_00589170();
      return;
    }
  }
  else {
    this_ptr->is_paused = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_0050f120(this_ptr_00);
    core_game_cpp_CGame_process_FUN_004bd570(this_ptr);
    if (this_ptr->cinematic_skip_in_progress == 0) {
      core_game_cpp_CGame_updateDT_FUN_004b3010(this_ptr);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004bd460(this_ptr,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(g_CNetGamePtr);
  }
  return;
}
