// Name: core_game.cpp_CGame_processFrame_FUN_004da100
// Address: 004da100
// Address Range: [[004da100, 004dadd2]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_processFrame_FUN_004da100(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db3bd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_noc_05d_raw_0062b201
//   TerminatedCString s_Movie_recording_active_m_0062b20d
//   TerminatedCString s_wb_0062b22e
//   TerminatedCString s_movie_0062b231
//   TerminatedCString s_core_game_cpp_0062b237
//   TerminatedCString s_screen_paint_3_2f_ms_0062b462
//   TerminatedCString s_SPOOKHOUSE_0062b47b
//   TerminatedCString s_demon_d_pcx_0062b486
//   TerminatedCString s_Camera_s_Group_d_0062b492
//   TerminatedCString s_FR_f_AVG_f_PC_d_0062b4a8
//   TerminatedCString s_Hero_4_2f_4_2f_4_2f_xyz__0062b4c0
//   TerminatedCString s_Slew_s_Virtual_Director__0062b4f7
//   TerminatedCString s_Fudge_g_g_g_0062b518
//   TerminatedCString s_SFX_d_Samples_Active_d_1_0062b528
//   TerminatedCString s_s_32_d_64_d_128_d_256_d__0062b579
//   TerminatedCString s_You_re_dead_Game_over_0062b5a2
//   double DOUBLE_0062b5bd = 0.0555555555555556
//   double DOUBLE_0062b5c5 = 0.0000152587890625
//   double DOUBLE_0062b5cd = 1000
//   double DOUBLE_0062b5d5 = 0.318309886192889
//   double DOUBLE_0062b5dd = 180
//   double DOUBLE_0062b5e5 = 0.0009765625
//   float FLOAT_0065e9bc = 0.00390625
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   void* PTR_s_Off_0067b658 = 0062d671
//   undefined4 DAT_0067b664
//   undefined4 DAT_0067b668
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CConsole g_ConsolePtr
//   CBitFont* g_MediumFont
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   undefined4 UCHAR_ARRAY_02d00c20
//   int g_UseExternalRenderer
//   undefined4 DAT_02d05310
//   undefined4 DAT_02d7c2e0
//   undefined4 DAT_02d7c2e4
//   undefined4 DAT_02d7c2e8
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   undefined4 DAT_02d82568
//   undefined4 DAT_02d82570
//   CPickList g_CPickList
//   int g_CheatFlags
//   int g_DebugRecording
//   undefined4 g_DebugRecordingParams
//   undefined4 DAT_02d831bc
//   undefined4 DAT_02d831c0
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   void* g_CKeysPtr
//   undefined4 DAT_02f7c740
//   undefined4 DAT_02f7c8a8
//   int g_RenderedTriangleCount
//   CScript g_CScriptInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_031143c8
//   undefined4 g_CDemonSetInstance.selected_camera_index
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_03275924
//   CSound g_CSoundInstance
//   int g_FullscreenMode
// Function calls:
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   core_event.cpp_FUN_004addf0
//   core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50
//   core_game.cpp_CGame_process_FUN_004e3190
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040
//   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
//   core_game.cpp_CGame_slamDT_FUN_004e3080
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_game.cpp_FUN_004e0aa0
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690
//   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80
//   core_script.cpp_FUN_00559b20
//   core_set.cpp_CDemonSet_FUN_0056be80
//   core_set.cpp_CDemonSet_FUN_0056c1a0
//   core_set.cpp_CDemonSet_FUN_0056c990
//   core_set.cpp_CDemonSet_FUN_0056d190
//   core_skeleton.cpp_FUN_005a1ed0
//   core_skeleton.cpp_FUN_005a2060
//   core_skeleton.cpp_FUN_005a20b0
//   core_sound.cpp_FUN_005b2fd0
//   crt_env.c_getenv_FUN_006013f0
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_drawTextXY_FUN_00402130
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   engine_console.cpp_CConsole_render_FUN_00441b00
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   engine_texture.cpp_getTextureCacheStats_FUN_005dd970
//   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   sound_sndmain.cpp_CallToLockDoSomethingAndUnlockSound2_FUN_005a96e0
//   sound_sndmain.cpp_FUN_005a8480
//   sound_sndmain.cpp_FUN_005a9ef0
//   sound_sndmain.cpp_FUN_005a9f30
//   sound_sndmain.cpp_FUN_005a9ff0
//   sound_sndmain.cpp_FUN_005aa6a0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_getTextureInfo_FUN_005b7e70
//   wincore_windll.cpp_lockFrame_FUN_005b7210
//   wincore_windll.cpp_unlockFrame_FUN_005b7250
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processFrame_FUN_004da100(CGame *this_ptr)

