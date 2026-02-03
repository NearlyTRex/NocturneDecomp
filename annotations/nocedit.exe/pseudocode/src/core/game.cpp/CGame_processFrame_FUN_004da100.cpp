// Name: core_game.cpp_CGame_processFrame_FUN_004da100
// Address: 004da100
// Address Range: [[004da100, 004dadd2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFrame_FUN_004da100(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processFrame_FUN_004da100(CGame *this_ptr)

{
  double dVar1;
  double dVar2;
  char cVar3;
  CHero *pCVar4;
  CNetGame *this_ptr_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  float fVar9;
  CLocation *pCVar10;
  COrientation *pCVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  byte bVar16;
  uint auStackY_107c [652];
  CVector3i *input_ptr;
  char local_4dc [256];
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
  
  bVar16 = 0;
  local_40 = 0;
  if (this_ptr->profile_mode != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  this_ptr_00 = g_CNetGamePtr;
  g_RenderedTriangleCount = 0;
  if ((this_ptr->cutscene_skippable == 0) && (*(int *)(g_CNetGamePtr->unk + 0x50) == 0)) {
    if (g_UseExternalRenderer != 0) {
      wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
      local_40 = 1;
    }
    if ((this_ptr->screen_clear_enabled != 0) || (this_ptr->screen_clear_condition != 0)) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
    }
    if (this_ptr->block_auto_save == 0) {
      core_set_cpp_CDemonSet_FUN_0056c1a0(g_CDemonSetPtr);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(g_CNetGamePtr);
    if (this_ptr->is_paused == 0) {
      core_game_cpp_CGame_process_FUN_004e3190(this_ptr);
      core_sound_cpp_CSound_process_FUN_005b2fd0(g_CSoundPtr);
    }
    else {
      core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_b0);
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pCVar10 = &(pCVar4->base).base.location;
      if ((CLocation *)local_b0 != pCVar10) {
        local_b0._0_4_ = (pCVar10->position).x;
        local_b0._4_4_ = (pCVar4->base).base.location.position.y;
        local_b0._8_4_ = (pCVar4->base).base.location.position.z;
      }
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pCVar11 = &(pCVar4->base).base.orient;
      if ((COrientation *)(local_b0 + 0xc) != pCVar11) {
        local_b0._12_4_ = pCVar11->pitch;
        local_a0 = (pCVar4->base).base.orient.bank;
        local_9c = (pCVar4->base).base.orient.heading;
      }
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_b0);
      (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->setPositionAndOrientation)
                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(CVector3f *)local_b0,
                 (CVector3f *)(local_b0 + 0xc));
      if (((byte)g_MouseButtonFlags & 1) != 0) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,g_MouseX,g_MouseY,&local_88);
        input_ptr = &local_70;
        local_70.x = local_88.x;
        *(uint *)((int)&local_70 + ((uint)bVar16 * -2 + -1) * 4 + 8) =
             *(uint *)((int)&local_88 + (uint)bVar16 * -8 + 4);
        *(uint *)((int)&local_70 + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4 + 8) =
             *(uint *)((int)&local_88 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,input_ptr,&local_94);
        local_70.x = local_94.x;
        *(uint *)((int)&local_70 + ((uint)bVar16 * -2 + -1) * 4 + 8) =
             *(uint *)((int)&local_94 + (uint)bVar16 * -8 + 4);
        *(uint *)((int)&local_70 + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4 + 8) =
             *(uint *)((int)&local_94 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        local_7c.x = (float)local_70.x * 0.00390625f;
        local_7c.y = (float)local_70.y * 0.00390625f;
        local_7c.z = (float)local_70.z * 0.00390625f;
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        (*((pCVar4->base).base.vtable._ub)->setPositionAndOrientation)
                  ((CDemonActor *)pCVar4,&local_7c,(CVector3f *)&(pCVar4->base).base.orient);
        g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
      }
    }
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(g_CNetGamePtr);
    if (this_ptr->block_auto_save == 0) {
      core_set_cpp_CDemonSet_FUN_0056be80(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
    if (this_ptr->profile_mode != 0) {
      local_14 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      local_14 = local_14 - local_44;
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"screen paint : %3.2f ms\n")
      ;
    }
    if (this_ptr->unk8 == 0) {
      wincore_windll_cpp_lockFrame_FUN_005b7210();
      if (this_ptr->block_auto_save != 0) {
        core_set_cpp_CDemonSet_FUN_0056c990(g_CDemonSetPtr);
      }
      if (((this_ptr->velocity_debug_enabled != 0) ||
          (pcVar15 = getenv("SPOOKHOUSE"), pcVar15 != (char *)0x0))
         && (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e), iVar5 != 0)) {
        DAT_02d82568 = DAT_02d82568 + 1;
        sprintf(&DAT_02d82570,"demon%d.pcx");
        engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_02d82570);
      }
      core_inv_cpp_CInventory_renderAllItems_FUN_00500690
                (&g_HeroActors[g_LocalHeroIndex]->inventory);
      if (this_ptr->screen_clear_enabled != 0) {
        core_set_cpp_CDemonSet_FUN_0056d190(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004d7e50(this_ptr);
      if (g_CheatFlags != 0) {
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
        if ((iVar5 != 0) &&
           (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f), iVar5 != 0)) {
          fVar9 = (float)g_DebugRecording;
          if (g_DebugRecording == 0) {
            g_DebugRecording = 1;
            FLOAT_02d831bc = fVar9;
          }
          else {
            g_DebugRecording = 0;
          }
        }
        if ((g_DebugRecordingParams < 1) || ((int)FLOAT_02d831bc < g_DebugRecordingParams)) {
          if (g_DebugRecording != 0) {
            sprintf(local_114,"noc%05d.raw");
            sprintf(local_1dc,"Movie recording active: movie\\%s");
            local_34 = engine_dosio_c_getFile_FUN_00481a50("movie",local_114,"wb")
            ;
            if (local_34 != (_FILE *)0x0) {
              local_38 = 0;
              if (0 < 0x00000040) {
                do {
                  local_30 = 0;
                  if (0 < 0x00000040) {
                    local_3c = local_38 + 1;
                    do {
                      local_28 = (local_30 * g_WindowWidth) / 0x00000040;
                      local_20 = ((local_30 + 1) * g_WindowWidth) / 0x00000040;
                      iVar5 = (local_38 * g_WindowHeight) / 0x00000040;
                      iVar7 = (local_3c * g_WindowHeight) / 0x00000040;
                      iVar13 = 0;
                      local_18 = 0;
                      local_1c = 0;
                      iVar14 = 0;
                      if (iVar5 < iVar7) {
                        local_24 = iVar5 << 2;
                        local_2c = iVar7 << 2;
                        do {
                          if (local_28 < local_20) {
                            puVar12 = (uint *)(local_28 * 4 +
                                              *(int *)((int)g_ScreenBufferArray + local_24));
                            iVar5 = local_28;
                            do {
                              uVar6 = *puVar12;
                              iVar13 = iVar13 + (uVar6 >> 0x10 & 0xff);
                              puVar12 = puVar12 + 1;
                              iVar14 = iVar14 + (uVar6 >> 8 & 0xff);
                              iVar5 = iVar5 + 1;
                              local_1c = local_1c + (uVar6 & 0xff);
                              local_18 = local_18 + 1;
                            } while (iVar5 < local_20);
                          }
                          local_24 = local_24 + 4;
                        } while (local_24 < local_2c);
                      }
                      iVar14 = iVar14 / local_18;
                      local_1c = local_1c / local_18;
                      _fputc(iVar13 / local_18,local_34);
                      _fputc(iVar14,local_34);
                      iVar5 = local_30 + 1;
                      _fputc(local_1c,local_34);
                      local_30 = iVar5;
                    } while (iVar5 < 0x00000040);
                  }
                  local_38 = local_38 + 1;
                } while (local_38 < 0x00000040);
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
      core_script_cpp_CScript_FUN_00559b20(g_CScriptPtr);
      core_game_cpp_CGame_renderOverlay_FUN_004d8040(this_ptr);
      core_game_cpp_CGame_FUN_004e0aa0(this_ptr);
      if (this_ptr->camera_debug_enabled == 0) {
        DOUBLE_02d7c2e0 = 0.0;
        FLOAT_02d7c2e8 = 0.0;
      }
      else {
        sprintf(local_3dc,"Camera: \"%s\" Group %d");
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x16);
        FLOAT_02d7c2e8 = (float)((int)FLOAT_02d7c2e8 + 1);
        DOUBLE_02d7c2e0 = DOUBLE_02d7c2e0 + (double)this_ptr->delta_time_float;
        sprintf(local_3dc,"FR: %f, AVG: %f, PC: %d");
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0xb);
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        dVar1 = (double)(pCVar4->base).base.location.position.z;
        dVar2 = (double)(pCVar4->base).base.location.position.y;
        sprintf
                  (local_3dc,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",
                   (double)(pCVar4->base).base.location.position.x,SUB84(dVar2,0),
                   (int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0);
        sprintf(local_3dc,"Slew : %s, Virtual Director : %s");
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0xb);
        if (this_ptr->unk14 != 0) {
          sprintf(local_3dc,"Fudge: %g,%g,%g");
          engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x4d);
        }
        sound_sndmain_cpp_getSoundMemoryStats_FUN_005aa6a0
                  (&local_5c,&local_58,&local_54,&local_50,&local_4c,&local_48);
        local_14 = local_58;
        sound_sndmain_cpp_countActiveSfx_FUN_005a9ff0();
        sprintf(local_3dc,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_005dd970(local_3dc);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x37);
        core_skeleton_cpp_getMemoryStats_FUN_005a1ed0(local_3dc);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x2c);
        engine_2d_c_drawText_FUN_00401fd0(this_ptr->unk1,0,g_WindowHeight + -0x21);
        if (g_FullscreenMode != 0) {
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x400);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x200);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x100);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x80);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x40);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x20);
          sprintf(local_3dc,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d");
          engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0x2c);
        }
      }
      if (INT_02d831c0 != 0) {
        uVar6 = sound_sndmain_cpp_getFirstActiveSfx_FUN_005a9ef0();
        iVar5 = 0x37;
        for (; uVar6 != 0; uVar6 = sound_sndmain_cpp_getNextActiveSfx_FUN_005a9f30(uVar6)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&stack0xfffff9d4);
          iVar7 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                            (uVar6,(CSfxSample *)&stack0xfffff9d4);
          if (iVar7 != 0) {
            engine_2d_c_drawTextXY_FUN_00402130(0,iVar5,&stack0xfffff9d4);
            iVar5 = iVar5 + 0xb;
          }
        }
      }
      if (this_ptr->event_processing_enabled != 0) {
        core_event_cpp_CEventList_FUN_004addf0(g_CEventListPtr);
      }
      if ((this_ptr->subtitle_system_enabled != 0) && (this_ptr->screen_clear_enabled != 0)) {
        core_script_cpp_CScript_FUN_00559d80
                  (g_CScriptPtr,0,0xf0,g_WindowWidth + -1,g_WindowHeight + -1);
      }
      if (this_ptr->editor_tools_enabled != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
                  (g_CEditorToolsPtr,local_2dc);
        engine_2d_c_drawText_FUN_00401fd0(local_2dc,0,g_WindowHeight + -0x42);
      }
      iVar5 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar5 == 2) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("You're dead.  Game over.");
        pcVar15 = local_4dc;
        do {
          cVar3 = *pcVar8;
          *pcVar15 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar15[1] = cVar3;
          pcVar15 = pcVar15 + 2;
        } while (cVar3 != '\0');
        engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                  (g_MediumFont,0,g_WindowWidth,g_WindowHeight + g_MediumFont->max_char_width * -2,
                   (uint)g_ColorCubeLookup[0x7c00],0,local_4dc);
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
