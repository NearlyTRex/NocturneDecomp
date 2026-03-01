// Name: core_game.cpp_CGame_processFrame_FUN_004da100
// Address: 004da100
// Address Range: [[004da100, 004dadd2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFrame_FUN_004da100(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_game_cpp_CGame_processFrame_FUN_004da100(CGame *this_ptr)

{
  double dVar1;
  double dVar2;
  char cVar3;
  CHero *pCVar4;
  CVector3f *pCVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  CNetGame *this_ptr_00;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  float fVar16;
  CLocation *pCVar17;
  UOrientationVector *pUVar18;
  uint *puVar19;
  int *piVar20;
  byte bVar21;
  uint auStackY_107c [646];
  CVector3i *input_ptr;
  CSfxSample local_62c;
  char local_3dc [256];
  char local_2dc [256];
  char local_1dc [200];
  char local_114 [100];
  byte local_b0 [16];
  float local_a0;
  float local_9c;
  CVector3i local_94;
  CVector3i local_88;
  CVector3f local_7c;
  CVector3i local_70;
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
  
  bVar21 = 0;
  local_40 = 0;
  if (this_ptr->profile_mode != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  this_ptr_00 = g_CNetGamePtr;
  g_RenderedTriangleCount = 0;
  if ((this_ptr->cutscene_skippable == 0) && (g_CNetGamePtr->has_pending_sim_frame == 0)) {
    if (g_UseExternalRenderer != 0) {
      wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
      local_40 = 1;
    }
    if ((this_ptr->screen_clear_enabled != 0) || (this_ptr->screen_clear_condition != 0)) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
    }
    if (this_ptr->block_auto_save == 0) {
      core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr,1);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(g_CNetGamePtr);
    if (this_ptr->is_paused == 0) {
      core_game_cpp_CGame_process_FUN_004e3190(this_ptr);
      core_sound_cpp_CSound_process_FUN_005b2fd0(g_CSoundPtr);
    }
    else {
      core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_b0);
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pCVar17 = &(pCVar4->base).base.location;
      if ((CSlew *)local_b0 != (CSlew *)pCVar17) {
        local_b0._0_4_ = (pCVar17->position).x;
        local_b0._4_4_ = (pCVar4->base).base.location.position.y;
        local_b0._8_4_ = (pCVar4->base).base.location.position.z;
      }
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pUVar18 = &(pCVar4->base).base.orient;
      if ((UOrientationVector *)&((CSlew *)local_b0)->pitch != pUVar18) {
        local_b0._12_4_ = (pUVar18->vec).x;
        local_a0 = (pCVar4->base).base.orient.vec.y;
        local_9c = (pCVar4->base).base.orient.vec.z;
      }
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_b0);
      (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->setPositionAndOrientation)
                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(CVector3f *)local_b0,
                 (CVector3f *)&((CSlew *)local_b0)->pitch);
      if ((g_MouseButtonFlags.bytes[0] & 1) != 0) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,g_MouseX,g_MouseY,&local_88);
        input_ptr = &local_70;
        local_70.x = local_88.x;
        *(uint *)((int)&local_70 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&local_88 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&local_70 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&local_88 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,input_ptr,&local_94);
        local_70.x = local_94.x;
        *(uint *)((int)&local_70 + (uint)bVar21 * -8 + 4) =
             *(uint *)((int)&local_94 + (uint)bVar21 * -8 + 4);
        *(uint *)((int)&local_70 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
             *(uint *)((int)&local_94 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
        local_7c.x = (float)local_70.x * 0.00390625f;
        local_7c.y = (float)local_70.y * 0.00390625f;
        local_7c.z = (float)local_70.z * 0.00390625f;
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        (*((pCVar4->base).base.vtable._ub)->setPositionAndOrientation)
                  ((CDemonActor *)pCVar4,&local_7c,(CVector3f *)&(pCVar4->base).base.orient);
        g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
      }
    }
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(g_CNetGamePtr);
    if (this_ptr->block_auto_save == 0) {
      core_set_cpp_CDemonSet_renderStaticLights_FUN_0056be80(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
    if (this_ptr->profile_mode != 0) {
      local_14 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      local_14 = local_14 - local_44;
      dVar1 = ((double)local_14 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
              (double)g_CGamePtr->delta_time_float;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"screen paint : %3.2f ms\n",SUB84(__BITCAST_UINT64(dVar1),0),
                 (int)((ulonglong)dVar1 >> 0x20));
    }
    if (this_ptr->skip_frame_render == 0) {
      wincore_windll_cpp_lockFrame_FUN_005b7210();
      if (this_ptr->block_auto_save != 0) {
        core_set_cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990(g_CDemonSetPtr);
      }
      if (((this_ptr->velocity_debug_enabled != 0) ||
          (pcVar15 = getenv("SPOOKHOUSE"), pcVar15 != (char *)0x0))
         && (iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F4), iVar9 != 0)) {
        INT_02d82568 = INT_02d82568 + 1;
        _sprintf(g_ScreenshotFilename,"demon%d.pcx",INT_02d82568);
        engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(g_ScreenshotFilename);
      }
      core_inv_cpp_CInventory_renderAllItems_FUN_00500690
                (&g_HeroActors[g_LocalHeroIndex]->inventory);
      if (this_ptr->screen_clear_enabled != 0) {
        core_set_cpp_CDemonSet_renderLightDebugView_FUN_0056d190(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004d7e50(this_ptr);
      if (g_CheatFlags != 0) {
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
        if ((iVar9 != 0) &&
           (iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V), iVar9 != 0)) {
          fVar16 = (float)g_DebugRecording;
          if (g_DebugRecording == 0) {
            g_DebugRecording = 1;
            FLOAT_02d831bc = fVar16;
          }
          else {
            g_DebugRecording = 0;
          }
        }
        if ((g_DebugRecordingParams < 1) || ((int)FLOAT_02d831bc < g_DebugRecordingParams)) {
          if (g_DebugRecording != 0) {
            _sprintf(local_114,"noc%05d.raw",FLOAT_02d831bc);
            _sprintf
                      (local_1dc,"Movie recording active: movie\\%s",local_114);
            local_34 = engine_dosio_c_getFile_FUN_00481a50("movie",local_114,"wb")
            ;
            if (local_34 != (_FILE *)0x0) {
              local_38 = 0;
              if (0 < INT_0067b668) {
                do {
                  local_30 = 0;
                  if (0 < INT_0067b664) {
                    local_3c = local_38 + 1;
                    do {
                      local_28 = (local_30 * g_WindowWidth) / INT_0067b664;
                      local_20 = ((local_30 + 1) * g_WindowWidth) / INT_0067b664;
                      iVar9 = (local_38 * g_WindowHeight) / INT_0067b668;
                      iVar10 = (local_3c * g_WindowHeight) / INT_0067b668;
                      iVar12 = 0;
                      local_18 = 0;
                      local_1c = 0;
                      iVar11 = 0;
                      if (iVar9 < iVar10) {
                        local_24 = iVar9 << 2;
                        local_2c = iVar10 << 2;
                        do {
                          if (local_28 < local_20) {
                            puVar19 = (uint *)(local_28 * 4 +
                                              *(int *)((int)g_ScreenBufferArray + local_24));
                            iVar9 = local_28;
                            do {
                              uVar14 = *puVar19;
                              iVar12 = iVar12 + (uVar14 >> 0x10 & 0xff);
                              puVar19 = puVar19 + 1;
                              iVar11 = iVar11 + (uVar14 >> 8 & 0xff);
                              iVar9 = iVar9 + 1;
                              local_1c = local_1c + (uVar14 & 0xff);
                              local_18 = local_18 + 1;
                            } while (iVar9 < local_20);
                          }
                          local_24 = local_24 + 4;
                        } while (local_24 < local_2c);
                      }
                      iVar11 = iVar11 / local_18;
                      local_1c = local_1c / local_18;
                      _fputc(iVar12 / local_18,local_34);
                      _fputc(iVar11,local_34);
                      iVar9 = local_30 + 1;
                      _fputc(local_1c,local_34);
                      local_30 = iVar9;
                    } while (iVar9 < INT_0067b664);
                  }
                  local_38 = local_38 + 1;
                } while (local_38 < INT_0067b668);
              }
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\core\\game.cpp",0x110);
              engine_2d_c_drawText_FUN_00401fd0(local_1dc,0,0);
              FLOAT_02d831bc = (float)((int)FLOAT_02d831bc + 1);
            }
          }
        }
        else {
          g_DebugRecording = 0;
        }
      }
      core_script_cpp_CScript_renderSubtitles_FUN_00559b20(g_CScriptPtr);
      core_game_cpp_CGame_renderOverlay_FUN_004d8040(this_ptr);
      core_game_cpp_CGame_renderIrisFade_FUN_004e0aa0(this_ptr);
      if (this_ptr->camera_debug_enabled == 0) {
        DOUBLE_02d7c2e0 = 0.0;
        FLOAT_02d7c2e8 = 0.0;
      }
      else {
        _sprintf
                  (local_3dc,"Camera: \"%s\" Group %d",0x3275924,
                   g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].camera_group);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x16);
        FLOAT_02d7c2e8 = (float)((int)FLOAT_02d7c2e8 + 1);
        DOUBLE_02d7c2e0 = DOUBLE_02d7c2e0 + (double)this_ptr->delta_time_float;
        dVar1 = 1.0 / (double)this_ptr->delta_time_float;
        _sprintf
                  (local_3dc,"FR: %f, AVG: %f, PC: %d",SUB84(__BITCAST_UINT64(dVar1),0),
                   (int)((ulonglong)dVar1 >> 0x20),
                   SUB84(__BITCAST_UINT64((double)(int)FLOAT_02d7c2e8 / DOUBLE_02d7c2e0),0),
                   (int)((ulonglong)((double)(int)FLOAT_02d7c2e8 / DOUBLE_02d7c2e0) >> 0x20),
                   g_RenderedTriangleCount);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0xb);
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        dVar8 = (double)(pCVar4->base).base.orient.vec.y * 0.31830988619288902 * 180;
        dVar7 = (double)(pCVar4->base).base.orient.vec.z * 0.31830988619288902 * 180;
        dVar6 = 180 * (double)(pCVar4->base).base.orient.vec.x * 0.31830988619288902;
        dVar1 = (double)(pCVar4->base).base.location.position.z;
        dVar2 = (double)(pCVar4->base).base.location.position.y;
        _sprintf
                  (local_3dc,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",
                   (double)(pCVar4->base).base.location.position.x,SUB84(__BITCAST_UINT64(dVar2),0),
                   (int)((ulonglong)dVar2 >> 0x20),SUB84(__BITCAST_UINT64(dVar1),0),(int)((ulonglong)dVar1 >> 0x20),
                   SUB84(__BITCAST_UINT64(dVar6),0),(int)((ulonglong)dVar6 >> 0x20),SUB84(__BITCAST_UINT64(dVar7),0),
                   (int)((ulonglong)dVar7 >> 0x20),SUB84(__BITCAST_UINT64(dVar8),0),(int)((ulonglong)dVar8 >> 0x20));
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0);
        _sprintf
                  (local_3dc,"Slew : %s, Virtual Director : %s",
                   (&PTR_s_Off_0067b658)[this_ptr->is_paused],
                   (&PTR_s_Off_0067b658)[this_ptr->is_game_active]);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0xb);
        pCVar5 = this_ptr->debug_fudge_target;
        if (pCVar5 != (CVector3f *)0x0) {
          _sprintf
                    (local_3dc,"Fudge: %g,%g,%g",SUB84(__BITCAST_UINT64((double)pCVar5->x),0),
                     (int)((ulonglong)(double)pCVar5->x >> 0x20),SUB84(__BITCAST_UINT64((double)pCVar5->y),0),
                     (int)((ulonglong)(double)pCVar5->y >> 0x20),SUB84(__BITCAST_UINT64((double)pCVar5->z),0),
                     (int)((ulonglong)(double)pCVar5->z >> 0x20));
          engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x4d);
        }
        sound_sndmain_cpp_getSoundMemoryStats_FUN_005aa6a0
                  (&local_5c,&local_58,&local_54,&local_50,&local_4c,&local_48);
        local_14 = local_58;
        sound_sndmain_cpp_countActiveSfx_FUN_005a9ff0();
        _sprintf(local_3dc,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_005dd970(local_3dc);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x37);
        core_skeleton_cpp_getMemoryStats_FUN_005a1ed0(local_3dc);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x2c);
        engine_2d_c_drawText_FUN_00401fd0(this_ptr->debug_info_string,0,g_WindowHeight + -0x21);
        if (g_FullscreenMode != 0) {
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x400);
          iVar9 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x200);
          iVar10 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x100);
          iVar11 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x80);
          iVar12 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x40);
          iVar13 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x20);
          _sprintf
                    (local_3dc,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d",iVar13,iVar12,iVar11,iVar10,iVar9
                    );
          engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0x2c);
        }
      }
      if (INT_02d831c0 != 0) {
        uVar14 = sound_sndmain_cpp_getFirstActiveSfx_FUN_005a9ef0();
        iVar9 = 0x37;
        for (; uVar14 != 0; uVar14 = sound_sndmain_cpp_getNextActiveSfx_FUN_005a9f30(uVar14)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_005a8480(&local_62c);
          iVar10 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0(uVar14,&local_62c);
          if (iVar10 != 0) {
            engine_2d_c_drawTextXY_FUN_00402130(0,iVar9,(char *)&local_62c);
            iVar9 = iVar9 + 0xb;
          }
        }
      }
      if (this_ptr->event_processing_enabled != 0) {
        core_event_cpp_CEventList_render_FUN_004addf0(g_CEventListPtr);
      }
      if ((this_ptr->subtitle_system_enabled != 0) && (this_ptr->screen_clear_enabled != 0)) {
        core_script_cpp_CScript_renderEditor_FUN_00559d80
                  (g_CScriptPtr,0,0xf0,g_WindowWidth + -1,g_WindowHeight + -1);
      }
      if (this_ptr->editor_tools_enabled != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
                  (g_CEditorToolsPtr,local_2dc);
        engine_2d_c_drawText_FUN_00401fd0(local_2dc,0,g_WindowHeight + -0x42);
      }
      iVar9 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar9 == 2) {
        pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You're dead.  Game over.");
        piVar20 = &local_62c.taken;
        do {
          cVar3 = *pcVar15;
          *(char *)piVar20 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar15[1];
          pcVar15 = pcVar15 + 2;
          *(char *)((int)piVar20 + 1) = cVar3;
          piVar20 = (int *)((int)piVar20 + 2);
        } while (cVar3 != '\0');
        engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                  (g_MediumFont,0,g_WindowWidth,g_WindowHeight + g_MediumFont->max_char_width * -2,
                   (uint)g_ColorCubeLookup[0x7c00],0,(char *)&local_62c.taken);
      }
      if (this_ptr->show_customizable_keys != 0) {
        core_game_cpp_CGame_showCustomizableKeys_FUN_004d89d0(this_ptr);
      }
      if (this_ptr->console_enabled != 0) {
        engine_console_cpp_CConsole_render_FUN_00441b00(g_CConsolePtr);
      }
      if (0 < g_CPickList.base.item_count) {
        shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(&g_CPickList);
      }
      if (this_ptr->is_paused != 0) {
        shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
      }
      wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    }
    if (local_40 != 0) {
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
      return;
    }
  }
  else {
    this_ptr->is_paused = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(this_ptr_00);
    core_game_cpp_CGame_process_FUN_004e3190(this_ptr);
    if (this_ptr->cutscene_skippable == 0) {
      core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(this_ptr);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004e3080(this_ptr,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(g_CNetGamePtr);
  }
  return;
}
