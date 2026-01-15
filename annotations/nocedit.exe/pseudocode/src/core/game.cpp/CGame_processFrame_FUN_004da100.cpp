// Name: core_game.cpp_CGame_processFrame_FUN_004da100
// Address: 004da100
// Address Range: [[004da100, 004dadd2]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_processFrame_FUN_004da100(CGame * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processFrame_FUN_004da100(CGame *this_ptr)

{
  double dVar1;
  double dVar2;
  char cVar3;
  CHero *pCVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  CNetGame *this_ptr_00;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  CLocation *pCVar13;
  COrientation *pCVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  byte bVar19;
  int aiStackY_107c [614];
  CVector3i *output_ptr;
  SCollisionInfo *in_stack_fffff956;
  CSfxSample local_62c;
  char local_3dc [256];
  char local_2dc [256];
  char local_1dc [200];
  char local_114 [100];
  byte local_b0 [16];
  float local_a0;
  float local_9c;
  float local_94;
  int aiStack_90 [5];
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
  FILE *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar19 = 0;
  local_40 = 0;
  if (this_ptr->profile_mode != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  this_ptr_00 = g_CNetGameInstance;
  g_RenderedTriangleCount = 0;
  if ((this_ptr->cutscene_skippable == 0) &&
     (*(int *)(g_CNetGameInstance->field7_0x118 + 0x50) == 0)) {
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
    core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(g_CNetGameInstance);
    if (this_ptr->is_paused == 0) {
      core_game_cpp_CGame_process_FUN_004e3190(this_ptr);
      core_sound_cpp_CSound_process_FUN_005b2fd0(g_CSoundPtr);
    }
    else {
      core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_b0);
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pCVar13 = &(pCVar4->base_character).base_actor.location;
      if ((CLocation *)local_b0 != pCVar13) {
        local_b0._0_4_ = (pCVar13->position).x;
        local_b0._4_4_ = (pCVar4->base_character).base_actor.location.position.y;
        local_b0._8_4_ = (pCVar4->base_character).base_actor.location.position.z;
      }
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pCVar14 = &(pCVar4->base_character).base_actor.orient;
      if ((COrientation *)(local_b0 + 0xc) != pCVar14) {
        local_b0._12_4_ = pCVar14->pitch;
        local_a0 = (pCVar4->base_character).base_actor.orient.bank;
        local_9c = (pCVar4->base_character).base_actor.orient.heading;
      }
      in_stack_fffff956 = (SCollisionInfo *)local_b0;
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)in_stack_fffff956);
      (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
        setPositionAndOrientation)
                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(CVector3f *)local_b0,
                 (CVector3f *)(local_b0 + 0xc));
      if (((byte)g_MouseButtonFlags & 1) != 0) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,(CVector3i *)g_MouseX,g_MouseY,(int)in_stack_fffff956);
        output_ptr = &local_70;
        local_70.x = aiStack_90[2];
        *(int *)((int)&local_70 + ((uint)bVar19 * -2 + -1) * 4 + 8) =
             aiStack_90[(uint)bVar19 * -2 + 3];
        *(int *)((int)&local_70 + ((uint)bVar19 * -2 + (uint)bVar19 * -2) * 4 + 8) =
             aiStack_90[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,output_ptr,(CVector3i *)in_stack_fffff956);
        local_70.x = (int)local_94;
        *(int *)((int)&local_70 + ((uint)bVar19 * -2 + -1) * 4 + 8) = aiStack_90[(uint)bVar19 * -2];
        *(int *)((int)&local_70 + ((uint)bVar19 * -2 + (uint)bVar19 * -2) * 4 + 8) =
             aiStack_90[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        local_7c.x = (float)local_70.x * 0.00390625f;
        local_7c.y = (float)local_70.y * 0.00390625f;
        local_7c.z = (float)local_70.z * 0.00390625f;
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        (*((pCVar4->base_character).base_actor.vtable)->setPositionAndOrientation)
                  ((CDemonActor *)pCVar4,&local_7c,
                   (CVector3f *)&(pCVar4->base_character).base_actor.orient);
        g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
      }
    }
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(g_CNetGameInstance);
    if (this_ptr->block_auto_save == 0) {
      core_set_cpp_CDemonSet_FUN_0056be80(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
    if (this_ptr->profile_mode != 0) {
      local_14 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      local_14 = local_14 - local_44;
      dVar1 = ((double)local_14 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
              (double)g_CGamePtr->delta_time_float;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"screen paint : %3.2f ms\n",SUB84 /* extract 2-byte value */(dVar1,0),
                 (int)((ulonglong)dVar1 >> 0x20));
    }
    if (this_ptr->field67_0x208 == 0) {
      wincore_windll_cpp_lockFrame_FUN_005b7210();
      if (this_ptr->block_auto_save != 0) {
        core_set_cpp_CDemonSet_FUN_0056c990(g_CDemonSetPtr);
      }
      if (((this_ptr->velocity_debug_enabled != 0) ||
          (pcVar12 = crt_env_c_getenv_FUN_006013f0("SPOOKHOUSE"), pcVar12 != (char *)0x0))
         && (iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e), iVar9 != 0)) {
        DAT_02d82568 = DAT_02d82568 + 1;
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02d82570,"demon%d.pcx",DAT_02d82568);
        engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_02d82570);
      }
      core_inv_cpp_CInventory_renderAllItems_FUN_00500690
                (&g_HeroActors[g_LocalHeroIndex]->inventory);
      if (this_ptr->screen_clear_enabled != 0) {
        core_set_cpp_CDemonSet_FUN_0056d190(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004d7e50(this_ptr);
      if (g_CheatFlags != 0) {
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
        if ((iVar9 != 0) &&
           (iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f), iVar9 != 0)) {
          iVar9 = g_DebugRecording;
          if (g_DebugRecording == 0) {
            g_DebugRecording = 1;
            _DAT_02d831bc = iVar9;
          }
          else {
            g_DebugRecording = 0;
          }
        }
        if ((_g_DebugRecordingParams < 1) || (_DAT_02d831bc < _g_DebugRecordingParams)) {
          if (g_DebugRecording != 0) {
            crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"noc%05d.raw",_DAT_02d831bc);
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (local_1dc,"Movie recording active: movie\\%s",local_114);
            local_34 = engine_dosio_c_getFile_FUN_00481a50("movie",local_114,"wb")
            ;
            if (local_34 != (FILE *)0x0) {
              local_38 = 0;
              if (0 < DAT_0067b668) {
                do {
                  local_30 = 0;
                  if (0 < DAT_0067b664) {
                    local_3c = local_38 + 1;
                    do {
                      local_28 = (local_30 * g_WindowWidth) / DAT_0067b664;
                      local_20 = ((local_30 + 1) * g_WindowWidth) / DAT_0067b664;
                      iVar9 = (local_38 * g_WindowHeight) / DAT_0067b668;
                      iVar11 = (local_3c * g_WindowHeight) / DAT_0067b668;
                      iVar16 = 0;
                      local_18 = 0;
                      local_1c = 0;
                      iVar17 = 0;
                      if (iVar9 < iVar11) {
                        local_24 = iVar9 << 2;
                        local_2c = iVar11 << 2;
                        do {
                          if (local_28 < local_20) {
                            puVar15 = (uint *)(local_28 * 4 +
                                              *(int *)((int)g_ScreenBufferArray + local_24));
                            iVar9 = local_28;
                            do {
                              uVar10 = *puVar15;
                              iVar16 = iVar16 + (uVar10 >> 0x10 & 0xff);
                              puVar15 = puVar15 + 1;
                              iVar17 = iVar17 + (uVar10 >> 8 & 0xff);
                              iVar9 = iVar9 + 1;
                              local_1c = local_1c + (uVar10 & 0xff);
                              local_18 = local_18 + 1;
                            } while (iVar9 < local_20);
                          }
                          local_24 = local_24 + 4;
                        } while (local_24 < local_2c);
                      }
                      iVar17 = iVar17 / local_18;
                      local_1c = local_1c / local_18;
                      crt_stdio_c_fputc_FUN_006007a0(iVar16 / local_18,local_34);
                      crt_stdio_c_fputc_FUN_006007a0(iVar17,local_34);
                      iVar9 = local_30 + 1;
                      crt_stdio_c_fputc_FUN_006007a0(local_1c,local_34);
                      local_30 = iVar9;
                    } while (iVar9 < DAT_0067b664);
                  }
                  local_38 = local_38 + 1;
                } while (local_38 < DAT_0067b668);
              }
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\core\\game.cpp",0x110);
              engine_2d_c_drawText_FUN_00401fd0(local_1dc,0,0);
              _DAT_02d831bc = _DAT_02d831bc + 1;
            }
          }
        }
        else {
          g_DebugRecording = 0;
        }
      }
      core_script_cpp_FUN_00559b20();
      core_game_cpp_CGame_renderOverlay_FUN_004d8040(this_ptr);
      core_game_cpp_FUN_004e0aa0();
      if (this_ptr->camera_debug_enabled == 0) {
        _DAT_02d7c2e0 = 0.0;
        DAT_02d7c2e8 = 0;
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_3dc,"Camera: \"%s\" Group %d",0x3275924,
                   g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].field8_0x14c);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x16);
        DAT_02d7c2e8 = DAT_02d7c2e8 + 1;
        _DAT_02d7c2e0 = _DAT_02d7c2e0 + (double)this_ptr->delta_time_float;
        dVar1 = 1.0 / (double)this_ptr->delta_time_float;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_3dc,"FR: %f, AVG: %f, PC: %d",SUB84 /* extract 2-byte value */(dVar1,0),
                   (int)((ulonglong)dVar1 >> 0x20),SUB84 /* extract 2-byte value */((double)DAT_02d7c2e8 / _DAT_02d7c2e0,0),
                   (int)((ulonglong)((double)DAT_02d7c2e8 / _DAT_02d7c2e0) >> 0x20),
                   g_RenderedTriangleCount);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0xb);
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        dVar8 = (double)(pCVar4->base_character).base_actor.orient.bank * 0.31830988619288902 *
                180;
        dVar7 = (double)(pCVar4->base_character).base_actor.orient.heading * 0.31830988619288902 *
                180;
        dVar6 = 180 *
                (double)(pCVar4->base_character).base_actor.orient.pitch * 0.31830988619288902;
        dVar1 = (double)(pCVar4->base_character).base_actor.location.position.z;
        dVar2 = (double)(pCVar4->base_character).base_actor.location.position.y;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_3dc,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",
                   (double)(pCVar4->base_character).base_actor.location.position.x,SUB84 /* extract 2-byte value */(dVar2,0),
                   (int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
                   SUB84 /* extract 2-byte value */(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),SUB84 /* extract 2-byte value */(dVar7,0),
                   (int)((ulonglong)dVar7 >> 0x20),SUB84 /* extract 2-byte value */(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_3dc,"Slew : %s, Virtual Director : %s",
                   (&PTR_s_Off_0067b658)[this_ptr->is_paused],
                   (&PTR_s_Off_0067b658)[this_ptr->is_game_active]);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0xb);
        pfVar5 = (float *)this_ptr->field102_0x9bc;
        if (pfVar5 != (float *)0x0) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_3dc,"Fudge: %g,%g,%g",SUB84 /* extract 2-byte value */((double)*pfVar5,0),
                     (int)((ulonglong)(double)*pfVar5 >> 0x20),SUB84 /* extract 2-byte value */((double)pfVar5[1],0),
                     (int)((ulonglong)(double)pfVar5[1] >> 0x20),SUB84 /* extract 2-byte value */((double)pfVar5[2],0),
                     (int)((ulonglong)(double)pfVar5[2] >> 0x20));
          engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x4d);
        }
        sound_sndmain_cpp_getSoundMemoryStats_FUN_005aa6a0
                  (&local_5c,&local_58,&local_54,&local_50,&local_4c,&local_48);
        local_14 = local_58;
        sound_sndmain_cpp_countActiveSfx_FUN_005a9ff0();
        crt_stdio_c_sprintf_FUN_005fdbd0(local_3dc,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_005dd970(local_3dc);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x37);
        core_skeleton_cpp_getMemoryStats_FUN_005a1ed0(local_3dc);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x2c);
        engine_2d_c_drawText_FUN_00401fd0(this_ptr->field52_0xd0,0,g_WindowHeight + -0x21);
        if (g_FullscreenMode != 0) {
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x400);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x200);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x100);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x80);
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x40);
          iVar9 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x20);
          crt_stdio_c_sprintf_FUN_005fdbd0(local_3dc,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d",iVar9);
          engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0x2c);
        }
      }
      if (_DAT_02d831c0 != 0) {
        uVar10 = sound_sndmain_cpp_getFirstActiveSfx_FUN_005a9ef0();
        iVar9 = 0x37;
        for (; uVar10 != 0; uVar10 = sound_sndmain_cpp_getNextActiveSfx_FUN_005a9f30(uVar10)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_005a8480(&local_62c);
          iVar11 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0(uVar10,&local_62c);
          if (iVar11 != 0) {
            engine_2d_c_drawTextXY_FUN_00402130(0,iVar9,(char *)&local_62c);
            iVar9 = iVar9 + 0xb;
          }
        }
      }
      if (this_ptr->event_processing_enabled != 0) {
        core_event_cpp_CEventList_FUN_004addf0(g_CEventListPtr);
      }
      if ((this_ptr->subtitle_system_enabled != 0) && (this_ptr->screen_clear_enabled != 0)) {
        core_script_cpp_CScript_RelatedToSubtitles_FUN_00559d80();
      }
      if (this_ptr->editor_tools_enabled != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
                  (g_CEditorToolsPtr,local_2dc);
        engine_2d_c_drawText_FUN_00401fd0(local_2dc,0,g_WindowHeight + -0x42);
      }
      iVar9 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffff956);
      if (iVar9 == 2) {
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You're dead.  Game over.");
        piVar18 = &local_62c.taken;
        do {
          cVar3 = *pcVar12;
          *(char *)piVar18 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          *(char *)((int)piVar18 + 1) = cVar3;
          piVar18 = (int *)((int)piVar18 + 2);
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
      if (0 < g_CPickList.base_strlist.item_count) {
        shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(&g_CPickList);
      }
      if (this_ptr->is_paused != 0) {
        shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
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
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(g_CNetGameInstance);
  }
  return;
}
