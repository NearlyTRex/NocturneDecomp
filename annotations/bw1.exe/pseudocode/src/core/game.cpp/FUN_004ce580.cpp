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
  float *pfVar2;
  float fVar3;
  CNetGame *this_ptr;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  int aiStackY_1074 [579];
  double dVar14;
  double dVar15;
  double dVar16;
  int *piVar18;
  double dVar17;
  int iStack_730;
  int iStack_72c;
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
  
  bVar13 = 0;
  local_44 = 0;
  if (*(int *)&param_1->field_0x228 != 0) {
    local_48 = wincore_winrun_cpp_FUN_005b2420();
  }
  this_ptr = g_CNetGamePtr;
  _DAT_01e7dac8 = 0;
  if ((*(int *)&param_1->field_0xe0 == 0) && (*(int *)&g_CNetGamePtr->field_0x170 == 0)) {
    if (_DAT_01c50948 != 0) {
      wincore_wddvmem_cpp_FUN_005acb10();
      local_44 = 1;
    }
    if ((*(int *)&param_1->field_0x2a8 != 0) || (*(int *)&param_1->field_0x2ac != 0)) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
    }
    if (((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (*(int *)&param_1->field_0x25c == 0)) &&
       (DAT_007c3978 == (int *)0x0)) {
      core_set_cpp_FUN_00550580(g_CDemonSetPtr,1);
    }
    if (DAT_007c3978 != (int *)0x0) {
      (**(code **)(*DAT_007c3978 + 0x1c))(DAT_007c3978);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(g_CNetGamePtr);
    if (*(int *)&param_1->field_0x218 == 0) {
      core_game_cpp_FUN_004d8060(param_1);
      core_sound_cpp_FUN_0057ce10(0x02C82A60);
    }
    else {
      core_slew_cpp_FUN_0056ba00(&uStack_a8);
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (&uStack_a8 != (uint *)(iVar4 + 0x20)) {
        uStack_a8 = *(uint *)(iVar4 + 0x20);
        uStack_a4 = *(uint *)(iVar4 + 0x24);
        uStack_a0 = *(uint *)(iVar4 + 0x28);
      }
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (&uStack_9c != (uint *)(iVar4 + 0x30)) {
        uStack_9c = *(uint *)(iVar4 + 0x30);
        uStack_98 = *(uint *)(iVar4 + 0x34);
        uStack_94 = *(uint *)(iVar4 + 0x38);
      }
      core_slew_cpp_FUN_0056ba50(&uStack_a8);
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x68))(iVar4,&uStack_a8,&uStack_9c);
      if ((DAT_01c43544 & 1) != 0) {
        core_dcamera_cpp_FUN_0044dd70(&g_CDemonCameraInstance,_DAT_01c4353c,_DAT_01c43540);
        piVar18 = &iStack_8c;
        iStack_8c = iStack_68;
        aiStack_88[(uint)bVar13 * -2] = aiStack_64[(uint)bVar13 * -2];
        aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             aiStack_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        core_dcamera_cpp_FUN_0044de40(&g_CDemonCameraInstance,piVar18);
        iStack_8c = aiStack_88[2];
        aiStack_88[(uint)bVar13 * -2] = aiStack_88[(uint)bVar13 * -2 + 3];
        aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        fStack_74 = (float)iStack_8c * _DAT_00600f74;
        fStack_70 = (float)aiStack_88[0] * _DAT_00600f74;
        fStack_6c = (float)aiStack_88[1] * _DAT_00600f74;
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x68))(iVar4,&fStack_74,iVar4 + 0x30);
        DAT_01c43544 = DAT_01c43544 & 0xfe;
      }
    }
    core_game_cpp_FUN_004cbf20(param_1);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(g_CNetGamePtr);
    if (((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (*(int *)&param_1->field_0x25c == 0)) &&
       (DAT_007c3978 == (int *)0x0)) {
      core_set_cpp_FUN_00550260(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
    if (*(int *)&param_1->field_0x228 != 0) {
      iStack_18 = wincore_winrun_cpp_FUN_005b2420();
      iStack_18 = iStack_18 - local_48;
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"screen paint : %3.2f ms\n",
                 ((double)iStack_18 * _DAT_005e171c * _DAT_005e1724 * _DAT_005e172c) /
                 (double)*(float *)&g_CGamePtr->field_0x294);
    }
    if (*(int *)&param_1->field_0x224 == 0) {
      engine_special_cpp_FUN_00581f50();
      if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
        if (DAT_007c3978 == (int *)0x0) {
          if (*(int *)&param_1->field_0x25c == 0) {
            if (*(int *)&param_1->field_0x260 != 0) {
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
      if (((*(int *)&param_1->field_0x22c != 0) ||
          (pcVar12 = getenv("SPOOKHOUSE"), pcVar12 != (char *)0x0))
         && (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x3e), iVar4 != 0)) {
        _DAT_01ccfe94 = _DAT_01ccfe94 + 1;
        FUN_005bfb40(0x1ccfe98,"demon%d.pcx",_DAT_01ccfe94);
        engine_pcx_c_FUN_00535d80((char *)0x1ccfe98);
      }
      core_inv_cpp_FUN_004fae10(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8);
      if (*(int *)&param_1->field_0x2a8 != 0) {
        core_set_cpp_CDemonSet_renderLightDebugView_FUN_00551a50(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004cc0c0(param_1);
      if (_DAT_01cd0c38 != 0) {
        iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
        if ((iVar4 != 0) &&
           (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2f), iVar4 != 0)) {
          iVar4 = _DAT_01cd0c3c;
          if (_DAT_01cd0c3c == 0) {
            _DAT_01cd0c3c = 1;
            _DAT_01cd0c44 = iVar4;
          }
          else {
            _DAT_01cd0c3c = 0;
          }
        }
        if ((_DAT_01cd0c40 < 1) || (_DAT_01cd0c44 < _DAT_01cd0c40)) {
          if (_DAT_01cd0c3c != 0) {
            FUN_005bfb40(acStack_10c,"noc%05d.raw",_DAT_01cd0c44);
            FUN_005bfb40(acStack_1d4,"Movie recording active: movie\\%s",acStack_10c);
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
                      iVar4 = (iStack_3c * DAT_0061b49c) / 0x00000040;
                      iVar7 = (iStack_40 * DAT_0061b49c) / 0x00000040;
                      iStack_1c = 0;
                      iStack_20 = 0;
                      iVar10 = 0;
                      iVar11 = 0;
                      if (iVar4 < iVar7) {
                        iStack_28 = iVar4 << 2;
                        iStack_30 = iVar7 << 2;
                        do {
                          if (iStack_2c < iStack_24) {
                            puVar9 = (uint *)(iStack_2c * 4 + *(int *)(&DAT_01c4354c + iStack_28));
                            iVar4 = iStack_2c;
                            do {
                              uVar6 = *puVar9;
                              puVar9 = puVar9 + 1;
                              iStack_20 = iStack_20 + (uVar6 >> 0x10 & 0xff);
                              iVar4 = iVar4 + 1;
                              iVar10 = iVar10 + (uVar6 & 0xff);
                              iStack_1c = iStack_1c + 1;
                              iVar11 = iVar11 + (uVar6 >> 8 & 0xff);
                            } while (iVar4 < iStack_24);
                          }
                          iStack_28 = iStack_28 + 4;
                        } while (iStack_28 < iStack_30);
                      }
                      iStack_20 = iStack_20 / iStack_1c;
                      iVar11 = iVar11 / iStack_1c;
                      iVar10 = iVar10 / iStack_1c;
                      _fputc(iStack_20,p_Stack_38);
                      _fputc(iVar11,p_Stack_38);
                      _fputc(iVar10,p_Stack_38);
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
      core_script_cpp_FUN_005439b0(g_CScriptPtr);
      core_game_cpp_FUN_004cc2b0(param_1);
      core_game_cpp_FUN_004d61e0(param_1);
      if (*(int *)&param_1->field_0x200 == 0) {
        _DAT_01cc9ba0 = 0.0;
        _DAT_01cc9ba8 = 0;
      }
      else {
        engine_dosio_cpp_FUN_00479580
                  (&g_CDemonSetPtr->field_0x14d0f0,(char *)0x0,(char *)0x0,&CStack_724.field_0x150,
                   (char *)0x0);
        FUN_005bfb40
                  (acStack_2d4,"Set: %s Camera: \"%s\" group %d",&CStack_724.field_0x150,0x1fe382c,
                   *(uint *)
                    (&g_CDemonSetPtr->field_0x150 + *(int *)&g_CDemonSetPtr->field_0x15aeb8 * 0x1a4)
                  );
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x16);
        _DAT_01cc9ba8 = _DAT_01cc9ba8 + 1;
        _DAT_01cc9ba0 = _DAT_01cc9ba0 + (double)*(float *)&param_1->field_0x294;
        FUN_005bfb40
                  (acStack_2d4,"FR: %f, AVG: %f, PC: %d",
                   1.0 / (double)*(float *)&param_1->field_0x294,
                   (double)_DAT_01cc9ba8 / _DAT_01cc9ba0,_DAT_01e7dac8);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0xb);
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fVar3 = (float)_DAT_005e173c;
        FUN_005bfb40
                  (acStack_2d4,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",(double)*(float *)(iVar4 + 0x20),
                   (double)*(float *)(iVar4 + 0x24),(double)*(float *)(iVar4 + 0x28),
                   (double)(fVar3 * *(float *)(iVar4 + 0x30) * _DAT_005e1734),
                   (double)(*(float *)(iVar4 + 0x38) * _DAT_005e1734 * fVar3),
                   (double)(*(float *)(iVar4 + 0x34) * _DAT_005e1734 * fVar3));
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0);
        FUN_005bfb40
                  (acStack_2d4,"Slew : %s, Virtual Director : %s",
                   (&PTR_DAT_0061d960)[*(int *)&param_1->field_0x218],
                   (&PTR_DAT_0061d960)[*(int *)&param_1->field_0x2a4]);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0xb);
        pfVar2 = *(float **)&param_1->field_0x9f0;
        if (pfVar2 != (float *)0x0) {
          FUN_005bfb40
                    (acStack_2d4,"Fudge: %g,%g,%g",(double)*pfVar2,(double)pfVar2[1],
                     (double)pfVar2[2]);
          engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x4d);
        }
        sound_sndmain_cpp_FUN_005746e0
                  (aiStack_64 + 4,&stack0xfffff8d8,&iStack_50,&stack0xfffff8d4,&iStack_4c,
                   &stack0xfffff8d0);
        dVar17 = (double)iStack_730 * _DAT_005e1744;
        dVar16 = (double)(iStack_728 + iStack_72c) * _DAT_005e1744;
        dVar15 = (double)iStack_72c * _DAT_005e1744;
        iStack_18 = iStack_728;
        dVar14 = (double)iStack_728 * _DAT_005e1744;
        iVar4 = sound_sndmain_cpp_FUN_00573e20();
        FUN_005bfb40
                  (acStack_2d4,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk",iVar4,iStack_54,dVar14,iStack_50,
                   dVar15,dVar16,dVar17);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_00597cd0(acStack_2d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x37);
        core_skeleton_cpp_FUN_0056b780(acStack_2d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_0061b49c + -0x2c);
        engine_2d_c_drawText_FUN_00401fe0(&param_1->field_0xec,0,DAT_0061b49c + -0x21);
        if (_DAT_02c83370 != 0) {
          uVar5 = engine_special_cpp_FUN_00582bf0(0x400);
          uVar5 = engine_special_cpp_FUN_00582bf0(0x200,uVar5);
          uVar5 = engine_special_cpp_FUN_00582bf0(0x100,uVar5);
          uVar5 = engine_special_cpp_FUN_00582bf0(0x80,uVar5);
          uVar5 = engine_special_cpp_FUN_00582bf0(0x40,uVar5);
          uVar5 = engine_special_cpp_FUN_00582bf0(0x20,uVar5);
          FUN_005bfb40(acStack_2d4,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d",uVar5);
          engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0x2c);
        }
      }
      if (_DAT_01cd0c48 != 0) {
        uVar6 = sound_sndmain_cpp_FUN_00573d20();
        iVar4 = 0x37;
        for (; uVar6 != 0; uVar6 = sound_sndmain_cpp_FUN_00573d60(uVar6)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_00572340(&CStack_724);
          iVar7 = sound_sndmain_cpp_FUN_00573620(uVar6,&CStack_724);
          if (iVar7 != 0) {
            engine_2d_c_FUN_00402140(0,iVar4,&CStack_724);
            iVar4 = iVar4 + 0xb;
          }
        }
      }
      if (*(int *)&param_1->field_0x1f4 != 0) {
        core_event_cpp_CEventList_render_FUN_004a6d80(0x01C51D80);
      }
      if ((*(int *)&param_1->field_0x1f8 != 0) && (*(int *)&param_1->field_0x2a8 != 0)) {
        core_script_cpp_FUN_00543c00(g_CScriptPtr,0,0xf0,DAT_0061b498 + -1,DAT_0061b49c + -1);
      }
      if (*(int *)&param_1->field_0x214 != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40
                  (g_CEditorToolsPtr,acStack_4d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_4d4,0,DAT_0061b49c + -0x42);
      }
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if (iVar4 == 2) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("You're dead.  Game over.");
        pcVar12 = acStack_3d4;
        do {
          cVar1 = *pcVar8;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
      }
      if (*(int *)&param_1->field_0xafc != 0) {
        core_game_cpp_FUN_004ccc40(param_1);
      }
      if (*(int *)&param_1->field_0x2b0 != 0) {
        engine_console_cpp_FUN_00445690(g_CConsolePtr);
      }
      if (0 < (int)g_CPickList._0_4_) {
        shape_edittool_cpp_FUN_0049b830(&g_CPickList);
      }
      if (*(int *)&param_1->field_0x218 != 0) {
        shape_edittool_cpp_FUN_00497870(g_CEditorToolsPtr,0);
      }
      if ((*(int *)&param_1->field_0xd0 == 3) &&
         (core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (0x01C51D80,"MouseControlMode"), -1 < _DAT_01cd0b40)) {
        core_game_cpp_FUN_004dc1a0(param_1);
      }
      uVar6 = *(uint *)&param_1->field_0x25c | *(uint *)&param_1->field_0x260;
      if ((uVar6 == 0) && (_DAT_01cd0c5c != 0)) {
        engine_special_cpp_clearScreen_FUN_0057dc40();
      }
      _DAT_01cd0c5c = uVar6;
      engine_special_cpp_unlockFrame_FUN_00581fa0(0);
    }
    if (local_44 != 0) {
      wincore_wddvmem_cpp_FUN_005acc00();
      return;
    }
  }
  else {
    *(uint *)&param_1->field_0x218 = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(this_ptr);
    core_game_cpp_FUN_004d8060(param_1);
    if (*(int *)&param_1->field_0xe0 == 0) {
      core_game_cpp_FUN_004cbf20(param_1);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004d7f50(param_1,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(g_CNetGamePtr);
  }
  return;
}