{
  double dVar1;
  double dVar2;
  char cVar3;
  CHero *pCVar4;
  float *pfVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  CNetGame *this_ptr_00;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  CLocation *pCVar16;
  COrientation *pCVar17;
  uint *puVar18;
  BADSPACEBASE *in_ESP;
  char *pcVar19;
  byte bVar20;
  int aiStackY_107c [644];
  CVector3i *output_ptr;
  CVector3i *in_stack_fffff9c8;
  SCollisionInfo *collision_info;
  undefined8 uVar21;
  char local_4dc [256];
  char local_3dc [256];
  char local_2dc [256];
  char local_1dc [200];
  char local_114 [100];
  CVector3f local_b0;
  CVector3f local_a4;
  int local_94;
  int aiStack_90 [5];
  CVector3f local_7c;
  CVector3i local_70 [2];
  int local_58;
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
  
  bVar20 = 0;
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
      in_stack_fffff9c8 = (CVector3i *)0x4da216;
      core_set_cpp_CDemonSet_FUN_0056c1a0(g_CDemonSetPtr);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(g_CNetGameInstance);
    if (this_ptr->is_paused == 0) {
      core_game_cpp_CGame_process_FUN_004e3190(this_ptr);
      core_sound_cpp_FUN_005b2fd0();
    }
    else {
      core_skeleton_cpp_FUN_005a2060();
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pCVar16 = &(pCVar4->base_character).base_actor.location;
      if ((CLocation *)&local_b0 != pCVar16) {
        local_b0.x = (pCVar16->position).x;
        local_b0.y = (pCVar4->base_character).base_actor.location.position.y;
        local_b0.z = (pCVar4->base_character).base_actor.location.position.z;
      }
      pCVar4 = g_HeroActors[g_LocalHeroIndex];
      pCVar17 = &(pCVar4->base_character).base_actor.orient;
      if ((COrientation *)&local_a4 != pCVar17) {
        local_a4.x = pCVar17->pitch;
        local_a4.y = (pCVar4->base_character).base_actor.orient.bank;
        local_a4.z = (pCVar4->base_character).base_actor.orient.heading;
      }
      core_skeleton_cpp_FUN_005a20b0();
      (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.metadata.vtable)->
        setPositionAndOrientation)
                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_b0,&local_a4);
      if (((byte)g_MouseButtonFlags & 1) != 0) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,(CVector3i *)g_MouseX,g_MouseY,(int)in_stack_fffff9c8);
        output_ptr = local_70;
        local_70[0].x = aiStack_90[2];
        *(int *)((int)local_70 + ((uint)bVar20 * -2 + -1) * 4 + 8) =
             aiStack_90[(uint)bVar20 * -2 + 3];
        *(int *)((int)local_70 + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8) =
             aiStack_90[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,output_ptr,in_stack_fffff9c8);
        local_70[0].x = local_94;
        *(int *)((int)local_70 + ((uint)bVar20 * -2 + -1) * 4 + 8) = aiStack_90[(uint)bVar20 * -2];
        *(int *)((int)local_70 + ((uint)bVar20 * -2 + (uint)bVar20 * -2) * 4 + 8) =
             aiStack_90[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
        local_7c.x = (float)local_70[0].x * FLOAT_0065e9bc;
        local_7c.y = (float)local_70[0].y * FLOAT_0065e9bc;
        local_7c.z = (float)local_70[0].z * FLOAT_0065e9bc;
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        (*((pCVar4->base_character).base_actor.metadata.vtable)->setPositionAndOrientation)
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
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"screen paint : %3.2f ms\n",
                 ((double)local_14 * DOUBLE_0062b5bd * DOUBLE_0062b5c5 * DOUBLE_0062b5cd) /
                 (double)g_CGamePtr->delta_time_float);
    }
    if (this_ptr->field67_0x208 == 0) {
      wincore_windll_cpp_lockFrame_FUN_005b7210();
      if (this_ptr->block_auto_save != 0) {
        core_set_cpp_CDemonSet_FUN_0056c990(g_CDemonSetPtr);
      }
      if (((this_ptr->velocity_debug_enabled != 0) ||
          (pcVar19 = crt_env_c_getenv_FUN_006013f0("SPOOKHOUSE"), pcVar19 != (char *)0x0))
         && (iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3e), iVar10 != 0)) {
        DAT_02d82568 = DAT_02d82568 + 1;
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02d82570,"demon%d.pcx");
        engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_02d82570);
      }
      core_inv_cpp_CInventory_renderAllItems_FUN_00500690
                (&g_HeroActors[g_LocalHeroIndex]->inventory);
      if (this_ptr->screen_clear_enabled != 0) {
        core_set_cpp_CDemonSet_FUN_0056d190(g_CDemonSetPtr);
      }
      uVar21 = CONCAT44(this_ptr,0x4da4e8);
      core_game_cpp_CGame_drawScreenBorder_FUN_004d7e50(this_ptr);
      if (g_CheatFlags != 0) {
        uVar21 = CONCAT44(0x1d,g_CKeysPtr);
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
        if (iVar10 != 0) {
          uVar21 = CONCAT44(0x4da515,(int)uVar21);
          iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f);
          if (iVar10 != 0) {
            iVar10 = g_DebugRecording;
            if (g_DebugRecording == 0) {
              g_DebugRecording = 1;
              _DAT_02d831bc = iVar10;
            }
            else {
              g_DebugRecording = 0;
            }
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
                      iVar10 = (local_38 * g_WindowHeight) / DAT_0067b668;
                      iVar11 = (local_3c * g_WindowHeight) / DAT_0067b668;
                      iVar13 = 0;
                      local_18 = 0;
                      local_1c = 0;
                      iVar12 = 0;
                      if (iVar10 < iVar11) {
                        local_24 = iVar10 << 2;
                        local_2c = iVar11 << 2;
                        do {
                          if (local_28 < local_20) {
                            puVar18 = (uint *)(local_28 * 4 +
                                              *(int *)((int)g_ScreenBufferArray + local_24));
                            iVar10 = local_28;
                            do {
                              uVar6 = *puVar18;
                              iVar13 = iVar13 + (uVar6 >> 0x10 & 0xff);
                              puVar18 = puVar18 + 1;
                              iVar12 = iVar12 + (uVar6 >> 8 & 0xff);
                              iVar10 = iVar10 + 1;
                              local_1c = local_1c + (uVar6 & 0xff);
                              local_18 = local_18 + 1;
                            } while (iVar10 < local_20);
                          }
                          local_24 = local_24 + 4;
                        } while (local_24 < local_2c);
                      }
                      iVar12 = iVar12 / local_18;
                      local_1c = local_1c / local_18;
                      crt_stdio_c_fputc_FUN_006007a0(iVar13 / local_18,local_34);
                      crt_stdio_c_fputc_FUN_006007a0(iVar12,local_34);
                      iVar10 = local_30 + 1;
                      crt_stdio_c_fputc_FUN_006007a0(local_1c,local_34);
                      local_30 = iVar10;
                    } while (iVar10 < DAT_0067b664);
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
                  (local_3dc,"FR: %f, AVG: %f, PC: %d",SUB84(dVar1,0),
                   (int)((ulonglong)dVar1 >> 0x20),SUB84((double)DAT_02d7c2e8 / _DAT_02d7c2e0,0),
                   (int)((ulonglong)((double)DAT_02d7c2e8 / _DAT_02d7c2e0) >> 0x20),
                   g_RenderedTriangleCount);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0xb);
        pCVar4 = g_HeroActors[g_LocalHeroIndex];
        dVar9 = (double)(pCVar4->base_character).base_actor.orient.bank * DOUBLE_0062b5d5 *
                DOUBLE_0062b5dd;
        dVar8 = (double)(pCVar4->base_character).base_actor.orient.heading * DOUBLE_0062b5d5 *
                DOUBLE_0062b5dd;
        dVar7 = DOUBLE_0062b5dd *
                (double)(pCVar4->base_character).base_actor.orient.pitch * DOUBLE_0062b5d5;
        dVar1 = (double)(pCVar4->base_character).base_actor.location.position.z;
        dVar2 = (double)(pCVar4->base_character).base_actor.location.position.y;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_3dc,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",
                   (double)(pCVar4->base_character).base_actor.location.position.x,SUB84(dVar2,0),
                   (int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
                   SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0),
                   (int)((ulonglong)dVar8 >> 0x20),SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_3dc,"Slew : %s, Virtual Director : %s",
                   (&PTR_s_Off_0067b658)[this_ptr->is_paused],
                   (&PTR_s_Off_0067b658)[this_ptr->is_game_active]);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0xb);
        pfVar5 = (float *)this_ptr->field102_0x9bc;
        if (pfVar5 != (float *)0x0) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_3dc,"Fudge: %g,%g,%g",SUB84((double)*pfVar5,0),
                     (int)((ulonglong)(double)*pfVar5 >> 0x20),SUB84((double)pfVar5[1],0),
                     (int)((ulonglong)(double)pfVar5[1] >> 0x20),SUB84((double)pfVar5[2],0),
                     (int)((ulonglong)(double)pfVar5[2] >> 0x20));
          engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x4d);
        }
        sound_sndmain_cpp_FUN_005aa6a0();
        local_14 = local_58;
        sound_sndmain_cpp_FUN_005a9ff0();
        crt_stdio_c_sprintf_FUN_005fdbd0(local_3dc,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_005dd970(local_3dc);
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x37);
        core_skeleton_cpp_FUN_005a1ed0();
        engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,g_WindowHeight + -0x2c);
        engine_2d_c_drawText_FUN_00401fd0(this_ptr->field52_0xd0,0,g_WindowHeight + -0x21);
        if (g_FullscreenMode != 0) {
          wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x400);
          iVar10 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x200);
          iVar11 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x100);
          iVar12 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x80);
          iVar13 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x40);
          iVar14 = wincore_windll_cpp_getTextureInfo_FUN_005b7e70(0x20);
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_3dc,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d",iVar14,iVar13,iVar12,iVar11,
                     iVar10);
          engine_2d_c_drawText_FUN_00401fd0(local_3dc,0,0x2c);
        }
      }
      collision_info = (SCollisionInfo *)uVar21;
      if (_DAT_02d831c0 != 0) {
        iVar11 = sound_sndmain_cpp_FUN_005a9ef0();
        iVar10 = 0x37;
        while (collision_info = (SCollisionInfo *)uVar21, iVar11 != 0) {
          sound_sndmain_cpp_FUN_005a8480();
          iVar11 = sound_sndmain_cpp_CallToLockDoSomethingAndUnlockSound2_FUN_005a96e0();
          if (iVar11 != 0) {
            engine_2d_c_drawTextXY_FUN_00402130(0,iVar10,&stack0xfffff9d4);
            iVar10 = iVar10 + 0xb;
          }
          iVar11 = sound_sndmain_cpp_FUN_005a9f30();
        }
      }
      if (this_ptr->event_processing_enabled != 0) {
        core_event_cpp_FUN_004addf0();
      }
      if ((this_ptr->subtitle_system_enabled != 0) && (this_ptr->screen_clear_enabled != 0)) {
        core_script_cpp_CScript_RelatedToSubtitles_FUN_00559d80();
      }
      if (this_ptr->editor_tools_enabled != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
                  (g_CEditorToolsPtr,local_2dc);
        engine_2d_c_drawText_FUN_00401fd0(local_2dc,0,g_WindowHeight + -0x42);
      }
      iVar10 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.metadata.vtable[1].
                 hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],collision_info);
      if (iVar10 == 2) {
        pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You're dead.  Game over.");
        pcVar19 = local_4dc;
        do {
          cVar3 = *pcVar15;
          *pcVar19 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar15[1];
          pcVar15 = pcVar15 + 2;
          pcVar19[1] = cVar3;
          pcVar19 = pcVar19 + 2;
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


// Assembly code:
// 004da100: PUSH EBX
//   Label: core_game.cpp_CGame_processFrame_FUN_004da100
// 004da101: PUSH ESI
// 004da102: PUSH EDI
// 004da103: PUSH EBP
// 004da104: MOV EBP,ESP
// 004da106: SUB ESP,0x61c
// 004da10c: SUB EBP,0x7e
// 004da10f: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da115: XOR EDX,EDX
// 004da117: MOV ECX,dword ptr [EAX + 0x20c]
// 004da11d: MOV dword ptr [EBP + 0x4e],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 004da120: TEST ECX,ECX
// 004da122: JNZ 0x004da1b4
//   XREF to: 004da1b4 (CONDITIONAL_JUMP)
// 004da128: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da128
//   XREF to: Stack[0x4] (READ)
// 004da12e: XOR EBX,EBX
// 004da130: MOV ESI,dword ptr [EAX + 0xcc]
// 004da136: MOV dword ptr [0x030e56b8],EBX
//   XREF to: 030e56b8 (WRITE)
// 004da13c: TEST ESI,ESI
// 004da13e: JNZ 0x004da152
//   XREF to: 004da152 (CONDITIONAL_JUMP)
// 004da140: MOV EAX,[0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004da145: CMP dword ptr [EAX + 0x168],0x0
//   XREF to: 02f7c8a8 (READ)
// 004da14c: JZ 0x004da1cc
//   XREF to: 004da1cc (CONDITIONAL_JUMP)
// 004da152: MOV EDX,dword ptr [0x00680a00]
//   Label: LAB_004da152
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004da158: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da15e: PUSH EDX
//   XREF to: 02f7c740 (DATA)
// 004da15f: MOV dword ptr [EAX + 0x1fc],0x0
// 004da169: CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
//   XREF to: 005435a0 (UNCONDITIONAL_CALL)
// 004da16e: ADD ESP,0x4
// 004da171: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da177: PUSH ECX
// 004da178: CALL core_game.cpp_CGame_process_FUN_004e3190
//   XREF to: 004e3190 (UNCONDITIONAL_CALL)
// 004da17d: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da183: MOV EBX,dword ptr [EAX + 0xcc]
// 004da189: ADD ESP,0x4
// 004da18c: TEST EBX,EBX
// 004da18e: JZ 0x004da1c1
//   XREF to: 004da1c1 (CONDITIONAL_JUMP)
// 004da190: PUSH 0x3e800000
// 004da195: PUSH EAX
// 004da196: CALL core_game.cpp_CGame_slamDT_FUN_004e3080
//   XREF to: 004e3080 (UNCONDITIONAL_CALL)
// 004da19b: ADD ESP,0x8
// 004da19e: MOV EAX,[0x00680a00]
//   Label: LAB_004da19e
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004da1a3: PUSH EAX
//   XREF to: 02f7c740 (DATA)
// 004da1a4: CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
//   XREF to: 00543150 (UNCONDITIONAL_CALL)
// 004da1a9: ADD ESP,0x4
// 004da1ac: LEA ESP,[EBP + 0x7e]
//   Label: LAB_004da1ac
//   XREF to: Stack[-0x10] (DATA)
// 004da1af: POP EBP
// 004da1b0: POP EDI
// 004da1b1: POP ESI
// 004da1b2: POP EBX
// 004da1b3: RET
// 004da1b4: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_004da1b4
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004da1b9: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004da1bc: JMP 0x004da128
//   XREF to: 004da128 (UNCONDITIONAL_JUMP)
// 004da1c1: PUSH EAX
//   Label: LAB_004da1c1
// 004da1c2: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 004da1c7: ADD ESP,0x4
// 004da1ca: JMP 0x004da19e
//   XREF to: 004da19e (UNCONDITIONAL_JUMP)
// 004da1cc: CMP dword ptr [0x02d03e94],0x0
//   Label: LAB_004da1cc
//   XREF to: 02d03e94 (READ)
// 004da1d3: JZ 0x004da1e1
//   XREF to: 004da1e1 (CONDITIONAL_JUMP)
// 004da1d5: CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   XREF to: 005ed580 (UNCONDITIONAL_CALL)
// 004da1da: MOV dword ptr [EBP + 0x4e],0x1
//   XREF to: Stack[-0x40] (WRITE)
// 004da1e1: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da1e1
//   XREF to: Stack[0x4] (READ)
// 004da1e7: CMP dword ptr [EAX + 0x278],0x0
// 004da1ee: JZ 0x004dab2f
//   XREF to: 004dab2f (CONDITIONAL_JUMP)
// 004da1f4: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_004da1f4
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004da1f9: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da1f9
//   XREF to: Stack[0x4] (READ)
// 004da1ff: CMP dword ptr [EAX + 0x240],0x0
// 004da206: JNZ 0x004da219
//   XREF to: 004da219 (CONDITIONAL_JUMP)
// 004da208: PUSH 0x1
// 004da20a: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004da210: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004da211: CALL core_set.cpp_CDemonSet_FUN_0056c1a0
//   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)
// 004da216: ADD ESP,0x8
// 004da219: MOV EAX,[0x00680a00]
//   Label: LAB_004da219
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004da21e: PUSH EAX
//   XREF to: 02f7c740 (DATA)
// 004da21f: CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
//   XREF to: 005435a0 (UNCONDITIONAL_CALL)
// 004da224: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da22a: MOV EDX,dword ptr [EAX + 0x1fc]
// 004da230: ADD ESP,0x4
// 004da233: TEST EDX,EDX
// 004da235: JZ 0x004dab41
//   XREF to: 004dab41 (CONDITIONAL_JUMP)
// 004da23b: LEA EAX,[EBP + -0x22]
//   XREF to: Stack[-0xb0] (DATA)
// 004da23e: PUSH EAX
// 004da23f: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 004da244: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004da249: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004da250: LEA EAX,[EBP + -0x22]
//   XREF to: Stack[-0xb0] (DATA)
// 004da253: ADD EDX,0x20
// 004da256: ADD ESP,0x4
// 004da259: CMP EAX,EDX
// 004da25b: JZ 0x004da26e
//   XREF to: 004da26e (CONDITIONAL_JUMP)
// 004da25d: MOV EAX,dword ptr [EDX]
// 004da25f: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 004da262: MOV EAX,dword ptr [EDX + 0x4]
// 004da265: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 004da268: MOV EAX,dword ptr [EDX + 0x8]
// 004da26b: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 004da26e: MOV EAX,[0x02db87d0]
//   Label: LAB_004da26e
//   XREF to: 02db87d0 (READ)
// 004da273: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004da27a: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa4] (DATA)
// 004da27d: ADD EDX,0x30
// 004da280: CMP EAX,EDX
// 004da282: JZ 0x004da295
//   XREF to: 004da295 (CONDITIONAL_JUMP)
// 004da284: MOV EAX,dword ptr [EDX]
// 004da286: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004da289: MOV EAX,dword ptr [EDX + 0x4]
// 004da28c: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004da28f: MOV EAX,dword ptr [EDX + 0x8]
// 004da292: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 004da295: LEA EAX,[EBP + -0x22]
//   Label: LAB_004da295
//   XREF to: Stack[-0xb0] (DATA)
// 004da298: PUSH EAX
// 004da299: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 004da29e: ADD ESP,0x4
// 004da2a1: LEA EDX,[EBP + -0x16]
//   XREF to: Stack[-0xa4] (DATA)
// 004da2a4: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004da2a9: PUSH EDX
// 004da2aa: LEA EDX,[EBP + -0x22]
//   XREF to: Stack[-0xb0] (DATA)
// 004da2ad: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004da2b4: PUSH EDX
// 004da2b5: MOV ECX,dword ptr [EAX + 0x154]
// 004da2bb: PUSH EAX
// 004da2bc: CALL dword ptr [ECX + 0x60]
// 004da2bf: MOV AH,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 004da2c5: ADD ESP,0xc
// 004da2c8: TEST AH,0x1
// 004da2cb: JZ 0x004da36d
//   XREF to: 004da36d (CONDITIONAL_JUMP)
// 004da2d1: MOV ESI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004da2d7: PUSH ESI
// 004da2d8: MOV EDI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004da2de: PUSH EDI
// 004da2df: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 004da2e4: LEA ESI,[EBP + 0x6]
//   XREF to: Stack[-0x88] (DATA)
// 004da2e7: LEA EDI,[EBP + 0x1e]
//   XREF to: Stack[-0x70] (DATA)
// 004da2ea: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 004da2ef: LEA ESI,[EBP + 0x6]
//   XREF to: Stack[-0x88] (DATA)
// 004da2f2: ADD ESP,0xc
// 004da2f5: LEA EAX,[EBP + 0x1e]
//   XREF to: Stack[-0x70] (DATA)
// 004da2f8: LEA EBX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 004da2fb: PUSH EAX
// 004da2fc: MOVSD ES:EDI,ESI
// 004da2fd: MOVSD ES:EDI,ESI
// 004da2fe: MOVSD ES:EDI,ESI
// 004da2ff: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 004da304: LEA ESI,[EBP + -0x6]
//   XREF to: Stack[-0x94] (DATA)
// 004da307: LEA EDI,[EBP + 0x1e]
//   XREF to: Stack[-0x70] (DATA)
// 004da30a: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 004da30f: LEA ESI,[EBP + -0x6]
//   XREF to: Stack[-0x94] (DATA)
// 004da312: LEA EAX,[EBP + 0x1e]
//   XREF to: Stack[-0x70] (DATA)
// 004da315: ADD ESP,0x8
// 004da318: MOVSD ES:EDI,ESI
// 004da319: MOVSD ES:EDI,ESI
// 004da31a: MOVSD ES:EDI,ESI
// 004da31b: FILD dword ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 004da31d: FMUL float ptr [0x0065e9bc]
//   XREF to: 0065e9bc (READ)
// 004da323: FSTP float ptr [EBX]
//   XREF to: Stack[-0x7c] (DATA)
// 004da325: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 004da328: FMUL float ptr [0x0065e9bc]
//   XREF to: 0065e9bc (READ)
// 004da32e: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x78] (WRITE)
// 004da331: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 004da334: FMUL float ptr [0x0065e9bc]
//   XREF to: 0065e9bc (READ)
// 004da33a: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x74] (WRITE)
// 004da33d: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004da342: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004da349: LEA EDX,[EAX + 0x30]
// 004da34c: PUSH EDX
// 004da34d: LEA EDX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 004da350: PUSH EDX
// 004da351: MOV ECX,dword ptr [EAX + 0x154]
// 004da357: PUSH EAX
// 004da358: CALL dword ptr [ECX + 0x60]
// 004da35b: MOV DL,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 004da361: AND DL,0xfe
// 004da364: ADD ESP,0xc
// 004da367: MOV byte ptr [0x02cf6a94],DL
//   XREF to: 02cf6a94 (WRITE)
// 004da36d: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da36d
//   XREF to: Stack[0x4] (READ)
// 004da373: PUSH EAX
// 004da374: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 004da379: ADD ESP,0x4
// 004da37c: MOV EDX,dword ptr [0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004da382: PUSH EDX
//   XREF to: 02f7c740 (DATA)
// 004da383: CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
//   XREF to: 00543150 (UNCONDITIONAL_CALL)
// 004da388: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da38e: MOV ECX,dword ptr [EAX + 0x240]
// 004da394: ADD ESP,0x4
// 004da397: TEST ECX,ECX
// 004da399: JNZ 0x004da3aa
//   XREF to: 004da3aa (CONDITIONAL_JUMP)
// 004da39b: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004da3a1: PUSH EBX
//   XREF to: 03114278 (DATA)
// 004da3a2: CALL core_set.cpp_CDemonSet_FUN_0056be80
//   XREF to: 0056be80 (UNCONDITIONAL_CALL)
// 004da3a7: ADD ESP,0x4
// 004da3aa: PUSH 0xffff
//   Label: LAB_004da3aa
// 004da3af: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004da3b5: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004da3b6: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004da3bb: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da3c1: MOV EDI,dword ptr [EAX + 0x20c]
// 004da3c7: ADD ESP,0x8
// 004da3ca: TEST EDI,EDI
// 004da3cc: JZ 0x004da419
//   XREF to: 004da419 (CONDITIONAL_JUMP)
// 004da3ce: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004da3d3: MOV EDX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 004da3d6: SUB EAX,EDX
// 004da3d8: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004da3db: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004da3de: FMUL double ptr [0x0062b5bd]
//   XREF to: 0062b5bd (READ)
// 004da3e4: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004da3e9: FMUL double ptr [0x0062b5c5]
//   XREF to: 0062b5c5 (READ)
// 004da3ef: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004da3f5: FXCH
// 004da3f7: FMUL double ptr [0x0062b5cd]
//   XREF to: 0062b5cd (READ)
// 004da3fd: FDIVRP
// 004da3ff: SUB ESP,0x8
// 004da402: FSTP double ptr [ESP]
// 004da405: PUSH 0x62b462
//   XREF to: 0062b462 (DATA)
// 004da40a: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004da410: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004da411: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004da416: ADD ESP,0x10
// 004da419: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da419
//   XREF to: Stack[0x4] (READ)
// 004da41f: CMP dword ptr [EAX + 0x208],0x0
// 004da426: JNZ 0x004dab18
//   XREF to: 004dab18 (CONDITIONAL_JUMP)
// 004da42c: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 004da431: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da437: CMP dword ptr [EAX + 0x240],0x0
// 004da43e: JZ 0x004da44f
//   XREF to: 004da44f (CONDITIONAL_JUMP)
// 004da440: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004da446: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004da447: CALL core_set.cpp_CDemonSet_FUN_0056c990
//   XREF to: 0056c990 (UNCONDITIONAL_CALL)
// 004da44c: ADD ESP,0x4
// 004da44f: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da44f
//   XREF to: Stack[0x4] (READ)
// 004da455: CMP dword ptr [EAX + 0x210],0x0
// 004da45c: JZ 0x004dab5e
//   XREF to: 004dab5e (CONDITIONAL_JUMP)
// 004da462: PUSH 0x3e
//   Label: LAB_004da462
// 004da464: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004da469: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004da46a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004da46c: CALL dword ptr [EDX + 0x4]
// 004da46f: ADD ESP,0x8
// 004da472: TEST EAX,EAX
// 004da474: JZ 0x004da4a3
//   XREF to: 004da4a3 (CONDITIONAL_JUMP)
// 004da476: MOV ECX,dword ptr [0x02d82568]
//   XREF to: 02d82568 (READ)
// 004da47c: INC ECX
// 004da47d: PUSH ECX
// 004da47e: PUSH 0x62b486
//   XREF to: 0062b486 (DATA)
// 004da483: PUSH 0x2d82570
//   XREF to: 02d82570 (DATA)
// 004da488: MOV dword ptr [0x02d82568],ECX
//   XREF to: 02d82568 (WRITE)
// 004da48e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da493: ADD ESP,0xc
// 004da496: PUSH 0x2d82570
//   XREF to: 02d82570 (DATA)
// 004da49b: CALL engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   XREF to: 005490c0 (UNCONDITIONAL_CALL)
// 004da4a0: ADD ESP,0x4
// 004da4a3: MOV EAX,[0x02db87d0]
//   Label: LAB_004da4a3
//   XREF to: 02db87d0 (READ)
// 004da4a8: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004da4af: ADD EAX,0x1f738
// 004da4b4: PUSH EAX
// 004da4b5: CALL core_inv.cpp_CInventory_renderAllItems_FUN_00500690
//   XREF to: 00500690 (UNCONDITIONAL_CALL)
// 004da4ba: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da4c0: MOV ESI,dword ptr [EAX + 0x278]
// 004da4c6: ADD ESP,0x4
// 004da4c9: TEST ESI,ESI
// 004da4cb: JZ 0x004da4dc
//   XREF to: 004da4dc (CONDITIONAL_JUMP)
// 004da4cd: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004da4d3: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004da4d4: CALL core_set.cpp_CDemonSet_FUN_0056d190
//   XREF to: 0056d190 (UNCONDITIONAL_CALL)
// 004da4d9: ADD ESP,0x4
// 004da4dc: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da4dc
//   XREF to: Stack[0x4] (READ)
// 004da4e2: PUSH EAX
// 004da4e3: CALL core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50
//   XREF to: 004d7e50 (UNCONDITIONAL_CALL)
// 004da4e8: MOV EDX,dword ptr [0x02d831b0]
//   XREF to: 02d831b0 (READ)
// 004da4ee: ADD ESP,0x4
// 004da4f1: TEST EDX,EDX
// 004da4f3: JZ 0x004da558
//   XREF to: 004da558 (CONDITIONAL_JUMP)
// 004da4f5: PUSH 0x1d
// 004da4f7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004da4fc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004da4fd: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004da4ff: CALL dword ptr [EDX]
// 004da501: ADD ESP,0x8
// 004da504: TEST EAX,EAX
// 004da506: JZ 0x004da532
//   XREF to: 004da532 (CONDITIONAL_JUMP)
// 004da508: PUSH 0x2f
// 004da50a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004da50f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004da510: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004da512: CALL dword ptr [EDX + 0x4]
// 004da515: ADD ESP,0x8
// 004da518: TEST EAX,EAX
// 004da51a: JZ 0x004da532
//   XREF to: 004da532 (CONDITIONAL_JUMP)
// 004da51c: MOV ECX,dword ptr [0x02d831b4]
//   XREF to: 02d831b4 (READ)
// 004da522: TEST ECX,ECX
// 004da524: JZ 0x004dab78
//   XREF to: 004dab78 (CONDITIONAL_JUMP)
// 004da52a: XOR EDI,EDI
// 004da52c: MOV dword ptr [0x02d831b4],EDI
//   XREF to: 02d831b4 (WRITE)
// 004da532: CMP dword ptr [0x02d831b8],0x0
//   Label: LAB_004da532
//   XREF to: 02d831b8 (READ)
// 004da539: JLE 0x004dab8e
//   XREF to: 004dab8e (CONDITIONAL_JUMP)
// 004da53f: MOV EDX,dword ptr [0x02d831b8]
//   XREF to: 02d831b8 (READ)
// 004da545: CMP EDX,dword ptr [0x02d831bc]
//   XREF to: 02d831bc (READ)
// 004da54b: JG 0x004dab8e
//   XREF to: 004dab8e (CONDITIONAL_JUMP)
// 004da551: XOR EAX,EAX
// 004da553: MOV [0x02d831b4],EAX
//   XREF to: 02d831b4 (WRITE)
// 004da558: MOV EAX,[0x00680d50]
//   Label: LAB_004da558
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004da55d: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 004da55e: CALL core_script.cpp_FUN_00559b20
//   XREF to: 00559b20 (UNCONDITIONAL_CALL)
// 004da563: ADD ESP,0x4
// 004da566: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da56c: PUSH EDX
// 004da56d: CALL core_game.cpp_CGame_renderOverlay_FUN_004d8040
//   XREF to: 004d8040 (UNCONDITIONAL_CALL)
// 004da572: ADD ESP,0x4
// 004da575: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da57b: PUSH ECX
// 004da57c: CALL core_game.cpp_FUN_004e0aa0
//   XREF to: 004e0aa0 (UNCONDITIONAL_CALL)
// 004da581: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da587: MOV EBX,dword ptr [EAX + 0x1e4]
// 004da58d: ADD ESP,0x4
// 004da590: TEST EBX,EBX
// 004da592: JZ 0x004dadbc
//   XREF to: 004dadbc (CONDITIONAL_JUMP)
// 004da598: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004da59d: MOV EDX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 004da5a3: IMUL EDX,EDX,0x1a4
// 004da5a9: MOV ECX,dword ptr [EDX + EAX*0x1 + 0x150]
//   XREF to: 031143c8 (DATA)
// 004da5b0: PUSH ECX
// 004da5b1: PUSH 0x3275924
//   XREF to: 03275924 (DATA)
// 004da5b6: PUSH 0x62b492
//   XREF to: 0062b492 (DATA)
// 004da5bb: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da5c1: PUSH EAX
// 004da5c2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da5c7: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004da5cc: ADD ESP,0x10
// 004da5cf: SUB EAX,0x16
// 004da5d2: PUSH EAX
// 004da5d3: PUSH 0x0
// 004da5d5: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da5db: PUSH EAX
// 004da5dc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da5e1: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da5e7: MOV EBX,dword ptr [0x02d7c2e8]
//   XREF to: 02d7c2e8 (READ)
// 004da5ed: FLD double ptr [0x02d7c2e0]
//   XREF to: 02d7c2e0 (READ)
// 004da5f3: INC EBX
// 004da5f4: FLD float ptr [EAX + 0x264]
// 004da5fa: MOV dword ptr [0x02d7c2e8],EBX
//   XREF to: 02d7c2e8 (WRITE)
// 004da600: FXCH
// 004da602: FADD ST0,ST1
// 004da604: FILD dword ptr [0x02d7c2e8]
//   XREF to: 02d7c2e8 (READ)
// 004da60a: FXCH
// 004da60c: FSTP double ptr [0x02d7c2e0]
//   XREF to: 02d7c2e0 (WRITE)
// 004da612: FDIV double ptr [0x02d7c2e0]
//   XREF to: 02d7c2e0 (READ)
// 004da618: FLD1
// 004da61a: FDIVRP ST2,ST0
// 004da61c: ADD ESP,0xc
// 004da61f: MOV ESI,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 004da625: PUSH ESI
// 004da626: SUB ESP,0x8
// 004da629: FSTP double ptr [ESP]
// 004da62c: SUB ESP,0x8
// 004da62f: FSTP double ptr [ESP]
// 004da632: PUSH 0x62b4a8
//   XREF to: 0062b4a8 (DATA)
// 004da637: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da63d: PUSH EAX
// 004da63e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da643: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004da648: ADD ESP,0x1c
// 004da64b: SUB EAX,0xb
// 004da64e: PUSH EAX
// 004da64f: PUSH 0x0
// 004da651: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da657: PUSH EAX
// 004da658: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da65d: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004da662: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004da669: FLD double ptr [0x0062b5d5]
//   XREF to: 0062b5d5 (READ)
// 004da66f: FLD float ptr [EAX + 0x34]
// 004da672: FMUL ST1
// 004da674: ADD ESP,0xc
// 004da677: FLD double ptr [0x0062b5dd]
//   XREF to: 0062b5dd (READ)
// 004da67d: FXCH
// 004da67f: FMUL ST1
// 004da681: SUB ESP,0x8
// 004da684: FSTP double ptr [ESP]
// 004da687: FLD float ptr [EAX + 0x38]
// 004da68a: FMUL ST2
// 004da68c: FMUL ST1
// 004da68e: SUB ESP,0x8
// 004da691: FSTP double ptr [ESP]
// 004da694: FLD float ptr [EAX + 0x30]
// 004da697: FMULP ST2
// 004da699: FMULP
// 004da69b: SUB ESP,0x8
// 004da69e: FSTP double ptr [ESP]
// 004da6a1: SUB ESP,0x8
// 004da6a4: FLD float ptr [EAX + 0x28]
// 004da6a7: FSTP double ptr [ESP]
// 004da6aa: SUB ESP,0x8
// 004da6ad: FLD float ptr [EAX + 0x24]
// 004da6b0: FSTP double ptr [ESP]
// 004da6b3: SUB ESP,0x8
// 004da6b6: FLD float ptr [EAX + 0x20]
// 004da6b9: FSTP double ptr [ESP]
// 004da6bc: PUSH 0x62b4c0
//   XREF to: 0062b4c0 (DATA)
// 004da6c1: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da6c7: PUSH EAX
// 004da6c8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da6cd: ADD ESP,0x38
// 004da6d0: PUSH 0x0
// 004da6d2: PUSH 0x0
// 004da6d4: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da6da: PUSH EAX
// 004da6db: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da6e0: ADD ESP,0xc
// 004da6e3: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da6e9: MOV EAX,dword ptr [EAX + 0x274]
// 004da6ef: MOV EDI,dword ptr [EAX*0x4 + 0x67b658]
//   XREF to: 0067b658 (DATA)
// 004da6f6: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da6fc: MOV EAX,dword ptr [EAX + 0x1fc]
// 004da702: PUSH EDI
// 004da703: MOV EDX,dword ptr [EAX*0x4 + 0x67b658]
//   XREF to: 0067b658 (DATA)
// 004da70a: PUSH EDX
// 004da70b: PUSH 0x62b4f7
//   XREF to: 0062b4f7 (DATA)
// 004da710: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da716: PUSH EAX
// 004da717: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da71c: ADD ESP,0x10
// 004da71f: PUSH 0xb
// 004da721: PUSH 0x0
// 004da723: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da729: PUSH EAX
// 004da72a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da72f: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da735: MOV ECX,dword ptr [EAX + 0x9bc]
// 004da73b: ADD ESP,0xc
// 004da73e: TEST ECX,ECX
// 004da740: JZ 0x004da78a
//   XREF to: 004da78a (CONDITIONAL_JUMP)
// 004da742: SUB ESP,0x8
// 004da745: FLD float ptr [ECX + 0x8]
// 004da748: FSTP double ptr [ESP]
// 004da74b: SUB ESP,0x8
// 004da74e: FLD float ptr [ECX + 0x4]
// 004da751: FSTP double ptr [ESP]
// 004da754: SUB ESP,0x8
// 004da757: FLD float ptr [ECX]
// 004da759: FSTP double ptr [ESP]
// 004da75c: PUSH 0x62b518
//   XREF to: 0062b518 (DATA)
// 004da761: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da767: PUSH EAX
// 004da768: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da76d: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004da772: ADD ESP,0x20
// 004da775: SUB EAX,0x4d
// 004da778: PUSH EAX
// 004da779: PUSH 0x0
// 004da77b: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da781: PUSH EAX
// 004da782: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da787: ADD ESP,0xc
// 004da78a: LEA EAX,[EBP + 0x46]
//   Label: LAB_004da78a
//   XREF to: Stack[-0x48] (DATA)
// 004da78d: PUSH EAX
// 004da78e: LEA EAX,[EBP + 0x42]
//   XREF to: Stack[-0x4c] (DATA)
// 004da791: PUSH EAX
// 004da792: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x50] (DATA)
// 004da795: PUSH EAX
// 004da796: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x54] (DATA)
// 004da799: PUSH EAX
// 004da79a: LEA EAX,[EBP + 0x36]
//   XREF to: Stack[-0x58] (DATA)
// 004da79d: PUSH EAX
// 004da79e: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x5c] (DATA)
// 004da7a1: PUSH EAX
// 004da7a2: CALL sound_sndmain.cpp_FUN_005aa6a0
//   XREF to: 005aa6a0 (UNCONDITIONAL_CALL)
// 004da7a7: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x48] (READ)
// 004da7aa: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004da7ad: ADD ESP,0x18
// 004da7b0: FLD double ptr [0x0062b5e5]
//   XREF to: 0062b5e5 (READ)
// 004da7b6: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004da7b9: FMUL ST1
// 004da7bb: SUB ESP,0x8
// 004da7be: FSTP double ptr [ESP]
// 004da7c1: MOV EBX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x50] (READ)
// 004da7c4: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (READ)
// 004da7c7: MOV dword ptr [EBP + 0x7a],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004da7ca: ADD EAX,EBX
// 004da7cc: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004da7cf: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004da7d2: FMUL ST1
// 004da7d4: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004da7d7: FMUL ST2
// 004da7d9: SUB ESP,0x8
// 004da7dc: FSTP double ptr [ESP]
// 004da7df: SUB ESP,0x8
// 004da7e2: FSTP double ptr [ESP]
// 004da7e5: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (READ)
// 004da7e8: MOV ESI,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (READ)
// 004da7eb: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004da7ee: PUSH ESI
// 004da7ef: FILD dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004da7f2: FMULP
// 004da7f4: SUB ESP,0x8
// 004da7f7: FSTP double ptr [ESP]
// 004da7fa: MOV EDI,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x5c] (READ)
// 004da7fd: PUSH EDI
// 004da7fe: CALL sound_sndmain.cpp_FUN_005a9ff0
//   XREF to: 005a9ff0 (UNCONDITIONAL_CALL)
// 004da803: PUSH EAX
// 004da804: PUSH 0x62b528
//   XREF to: 0062b528 (DATA)
// 004da809: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da80f: PUSH EAX
// 004da810: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da815: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004da81a: ADD ESP,0x34
// 004da81d: SUB EAX,0x42
// 004da820: PUSH EAX
// 004da821: PUSH 0x0
// 004da823: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da829: PUSH EAX
// 004da82a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da82f: ADD ESP,0xc
// 004da832: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da838: PUSH EAX
// 004da839: CALL engine_texture.cpp_getTextureCacheStats_FUN_005dd970
//   XREF to: 005dd970 (UNCONDITIONAL_CALL)
// 004da83e: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004da843: ADD ESP,0x4
// 004da846: SUB EAX,0x37
// 004da849: PUSH EAX
// 004da84a: PUSH 0x0
// 004da84c: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da852: PUSH EAX
// 004da853: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da858: ADD ESP,0xc
// 004da85b: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da861: PUSH EAX
// 004da862: CALL core_skeleton.cpp_FUN_005a1ed0
//   XREF to: 005a1ed0 (UNCONDITIONAL_CALL)
// 004da867: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004da86c: ADD ESP,0x4
// 004da86f: SUB EAX,0x2c
// 004da872: PUSH EAX
// 004da873: PUSH 0x0
// 004da875: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da87b: PUSH EAX
// 004da87c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da881: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004da886: ADD ESP,0xc
// 004da889: SUB EAX,0x21
// 004da88c: PUSH EAX
// 004da88d: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004da893: PUSH 0x0
// 004da895: ADD EAX,0xd0
// 004da89a: PUSH EAX
// 004da89b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da8a0: MOV EAX,[0x03f6b878]
//   XREF to: 03f6b878 (READ)
// 004da8a5: ADD ESP,0xc
// 004da8a8: TEST EAX,EAX
// 004da8aa: JZ 0x004da921
//   XREF to: 004da921 (CONDITIONAL_JUMP)
// 004da8ac: PUSH 0x400
// 004da8b1: CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70
//   XREF to: 005b7e70 (UNCONDITIONAL_CALL)
// 004da8b6: ADD ESP,0x4
// 004da8b9: PUSH EAX
// 004da8ba: PUSH 0x200
// 004da8bf: CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70
//   XREF to: 005b7e70 (UNCONDITIONAL_CALL)
// 004da8c4: ADD ESP,0x4
// 004da8c7: PUSH EAX
// 004da8c8: PUSH 0x100
// 004da8cd: CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70
//   XREF to: 005b7e70 (UNCONDITIONAL_CALL)
// 004da8d2: ADD ESP,0x4
// 004da8d5: PUSH EAX
// 004da8d6: PUSH 0x80
// 004da8db: CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70
//   XREF to: 005b7e70 (UNCONDITIONAL_CALL)
// 004da8e0: ADD ESP,0x4
// 004da8e3: PUSH EAX
// 004da8e4: PUSH 0x40
// 004da8e6: CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70
//   XREF to: 005b7e70 (UNCONDITIONAL_CALL)
// 004da8eb: ADD ESP,0x4
// 004da8ee: PUSH EAX
// 004da8ef: PUSH 0x20
// 004da8f1: CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70
//   XREF to: 005b7e70 (UNCONDITIONAL_CALL)
// 004da8f6: ADD ESP,0x4
// 004da8f9: PUSH EAX
// 004da8fa: PUSH 0x62b579
//   XREF to: 0062b579 (DATA)
// 004da8ff: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da905: PUSH EAX
// 004da906: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da90b: ADD ESP,0x20
// 004da90e: PUSH 0x2c
// 004da910: PUSH 0x0
// 004da912: LEA EAX,[EBP + 0xfffffcb2]
//   XREF to: Stack[-0x3dc] (DATA)
// 004da918: PUSH EAX
// 004da919: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004da91e: ADD ESP,0xc
// 004da921: CMP dword ptr [0x02d831c0],0x0
//   Label: LAB_004da921
//   XREF to: 02d831c0 (READ)
// 004da928: JZ 0x004da981
//   XREF to: 004da981 (CONDITIONAL_JUMP)
// 004da92a: CALL sound_sndmain.cpp_FUN_005a9ef0
//   XREF to: 005a9ef0 (UNCONDITIONAL_CALL)
// 004da92f: MOV ESI,0x37
// 004da934: MOV EBX,EAX
// 004da936: TEST EAX,EAX
// 004da938: JZ 0x004da981
//   XREF to: 004da981 (CONDITIONAL_JUMP)
// 004da93a: LEA EAX,[EBP + 0xfffffa62]
//   Label: LAB_004da93a
//   XREF to: Stack[-0x62c] (DATA)
// 004da940: PUSH EAX
// 004da941: CALL sound_sndmain.cpp_FUN_005a8480
//   XREF to: 005a8480 (UNCONDITIONAL_CALL)
// 004da946: ADD ESP,0x4
// 004da949: LEA EAX,[EBP + 0xfffffa62]
//   XREF to: Stack[-0x62c] (DATA)
// 004da94f: PUSH EAX
// 004da950: PUSH EBX
// 004da951: CALL sound_sndmain.cpp_CallToLockDoSomethingAndUnlockSound2_FUN_005a96e0
//   XREF to: 005a96e0 (UNCONDITIONAL_CALL)
// 004da956: ADD ESP,0x8
// 004da959: TEST EAX,EAX
// 004da95b: JZ 0x004da972
//   XREF to: 004da972 (CONDITIONAL_JUMP)
// 004da95d: LEA EAX,[EBP + 0xfffffa62]
//   XREF to: Stack[-0x62c] (DATA)
// 004da963: PUSH EAX
// 004da964: PUSH ESI
// 004da965: PUSH 0x0
// 004da967: CALL engine_2d.c_drawTextXY_FUN_00402130
//   XREF to: 00402130 (UNCONDITIONAL_CALL)
// 004da96c: ADD ESI,0xb
// 004da96f: ADD ESP,0xc
// 004da972: PUSH EBX
//   Label: LAB_004da972
// 004da973: CALL sound_sndmain.cpp_FUN_005a9f30
//   XREF to: 005a9f30 (UNCONDITIONAL_CALL)
// 004da978: ADD ESP,0x4
// 004da97b: MOV EBX,EAX
// 004da97d: TEST EAX,EAX
// 004da97f: JNZ 0x004da93a
//   XREF to: 004da93a (CONDITIONAL_JUMP)
// 004da981: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da981
//   XREF to: Stack[0x4] (READ)
// 004da987: CMP dword ptr [EAX + 0x1d8],0x0
// 004da98e: JZ 0x004da99f
//   XREF to: 004da99f (CONDITIONAL_JUMP)
// 004da990: MOV EBX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004da996: PUSH EBX
//   XREF to: 02d05310 (DATA)
// 004da997: CALL core_event.cpp_FUN_004addf0
//   XREF to: 004addf0 (UNCONDITIONAL_CALL)
// 004da99c: ADD ESP,0x4
// 004da99f: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da99f
//   XREF to: Stack[0x4] (READ)
// 004da9a5: CMP dword ptr [EAX + 0x1dc],0x0
// 004da9ac: JZ 0x004da9da
//   XREF to: 004da9da (CONDITIONAL_JUMP)
// 004da9ae: CMP dword ptr [EAX + 0x278],0x0
// 004da9b5: JZ 0x004da9da
//   XREF to: 004da9da (CONDITIONAL_JUMP)
// 004da9b7: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004da9bc: DEC EAX
// 004da9bd: PUSH EAX
// 004da9be: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004da9c3: DEC EAX
// 004da9c4: PUSH EAX
// 004da9c5: PUSH 0xf0
// 004da9ca: PUSH 0x0
// 004da9cc: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004da9d1: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 004da9d2: CALL core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80
//   XREF to: 00559d80 (UNCONDITIONAL_CALL)
// 004da9d7: ADD ESP,0x14
// 004da9da: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004da9da
//   XREF to: Stack[0x4] (READ)
// 004da9e0: CMP dword ptr [EAX + 0x1f8],0x0
// 004da9e7: JZ 0x004daa19
//   XREF to: 004daa19 (CONDITIONAL_JUMP)
// 004da9e9: LEA EAX,[EBP + 0xfffffdb2]
//   XREF to: Stack[-0x2dc] (DATA)
// 004da9ef: PUSH EAX
// 004da9f0: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004da9f6: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004da9f7: CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
//   XREF to: 004a2590 (UNCONDITIONAL_CALL)
// 004da9fc: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004daa01: ADD ESP,0x8
// 004daa04: SUB EAX,0x42
// 004daa07: PUSH EAX
// 004daa08: PUSH 0x0
// 004daa0a: LEA EAX,[EBP + 0xfffffdb2]
//   XREF to: Stack[-0x2dc] (DATA)
// 004daa10: PUSH EAX
// 004daa11: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004daa16: ADD ESP,0xc
// 004daa19: MOV EAX,[0x02db87d0]
//   Label: LAB_004daa19
//   XREF to: 02db87d0 (READ)
// 004daa1e: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004daa25: PUSH EAX
// 004daa26: MOV EDX,dword ptr [EAX + 0x154]
// 004daa2c: CALL dword ptr [EDX + 0x120]
// 004daa32: ADD ESP,0x4
// 004daa35: CMP EAX,0x2
// 004daa38: JNZ 0x004daaa2
//   XREF to: 004daaa2 (CONDITIONAL_JUMP)
// 004daa3a: PUSH 0x62b5a2
//   XREF to: 0062b5a2 (DATA)
// 004daa3f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004daa44: ADD ESP,0x4
// 004daa47: LEA EDI,[EBP + 0xfffffbb2]
//   XREF to: Stack[-0x4dc] (DATA)
// 004daa4d: MOV ESI,EAX
// 004daa4f: PUSH EDI
// 004daa50: MOV AL,byte ptr [ESI]
//   Label: LAB_004daa50
// 004daa52: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x4dc] (DATA)
// 004daa54: CMP AL,0x0
// 004daa56: JZ 0x004daa68
//   XREF to: 004daa68 (CONDITIONAL_JUMP)
// 004daa58: MOV AL,byte ptr [ESI + 0x1]
// 004daa5b: ADD ESI,0x2
// 004daa5e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x4db] (WRITE)
// 004daa61: ADD EDI,0x2
// 004daa64: CMP AL,0x0
// 004daa66: JNZ 0x004daa50
//   XREF to: 004daa50 (CONDITIONAL_JUMP)
// 004daa68: POP EDI
//   Label: LAB_004daa68
// 004daa69: LEA EAX,[EBP + 0xfffffbb2]
//   XREF to: Stack[-0x4dc] (DATA)
// 004daa6f: PUSH EAX
// 004daa70: XOR EAX,EAX
// 004daa72: PUSH 0x0
// 004daa74: MOV AL,[0x02d00c20]
//   XREF to: 02d00c20 (READ)
// 004daa79: PUSH EAX
// 004daa7a: MOV EAX,[0x020a5718]
//   XREF to: 020a5718 (READ)
// 004daa7f: MOV EDX,dword ptr [EAX + 0x316c]
// 004daa85: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004daa8b: ADD EDX,EDX
// 004daa8d: SUB ECX,EDX
// 004daa8f: PUSH ECX
// 004daa90: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004daa96: PUSH EBX
// 004daa97: PUSH 0x0
// 004daa99: PUSH EAX
// 004daa9a: CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
// 004daa9f: ADD ESP,0x1c
// 004daaa2: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004daaa2
//   XREF to: Stack[0x4] (READ)
// 004daaa8: CMP dword ptr [EAX + 0xac8],0x0
// 004daaaf: JZ 0x004daaba
//   XREF to: 004daaba (CONDITIONAL_JUMP)
// 004daab1: PUSH EAX
// 004daab2: CALL core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
//   XREF to: 004d89d0 (UNCONDITIONAL_CALL)
// 004daab7: ADD ESP,0x4
// 004daaba: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004daaba
//   XREF to: Stack[0x4] (READ)
// 004daac0: CMP dword ptr [EAX + 0x280],0x0
// 004daac7: JZ 0x004daad8
//   XREF to: 004daad8 (CONDITIONAL_JUMP)
// 004daac9: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004daacf: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004daad0: CALL engine_console.cpp_CConsole_render_FUN_00441b00
//   XREF to: 00441b00 (UNCONDITIONAL_CALL)
// 004daad5: ADD ESP,0x4
// 004daad8: MOV EAX,[0x02d828d4]
//   Label: LAB_004daad8
//   XREF to: 02d828d4 (READ)
// 004daadd: TEST EAX,EAX
// 004daadf: JLE 0x004daaee
//   XREF to: 004daaee (CONDITIONAL_JUMP)
// 004daae1: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004daae6: CALL shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
//   XREF to: 004a4d40 (UNCONDITIONAL_CALL)
// 004daaeb: ADD ESP,0x4
// 004daaee: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_004daaee
//   XREF to: Stack[0x4] (READ)
// 004daaf4: CMP dword ptr [EAX + 0x1fc],0x0
// 004daafb: JZ 0x004dab0e
//   XREF to: 004dab0e (CONDITIONAL_JUMP)
// 004daafd: PUSH 0x0
// 004daaff: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004dab05: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004dab06: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 004dab0b: ADD ESP,0x8
// 004dab0e: PUSH 0x0
//   Label: LAB_004dab0e
// 004dab10: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 004dab15: ADD ESP,0x4
// 004dab18: CMP dword ptr [EBP + 0x4e],0x0
//   Label: LAB_004dab18
//   XREF to: Stack[-0x40] (READ)
// 004dab1c: JZ 0x004da1ac
//   XREF to: 004da1ac (CONDITIONAL_JUMP)
// 004dab22: CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   XREF to: 005ed630 (UNCONDITIONAL_CALL)
// 004dab27: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 004dab2a: POP EBP
// 004dab2b: POP EDI
// 004dab2c: POP ESI
// 004dab2d: POP EBX
// 004dab2e: RET
// 004dab2f: CMP dword ptr [EAX + 0x27c],0x0
//   Label: LAB_004dab2f
// 004dab36: JNZ 0x004da1f4
//   XREF to: 004da1f4 (CONDITIONAL_JUMP)
// 004dab3c: JMP 0x004da1f9
//   XREF to: 004da1f9 (UNCONDITIONAL_JUMP)
// 004dab41: PUSH EAX
//   Label: LAB_004dab41
// 004dab42: CALL core_game.cpp_CGame_process_FUN_004e3190
//   XREF to: 004e3190 (UNCONDITIONAL_CALL)
// 004dab47: ADD ESP,0x4
// 004dab4a: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dab50: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004dab51: CALL core_sound.cpp_FUN_005b2fd0
//   XREF to: 005b2fd0 (UNCONDITIONAL_CALL)
// 004dab56: ADD ESP,0x4
// 004dab59: JMP 0x004da36d
//   XREF to: 004da36d (UNCONDITIONAL_JUMP)
// 004dab5e: PUSH 0x62b47b
//   Label: LAB_004dab5e
//   XREF to: 0062b47b (DATA)
// 004dab63: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 004dab68: ADD ESP,0x4
// 004dab6b: TEST EAX,EAX
// 004dab6d: JNZ 0x004da462
//   XREF to: 004da462 (CONDITIONAL_JUMP)
// 004dab73: JMP 0x004da4a3
//   XREF to: 004da4a3 (UNCONDITIONAL_JUMP)
// 004dab78: MOV ESI,0x1
//   Label: LAB_004dab78
// 004dab7d: MOV dword ptr [0x02d831bc],ECX
//   XREF to: 02d831bc (WRITE)
// 004dab83: MOV dword ptr [0x02d831b4],ESI
//   XREF to: 02d831b4 (WRITE)
// 004dab89: JMP 0x004da532
//   XREF to: 004da532 (UNCONDITIONAL_JUMP)
// 004dab8e: CMP dword ptr [0x02d831b4],0x0
//   Label: LAB_004dab8e
//   XREF to: 02d831b4 (READ)
// 004dab95: JZ 0x004da558
//   XREF to: 004da558 (CONDITIONAL_JUMP)
// 004dab9b: MOV EBX,dword ptr [0x02d831bc]
//   XREF to: 02d831bc (READ)
// 004daba1: PUSH EBX
// 004daba2: PUSH 0x62b201
//   XREF to: 0062b201 (DATA)
// 004daba7: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (DATA)
// 004dabad: PUSH EAX
// 004dabae: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004dabb3: ADD ESP,0xc
// 004dabb6: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (DATA)
// 004dabbc: PUSH EAX
// 004dabbd: PUSH 0x62b20d
//   XREF to: 0062b20d (DATA)
// 004dabc2: LEA EAX,[EBP + 0xfffffeb2]
//   XREF to: Stack[-0x1dc] (DATA)
// 004dabc8: PUSH EAX
// 004dabc9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004dabce: ADD ESP,0xc
// 004dabd1: PUSH 0x62b22e
//   XREF to: 0062b22e (DATA)
// 004dabd6: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x114] (DATA)
// 004dabdc: PUSH EAX
// 004dabdd: PUSH 0x62b231
//   XREF to: 0062b231 (DATA)
// 004dabe2: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004dabe7: ADD ESP,0xc
// 004dabea: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004dabed: TEST EAX,EAX
// 004dabef: JZ 0x004da558
//   XREF to: 004da558 (CONDITIONAL_JUMP)
// 004dabf5: XOR ESI,ESI
// 004dabf7: MOV EDI,dword ptr [0x0067b668]
//   XREF to: 0067b668 (READ)
// 004dabfd: MOV dword ptr [EBP + 0x56],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 004dac00: TEST EDI,EDI
// 004dac02: JLE 0x004dad81
//   XREF to: 004dad81 (CONDITIONAL_JUMP)
// 004dac08: XOR EDI,EDI
//   Label: LAB_004dac08
// 004dac0a: MOV EAX,[0x0067b664]
//   XREF to: 0067b664 (READ)
// 004dac0f: MOV dword ptr [EBP + 0x5e],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 004dac12: TEST EAX,EAX
// 004dac14: JLE 0x004dad6c
//   XREF to: 004dad6c (CONDITIONAL_JUMP)
// 004dac1a: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x38] (READ)
// 004dac1d: INC EAX
// 004dac1e: MOV dword ptr [EBP + 0x52],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004dac21: MOV EDX,dword ptr [EBP + 0x5e]
//   Label: LAB_004dac21
//   XREF to: Stack[-0x30] (READ)
// 004dac24: IMUL EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004dac2b: MOV ECX,dword ptr [0x0067b664]
//   XREF to: 0067b664 (READ)
// 004dac31: MOV EAX,EDX
// 004dac33: SAR EDX,0x1f
// 004dac36: IDIV ECX
// 004dac38: MOV EDX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 004dac3b: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004dac41: INC EDX
// 004dac42: IMUL EDX,EBX
// 004dac45: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004dac48: MOV EAX,EDX
// 004dac4a: SAR EDX,0x1f
// 004dac4d: IDIV ECX
// 004dac4f: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004dac55: MOV EDX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x38] (READ)
// 004dac58: IMUL EDX,EDI
// 004dac5b: MOV ECX,dword ptr [0x0067b668]
//   XREF to: 0067b668 (READ)
// 004dac61: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004dac64: MOV EAX,EDX
// 004dac66: SAR EDX,0x1f
// 004dac69: IDIV ECX
// 004dac6b: MOV EDX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (READ)
// 004dac6e: IMUL EDX,EDI
// 004dac71: MOV ESI,dword ptr [0x0067b668]
//   XREF to: 0067b668 (READ)
// 004dac77: MOV ECX,EAX
// 004dac79: MOV EAX,EDX
// 004dac7b: SAR EDX,0x1f
// 004dac7e: IDIV ESI
// 004dac80: XOR EDI,EDI
// 004dac82: XOR EBX,EBX
// 004dac84: MOV dword ptr [EBP + 0x76],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004dac87: MOV dword ptr [EBP + 0x72],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004dac8a: XOR ESI,ESI
// 004dac8c: CMP ECX,EAX
// 004dac8e: JGE 0x004dad07
//   XREF to: 004dad07 (CONDITIONAL_JUMP)
// 004dac94: SHL ECX,0x2
// 004dac97: SHL EAX,0x2
// 004dac9a: MOV dword ptr [EBP + 0x6a],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004dac9d: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004daca0: MOV EDX,dword ptr [EBP + 0x6e]
//   Label: LAB_004daca0
//   XREF to: Stack[-0x20] (READ)
// 004daca3: MOV ECX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 004daca6: CMP ECX,EDX
// 004daca8: JGE 0x004dacf7
//   XREF to: 004dacf7 (CONDITIONAL_JUMP)
// 004dacaa: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 004dacad: LEA EDX,[ECX*0x4 + 0x0]
// 004dacb4: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004dacba: ADD EDX,EAX
// 004dacbc: MOV EAX,dword ptr [EDX]
//   Label: LAB_004dacbc
// 004dacbe: MOV EDI,EAX
// 004dacc0: SHR EDI,0x10
// 004dacc3: AND EDI,0xff
// 004dacc9: ADD EBX,EDI
// 004daccb: MOV EDI,EAX
// 004daccd: SHR EDI,0x8
// 004dacd0: ADD EDX,0x4
// 004dacd3: AND EDI,0xff
// 004dacd9: AND EAX,0xff
// 004dacde: ADD ESI,EDI
// 004dace0: MOV EDI,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 004dace3: INC ECX
// 004dace4: ADD EDI,EAX
// 004dace6: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 004dace9: MOV dword ptr [EBP + 0x72],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004dacec: INC EAX
// 004daced: MOV EDI,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 004dacf0: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004dacf3: CMP ECX,EDI
// 004dacf5: JL 0x004dacbc
//   XREF to: 004dacbc (CONDITIONAL_JUMP)
// 004dacf7: MOV ECX,dword ptr [EBP + 0x6a]
//   Label: LAB_004dacf7
//   XREF to: Stack[-0x24] (READ)
// 004dacfa: ADD ECX,0x4
// 004dacfd: MOV EDI,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 004dad00: MOV dword ptr [EBP + 0x6a],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004dad03: CMP ECX,EDI
// 004dad05: JL 0x004daca0
//   XREF to: 004daca0 (CONDITIONAL_JUMP)
// 004dad07: MOV ECX,dword ptr [EBP + 0x76]
//   Label: LAB_004dad07
//   XREF to: Stack[-0x18] (READ)
// 004dad0a: MOV EDX,EBX
// 004dad0c: MOV EAX,EBX
// 004dad0e: SAR EDX,0x1f
// 004dad11: IDIV ECX
// 004dad13: MOV EBX,EAX
// 004dad15: MOV EDX,ESI
// 004dad17: MOV EAX,ESI
// 004dad19: SAR EDX,0x1f
// 004dad1c: IDIV ECX
// 004dad1e: MOV ESI,EAX
// 004dad20: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 004dad23: MOV EDX,EAX
// 004dad25: SAR EDX,0x1f
// 004dad28: IDIV ECX
// 004dad2a: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004dad2d: MOV EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 004dad30: PUSH EAX
// 004dad31: PUSH EBX
// 004dad32: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004dad37: ADD ESP,0x8
// 004dad3a: MOV EDX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 004dad3d: PUSH EDX
// 004dad3e: PUSH ESI
// 004dad3f: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004dad44: ADD ESP,0x8
// 004dad47: MOV ECX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 004dad4a: PUSH ECX
// 004dad4b: MOV EBX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 004dad4e: MOV ESI,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 004dad51: PUSH EBX
// 004dad52: INC ESI
// 004dad53: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004dad58: MOV dword ptr [EBP + 0x5e],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 004dad5b: MOV EDI,dword ptr [0x0067b664]
//   XREF to: 0067b664 (READ)
// 004dad61: ADD ESP,0x8
// 004dad64: CMP ESI,EDI
// 004dad66: JL 0x004dac21
//   XREF to: 004dac21 (CONDITIONAL_JUMP)
// 004dad6c: MOV EDX,dword ptr [EBP + 0x56]
//   Label: LAB_004dad6c
//   XREF to: Stack[-0x38] (READ)
// 004dad6f: INC EDX
// 004dad70: MOV ECX,dword ptr [0x0067b668]
//   XREF to: 0067b668 (READ)
// 004dad76: MOV dword ptr [EBP + 0x56],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 004dad79: CMP EDX,ECX
// 004dad7b: JL 0x004dac08
//   XREF to: 004dac08 (CONDITIONAL_JUMP)
// 004dad81: PUSH 0x110
//   Label: LAB_004dad81
// 004dad86: PUSH 0x62b237
//   XREF to: 0062b237 (DATA)
// 004dad8b: MOV EBX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 004dad8e: PUSH EBX
// 004dad8f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004dad94: ADD ESP,0xc
// 004dad97: PUSH 0x0
// 004dad99: PUSH 0x0
// 004dad9b: LEA EAX,[EBP + 0xfffffeb2]
//   XREF to: Stack[-0x1dc] (DATA)
// 004dada1: PUSH EAX
// 004dada2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004dada7: MOV ESI,dword ptr [0x02d831bc]
//   XREF to: 02d831bc (READ)
// 004dadad: INC ESI
// 004dadae: ADD ESP,0xc
// 004dadb1: MOV dword ptr [0x02d831bc],ESI
//   XREF to: 02d831bc (WRITE)
// 004dadb7: JMP 0x004da558
//   XREF to: 004da558 (UNCONDITIONAL_JUMP)
// 004dadbc: MOV dword ptr [0x02d7c2e8],EBX
//   Label: LAB_004dadbc
//   XREF to: 02d7c2e8 (WRITE)
// 004dadc2: MOV dword ptr [0x02d7c2e0],EBX
//   XREF to: 02d7c2e0 (WRITE)
// 004dadc8: MOV dword ptr [0x02d7c2e4],EBX
//   XREF to: 02d7c2e4 (WRITE)
// 004dadce: JMP 0x004da921
//   XREF to: 004da921 (UNCONDITIONAL_JUMP)
