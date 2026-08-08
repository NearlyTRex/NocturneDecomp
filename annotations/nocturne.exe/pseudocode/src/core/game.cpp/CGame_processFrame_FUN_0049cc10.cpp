// Name: core_game.cpp_CGame_processFrame_FUN_0049cc10
// Address: 0049cc10
// Address Range: [[0049cc10, 0049d86f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFrame_FUN_0049cc10(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processFrame_FUN_0049cc10(CGame *this_ptr)

{
  char cVar1;
  CVector3f *pCVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  CNetGame *this_ptr_00;
  _FILE *file;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  byte bVar14;
  uint auStackY_107c [656];
  CVector3i *input_ptr;
  CSfxSample local_604;
  char local_3dc [256];
  char local_2dc [256];
  char local_1dc [200];
  char local_114 [100];
  CSlew local_b0;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c;
  float local_68;
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
  
  bVar14 = 0;
  local_40 = 0;
  if (this_ptr->profile_mode != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  this_ptr_00 = g_CNetGame_PTR_005bdee0;
  _DAT_01e52ef8 = 0;
  if ((this_ptr->cutscene_skippable != 0) || (g_CNetGame_PTR_005bdee0->has_pending_sim_frame != 0))
  {
    this_ptr->is_paused = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(this_ptr_00);
    core_game_cpp_CGame_process_FUN_004a6010(this_ptr);
    if (this_ptr->cutscene_skippable == 0) {
      core_game_cpp_CGame_updateDT_FUN_0049a8a0(this_ptr);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004a5f00(this_ptr,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(g_CNetGame_PTR_005bdee0);
    return;
  }
  if (g_UseExternalRenderer != 0) {
    wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
    local_40 = 1;
  }
  if ((this_ptr->screen_clear_enabled != 0) || (this_ptr->screen_clear_condition != 0)) {
    engine_special_cpp_clearScreen_FUN_0052ee70();
  }
  if (this_ptr->goggles_active == 0) {
    core_set_cpp_CDemonSet_FUN_00509a80(g_CDemonSet_PTR_005be368,1);
  }
  core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(g_CNetGame_PTR_005bdee0);
  if (this_ptr->is_paused == 0) {
    core_game_cpp_CGame_process_FUN_004a6010(this_ptr);
    core_sound_cpp_CSound_FUN_0052dff0(g_CSound_PTR_005bed68);
    xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284);
  }
  else {
    core_slew_cpp_CSlew_FUN_0051f930(&local_b0);
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_b0 != (CSlew *)(iVar6 + 0x20)) {
      local_b0.position.x = (((CSlew *)(iVar6 + 0x20))->position).x;
      local_b0.position.y = *(float *)(iVar6 + 0x24);
      local_b0.position.z = *(float *)(iVar6 + 0x28);
    }
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_b0.orientation != (UOrientationVector *)(iVar6 + 0x30)) {
      local_b0.orientation.vec.x = (((UOrientationVector *)(iVar6 + 0x30))->vec).x;
      local_b0.orientation.vec.y = *(float *)(iVar6 + 0x34);
      local_b0.orientation.vec.z = *(float *)(iVar6 + 0x38);
    }
    core_slew_cpp_CSlew_processInput_FUN_0051f980(&local_b0);
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    (**(code **)(*(int *)(iVar6 + 0x14c) + 0x60))(iVar6,&local_b0,&local_b0.orientation);
    if ((DAT_01bd1d94 & 1) != 0) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                (&g_CDemonCamera_01fb8508,_DAT_01bd1d8c,_DAT_01bd1d90,&local_88);
      input_ptr = &local_7c;
      local_7c.x = local_88.x;
      *(uint *)((int)&local_7c + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&local_88 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&local_7c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&local_88 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
                (&g_CDemonCamera_01fb8508,input_ptr,&local_94);
      local_7c.x = local_94.x;
      *(uint *)((int)&local_7c + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&local_94 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&local_7c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&local_94 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      local_70 = (float)local_7c.x * _DAT_0059de8c;
      local_6c = (float)local_7c.y * _DAT_0059de8c;
      local_68 = (float)local_7c.z * _DAT_0059de8c;
      iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      (**(code **)(*(int *)(iVar6 + 0x14c) + 0x60))(iVar6,&local_70,iVar6 + 0x30);
      DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
    }
  }
  core_game_cpp_CGame_updateDT_FUN_0049a8a0(this_ptr);
  core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(g_CNetGame_PTR_005bdee0);
  if (this_ptr->goggles_active == 0) {
    core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(g_CDemonSet_PTR_005be368);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  if (this_ptr->profile_mode != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_00558a30();
    local_14 = local_14 - local_44;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"screen paint : %3.2f ms\n");
  }
  if (this_ptr->skip_frame_render != 0) goto LAB_0049d5b0;
  engine_special_cpp_lockFrame_FUN_005322e0();
  if (this_ptr->goggles_active != 0) {
    core_set_cpp_CDemonSet_FUN_0050a260(g_CDemonSet_PTR_005be368);
  }
  if (this_ptr->developer_mode_enabled == 0) {
    pcVar9 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005825f0);
    pcVar9 = getenv(pcVar9);
    if (pcVar9 != (char *)0x0) goto LAB_0049cf70;
  }
  else {
LAB_0049cf70:
    iVar6 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F4);
    if (iVar6 != 0) {
      _DAT_01c780b8 = _DAT_01c780b8 + 1;
      _sprintf((char *)0x1c780c0,"demon%d.pcx",_DAT_01c780b8);
      engine_pcx_c_FUN_004f2990((char *)0x1c780c0);
    }
  }
  core_inv_cpp_CInventory_FUN_004c2470
            ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0));
  if (this_ptr->screen_clear_enabled != 0) {
    core_set_cpp_CDemonSet_FUN_0050aa70(g_CDemonSet_PTR_005be368);
  }
  core_game_cpp_CGame_drawScreenBorder_FUN_0049a960(this_ptr);
  if (_DAT_01c78ac8 != 0) {
    iVar6 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
    if ((iVar6 != 0) &&
       (iVar6 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_V),
       iVar6 != 0)) {
      iVar6 = _DAT_01c78acc;
      if (_DAT_01c78acc == 0) {
        _DAT_01c78acc = 1;
        _DAT_01c78ad4 = iVar6;
      }
      else {
        _DAT_01c78acc = 0;
      }
    }
    if ((_DAT_01c78ad0 < 1) || (_DAT_01c78ad4 < _DAT_01c78ad0)) {
      if (_DAT_01c78acc != 0) {
        _sprintf(local_114,"noc%05d.raw",_DAT_01c78ad4);
        _sprintf(local_1dc,"Movie recording active: movie\\%s",local_114);
        local_34 = engine_dosio_cpp_getFile_FUN_00456a60("movie",local_114,"wb");
        if (local_34 != (_FILE *)0x0) {
          local_38 = 0;
          if (0 < 0x00000040) {
            do {
              local_30 = 0;
              if (0 < 0x00000040) {
                local_3c = local_38 + 1;
                do {
                  file = local_34;
                  local_28 = (local_30 * g_WindowWidth) / 0x00000040;
                  local_20 = ((local_30 + 1) * g_WindowWidth) / 0x00000040;
                  iVar6 = (local_38 * g_WindowHeight) / 0x00000040;
                  iVar8 = (local_3c * g_WindowHeight) / 0x00000040;
                  iVar11 = 0;
                  local_18 = 0;
                  local_1c = 0;
                  iVar12 = 0;
                  if (iVar6 < iVar8) {
                    local_24 = iVar6 * 4;
                    local_2c = iVar8 << 2;
                    do {
                      if (local_28 < local_20) {
                        puVar10 = (uint *)(local_28 * 4 +
                                          *(int *)((int)g_ScreenBufferArray + local_24));
                        iVar6 = local_28;
                        do {
                          uVar7 = *puVar10;
                          puVar10 = puVar10 + 1;
                          iVar12 = iVar12 + (uVar7 >> 0x10 & 0xff);
                          iVar6 = iVar6 + 1;
                          iVar11 = iVar11 + (uVar7 & 0xff);
                          local_1c = local_1c + (uVar7 >> 8 & 0xff);
                          local_18 = local_18 + 1;
                        } while (iVar6 < local_20);
                      }
                      local_24 = local_24 + 4;
                    } while (local_24 < local_2c);
                  }
                  local_1c = local_1c / local_18;
                  iVar11 = iVar11 / local_18;
                  _fputc(iVar12 / local_18,local_34);
                  _fputc(local_1c,file);
                  _fputc(iVar11,file);
                  local_30 = local_30 + 1;
                } while (local_30 < 0x00000040);
              }
              local_38 = local_38 + 1;
            } while (local_38 < 0x00000040);
          }
          _fclose(local_34);
          engine_2d_c_drawText_FUN_00402600(local_1dc,0,0);
          _DAT_01c78ad4 = _DAT_01c78ad4 + 1;
        }
      }
    }
    else {
      _DAT_01c78acc = 0;
    }
  }
  core_script_cpp_CScript_FUN_004fe770(0x01E56DA0);
  core_game_cpp_CGame_renderOverlay_FUN_0049ab50(this_ptr);
  core_game_cpp_CGame_renderIrisFade_FUN_004a3960(this_ptr);
  if (this_ptr->camera_debug_enabled == 0) {
    _DAT_01c71e30 = 0.0;
    _DAT_01c71e38 = 0;
  }
  else {
    _sprintf(local_2dc,"Camera: \"%s\" Group %d",&g_CDemonCamera_01fb8508,
               g_CDemonSet_PTR_005be368->cameras[g_CDemonSet_PTR_005be368->selected_camera_index].
               camera_group);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,g_WindowHeight + -0x16);
    _DAT_01c71e38 = _DAT_01c71e38 + 1;
    _DAT_01c71e30 = _DAT_01c71e30 + (double)this_ptr->delta_time_float;
    dVar3 = 1.0 / (double)this_ptr->delta_time_float;
    _sprintf(local_2dc,"FR: %f, AVG: %f, PC: %d",SUB84(__BITCAST_UINT64(dVar3),0),(int)((ulonglong)dVar3 >> 0x20),
               SUB84(__BITCAST_UINT64((double)_DAT_01c71e38 / _DAT_01c71e30),0),
               (int)((ulonglong)((double)_DAT_01c71e38 / _DAT_01c71e30) >> 0x20),_DAT_01e52ef8);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,g_WindowHeight + -0xb);
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    dVar5 = (double)*(float *)(iVar6 + 0x34) * 0.31830988619288902 * 180;
    dVar4 = (double)*(float *)(iVar6 + 0x38) * 0.31830988619288902 * 180;
    dVar3 = 180 * (double)*(float *)(iVar6 + 0x30) * 0.31830988619288902;
    _sprintf(local_2dc,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",(double)*(float *)(iVar6 + 0x20),
               SUB84(__BITCAST_UINT64((double)*(float *)(iVar6 + 0x24)),0),
               (int)((ulonglong)(double)*(float *)(iVar6 + 0x24) >> 0x20),
               SUB84(__BITCAST_UINT64((double)*(float *)(iVar6 + 0x28)),0),
               (int)((ulonglong)(double)*(float *)(iVar6 + 0x28) >> 0x20),SUB84(__BITCAST_UINT64(dVar3),0),
               (int)((ulonglong)dVar3 >> 0x20),SUB84(__BITCAST_UINT64(dVar4),0),(int)((ulonglong)dVar4 >> 0x20),
               SUB84(__BITCAST_UINT64(dVar5),0),(int)((ulonglong)dVar5 >> 0x20));
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,0);
    _sprintf(local_2dc,"Slew : %s, Virtual Director : %s",
               (&PTR_s_Off_005b9358)[this_ptr->is_paused],
               (&PTR_s_Off_005b9358)[this_ptr->is_game_active]);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,0xb);
    pCVar2 = this_ptr->debug_fudge_target;
    if (pCVar2 != (CVector3f *)0x0) {
      _sprintf(local_2dc,"Fudge: %g,%g,%g",SUB84(__BITCAST_UINT64((double)pCVar2->x),0),
                 (int)((ulonglong)(double)pCVar2->x >> 0x20),SUB84(__BITCAST_UINT64((double)pCVar2->y),0),
                 (int)((ulonglong)(double)pCVar2->y >> 0x20),SUB84(__BITCAST_UINT64((double)pCVar2->z),0),
                 (int)((ulonglong)(double)pCVar2->z >> 0x20));
      engine_2d_c_drawText_FUN_00402600(local_2dc,0,g_WindowHeight + -0x4d);
    }
    sound_sndmain_cpp_getSoundMemoryStats_FUN_00527c70
              (&local_5c,&local_58,&local_54,&local_50,&local_4c,&local_48);
    local_14 = local_58;
    sound_sndmain_cpp_countActiveSfx_FUN_005275e0();
    _sprintf(local_2dc,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk");
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,g_WindowHeight + -0x42);
    engine_texture_cpp_getTextureCacheStats_FUN_00545a80(local_2dc);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,g_WindowHeight + -0x37);
    core_skeleton_cpp_FUN_0051f760(local_2dc);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,g_WindowHeight + -0x2c);
    engine_2d_c_drawText_FUN_00402600(this_ptr->debug_info_string,0,g_WindowHeight + -0x21);
  }
  if (_DAT_01c78ad8 != 0) {
    uVar7 = sound_sndmain_cpp_getFirstActiveSfx_FUN_005274e0();
    iVar6 = 0x37;
    for (; uVar7 != 0; uVar7 = sound_sndmain_cpp_FUN_00527520(uVar7)) {
      sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(&local_604);
      iVar8 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(uVar7,&local_604);
      if (iVar8 != 0) {
        engine_2d_c_FUN_00402760(0,iVar6,(char *)&local_604);
        iVar6 = iVar6 + 0xb;
      }
    }
  }
  if (this_ptr->event_processing_enabled != 0) {
    core_event_cpp_CEventList_render_FUN_0047dd80(0x01C03A10);
  }
  if ((this_ptr->subtitle_system_enabled != 0) && (this_ptr->screen_clear_enabled != 0)) {
    core_script_cpp_CScript_FUN_004fe9d0(0x01E56DA0,0,0xf0,g_WindowWidth + -1,g_WindowHeight + -1)
    ;
  }
  if (this_ptr->editor_tools_enabled != 0) {
    shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0
              (g_CEditorTools_PTR_005b6d50,local_3dc);
    engine_2d_c_drawText_FUN_00402600(local_3dc,0,g_WindowHeight + -0x42);
  }
  iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6);
  if (iVar6 == 2) {
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You're dead.  Game over.");
    piVar13 = &local_604.taken;
    do {
      cVar1 = *pcVar9;
      *(char *)piVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      *(char *)((int)piVar13 + 1) = cVar1;
      piVar13 = (int *)((int)piVar13 + 2);
    } while (cVar1 != '\0');
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
              (g_CBitFont_PTR_014b98f8,0,g_WindowWidth,
               g_WindowHeight + g_CBitFont_PTR_014b98f8->max_char_height * -2,
               (uint)g_ColorCubeLookup[0x7c00],0,(char *)&local_604.taken);
  }
  if (this_ptr->show_customizable_keys != 0) {
    core_game_cpp_CGame_showCustomizableKeys_FUN_0049b4e0(this_ptr);
  }
  if (this_ptr->console_enabled != 0) {
    engine_console_cpp_CConsole_render_FUN_0043aec0(g_CConsole_PTR_005ad350);
  }
  if (0 < g_CPickList_01c78424.base.item_count) {
    shape_edittool_cpp_FUN_004759d0(&g_CPickList_01c78424);
  }
  if (this_ptr->is_paused != 0) {
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(g_CEditorTools_PTR_005b6d50,0);
  }
  engine_special_cpp_unlockFrame_FUN_00532320();
LAB_0049d5b0:
  if (local_40 == 0) {
    return;
  }
  wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
  return;
}
