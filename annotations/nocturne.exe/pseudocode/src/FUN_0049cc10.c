// Name: FUN_0049cc10
// Address: 0049cc10
// Address Range: [[0049cc10, 0049d86f]]
// Convention: unknown
// Signature: void FUN_0049cc10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cc10(int param_1)

{
  char cVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  uint auStackY_107c [656];
  uint *puVar14;
  byte local_604 [296];
  char local_4dc [256];
  byte local_3dc [256];
  byte local_2dc [256];
  byte local_1dc [200];
  byte local_114 [100];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_94;
  uint auStack_90 [5];
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  byte local_4c [4];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  iVar4 = 0x01CEA280;
  _DAT_01e52ef8 = 0;
  if ((*(int *)(param_1 + 0xcc) != 0) || (*(int *)(0x01CEA280 + 0x168) != 0)) {
    *(uint *)(param_1 + 0x1fc) = 0;
    core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(iVar4);
    core_game_cpp_CGame_process_FUN_004a6010(param_1);
    if (*(int *)(param_1 + 0xcc) == 0) {
      core_game_cpp_CGame_updateDT_FUN_0049a8a0(param_1);
    }
    else {
      core_game_cpp_CGame_slamDT_FUN_004a5f00(param_1,0x3e800000);
    }
    core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(0x01CEA280);
    return;
  }
  if (_DAT_01c02594 != 0) {
    wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
    local_40 = 1;
  }
  if ((*(int *)(param_1 + 0x278) != 0) || (*(int *)(param_1 + 0x27c) != 0)) {
    wincore_windll_cpp_clearScreen_FUN_0052ee70();
  }
  if (*(int *)(param_1 + 0x240) == 0) {
    FUN_00509a80(0x01E57284,1);
  }
  core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(0x01CEA280);
  if (*(int *)(param_1 + 0x1fc) == 0) {
    core_game_cpp_CGame_process_FUN_004a6010(param_1);
    FUN_0052dff0(0x02DC9450);
    FUN_004940d0(0x01C70F74);
  }
  else {
    FUN_0051f930(&local_b0);
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_b0 != (uint *)(iVar4 + 0x20)) {
      local_b0 = *(uint *)(iVar4 + 0x20);
      local_ac = *(uint *)(iVar4 + 0x24);
      local_a8 = *(uint *)(iVar4 + 0x28);
    }
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_a4 != (uint *)(iVar4 + 0x30)) {
      local_a4 = *(uint *)(iVar4 + 0x30);
      local_a0 = *(uint *)(iVar4 + 0x34);
      local_9c = *(uint *)(iVar4 + 0x38);
    }
    core_slew_cpp_CSlew_processInput_FUN_0051f980(&local_b0);
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    (**(code **)(*(int *)(iVar4 + 0x14c) + 0x60))(iVar4,&local_b0,&local_a4);
    if ((DAT_01bd1d94 & 1) != 0) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                (0x1fb8508,_DAT_01bd1d8c,_DAT_01bd1d90);
      puVar14 = auStack_90 + 5;
      local_7c = auStack_90[2];
      auStack_90[(uint)bVar13 * -2 + 6] = auStack_90[(uint)bVar13 * -2 + 3];
      auStack_90[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           auStack_90[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(0x1fb8508,puVar14);
      local_7c = local_94;
      auStack_90[(uint)bVar13 * -2 + 6] = auStack_90[(uint)bVar13 * -2];
      auStack_90[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           auStack_90[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      local_70 = (float)local_7c * _DAT_0059de8c;
      local_6c = (float)local_78 * _DAT_0059de8c;
      local_68 = (float)local_74 * _DAT_0059de8c;
      iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      (**(code **)(*(int *)(iVar4 + 0x14c) + 0x60))(iVar4,&local_70,iVar4 + 0x30);
      DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
    }
  }
  core_game_cpp_CGame_updateDT_FUN_0049a8a0(param_1);
  core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(0x01CEA280);
  if (*(int *)(param_1 + 0x240) == 0) {
    core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(0x01E57284);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  if (*(int *)(param_1 + 0x20c) != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_00558a30();
    local_14 = local_14 - local_44;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"screen paint : %3.2f ms\n",
               ((double)local_14 * _DAT_0058273a * _DAT_00582742 * _DAT_0058274a) /
               (double)*(float *)(0x01C775EC + 0x264));
  }
  if (*(int *)(param_1 + 0x208) != 0) goto LAB_0049d5b0;
  wincore_windll_cpp_lockFrame_FUN_005322e0();
  if (*(int *)(param_1 + 0x240) != 0) {
    FUN_0050a260(0x01E57284);
  }
  if (*(int *)(param_1 + 0x210) == 0) {
    uVar5 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0(&DAT_005825f0);
    iVar4 = getenv(uVar5);
    if (iVar4 != 0) goto LAB_0049cf70;
  }
  else {
LAB_0049cf70:
    iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x3e);
    if (iVar4 != 0) {
      _DAT_01c780b8 = _DAT_01c780b8 + 1;
      _sprintf(0x1c780c0,"demon%d.pcx",_DAT_01c780b8);
      FUN_004f2990(0x1c780c0);
    }
  }
  FUN_004c2470(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0);
  if (*(int *)(param_1 + 0x278) != 0) {
    FUN_0050aa70(0x01E57284);
  }
  core_game_cpp_CGame_drawScreenBorder_FUN_0049a960(param_1);
  if (_DAT_01c78ac8 != 0) {
    iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x2f), iVar4 != 0)) {
      iVar4 = _DAT_01c78acc;
      if (_DAT_01c78acc == 0) {
        _DAT_01c78acc = 1;
        _DAT_01c78ad4 = iVar4;
      }
      else {
        _DAT_01c78acc = 0;
      }
    }
    if ((_DAT_01c78ad0 < 1) || (_DAT_01c78ad4 < _DAT_01c78ad0)) {
      if (_DAT_01c78acc != 0) {
        _sprintf(local_114,"noc%05d.raw",_DAT_01c78ad4);
        _sprintf(local_1dc,"Movie recording active: movie\\%s",local_114);
        local_34 = engine_dosio_cpp_getFile_FUN_00456a60("movie",local_114,&DAT_005823b3);
        if (local_34 != 0) {
          local_38 = 0;
          if (0 < 0x00000040) {
            do {
              local_30 = 0;
              if (0 < 0x00000040) {
                local_3c = local_38 + 1;
                do {
                  iVar4 = local_34;
                  local_28 = (local_30 * DAT_005b761c) / 0x00000040;
                  local_20 = ((local_30 + 1) * DAT_005b761c) / 0x00000040;
                  iVar6 = (local_38 * DAT_005b7620) / 0x00000040;
                  iVar7 = (local_3c * DAT_005b7620) / 0x00000040;
                  iVar10 = 0;
                  local_18 = 0;
                  local_1c = 0;
                  iVar11 = 0;
                  if (iVar6 < iVar7) {
                    local_24 = iVar6 * 4;
                    local_2c = iVar7 << 2;
                    do {
                      if (local_28 < local_20) {
                        puVar9 = (uint *)(local_28 * 4 + *(int *)(&DAT_01bd2fa0 + local_24));
                        iVar6 = local_28;
                        do {
                          uVar3 = *puVar9;
                          puVar9 = puVar9 + 1;
                          iVar11 = iVar11 + (uVar3 >> 0x10 & 0xff);
                          iVar6 = iVar6 + 1;
                          iVar10 = iVar10 + (uVar3 & 0xff);
                          local_1c = local_1c + (uVar3 >> 8 & 0xff);
                          local_18 = local_18 + 1;
                        } while (iVar6 < local_20);
                      }
                      local_24 = local_24 + 4;
                    } while (local_24 < local_2c);
                  }
                  local_1c = local_1c / local_18;
                  iVar10 = iVar10 / local_18;
                  _fputc(iVar11 / local_18,local_34);
                  _fputc(local_1c,iVar4);
                  _fputc(iVar10,iVar4);
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
  FUN_004fe770(0x01E56DA0);
  core_game_cpp_CGame_renderOverlay_FUN_0049ab50(param_1);
  core_game_cpp_CGame_renderIrisFade_FUN_004a3960(param_1);
  if (*(int *)(param_1 + 0x1e4) == 0) {
    _DAT_01c71e30 = 0.0;
    _DAT_01c71e38 = 0;
  }
  else {
    _sprintf(local_2dc,"Camera: \"%s\" Group %d",0x1fb8508,
               *(uint *)(0x01E57284 + 0x14c + *(int *)(0x01E57284 + 0x15aabc) * 0x1a0));
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,DAT_005b7620 + -0x16);
    _DAT_01c71e38 = _DAT_01c71e38 + 1;
    _DAT_01c71e30 = _DAT_01c71e30 + (double)*(float *)(param_1 + 0x264);
    _sprintf(local_2dc,"FR: %f, AVG: %f, PC: %d",
               1.0 / (double)*(float *)(param_1 + 0x264),(double)_DAT_01c71e38 / _DAT_01c71e30,
               _DAT_01e52ef8);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,DAT_005b7620 + -0xb);
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    _sprintf(local_2dc,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",
               (double)*(float *)(iVar4 + 0x20),(double)*(float *)(iVar4 + 0x24),
               (double)*(float *)(iVar4 + 0x28),
               _DAT_0058275a * (double)*(float *)(iVar4 + 0x30) * _DAT_00582752,
               (double)*(float *)(iVar4 + 0x38) * _DAT_00582752 * _DAT_0058275a,
               (double)*(float *)(iVar4 + 0x34) * _DAT_00582752 * _DAT_0058275a);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,0);
    _sprintf(local_2dc,"Slew : %s, Virtual Director : %s",
               (&PTR_DAT_005b9358)[*(int *)(param_1 + 0x1fc)],
               (&PTR_DAT_005b9358)[*(int *)(param_1 + 0x274)]);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,0xb);
    pfVar2 = *(float **)(param_1 + 0x9bc);
    if (pfVar2 != (float *)0x0) {
      _sprintf(local_2dc,"Fudge: %g,%g,%g",(double)*pfVar2,(double)pfVar2[1],
                 (double)pfVar2[2]);
      engine_2d_c_drawText_FUN_00402600(local_2dc,0,DAT_005b7620 + -0x4d);
    }
    sound_sndmain_cpp_getSoundMemoryStats_FUN_00527c70
              (&local_5c,&local_58,&local_54,&local_50,local_4c,&local_48);
    local_14 = local_58;
    uVar5 = sound_sndmain_cpp_countActiveSfx_FUN_005275e0
                      (local_5c,(double)local_58 * _DAT_00582762,local_54,
                       (double)local_50 * _DAT_00582762,
                       (double)(local_58 + local_50) * _DAT_00582762,
                       (double)local_48 * _DAT_00582762);
    _sprintf(local_2dc,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk",uVar5);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,DAT_005b7620 + -0x42);
    engine_texture_cpp_getTextureCacheStats_FUN_00545a80(local_2dc);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,DAT_005b7620 + -0x37);
    FUN_0051f760(local_2dc);
    engine_2d_c_drawText_FUN_00402600(local_2dc,0,DAT_005b7620 + -0x2c);
    engine_2d_c_drawText_FUN_00402600(param_1 + 0xd0,0,DAT_005b7620 + -0x21);
  }
  if (_DAT_01c78ad8 != 0) {
    iVar6 = sound_sndmain_cpp_getFirstActiveSfx_FUN_005274e0();
    iVar4 = 0x37;
    for (; iVar6 != 0; iVar6 = FUN_00527520(iVar6)) {
      sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(local_604);
      iVar7 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(iVar6,local_604);
      if (iVar7 != 0) {
        FUN_00402760(0,iVar4,local_604);
        iVar4 = iVar4 + 0xb;
      }
    }
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    core_event_cpp_CEventList_render_FUN_0047dd80(0x01C03A10);
  }
  if ((*(int *)(param_1 + 0x1dc) != 0) && (*(int *)(param_1 + 0x278) != 0)) {
    FUN_004fe9d0(0x01E56DA0,0,0xf0,DAT_005b761c + -1,DAT_005b7620 + -1);
  }
  if (*(int *)(param_1 + 0x1f8) != 0) {
    shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0(0x01BCD074,local_3dc);
    engine_2d_c_drawText_FUN_00402600(local_3dc,0,DAT_005b7620 + -0x42);
  }
  iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
  if (iVar4 == 2) {
    pcVar8 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("You're dead.  Game over.");
    pcVar12 = local_4dc;
    do {
      cVar1 = *pcVar8;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
              (_DAT_014b98f8,0,DAT_005b761c,DAT_005b7620 + *(int *)(_DAT_014b98f8 + 0x316c) * -2,
               DAT_01bff320,0,local_4dc);
  }
  if (*(int *)(param_1 + 0xac8) != 0) {
    core_game_cpp_CGame_showCustomizableKeys_FUN_0049b4e0(param_1);
  }
  if (*(int *)(param_1 + 0x280) != 0) {
    engine_console_cpp_CConsole_render_FUN_0043aec0(PTR_DAT_005ad350);
  }
  if (0 < _DAT_01c78424) {
    FUN_004759d0(&DAT_01c78424);
  }
  if (*(int *)(param_1 + 0x1fc) != 0) {
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(0x01BCD074,0);
  }
  FUN_00532320();
LAB_0049d5b0:
  if (local_40 == 0) {
    return;
  }
  wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
  return;
}
