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
  float *pfVar2;
  float fVar3;
  CNetGame *pCVar4;
  CBitFont *this_ptr;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  byte bVar14;
  int aiStackY_1080 [518];
  double dVar15;
  double dVar16;
  double dVar17;
  int *piVar19;
  double dVar18;
  CSfxSample local_830;
  char local_5e0 [256];
  byte local_4e0 [256];
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
  int aiStack_94 [2];
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  int local_7c [8];
  float local_5c;
  byte local_58 [4];
  int local_54;
  uint local_50;
  uint local_4c;
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
  if (*(int *)&param_1->field_0x228 != 0) {
    local_44 = wincore_winrun_cpp_FUN_0058e9e0();
  }
  pCVar4 = g_CNetGamePtr;
  _DAT_01e61b58 = 0;
  if ((*(int *)&param_1->field_0xe0 == 0) && (*(int *)&g_CNetGamePtr->field_0x178 == 0)) {
    if (_DAT_01c37788 != 0) {
      wincore_wddvmem_cpp_FUN_005890c0();
      local_40 = 1;
    }
    if ((*(int *)&param_1->field_0x298 != 0) || (*(int *)&param_1->field_0x29c != 0)) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
    }
    if (((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (*(int *)&param_1->field_0x25c == 0)) &&
       (_DAT_026677e0 == (int *)0x0)) {
      core_set_cpp_FUN_0052f2a0(g_CDemonSetPtr,1);
    }
    if (_DAT_026677e0 != (int *)0x0) {
      (**(code **)(*_DAT_026677e0 + 0x1c))(_DAT_026677e0);
    }
    core_netgame_cpp_FUN_0050f120(g_CNetGamePtr);
    if (*(int *)&param_1->field_0x218 == 0) {
      core_game_cpp_FUN_004bd570(param_1);
      core_sound_cpp_FUN_0055a3c0(0x0264B290);
    }
    else {
      core_slew_cpp_FUN_00549380(&local_b4);
      iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      if (&local_b4 != (uint *)(iVar5 + 0x20)) {
        local_b4 = *(uint *)(iVar5 + 0x20);
        local_b0 = *(uint *)(iVar5 + 0x24);
        local_ac = *(uint *)(iVar5 + 0x28);
      }
      iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      if (&local_a8 != (uint *)(iVar5 + 0x30)) {
        local_a8 = *(uint *)(iVar5 + 0x30);
        local_a4 = *(uint *)(iVar5 + 0x34);
        local_a0 = *(uint *)(iVar5 + 0x38);
      }
      core_slew_cpp_FUN_005493d0(&local_b4);
      iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x70))(iVar5,&local_b4,&local_a8);
      if ((DAT_01c2a384 & 1) != 0) {
        core_dcamera_cpp_FUN_0043c6b0(&g_CDemonCameraInstance,_DAT_01c2a37c,_DAT_01c2a380);
        piVar19 = &local_80;
        local_80 = local_98;
        local_7c[(uint)bVar14 * -2] = aiStack_94[(uint)bVar14 * -2];
        local_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             aiStack_94[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        core_dcamera_cpp_FUN_0043c780(&g_CDemonCameraInstance,piVar19);
        local_80 = local_7c[2];
        local_7c[(uint)bVar14 * -2] = local_7c[(uint)bVar14 * -2 + 3];
        local_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             local_7c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        local_8c = (float)local_80 * _DAT_005f7558;
        local_88 = (float)local_7c[0] * _DAT_005f7558;
        local_84 = (float)local_7c[1] * _DAT_005f7558;
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x70))(iVar5,aiStack_94 + 2,iVar5 + 0x30);
        DAT_01c2a384 = DAT_01c2a384 & 0xfe;
      }
    }
    core_game_cpp_FUN_004b3010(param_1);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(g_CNetGamePtr);
    if (((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (*(int *)&param_1->field_0x25c == 0)) &&
       (_DAT_026677e0 == (int *)0x0)) {
      core_set_cpp_FUN_0052ef80(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
    if (*(int *)&param_1->field_0x228 != 0) {
      iVar5 = wincore_winrun_cpp_FUN_0058e9e0();
      local_14 = (float)(iVar5 - local_44);
      engine_console_cpp_FUN_00436710
                (g_CConsolePtr,"screen paint : %3.2f ms\n",
                 ((double)(int)local_14 * _DAT_005d7643 * _DAT_005d764b * _DAT_005d7653) /
                 (double)*(float *)&g_CGamePtr->field_0x284);
    }
    if (*(int *)&param_1->field_0x224 == 0) {
      engine_special_cpp_FUN_0055f500();
      if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
        if (_DAT_026677e0 == (int *)0x0) {
          if (*(int *)&param_1->field_0x25c == 0) {
            if (*(int *)&param_1->field_0x260 != 0) {
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
      if (((*(int *)&param_1->field_0x22c != 0) ||
          (pcVar13 = getenv("SPOOKHOUSE"), pcVar13 != (char *)0x0))
         && (iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x3e), iVar5 != 0)) {
        _DAT_01cb7420 = _DAT_01cb7420 + 1;
        FUN_005b7790(0x1cb7428,"demon%d.pcx",_DAT_01cb7420);
        engine_pcx_c_FUN_00514a30((char *)0x1cb7428);
      }
      iVar5 = core_event_cpp_CEventList_findTimer_FUN_004915e0(0x01C38BC0,"blood_timer");
      if (-1 < iVar5) {
        local_14 = (float)core_event_cpp_FUN_00491240(0x01C38BC0,iVar5);
        this_ptr = _DAT_01511cc0;
        FUN_005b7790(local_4e0,&DAT_005d750f,(double)local_14);
        engine_font_cpp_FUN_004ab560(this_ptr,0x58);
        iVar5 = engine_font_cpp_FUN_004aaf00(this_ptr,local_4e0);
        engine_font_cpp_FUN_004a8df0(this_ptr,local_4e0,(DAT_006141b8 - iVar5) / 2,0x32,1,0);
      }
      core_inv_cpp_FUN_004dd9b0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c);
      if (*(int *)&param_1->field_0x298 != 0) {
        core_set_cpp_CDemonSet_renderLightDebugView_FUN_005307a0(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004b30d0(param_1);
      if (_DAT_01cb80d0 != 0) {
        iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
        if ((iVar5 != 0) &&
           (iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2f), iVar5 != 0)) {
          iVar5 = _DAT_01cb80d4;
          if (_DAT_01cb80d4 == 0) {
            _DAT_01cb80d4 = 1;
            _DAT_01cb80dc = iVar5;
          }
          else {
            _DAT_01cb80d4 = 0;
          }
        }
        if ((_DAT_01cb80d8 < 1) || (_DAT_01cb80dc < _DAT_01cb80d8)) {
          if (_DAT_01cb80d4 != 0) {
            FUN_005b7790(local_118,"noc%05d.raw",_DAT_01cb80dc);
            FUN_005b7790(local_1e0,"Movie recording active: movie\\%s",local_118);
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
                      iVar5 = (local_38 * DAT_006141bc) / 0x00000040;
                      iVar8 = (local_3c * DAT_006141bc) / 0x00000040;
                      iVar11 = 0;
                      local_1c = 0;
                      local_18 = 0;
                      iVar12 = 0;
                      if (iVar5 < iVar8) {
                        local_24 = iVar5 * 4;
                        local_2c = iVar8 << 2;
                        do {
                          if (local_28 < local_20) {
                            puVar10 = (uint *)(local_28 * 4 + *(int *)(&DAT_01c2a38c + local_24));
                            iVar5 = local_28;
                            do {
                              uVar7 = *puVar10;
                              iVar12 = iVar12 + (uVar7 >> 0x10 & 0xff);
                              puVar10 = puVar10 + 1;
                              iVar11 = iVar11 + (uVar7 >> 8 & 0xff);
                              iVar5 = iVar5 + 1;
                              local_18 = local_18 + (uVar7 & 0xff);
                              local_1c = local_1c + 1;
                            } while (iVar5 < local_20);
                          }
                          local_24 = local_24 + 4;
                        } while (local_24 < local_2c);
                      }
                      iVar11 = iVar11 / local_1c;
                      local_18 = local_18 / local_1c;
                      _fputc(iVar12 / local_1c,local_34);
                      _fputc(iVar11,local_34);
                      iVar5 = local_30 + 1;
                      local_30 = iVar5;
                      _fputc(local_18,local_34);
                    } while (iVar5 < 0x00000040);
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
      core_script_cpp_FUN_005218a0(g_CScriptPtr);
      core_game_cpp_FUN_004b32c0(param_1);
      core_game_cpp_FUN_004bb3d0(param_1);
      if (*(int *)&param_1->field_0x200 == 0) {
        _DAT_01cb1110 = 0.0;
        _DAT_01cb1118 = 0;
      }
      else {
        engine_dosio_cpp_FUN_00461070
                  (&g_CDemonSetPtr->field_0x14d0f0,(char *)0x0,(char *)0x0,local_3e0,(char *)0x0);
        FUN_005b7790
                  (&local_830.field_0x150,"Set: %s Camera: \"%s\" group %d",local_3e0,0x1fc7878,
                   *(uint *)
                    (&g_CDemonSetPtr->field_0x150 + *(int *)&g_CDemonSetPtr->field_0x15aeb8 * 0x1a4)
                  );
        engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,DAT_006141bc + -0x16);
        _DAT_01cb1118 = _DAT_01cb1118 + 1;
        _DAT_01cb1110 = _DAT_01cb1110 + (double)*(float *)&param_1->field_0x284;
        FUN_005b7790
                  (&local_830.field_0x150,"FR: %f, AVG: %f, PC: %d",
                   1.0 / (double)*(float *)&param_1->field_0x284,
                   (double)_DAT_01cb1118 / _DAT_01cb1110,_DAT_01e61b58);
        engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,DAT_006141bc + -0xb);
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fVar3 = (float)_DAT_005d7663;
        FUN_005b7790
                  (&local_830.field_0x150,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",
                   (double)*(float *)(iVar5 + 0x20),(double)*(float *)(iVar5 + 0x24),
                   (double)*(float *)(iVar5 + 0x28),
                   (double)(fVar3 * *(float *)(iVar5 + 0x30) * _DAT_005d765b),
                   (double)(*(float *)(iVar5 + 0x38) * _DAT_005d765b * fVar3),
                   (double)(*(float *)(iVar5 + 0x34) * _DAT_005d765b * fVar3));
        engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,0);
        FUN_005b7790
                  (&local_830.field_0x150,"Slew : %s, Virtual Director : %s",
                   (&PTR_DAT_00616498)[*(int *)&param_1->field_0x218],
                   (&PTR_DAT_00616498)[*(int *)&param_1->field_0x294]);
        engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,0xb);
        pfVar2 = *(float **)&param_1->field_0x9e0;
        if (pfVar2 != (float *)0x0) {
          FUN_005b7790
                    (&local_830.field_0x150,"Fudge: %g,%g,%g",(double)*pfVar2,(double)pfVar2[1]
                     ,(double)pfVar2[2]);
          engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,DAT_006141bc + -0x4d);
        }
        sound_sndmain_cpp_FUN_00551cb0(&local_50,&local_5c,&local_4c,&local_48,local_58,&local_54);
        dVar18 = (double)local_54 * _DAT_005d766b;
        dVar16 = (double)local_48 * _DAT_005d766b;
        dVar17 = (double)((int)local_5c + local_48) * _DAT_005d766b;
        local_14 = local_5c;
        dVar15 = (double)(int)local_5c * _DAT_005d766b;
        iVar5 = sound_sndmain_cpp_FUN_005513f0();
        FUN_005b7790
                  (&local_830.field_0x150,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk",iVar5,local_50,dVar15,
                   local_4c,dVar16,dVar17,dVar18);
        engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,DAT_006141bc + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_005750b0(&local_830.field_0x150);
        engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,DAT_006141bc + -0x37);
        core_skeleton_cpp_FUN_005490d0(&local_830.field_0x150);
        engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,DAT_006141bc + -0x2c);
        engine_2d_c_drawText_FUN_00401fe0(&param_1->field_0xec,0,DAT_006141bc + -0x21);
        if (_DAT_0264bba0 != 0) {
          uVar6 = engine_special_cpp_FUN_005601a0(0x400);
          uVar6 = engine_special_cpp_FUN_005601a0(0x200,uVar6);
          uVar6 = engine_special_cpp_FUN_005601a0(0x100,uVar6);
          uVar6 = engine_special_cpp_FUN_005601a0(0x80,uVar6);
          uVar6 = engine_special_cpp_FUN_005601a0(0x40,uVar6);
          uVar6 = engine_special_cpp_FUN_005601a0(0x20,uVar6);
          FUN_005b7790
                    (&local_830.field_0x150,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d",uVar6);
          engine_2d_c_drawText_FUN_00401fe0(&local_830.field_0x150,0,0x2c);
        }
      }
      if (_DAT_01cb80e4 != 0) {
        uVar7 = sound_sndmain_cpp_FUN_005512f0();
        iVar5 = 0x37;
        for (; uVar7 != 0; uVar7 = sound_sndmain_cpp_FUN_00551330(uVar7)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(&local_830);
          iVar8 = sound_sndmain_cpp_FUN_00550bf0(uVar7,&local_830);
          if (iVar8 != 0) {
            engine_2d_c_FUN_00402140(0,iVar5,&local_830);
            iVar5 = iVar5 + 0xb;
          }
        }
      }
      if (*(int *)&param_1->field_0x1f4 != 0) {
        core_event_cpp_CEventList_render_FUN_0048e490(0x01C38BC0);
      }
      if ((*(int *)&param_1->field_0x1f8 != 0) && (*(int *)&param_1->field_0x298 != 0)) {
        core_script_cpp_FUN_00521af0(g_CScriptPtr,0,0xf0,DAT_006141b8 + -1,DAT_006141bc + -1);
      }
      if (*(int *)&param_1->field_0x214 != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0
                  (g_CEditorToolsPtr,local_5e0);
        engine_2d_c_drawText_FUN_00401fe0(local_5e0,0,DAT_006141bc + -0x42);
      }
      iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x114))(iVar5);
      if (iVar5 == 2) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You have failed");
        pcVar13 = local_2e0;
        do {
          cVar1 = *pcVar9;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
        engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                  (_DAT_01511cb8,0,DAT_006141b8,DAT_006141bc + *(int *)(_DAT_01511cb8 + 0x41ec) * -2
                   ,(uint)DAT_01c34510,0,local_2e0);
      }
      if (*(int *)&param_1->field_0xaec != 0) {
        core_game_cpp_FUN_004b3c50(param_1);
      }
      if (*(int *)&param_1->field_0x2a0 != 0) {
        engine_console_cpp_FUN_00436970(g_CConsolePtr);
      }
      if (0 < (int)g_CPickList._0_4_) {
        shape_edittool_cpp_FUN_004831d0(&g_CPickList);
      }
      if ((*(int *)&param_1->field_0x218 != 0) || (*(int *)&param_1->field_0xd0 == 3)) {
        shape_edittool_cpp_FUN_0047f210(g_CEditorToolsPtr,0);
      }
      engine_special_cpp_FUN_0055f550(0);
    }
    if (local_40 != 0) {
      wincore_wddvmem_cpp_FUN_00589170();
      return;
    }
  }
  else {
    *(uint *)&param_1->field_0x218 = 0;
    core_netgame_cpp_FUN_0050f120(pCVar4);
    core_game_cpp_FUN_004bd570(param_1);
    if (*(int *)&param_1->field_0xe0 == 0) {
      core_game_cpp_FUN_004b3010(param_1);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004bd460(param_1,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(g_CNetGamePtr);
  }
  return;
}
