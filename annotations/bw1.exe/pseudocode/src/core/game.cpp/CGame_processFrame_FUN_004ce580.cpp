// Name: core_game.cpp_CGame_processFrame_FUN_004ce580
// Address: 004ce580
// Address Range: [[004ce580, 004cf429]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFrame_FUN_004ce580(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_game_cpp_CGame_processFrame_FUN_004ce580(CGame *this_ptr)

{
  char cVar1;
  CHero *pCVar2;
  CNetGame *this_ptr_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  EDeathState EVar6;
  char *pcVar7;
  CLocation *pCVar8;
  UOrientationVector *pUVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  byte bVar14;
  int aiStackY_1074 [579];
  CVector3i *input_ptr;
  int iStack_728;
  CSfxSample CStack_724;
  char acStack_4d4 [256];
  char acStack_3d4 [256];
  char acStack_2d4 [256];
  char acStack_1d4 [200];
  char acStack_10c [100];
  CSlew CStack_a8;
  CVector3i CStack_8c;
  CVector3i CStack_80;
  CVector3f CStack_74;
  CVector3i CStack_68;
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
  
  bVar14 = 0;
  local_44 = 0;
  if (this_ptr->profile_mode != 0) {
    local_48 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  this_ptr_00 = g_CNetGamePtr;
  g_INT_01e7dac8 = 0;
  if ((this_ptr->cinematic_skip_in_progress == 0) && (g_CNetGamePtr->has_pending_sim_frame == 0)) {
    if (g_INT_01c50948 != 0) {
      wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10();
      local_44 = 1;
    }
    if ((this_ptr->screen_clear_enabled != 0) || (this_ptr->screen_clear_condition != 0)) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
    }
    if (((g_CFieldNotesPtr->is_displayed == 0) && (this_ptr->goggles_active == 0)) &&
       (g_CPuzzle_PTR_007c3978 == (CPuzzle *)0x0)) {
      core_set_cpp_CDemonSet_renderScene_FUN_00550580(g_CDemonSetPtr,1);
    }
    if (g_CPuzzle_PTR_007c3978 != (CPuzzle *)0x0) {
      (**(code **)((int)g_CPuzzle_PTR_007c3978->vtable + 0x1c))(g_CPuzzle_PTR_007c3978);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(g_CNetGamePtr);
    if (this_ptr->is_paused == 0) {
      core_game_cpp_CGame_process_FUN_004d8060(this_ptr);
      core_sound_cpp_CSound_process_FUN_0057ce10(g_CSound_PTR_006236b8);
    }
    else {
      core_slew_cpp_CSlew_init_FUN_0056ba00(&CStack_a8);
      pCVar2 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
      pCVar8 = &(pCVar2->base).base.location;
      if (&CStack_a8 != (CSlew *)pCVar8) {
        CStack_a8.position.x = (pCVar8->position).x;
        CStack_a8.position.y = (pCVar2->base).base.location.position.y;
        CStack_a8.position.z = (pCVar2->base).base.location.position.z;
      }
      pCVar2 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
      pUVar9 = &(pCVar2->base).base.orient;
      if (&CStack_a8.orientation != pUVar9) {
        CStack_a8.orientation.vec.x = (pUVar9->vec).x;
        CStack_a8.orientation.vec.y = (pCVar2->base).base.orient.vec.y;
        CStack_a8.orientation.vec.z = (pCVar2->base).base.orient.vec.z;
      }
      core_slew_cpp_CSlew_processInput_FUN_0056ba50(&CStack_a8);
      (*((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._ub)->
        setPositionAndOrientation)
                ((CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4],&CStack_a8.position,
                 (CVector3f *)&CStack_a8.orientation);
      if ((g_BIT_INTEGER32_01c43544.bytes[0] & 1) != 0) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
                  (&g_CDemonCameraInstance,g_INT_01c4353c,g_INT_01c43540,&CStack_68);
        input_ptr = &CStack_8c;
        CStack_8c.x = CStack_68.x;
        *(uint *)((int)&CStack_8c + (uint)bVar14 * -8 + 4) =
             *(uint *)((int)&CStack_68 + (uint)bVar14 * -8 + 4);
        *(uint *)((int)&CStack_8c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             *(uint *)((int)&CStack_68 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
                  (&g_CDemonCameraInstance,input_ptr,&CStack_80);
        CStack_8c.x = CStack_80.x;
        *(uint *)((int)&CStack_8c + (uint)bVar14 * -8 + 4) =
             *(uint *)((int)&CStack_80 + (uint)bVar14 * -8 + 4);
        *(uint *)((int)&CStack_8c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             *(uint *)((int)&CStack_80 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        CStack_74.x = (float)CStack_8c.x * 0.00390625f;
        CStack_74.y = (float)CStack_8c.y * 0.00390625f;
        CStack_74.z = (float)CStack_8c.z * 0.00390625f;
        pCVar2 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
        (*((pCVar2->base).base.vtable._ub)->setPositionAndOrientation)
                  ((CDemonActor *)pCVar2,&CStack_74,(CVector3f *)&(pCVar2->base).base.orient);
        g_BIT_INTEGER32_01c43544.bytes[0] = g_BIT_INTEGER32_01c43544.bytes[0] & 0xfe;
      }
    }
    core_game_cpp_CGame_updateDT_FUN_004cbf20(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(g_CNetGamePtr);
    if (((g_CFieldNotesPtr->is_displayed == 0) && (this_ptr->goggles_active == 0)) &&
       (g_CPuzzle_PTR_007c3978 == (CPuzzle *)0x0)) {
      core_set_cpp_CDemonSet_renderStaticLights_FUN_00550260(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
              (g_CDemonRenderer_PTR_00612560,0xffff);
    if (this_ptr->profile_mode != 0) {
      iStack_18 = wincore_winrun_cpp_getTime_FUN_005b2420();
      iStack_18 = iStack_18 - local_48;
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"screen paint : %3.2f ms\n")
      ;
    }
    if (this_ptr->skip_frame_render == 0) {
      engine_special_cpp_lockFrame_FUN_00581f50();
      if (g_CFieldNotesPtr->is_displayed == 0) {
        if (g_CPuzzle_PTR_007c3978 == (CPuzzle *)0x0) {
          if (this_ptr->goggles_active == 0) {
            if (this_ptr->special_view_active != 0) {
              core_set_cpp_CDemonSet_renderMonsterVisionView_FUN_00551170(g_CDemonSetPtr);
            }
          }
          else {
            core_set_cpp_CDemonSet_renderGogglesView_FUN_00550da0(g_CDemonSetPtr);
          }
        }
        else {
          (**(code **)((int)g_CPuzzle_PTR_007c3978->vtable + 0x18))(g_CPuzzle_PTR_007c3978);
        }
      }
      else {
        core_fldnotes_cpp_CFieldNotes_draw_FUN_004be0f0(g_CFieldNotesPtr);
      }
      if (((this_ptr->developer_mode_enabled != 0) ||
          (pcVar13 = getenv("SPOOKHOUSE"), pcVar13 != (char *)0x0))
         && (iVar3 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                               (g_CKeys_PTR_0061f2a4,DIK_F4), iVar3 != 0)) {
        g_INT_01ccfe94 = g_INT_01ccfe94 + 1;
        _sprintf(g_CHAR_ARRAY_01ccfe98,"demon%d.pcx");
        engine_pcx_c_saveScreenshotGeneral_FUN_00535d80(g_CHAR_ARRAY_01ccfe98);
      }
      core_inv_cpp_CInventory_renderAllItems_FUN_004fae10
                (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory);
      if (this_ptr->screen_clear_enabled != 0) {
        core_set_cpp_CDemonSet_renderLightDebugView_FUN_00551a50(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004cc0c0(this_ptr);
      if (g_INT_01cd0c38 != 0) {
        iVar3 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,DIK_LCONTROL);
        if ((iVar3 != 0) &&
           (iVar3 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_V)
           , iVar3 != 0)) {
          iVar3 = g_INT_01cd0c3c;
          if (g_INT_01cd0c3c == 0) {
            g_INT_01cd0c3c = 1;
            g_INT_01cd0c44 = iVar3;
          }
          else {
            g_INT_01cd0c3c = 0;
          }
        }
        if ((g_INT_01cd0c40 < 1) || (g_INT_01cd0c44 < g_INT_01cd0c40)) {
          if (g_INT_01cd0c3c != 0) {
            _sprintf(acStack_10c,"noc%05d.raw");
            _sprintf(acStack_1d4,"Movie recording active: movie\\%s");
            p_Stack_38 = engine_dosio_cpp_getFile_FUN_00479180
                                   ("movie",acStack_10c,"wb");
            if (p_Stack_38 != (_FILE *)0x0) {
              iStack_3c = 0;
              if (0 < g_INT_0061d970) {
                do {
                  iStack_34 = 0;
                  if (0 < g_INT_0061d96c) {
                    iStack_40 = iStack_3c + 1;
                    do {
                      iStack_2c = (iStack_34 * g_INT_0061b498) / g_INT_0061d96c;
                      iStack_24 = ((iStack_34 + 1) * g_INT_0061b498) / g_INT_0061d96c;
                      iVar3 = (iStack_3c * g_INT_0061b49c) / g_INT_0061d970;
                      iVar5 = (iStack_40 * g_INT_0061b49c) / g_INT_0061d970;
                      iStack_1c = 0;
                      iStack_20 = 0;
                      iVar11 = 0;
                      iVar12 = 0;
                      if (iVar3 < iVar5) {
                        iStack_28 = iVar3 << 2;
                        iStack_30 = iVar5 << 2;
                        do {
                          if (iStack_2c < iStack_24) {
                            puVar10 = (uint *)(iStack_2c * 4 +
                                              *(int *)((int)g_ARRAY_PTR_01c4354c + iStack_28));
                            iVar3 = iStack_2c;
                            do {
                              uVar4 = *puVar10;
                              puVar10 = puVar10 + 1;
                              iStack_20 = iStack_20 + (uVar4 >> 0x10 & 0xff);
                              iVar3 = iVar3 + 1;
                              iVar11 = iVar11 + (uVar4 & 0xff);
                              iStack_1c = iStack_1c + 1;
                              iVar12 = iVar12 + (uVar4 >> 8 & 0xff);
                            } while (iVar3 < iStack_24);
                          }
                          iStack_28 = iStack_28 + 4;
                        } while (iStack_28 < iStack_30);
                      }
                      iStack_20 = iStack_20 / iStack_1c;
                      iVar12 = iVar12 / iStack_1c;
                      iVar11 = iVar11 / iStack_1c;
                      _fputc(iStack_20,p_Stack_38);
                      _fputc(iVar12,p_Stack_38);
                      _fputc(iVar11,p_Stack_38);
                      iStack_34 = iStack_34 + 1;
                    } while (iStack_34 < g_INT_0061d96c);
                  }
                  iStack_3c = iStack_3c + 1;
                } while (iStack_3c < g_INT_0061d970);
              }
              _fclose(p_Stack_38);
              engine_2d_c_drawText_FUN_00401fe0(acStack_1d4,0,0);
              g_INT_01cd0c44 = g_INT_01cd0c44 + 1;
            }
          }
        }
        else {
          g_INT_01cd0c3c = 0;
        }
      }
      core_script_cpp_CScript_renderSubtitles_FUN_005439b0(g_CScriptPtr);
      core_game_cpp_CGame_renderOverlay_FUN_004cc2b0(this_ptr);
      core_game_cpp_CGame_renderIrisFade_FUN_004d61e0(this_ptr);
      if (this_ptr->camera_debug_enabled == 0) {
        g_DOUBLE_01cc9ba0 = 0.0;
        g_INT_01cc9ba8 = 0;
      }
      else {
        engine_dosio_cpp_splitPath_FUN_00479580
                  (g_CDemonSetPtr->geometry_filename,(char *)0x0,(char *)0x0,
                   (char *)&CStack_724.taken,(char *)0x0);
        _sprintf(acStack_2d4,"Set: %s Camera: \"%s\" group %d");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,g_INT_0061b49c + -0x16);
        g_INT_01cc9ba8 = g_INT_01cc9ba8 + 1;
        g_DOUBLE_01cc9ba0 = g_DOUBLE_01cc9ba0 + (double)this_ptr->delta_time_float;
        _sprintf(acStack_2d4,"FR: %f, AVG: %f, PC: %d");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,g_INT_0061b49c + -0xb);
        _sprintf(acStack_2d4,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0);
        _sprintf(acStack_2d4,"Slew : %s, Virtual Director : %s");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0xb);
        if (this_ptr->debug_fudge_target != (CVector3f *)0x0) {
          _sprintf(acStack_2d4,"Fudge: %g,%g,%g");
          engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,g_INT_0061b49c + -0x4d);
        }
        sound_sndmain_cpp_getSoundMemoryStats_FUN_005746e0
                  (&iStack_54,&stack0xfffff8d8,&iStack_50,(int *)&stack0xfffff8d4,&iStack_4c,
                   (int *)&stack0xfffff8d0);
        iStack_18 = iStack_728;
        sound_sndmain_cpp_countActiveSfx_FUN_00573e20();
        _sprintf(acStack_2d4,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,g_INT_0061b49c + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_00597cd0(acStack_2d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,g_INT_0061b49c + -0x37);
        core_skeleton_cpp_getMemoryStats_FUN_0056b780(acStack_2d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,g_INT_0061b49c + -0x2c);
        engine_2d_c_drawText_FUN_00401fe0(this_ptr->debug_info_string,0,g_INT_0061b49c + -0x21);
        if (g_INT_02c83370 != 0) {
          engine_special_cpp_getTextureInfo_FUN_00582bf0(0x400);
          engine_special_cpp_getTextureInfo_FUN_00582bf0(0x200);
          engine_special_cpp_getTextureInfo_FUN_00582bf0(0x100);
          engine_special_cpp_getTextureInfo_FUN_00582bf0(0x80);
          engine_special_cpp_getTextureInfo_FUN_00582bf0(0x40);
          engine_special_cpp_getTextureInfo_FUN_00582bf0(0x20);
          _sprintf(acStack_2d4,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d");
          engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0x2c);
        }
      }
      if (g_INT_01cd0c48 != 0) {
        uVar4 = sound_sndmain_cpp_getFirstActiveSfx_FUN_00573d20();
        iVar3 = 0x37;
        for (; uVar4 != 0; uVar4 = sound_sndmain_cpp_getNextActiveSfx_FUN_00573d60(uVar4)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_00572340(&CStack_724);
          iVar5 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00573620(uVar4,&CStack_724);
          if (iVar5 != 0) {
            engine_2d_c_drawTextXY_FUN_00402140(0,iVar3,(char *)&CStack_724);
            iVar3 = iVar3 + 0xb;
          }
        }
      }
      if (this_ptr->event_processing_enabled != 0) {
        core_event_cpp_CEventList_render_FUN_004a6d80(g_CEventList_PTR_0061b4d0);
      }
      if ((this_ptr->subtitle_system_enabled != 0) && (this_ptr->screen_clear_enabled != 0)) {
        core_script_cpp_CScript_renderEditor_FUN_00543c00
                  (g_CScriptPtr,0,0xf0,g_INT_0061b498 + -1,g_INT_0061b49c + -1);
      }
      if (this_ptr->editor_tools_enabled != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40
                  (g_CEditorToolsPtr,acStack_4d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_4d4,0,g_INT_0061b49c + -0x42);
      }
      EVar6 = (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uc)->_uc).
                getDeathState)(&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base);
      if (EVar6 == DEATH_STATE_DEAD) {
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("You're dead.  Game over.");
        pcVar13 = acStack_3d4;
        do {
          cVar1 = *pcVar7;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
      }
      if (this_ptr->show_customizable_keys != 0) {
        core_game_cpp_CGame_showCustomizableKeys_FUN_004ccc40(this_ptr);
      }
      if (this_ptr->console_enabled != 0) {
        engine_console_cpp_CConsole_render_FUN_00445690(g_CConsolePtr);
      }
      if (0 < g_CPickList.base.item_count) {
        shape_edittool_cpp_CPickList_renderDialog_FUN_0049b830(&g_CPickList);
      }
      if (this_ptr->is_paused != 0) {
        shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_00497870(g_CEditorToolsPtr,0);
      }
      if ((this_ptr->game_control == CONTROL_MODE_POINT_AND_CLICK) &&
         (core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (g_CEventList_PTR_0061b4d0,"MouseControlMode"), -1 < g_INT_01cd0b40)) {
        core_game_cpp_drawCursor_FUN_004dc1a0();
      }
      uVar4 = this_ptr->goggles_active | this_ptr->special_view_active;
      if ((uVar4 == 0) && (g_INT_01cd0c5c != 0)) {
        engine_special_cpp_clearScreen_FUN_0057dc40();
      }
      g_INT_01cd0c5c = uVar4;
      engine_special_cpp_unlockFrame_FUN_00581fa0(0);
    }
    if (local_44 != 0) {
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005acc00();
      return;
    }
  }
  else {
    this_ptr->is_paused = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(this_ptr_00);
    core_game_cpp_CGame_process_FUN_004d8060(this_ptr);
    if (this_ptr->cinematic_skip_in_progress == 0) {
      core_game_cpp_CGame_updateDT_FUN_004cbf20(this_ptr);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004d7f50(this_ptr,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(g_CNetGamePtr);
  }
  return;
}
