// Name: core_game.cpp_FUN_004b6f30
// Address: 004b6f30
// Address Range: [[004b6f30, 004b7dd9]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b6f30(CGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b6f30(CGame *param_1)

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
  if (*(int *)&param_1->field_0x230 != 0) {
    local_48 = wincore_winrun_cpp_FUN_005806a0();
  }
  this_ptr = g_CNetGamePtr;
  _DAT_01ed3198 = 0;
  if ((*(int *)&param_1->field_0xe8 == 0) && (*(int *)&g_CNetGamePtr->field_0x178 == 0)) {
    if (_DAT_01c6cee8 != 0) {
      wincore_wddvmem_cpp_FUN_0057a3c0();
      local_44 = 1;
    }
    if ((*(int *)&param_1->field_0x328 != 0) || (*(int *)&param_1->field_0x32c != 0)) {
      engine_special_cpp_clearScreen_FUN_00560d70();
    }
    if (((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (*(int *)&param_1->field_0x264 == 0)) &&
       (DAT_007dffb4 == (int *)0x0)) {
      core_set_cpp_FUN_00535da0(g_CDemonSetPtr,1);
    }
    if (DAT_007dffb4 != (int *)0x0) {
      (**(code **)(*DAT_007dffb4 + 0x1c))(DAT_007dffb4);
    }
    core_netgame_cpp_CNetGame_processClientFrame_FUN_00507c00(g_CNetGamePtr);
    if (*(int *)&param_1->field_0x220 == 0) {
      core_game_cpp_FUN_004bf4b0(param_1);
      core_sound_cpp_FUN_0055ff40(0x02CF5680);
    }
    else {
      core_slew_cpp_FUN_00550590(&uStack_a8);
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if (&uStack_a8 != (uint *)(iVar4 + 0x20)) {
        uStack_a8 = *(uint *)(iVar4 + 0x20);
        uStack_a4 = *(uint *)(iVar4 + 0x24);
        uStack_a0 = *(uint *)(iVar4 + 0x28);
      }
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if (&uStack_9c != (uint *)(iVar4 + 0x30)) {
        uStack_9c = *(uint *)(iVar4 + 0x30);
        uStack_98 = *(uint *)(iVar4 + 0x34);
        uStack_94 = *(uint *)(iVar4 + 0x38);
      }
      core_slew_cpp_FUN_005505e0(&uStack_a8);
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x68))(iVar4,&uStack_a8,&uStack_9c);
      if ((DAT_01c5fae4 & 1) != 0) {
        core_dcamera_cpp_FUN_00449eb0(&g_CDemonCameraInstance,_DAT_01c5fadc,_DAT_01c5fae0);
        piVar18 = &iStack_8c;
        iStack_8c = iStack_68;
        aiStack_88[(uint)bVar13 * -2] = aiStack_64[(uint)bVar13 * -2];
        aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             aiStack_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        core_dcamera_cpp_FUN_00449f80(&g_CDemonCameraInstance,piVar18);
        iStack_8c = aiStack_88[2];
        aiStack_88[(uint)bVar13 * -2] = aiStack_88[(uint)bVar13 * -2 + 3];
        aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        fStack_74 = (float)iStack_8c * _DAT_005e06e4;
        fStack_70 = (float)aiStack_88[0] * _DAT_005e06e4;
        fStack_6c = (float)aiStack_88[1] * _DAT_005e06e4;
        iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x68))(iVar4,&fStack_74,iVar4 + 0x30);
        DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
      }
    }
    core_game_cpp_FUN_004b4440(param_1);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00507790(g_CNetGamePtr);
    if (((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (*(int *)&param_1->field_0x264 == 0)) &&
       (DAT_007dffb4 == (int *)0x0)) {
      core_set_cpp_FUN_00535a80(g_CDemonSetPtr);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
    if (*(int *)&param_1->field_0x230 != 0) {
      iStack_18 = wincore_winrun_cpp_FUN_005806a0();
      iStack_18 = iStack_18 - local_48;
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"screen paint : %3.2f ms\n",
                 ((double)iStack_18 * _DAT_005c2578 * _DAT_005c2580 * _DAT_005c2588) /
                 (double)*(float *)&g_CGamePtr->field_0x314);
    }
    if (*(int *)&param_1->field_0x22c == 0) {
      engine_special_cpp_FUN_00565820();
      if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
        if (DAT_007dffb4 == (int *)0x0) {
          if (*(int *)&param_1->field_0x264 == 0) {
            if (*(int *)&param_1->field_0x268 != 0) {
              core_set_cpp_FUN_00536990(g_CDemonSetPtr);
            }
          }
          else {
            core_set_cpp_FUN_005365c0(g_CDemonSetPtr);
          }
        }
        else {
          (**(code **)(*DAT_007dffb4 + 0x18))(DAT_007dffb4);
        }
      }
      else {
        core_fldnotes_cpp_FUN_004abe00(g_CFieldNotesPtr);
      }
      if (((*(int *)&param_1->field_0x234 != 0) ||
          (pcVar12 = getenv("SPOOKHOUSE"), pcVar12 != (char *)0x0))
         && (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x3e), iVar4 != 0)) {
        _DAT_01d21e9c = _DAT_01d21e9c + 1;
        FUN_005a28c0(0x1d21ea0,"demon%d.pcx",_DAT_01d21e9c);
        engine_pcx_c_FUN_0050da60((char *)0x1d21ea0);
      }
      core_inv_cpp_CInventory_renderAllItems_FUN_004dda90
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8));
      if (*(int *)&param_1->field_0x328 != 0) {
        core_set_cpp_CDemonSet_renderLightDebugView_FUN_005373e0(g_CDemonSetPtr);
      }
      core_game_cpp_CGame_drawScreenBorder_FUN_004b45e0(param_1);
      if (_DAT_01d22c40 != 0) {
        iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
        if ((iVar4 != 0) &&
           (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2f), iVar4 != 0)) {
          iVar4 = _DAT_01d22c44;
          if (_DAT_01d22c44 == 0) {
            _DAT_01d22c44 = 1;
            _DAT_01d22c4c = iVar4;
          }
          else {
            _DAT_01d22c44 = 0;
          }
        }
        if ((_DAT_01d22c48 < 1) || (_DAT_01d22c4c < _DAT_01d22c48)) {
          if (_DAT_01d22c44 != 0) {
            FUN_005a28c0(acStack_10c,"noc%05d.raw",_DAT_01d22c4c);
            FUN_005a28c0(acStack_1d4,"Movie recording active: movie\\%s",acStack_10c);
            p_Stack_38 = engine_dosio_cpp_FUN_004659c0("movie",acStack_10c,&DAT_005c21d9);
            if (p_Stack_38 != (_FILE *)0x0) {
              iStack_3c = 0;
              if (0 < 0x00000040) {
                do {
                  iStack_34 = 0;
                  if (0 < 0x00000040) {
                    iStack_40 = iStack_3c + 1;
                    do {
                      iStack_2c = (iStack_34 * DAT_005fba18) / 0x00000040;
                      iStack_24 = ((iStack_34 + 1) * DAT_005fba18) / 0x00000040;
                      iVar4 = (iStack_3c * DAT_005fba1c) / 0x00000040;
                      iVar7 = (iStack_40 * DAT_005fba1c) / 0x00000040;
                      iStack_1c = 0;
                      iStack_20 = 0;
                      iVar10 = 0;
                      iVar11 = 0;
                      if (iVar4 < iVar7) {
                        iStack_28 = iVar4 << 2;
                        iStack_30 = iVar7 << 2;
                        do {
                          if (iStack_2c < iStack_24) {
                            puVar9 = (uint *)(iStack_2c * 4 + *(int *)(&DAT_01c5faec + iStack_28));
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
              _DAT_01d22c4c = _DAT_01d22c4c + 1;
            }
          }
        }
        else {
          _DAT_01d22c44 = 0;
        }
      }
      core_script_cpp_FUN_00528fc0(g_CScriptPtr);
      core_game_cpp_FUN_004b47d0(param_1);
      core_game_cpp_FUN_004bd7d0(param_1);
      if (*(int *)&param_1->field_0x208 == 0) {
        _DAT_01d1bb10 = 0.0;
        _DAT_01d1bb18 = 0;
      }
      else {
        engine_dosio_cpp_FUN_00465e50
                  (&g_CDemonSetPtr->field_0x14d0f0,(char *)0x0,(char *)0x0,&CStack_724.field_0x150,
                   (char *)0x0);
        FUN_005a28c0
                  (acStack_2d4,"Set: %s Camera: \"%s\" group %d",&CStack_724.field_0x150,0x2038f8c,
                   *(uint *)
                    (&g_CDemonSetPtr->field_0x150 + *(int *)&g_CDemonSetPtr->field_0x15aeb8 * 0x1a4)
                  );
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_005fba1c + -0x16);
        _DAT_01d1bb18 = _DAT_01d1bb18 + 1;
        _DAT_01d1bb10 = _DAT_01d1bb10 + (double)*(float *)&param_1->field_0x314;
        FUN_005a28c0
                  (acStack_2d4,"FR: %f, AVG: %f, PC: %d",
                   1.0 / (double)*(float *)&param_1->field_0x314,
                   (double)_DAT_01d1bb18 / _DAT_01d1bb10,_DAT_01ed3198);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_005fba1c + -0xb);
        iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fVar3 = (float)_DAT_005c2598;
        FUN_005a28c0
                  (acStack_2d4,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",(double)*(float *)(iVar4 + 0x20),
                   (double)*(float *)(iVar4 + 0x24),(double)*(float *)(iVar4 + 0x28),
                   (double)(fVar3 * *(float *)(iVar4 + 0x30) * _DAT_005c2590),
                   (double)(*(float *)(iVar4 + 0x38) * _DAT_005c2590 * fVar3),
                   (double)(*(float *)(iVar4 + 0x34) * _DAT_005c2590 * fVar3));
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0);
        FUN_005a28c0
                  (acStack_2d4,"Slew : %s, Virtual Director : %s",
                   (&PTR_DAT_005fe9e0)[*(int *)&param_1->field_0x220],
                   (&PTR_DAT_005fe9e0)[*(int *)&param_1->field_0x324]);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0xb);
        pfVar2 = *(float **)&param_1->field_0xa70;
        if (pfVar2 != (float *)0x0) {
          FUN_005a28c0
                    (acStack_2d4,"Fudge: %g,%g,%g",(double)*pfVar2,(double)pfVar2[1],
                     (double)pfVar2[2]);
          engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_005fba1c + -0x4d);
        }
        sound_sndmain_cpp_FUN_00557840
                  (aiStack_64 + 4,&stack0xfffff8d8,&iStack_50,&stack0xfffff8d4,&iStack_4c,
                   &stack0xfffff8d0);
        dVar17 = (double)iStack_730 * _DAT_005c25a0;
        dVar16 = (double)(iStack_728 + iStack_72c) * _DAT_005c25a0;
        dVar15 = (double)iStack_72c * _DAT_005c25a0;
        iStack_18 = iStack_728;
        dVar14 = (double)iStack_728 * _DAT_005c25a0;
        iVar4 = sound_sndmain_cpp_FUN_00556f80();
        FUN_005a28c0
                  (acStack_2d4,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk",iVar4,iStack_54,dVar14,iStack_50,
                   dVar15,dVar16,dVar17);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_005fba1c + -0x42);
        engine_texture_cpp_getTextureCacheStats_FUN_0056acc0(acStack_2d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_005fba1c + -0x37);
        core_skeleton_cpp_FUN_00550310(acStack_2d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,DAT_005fba1c + -0x2c);
        engine_2d_c_drawText_FUN_00401fe0(&param_1->field_0xf4,0,DAT_005fba1c + -0x21);
        if (_DAT_02cf5fcc != 0) {
          uVar5 = engine_special_cpp_FUN_005664c0(0x400);
          uVar5 = engine_special_cpp_FUN_005664c0(0x200,uVar5);
          uVar5 = engine_special_cpp_FUN_005664c0(0x100,uVar5);
          uVar5 = engine_special_cpp_FUN_005664c0(0x80,uVar5);
          uVar5 = engine_special_cpp_FUN_005664c0(0x40,uVar5);
          uVar5 = engine_special_cpp_FUN_005664c0(0x20,uVar5);
          FUN_005a28c0(acStack_2d4,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d",uVar5);
          engine_2d_c_drawText_FUN_00401fe0(acStack_2d4,0,0x2c);
        }
      }
      if (_DAT_01d22c50 != 0) {
        uVar6 = sound_sndmain_cpp_FUN_00556e80();
        iVar4 = 0x37;
        for (; uVar6 != 0; uVar6 = sound_sndmain_cpp_FUN_00556ec0(uVar6)) {
          sound_sndmain_cpp_CSfxSample_init_FUN_00555840(&CStack_724);
          iVar7 = sound_sndmain_cpp_FUN_00556780(uVar6,&CStack_724);
          if (iVar7 != 0) {
            engine_2d_c_FUN_00402140(0,iVar4,&CStack_724);
            iVar4 = iVar4 + 0xb;
          }
        }
      }
      if (*(int *)&param_1->field_0x1fc != 0) {
        core_event_cpp_CEventList_render_FUN_00491bf0(0x01C6E360);
      }
      if ((*(int *)&param_1->field_0x200 != 0) && (*(int *)&param_1->field_0x328 != 0)) {
        core_script_cpp_FUN_00529210(g_CScriptPtr,0,0xf0,DAT_005fba18 + -1,DAT_005fba1c + -1);
      }
      if (*(int *)&param_1->field_0x21c != 0) {
        shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0
                  (g_CEditorToolsPtr,acStack_4d4);
        engine_2d_c_drawText_FUN_00401fe0(acStack_4d4,0,DAT_005fba1c + -0x42);
      }
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if (iVar4 == 2) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960
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
      if (*(int *)&param_1->field_0xb7c != 0) {
        core_game_cpp_FUN_004b51e0(param_1);
      }
      if (*(int *)&param_1->field_0x330 != 0) {
        engine_console_cpp_FUN_00442250(g_CConsolePtr);
      }
      if (0 < (int)g_CPickList._0_4_) {
        shape_edittool_cpp_FUN_004843d0(&g_CPickList);
      }
      if (*(int *)&param_1->field_0x220 != 0) {
        shape_edittool_cpp_FUN_00480410(g_CEditorToolsPtr,0);
      }
      if ((*(int *)&param_1->field_0xd4 == 3) &&
         (core_event_cpp_CEventList_executeCommands_FUN_0048c150
                    (0x01C6E360,"MouseControlMode"), -1 < _DAT_01d22b48)) {
        core_game_cpp_FUN_004c4a10(param_1);
      }
      uVar6 = *(uint *)&param_1->field_0x264 | *(uint *)&param_1->field_0x268;
      if ((uVar6 == 0) && (_DAT_01d22c64 != 0)) {
        engine_special_cpp_clearScreen_FUN_00560d70();
      }
      _DAT_01d22c64 = uVar6;
      engine_special_cpp_unlockFrame_FUN_00565870(0);
    }
    if (local_44 != 0) {
      wincore_wddvmem_cpp_FUN_0057a4b0();
      return;
    }
  }
  else {
    *(uint *)&param_1->field_0x220 = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_00507c00(this_ptr);
    core_game_cpp_FUN_004bf4b0(param_1);
    if (*(int *)&param_1->field_0xe8 == 0) {
      core_game_cpp_FUN_004b4440(param_1);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004bf3a0(param_1,0.25);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00507790(g_CNetGamePtr);
  }
  return;
}
