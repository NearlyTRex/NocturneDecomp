// Name: core_setedit.cpp_DementedFogEditor_FUN_00580730
// Address: 00580730
// Address Range: [[00580730, 0058131d]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_DementedFogEditor_FUN_00580730(void * unk)
// Cross-references:
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584b9e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Demented_R_Fog_Editor_00648639
//   TerminatedCString s_s_1_Use_global_fog_00648650
//   TerminatedCString s_s_1_Fog_settings_for_cam_00648663
//   TerminatedCString s_s_2_Fog_color_d_d_d_00648682
//   TerminatedCString s_s_3_Fog_velocity_f_f_f_0064869b
//   TerminatedCString s_s_4_Fog_taper_f_006486b7
//   TerminatedCString s_s_5_Fog_density_f_006486ca
//   TerminatedCString s_T_Temperature_F_3_2f_006486df
//   TerminatedCString s_s_6_Reset_all_cameras_to_006486fb
//   TerminatedCString s_s_7_Precompute_fog_for_s_00648727
//   TerminatedCString s_S_Save_set_0064874e
//   TerminatedCString s_s_8_Preview_fog_settings_0064875b
//   TerminatedCString s_s_9_Precompute_fog_00648774
//   TerminatedCString s_R_Default_set_reverb_s_00648787
//   TerminatedCString s_R_Reverb_for_camera_s_s_006487a3
//   TerminatedCString s_V_Test_reverb_006487c1
//   TerminatedCString s_Enter_fog_color_r_g_b_006487d1
//   TerminatedCString s_d_d_d_006487ea
//   TerminatedCString s_Enter_fog_velocity_x_y_z_006487f3
//   TerminatedCString s_f_f_f_0064880f
//   TerminatedCString s_Enter_in_fog_taper_00648818
//   TerminatedCString s_Enter_in_fog_density_0064882e
//   TerminatedCString s_Enter_in_temperature_00648846
//   TerminatedCString s_Reset_all_cameras_to_mas_0064885e
//   TerminatedCString s_set_00648887
//   undefined4 DAT_00648888
//   undefined4 DAT_00648889
//   undefined4 DAT_0064888a
//   TerminatedCString s_set_0064888c
//   TerminatedCString s_models_00648890
//   TerminatedCString s_Save_set_00648897
//   TerminatedCString s_Edit_default_set_reverb_006488a0
//   TerminatedCString s_Edit_reverb_for_camera_s_006488b8
//   TerminatedCString s_s_45_wav_006488d2
//   TerminatedCString s_cre_fire_wav_006488d9
//   TerminatedCString s_shotgun_wav_006488e6
//   TerminatedCString s_zom_s04_wav_006488f2
//   TerminatedCString s_stranger_hit01_wav_006488fe
//   TerminatedCString s_xplode1_wav_00648911
//   TerminatedCString s_limb1_wav_0064891d
//   TerminatedCString s_footstep_str_0_ct_1_wav_00648927
//   TerminatedCString s_footstep_str_0_wd_1_wav_0064893f
//   TerminatedCString s_footstep_str_0_mt_1_wav_00648957
//   TerminatedCString s_footstep_str_0_mb_1_wav_0064896f
//   TerminatedCString s_footstep_str_0_gr_1_wav_00648987
//   TerminatedCString s_ric_mt0a_wav_0064899f
//   TerminatedCString s_ric_ct0a_wav_006489ac
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CSound* g_CSoundPtr = 03f6af64
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
//   undefined4 DAT_03659388
//   undefined4 DAT_0365938c
//   CSound g_CSoundInstance
// Function calls:
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   core_setedit.cpp_CDemonSet_FUN_00577af0
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
//   core_setedit.cpp_FUN_00581320
//   core_sound.cpp_CSound_FUN_005b3c70
//   core_sound.cpp_CSound_FUN_005b3d20
//   core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_string.c_strtod_FUN_005ff0f3
//   crt_string.c_strupr_FUN_00600770
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
//   sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
//   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   sound_sndmain.cpp_startSfx_FUN_005a8e90
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

void __cdecl core_setedit_cpp_DementedFogEditor_FUN_00580730(void *unk)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  void *pvVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  BADSPACEBASE *in_ESP;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  int in_stack_0000002c;
  int in_stack_0000003c;
  char *pcStack00000040;
  undefined4 *in_stack_0000004c;
  undefined4 *in_stack_00000050;
  undefined4 *in_stack_0000005c;
  undefined4 *in_stack_00000060;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined8 in_stack_fffffa24;
  double dVar17;
  char *in_stack_fffffa94;
  CStrList_vtable *config_param1;
  CStrList_vtable *in_stack_fffffad8;
  CStrList_vtable *in_stack_fffffae0;
  char **in_stack_fffffae4;
  CStrList_vtable *in_stack_fffffae8;
  CStrList_vtable *in_stack_fffffaec;
  char **in_stack_fffffaf0;
  CStrList_vtable *in_stack_fffffaf4;
  CStrList_swap *in_stack_fffffaf8;
  char **in_stack_fffffafc;
  CStrList_vtable *in_stack_fffffb00;
  CStrList_swap *in_stack_fffffb04;
  char acStack_234 [4];
  undefined1 auStack_230 [260];
  char acStack_12c [4];
  char acStack_128 [4];
  char acStack_124 [4];
  char acStack_120 [4];
  char acStack_11c [4];
  char acStack_118 [4];
  char acStack_114 [4];
  char acStack_110 [4];
  char acStack_10c [4];
  char acStack_108 [28];
  char acStack_ec [4];
  char acStack_e8 [24];
  char acStack_d0 [4];
  char acStack_cc [4];
  char acStack_c8 [4];
  char acStack_c4 [144];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int iStack_14;
  
  bVar14 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0((CDemonSet *)unk);
  local_2c = (int)unk + 4;
  *(undefined4 *)((int)unk + 0x15aea4) = 0;
  local_20 = (int)unk + 0x15ac30;
  iStack_14 = (int)unk + 0x15ac3c;
  local_34 = (int)unk + 0x15ac7c;
  local_30 = (int)unk + 0x14d0f0;
  local_24 = local_2c;
  local_18 = local_20;
  do {
    do {
      iVar10 = (int)in_stack_fffffa24;
      iVar3 = *(int *)((int)unk + 0x15aea4) * 0x1a4;
      iVar8 = local_20;
      if (*(int *)((int)unk + iVar3 + 0x154) == 0) {
        iVar8 = iVar3 + local_24 + 0x154;
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Demented(R) Fog Editor",0,0);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_234,"1.  Fog settings for camera %s");
        iVar10 = 0x16;
        uVar15 = ZEXT48(auStack_230);
      }
      else {
        uVar15 = 0x1600000000;
      }
      engine_2d_c_drawText_FUN_00401fd0((char *)uVar15,(int)(uVar15 >> 0x20),iVar10);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_12c,"2.  Fog color : %d,%d,%d");
      engine_2d_c_drawText_FUN_00401fd0(acStack_128,0,0x2c);
      dVar17 = (double)*(float *)(iVar8 + 0x10);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_124,"3.  Fog velocity : %f,%f,%f",(double)*(float *)(iVar8 + 0xc),
                 dVar17,(double)*(float *)(iVar8 + 0x14));
      uVar16 = SUB84(dVar17,0);
      engine_2d_c_drawText_FUN_00401fd0(acStack_120,0,0x37);
      in_stack_fffffa24 = CONCAT44(0x5808b9,uVar16);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_11c,"4.  Fog taper : %f",(double)*(float *)(iVar8 + 0x18));
      engine_2d_c_drawText_FUN_00401fd0(acStack_118,0,0x42);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_114,"5.  Fog density : %f",(double)*(float *)(iVar8 + 0x1c));
      engine_2d_c_drawText_FUN_00401fd0(acStack_110,0,0x4d);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_10c,"T.  Temperature (F) : %3.2f",(double)*(float *)(iVar8 + 0x20));
      engine_2d_c_drawText_FUN_00401fd0(acStack_108,0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("6.  Reset all cameras to master fog setting",0,99);
      engine_2d_c_drawText_FUN_00401fd0("7.  Precompute fog for selected camera",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("S.  Save set",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("8.  Preview fog settings",0,0x84);
      engine_2d_c_drawText_FUN_00401fd0("9.  Precompute fog",0,0x8f);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        pfVar4 = core_sound_cpp_CSound_FUN_005b3c70(g_CSoundPtr);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_ec,"R.  Reverb for camera %s : %s",
                   *(int *)((int)unk + 0x15aea4) * 0x1a4 + in_stack_0000002c,pfVar4);
      }
      else {
        pfVar4 = core_sound_cpp_CSound_FUN_005b3c70(g_CSoundPtr);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ec,"R.  Default set reverb : %s",pfVar4);
      }
      engine_2d_c_drawText_FUN_00401fd0(acStack_e8,0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("V.  Test reverb",0,0xb0);
                    /* WARNING: Load size is inaccurate */
      iVar3 = 0;
      if (0 < *unk) {
        iVar10 = 0;
        pvVar5 = unk;
        do {
          *(undefined4 *)((int)&DAT_03659388 + iVar10) = *(undefined4 *)((int)pvVar5 + 0x154);
          iVar10 = iVar10 + 4;
          iVar3 = iVar3 + 1;
                    /* WARNING: Load size is inaccurate */
          pvVar5 = (void *)((int)pvVar5 + 0x1a4);
        } while (iVar3 < *unk);
      }
      iVar3 = core_setedit_cpp_CDemonSet_FUN_00577af0((CDemonSet *)unk);
      if (iVar3 != -1) {
        iVar10 = *(int *)((int)unk + 0x15aea4);
        if (iVar3 == iVar10) {
          *(uint *)((int)unk + iVar10 * 0x1a4 + 0x154) =
               (uint)(*(int *)((int)unk + iVar10 * 0x1a4 + 0x154) == 0);
          iVar3 = *(int *)((int)unk + 0x15aea4) * 0x1a4 + in_stack_0000003c;
          *(undefined4 *)(iVar3 + 0x154) = *(undefined4 *)pcStack00000040;
          *(undefined4 *)(iVar3 + 0x158) = *(undefined4 *)(pcStack00000040 + 4);
          *(undefined4 *)(iVar3 + 0x15c) = *(undefined4 *)(pcStack00000040 + 8);
          if ((undefined4 *)(iVar3 + 0x160) != in_stack_0000004c) {
            *(undefined4 *)(iVar3 + 0x160) = *in_stack_0000004c;
            *(undefined4 *)(iVar3 + 0x164) = in_stack_0000004c[1];
            *(undefined4 *)(iVar3 + 0x168) = in_stack_0000004c[2];
          }
          *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(pcStack00000040 + 0x18);
          *(undefined4 *)(iVar3 + 0x170) = *(undefined4 *)(pcStack00000040 + 0x1c);
          *(undefined4 *)(iVar3 + 0x174) = *(undefined4 *)(pcStack00000040 + 0x20);
        }
        else {
          *(int *)((int)unk + 0x15aea4) = iVar3;
        }
      }
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      bVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    } while (CONCAT31(extraout_var,bVar2) == 0);
    uVar7 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar7 < 0x37) {
      if (uVar7 < 0x33) {
        if (0x30 < uVar7) {
          if (uVar7 < 0x32) {
            *(uint *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) =
                 (uint)(*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0);
            iVar8 = *(int *)((int)unk + 0x15aea4);
            in_stack_0000004c[iVar8 * 0x69 + 0x55] = *in_stack_00000050;
            in_stack_0000004c[iVar8 * 0x69 + 0x56] = in_stack_00000050[1];
            in_stack_0000004c[iVar8 * 0x69 + 0x57] = in_stack_00000050[2];
            if (in_stack_0000004c + iVar8 * 0x69 + 0x58 != in_stack_0000005c) {
              in_stack_0000004c[iVar8 * 0x69 + 0x58] = *in_stack_0000005c;
              in_stack_0000004c[iVar8 * 0x69 + 0x59] = in_stack_0000005c[1];
              in_stack_0000004c[iVar8 * 0x69 + 0x5a] = in_stack_0000005c[2];
            }
            in_stack_0000004c[iVar8 * 0x69 + 0x5b] = in_stack_00000050[6];
            in_stack_0000004c[iVar8 * 0x69 + 0x5c] = in_stack_00000050[7];
            in_stack_0000004c[iVar8 * 0x69 + 0x5d] = in_stack_00000050[8];
          }
          else {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (acStack_c8,0x1e,0,0,"Enter fog color r,g,b : ");
            iVar3 = -1;
            pcVar6 = acStack_c4;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + (uint)bVar14 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar3 != -2) {
              crt_stdio_c_sscanf_FUN_0060013c(acStack_c4,"%d,%d,%d",iVar8,iVar8 + 4,iVar8 + 8)
              ;
            }
          }
        }
      }
      else if (uVar7 < 0x34) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_c8,0x1e,0,0,"Enter fog velocity x,y,z : ");
        iVar3 = -1;
        pcVar6 = acStack_c4;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar14 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          crt_stdio_c_sscanf_FUN_0060013c
                    (acStack_c4,"%f,%f,%f",iVar8 + 0xc,iVar8 + 0x10,iVar8 + 0x14);
        }
      }
      else if (uVar7 < 0x35) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_c8,0x1e,0,0,"Enter in fog taper : ");
        iVar3 = -1;
        pcVar6 = acStack_c4;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar14 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          _pcStack00000040 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa94);
          *(float *)(iVar8 + 0x18) = (float)_pcStack00000040;
        }
      }
      else if (uVar7 < 0x36) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_c8,0x1e,0,0,"Enter in fog density : ");
        iVar3 = -1;
        pcVar6 = acStack_c4;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar14 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          _pcStack00000040 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa94);
          *(float *)(iVar8 + 0x1c) = (float)_pcStack00000040;
        }
      }
      else {
        iVar8 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Reset all cameras to master fog setting?");
        if (iVar8 != 0) {
          puVar9 = (undefined4 *)(uVar7 + 0x160);
          puVar11 = (undefined4 *)(uVar7 + 0x154);
          pvVar5 = unk;
          do {
            *(undefined4 *)((int)pvVar5 + 0x154) = 1;
            *puVar11 = *in_stack_0000005c;
            puVar11[1] = in_stack_0000005c[1];
            puVar11[2] = in_stack_0000005c[2];
            if (puVar9 != in_stack_00000060) {
              *puVar9 = *in_stack_00000060;
              puVar9[1] = in_stack_00000060[1];
              puVar9[2] = in_stack_00000060[2];
            }
            puVar9 = puVar9 + 0x69;
            pvVar5 = (void *)((int)pvVar5 + 0x1a4);
            puVar11[6] = in_stack_0000005c[6];
            puVar11[7] = in_stack_0000005c[7];
            puVar11[8] = in_stack_0000005c[8];
            puVar11 = puVar11 + 0x69;
          } while (pvVar5 != (void *)((int)unk + 0x19a28));
        }
      }
    }
    else if (uVar7 < 0x38) {
      core_setedit_cpp_FUN_00581320();
    }
    else if (uVar7 < 0x52) {
      if (uVar7 < 0x39) {
        core_setedit_cpp_FUN_00581320();
      }
      else if (uVar7 == 0x39) {
        core_setedit_cpp_BackdropMaybe_FUN_005805a0();
      }
    }
    else if (uVar7 < 0x53) {
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_cc,"Edit reverb for camera %s",
                   in_stack_0000004c + *(int *)((int)unk + 0x15aea4) * 0x69);
        core_sound_cpp_CSound_FUN_005b3d20(g_CSoundPtr);
      }
      else {
        core_sound_cpp_CSound_FUN_005b3d20(g_CSoundPtr);
      }
    }
    else if (uVar7 < 0x54) {
      if (*(char *)((int)unk + 0x14d0f0) == '\0') {
        acStack_cc[0] = '\0';
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  (pcStack00000040,(char *)0x0,(char *)0x0,acStack_cc,(char *)0x0);
        pcVar12 = ".set";
        iVar8 = -1;
        pcVar6 = acStack_d0;
        do {
          pcVar13 = pcVar6;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar13;
        } while (cVar1 != '\0');
        pcVar13 = pcVar13 + -1;
        do {
          cVar1 = *pcVar12;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
        crt_string_c_strupr_FUN_00600770(acStack_d0);
      }
      bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x64888c,
                         SUB41(acStack_cc,0));
      if (CONCAT31(extraout_var_00,bVar2) != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0((CDemonSet *)unk,acStack_c8);
      }
    }
    else if (uVar7 < 0x55) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (acStack_c8,0x14,0,0,"Enter in temperature : ");
      iVar3 = -1;
      pcVar6 = acStack_c4;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar14 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        _pcStack00000040 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa94);
        *(float *)(iVar8 + 0x20) = (float)_pcStack00000040;
      }
    }
    else if (uVar7 == 0x56) {
      iVar8 = *(int *)((int)unk + 0x15ac7c);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        iVar8 = *(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c);
      }
      core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar8);
      sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
      sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
      sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
      while( true ) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffa9c);
        in_stack_fffffa94 = (char *)0x580ff0;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffaa0,"45.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffaa4,"cre-fire.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffaa8,"shotgun.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffaac,"zom-s04.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffab0,"stranger_hit01.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffab4,"xplode1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffab8,"limb1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffabc,"footstep-str-0-ct-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffac0,"footstep-str-0-wd-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffac4,"footstep-str-0-mt-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffac8,"footstep-str-0-mb-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffacc,"footstep-str-0-gr-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffad0,"ric-mt0a.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffad4,"ric-ct0a.wav");
        config_param1 = (CStrList_vtable *)0x0;
        pfVar4 = core_sound_cpp_CSound_FUN_005b3c70(g_CSoundPtr);
        iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffadc,(char *)pfVar4,(int)config_param1,
                           (int)in_stack_fffffad8);
        in_stack_fffffad8 = (CStrList_vtable *)&stack0xfffffae0;
        if (iVar8 < 0) break;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        in_stack_fffffad8 = (CStrList_vtable *)0x0;
        sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(0.0,0.0,20.0);
        in_stack_fffffae0 = (CStrList_vtable *)&stack0xfffffae8;
        pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0xfffffae8,iVar8);
        in_stack_fffffae4 = (char **)0x581136;
        sound_sndmain_cpp_startSfx_FUN_005a8e90(pcVar6);
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        in_stack_fffffaec = (CStrList_vtable *)&stack0xfffffaf4;
        in_stack_fffffaf0 = (char **)0x0;
        in_stack_fffffae8 = (CStrList_vtable *)0x58114a;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffffaf4,0,(uint)in_stack_fffffaf4,(uint)in_stack_fffffaf8,
                   (uint)in_stack_fffffafc,(uint)in_stack_fffffb00,(uint)in_stack_fffffb04);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffae0,0,(uint)in_stack_fffffae0,(uint)in_stack_fffffae4,
                 (uint)in_stack_fffffae8,(uint)in_stack_fffffaec,(uint)in_stack_fffffaf0);
      in_stack_fffffae0 = (CStrList_vtable *)0x581166;
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    }
    if (local_28 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}


// Assembly code:
// 00580730: PUSH EBX
//   Label: core_setedit.cpp_DementedFogEditor_FUN_00580730
// 00580731: PUSH ESI
// 00580732: PUSH EDI
// 00580733: PUSH EBP
// 00580734: MOV EBP,ESP
// 00580736: SUB ESP,0x5d4
// 0058073c: AND ESP,0xfffffff8
// 0058073f: PUSH 0x0
// 00580741: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580744: PUSH EDX
// 00580745: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0058074a: ADD ESP,0x8
// 0058074d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580750: ADD EAX,0x4
// 00580753: MOV dword ptr [EAX + 0x15aea0],0x0
// 0058075d: MOV dword ptr [ESP + 0x5c0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00580764: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580767: ADD EAX,0x15ac30
// 0058076c: MOV dword ptr [ESP + 0x5c4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00580773: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580776: ADD EAX,0x15ac3c
// 0058077b: MOV dword ptr [ESP + 0x5d0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00580782: MOV EAX,dword ptr [ESP + 0x5c0]
//   XREF to: Stack[-0x28] (READ)
// 00580789: MOV dword ptr [ESP + 0x5b8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00580790: MOV EAX,dword ptr [ESP + 0x5c4]
//   XREF to: Stack[-0x24] (READ)
// 00580797: MOV dword ptr [ESP + 0x5cc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058079e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005807a1: ADD EAX,0x15ac7c
// 005807a6: MOV dword ptr [ESP + 0x5b0],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005807ad: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005807b0: ADD EAX,0x14d0f0
// 005807b5: MOV dword ptr [ESP + 0x5b4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005807bc: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005807bc
//   XREF to: Stack[0x4] (READ)
// 005807bf: IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4
// 005807c9: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005807cc: CMP dword ptr [EDX + EAX*0x1 + 0x154],0x0
// 005807d4: JZ 0x00580af7
//   XREF to: 00580af7 (CONDITIONAL_JUMP)
// 005807da: MOV ESI,dword ptr [ESP + 0x5c4]
//   XREF to: Stack[-0x24] (READ)
// 005807e1: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_005807e1
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005807e6: PUSH 0x0
// 005807e8: PUSH 0x0
// 005807ea: PUSH 0x648639
//   XREF to: 00648639 (DATA)
// 005807ef: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005807f4: ADD ESP,0xc
// 005807f7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005807fa: IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4
// 00580804: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580807: CMP dword ptr [EDX + EAX*0x1 + 0x154],0x0
// 0058080f: JZ 0x00580b09
//   XREF to: 00580b09 (CONDITIONAL_JUMP)
// 00580815: PUSH 0x16
// 00580817: PUSH 0x0
// 00580819: PUSH 0x648650
//   XREF to: 00648650 (DATA)
// 0058081e: CALL engine_2d.c_drawText_FUN_00401fd0
//   Label: LAB_0058081e
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00580823: ADD ESP,0xc
// 00580826: MOV EDI,dword ptr [ESI + 0x8]
// 00580829: PUSH EDI
// 0058082a: MOV EAX,dword ptr [ESI + 0x4]
// 0058082d: PUSH EAX
// 0058082e: MOV EDX,dword ptr [ESI]
// 00580830: PUSH EDX
// 00580831: PUSH 0x648682
//   XREF to: 00648682 (DATA)
// 00580836: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x140] (DATA)
// 0058083d: PUSH EAX
// 0058083e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00580843: ADD ESP,0x14
// 00580846: PUSH 0x2c
// 00580848: PUSH 0x0
// 0058084a: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x140] (DATA)
// 00580851: PUSH EAX
// 00580852: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00580857: ADD ESP,0xc
// 0058085a: SUB ESP,0x8
// 0058085d: FLD float ptr [ESI + 0x14]
// 00580860: FSTP double ptr [ESP]
//   XREF to: Stack[-0x5f0] (DATA)
// 00580863: SUB ESP,0x8
// 00580866: FLD float ptr [ESI + 0x10]
// 00580869: FSTP double ptr [ESP]
//   XREF to: Stack[-0x5f8] (DATA)
// 0058086c: SUB ESP,0x8
// 0058086f: FLD float ptr [ESI + 0xc]
// 00580872: FSTP double ptr [ESP]
//   XREF to: Stack[-0x600] (DATA)
// 00580875: PUSH 0x64869b
//   XREF to: 0064869b (DATA)
// 0058087a: LEA EAX,[ESP + 0x4c4]
//   XREF to: Stack[-0x140] (DATA)
// 00580881: PUSH EAX
// 00580882: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00580887: ADD ESP,0x20
// 0058088a: PUSH 0x37
// 0058088c: PUSH 0x0
// 0058088e: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x140] (DATA)
// 00580895: PUSH EAX
// 00580896: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058089b: ADD ESP,0xc
// 0058089e: SUB ESP,0x8
// 005808a1: FLD float ptr [ESI + 0x18]
// 005808a4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x5f0] (DATA)
// 005808a7: PUSH 0x6486b7
//   XREF to: 006486b7 (DATA)
// 005808ac: LEA EAX,[ESP + 0x4b4]
//   XREF to: Stack[-0x140] (DATA)
// 005808b3: PUSH EAX
// 005808b4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005808b9: ADD ESP,0x10
// 005808bc: PUSH 0x42
// 005808be: PUSH 0x0
// 005808c0: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x140] (DATA)
// 005808c7: PUSH EAX
// 005808c8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005808cd: ADD ESP,0xc
// 005808d0: SUB ESP,0x8
// 005808d3: FLD float ptr [ESI + 0x1c]
// 005808d6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x5f0] (DATA)
// 005808d9: PUSH 0x6486ca
//   XREF to: 006486ca (DATA)
// 005808de: LEA EAX,[ESP + 0x4b4]
//   XREF to: Stack[-0x140] (DATA)
// 005808e5: PUSH EAX
// 005808e6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005808eb: ADD ESP,0x10
// 005808ee: PUSH 0x4d
// 005808f0: PUSH 0x0
// 005808f2: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x140] (DATA)
// 005808f9: PUSH EAX
// 005808fa: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005808ff: ADD ESP,0xc
// 00580902: SUB ESP,0x8
// 00580905: FLD float ptr [ESI + 0x20]
// 00580908: FSTP double ptr [ESP]
//   XREF to: Stack[-0x5f0] (DATA)
// 0058090b: PUSH 0x6486df
//   XREF to: 006486df (DATA)
// 00580910: LEA EAX,[ESP + 0x4b4]
//   XREF to: Stack[-0x140] (DATA)
// 00580917: PUSH EAX
// 00580918: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0058091d: ADD ESP,0x10
// 00580920: PUSH 0x58
// 00580922: PUSH 0x0
// 00580924: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x140] (DATA)
// 0058092b: PUSH EAX
// 0058092c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00580931: ADD ESP,0xc
// 00580934: PUSH 0x63
// 00580936: PUSH 0x0
// 00580938: PUSH 0x6486fb
//   XREF to: 006486fb (DATA)
// 0058093d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00580942: ADD ESP,0xc
// 00580945: PUSH 0x6e
// 00580947: PUSH 0x0
// 00580949: PUSH 0x648727
//   XREF to: 00648727 (DATA)
// 0058094e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00580953: ADD ESP,0xc
// 00580956: PUSH 0x79
// 00580958: PUSH 0x0
// 0058095a: PUSH 0x64874e
//   XREF to: 0064874e (DATA)
// 0058095f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00580964: ADD ESP,0xc
// 00580967: PUSH 0x84
// 0058096c: PUSH 0x0
// 0058096e: PUSH 0x64875b
//   XREF to: 0064875b (DATA)
// 00580973: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00580978: ADD ESP,0xc
// 0058097b: PUSH 0x8f
// 00580980: PUSH 0x0
// 00580982: PUSH 0x648774
//   XREF to: 00648774 (DATA)
// 00580987: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058098c: ADD ESP,0xc
// 0058098f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580992: IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4
// 0058099c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058099f: ADD EAX,EBX
// 005809a1: CMP dword ptr [EAX + 0x154],0x0
// 005809a8: JZ 0x00580b37
//   XREF to: 00580b37 (CONDITIONAL_JUMP)
// 005809ae: MOV EDX,dword ptr [EBX + 0x15ac7c]
// 005809b4: PUSH EDX
// 005809b5: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 005809bb: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 005809bc: CALL core_sound.cpp_CSound_FUN_005b3c70
//   XREF to: 005b3c70 (UNCONDITIONAL_CALL)
// 005809c1: ADD ESP,0x8
// 005809c4: PUSH EAX
// 005809c5: PUSH 0x648787
//   XREF to: 00648787 (DATA)
// 005809ca: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x140] (DATA)
// 005809d1: PUSH EAX
// 005809d2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005809d7: ADD ESP,0xc
// 005809da: PUSH 0xa5
//   Label: LAB_005809da
// 005809df: PUSH 0x0
// 005809e1: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x140] (DATA)
// 005809e8: PUSH EAX
// 005809e9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005809ee: ADD ESP,0xc
// 005809f1: PUSH 0xb0
// 005809f6: PUSH 0x0
// 005809f8: PUSH 0x6487c1
//   XREF to: 006487c1 (DATA)
// 005809fd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00580a02: ADD ESP,0xc
// 00580a05: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580a08: MOV EBX,dword ptr [EAX]
// 00580a0a: XOR EDI,EDI
// 00580a0c: TEST EBX,EBX
// 00580a0e: JLE 0x00580a30
//   XREF to: 00580a30 (CONDITIONAL_JUMP)
// 00580a10: XOR ECX,ECX
// 00580a12: MOV EDX,dword ptr [EAX + 0x154]
//   Label: LAB_00580a12
// 00580a18: MOV dword ptr [ECX + 0x3659388],EDX
//   XREF to: 03659388 (WRITE)
//   XREF to: 0365938c (WRITE)
// 00580a1e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580a21: ADD ECX,0x4
// 00580a24: INC EDI
// 00580a25: MOV EBX,dword ptr [EDX]
// 00580a27: ADD EAX,0x1a4
// 00580a2c: CMP EDI,EBX
// 00580a2e: JL 0x00580a12
//   XREF to: 00580a12 (CONDITIONAL_JUMP)
// 00580a30: PUSH 0x3659388
//   Label: LAB_00580a30
//   XREF to: 03659388 (DATA)
// 00580a35: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580a38: PUSH EDI
// 00580a39: CALL core_setedit.cpp_CDemonSet_FUN_00577af0
//   XREF to: 00577af0 (UNCONDITIONAL_CALL)
// 00580a3e: ADD ESP,0x8
// 00580a41: CMP EAX,-0x1
// 00580a44: JZ 0x00580adb
//   XREF to: 00580adb (CONDITIONAL_JUMP)
// 00580a4a: MOV ECX,dword ptr [EDI + 0x15aea4]
// 00580a50: CMP EAX,ECX
// 00580a52: JNZ 0x00580b7c
//   XREF to: 00580b7c (CONDITIONAL_JUMP)
// 00580a58: IMUL EAX,ECX,0x1a4
// 00580a5e: ADD EAX,EDI
// 00580a60: CMP dword ptr [EAX + 0x154],0x0
// 00580a67: SETZ DL
// 00580a6a: AND EDX,0xff
// 00580a70: MOV dword ptr [EAX + 0x154],EDX
// 00580a76: IMUL EAX,dword ptr [EDI + 0x15aea4],0x1a4
// 00580a80: MOV EDI,dword ptr [ESP + 0x5c0]
//   XREF to: Stack[-0x28] (READ)
// 00580a87: MOV EDX,dword ptr [ESP + 0x5c4]
//   XREF to: Stack[-0x24] (READ)
// 00580a8e: ADD EAX,EDI
// 00580a90: MOV EBX,dword ptr [EDX]
// 00580a92: MOV dword ptr [EAX + 0x154],EBX
// 00580a98: ADD EAX,0x154
// 00580a9d: MOV EBX,dword ptr [EDX + 0x4]
// 00580aa0: MOV ECX,EAX
// 00580aa2: MOV dword ptr [EAX + 0x4],EBX
// 00580aa5: ADD EAX,0xc
// 00580aa8: MOV EBX,dword ptr [EDX + 0x8]
// 00580aab: MOV dword ptr [EAX + -0x4],EBX
// 00580aae: MOV EBX,dword ptr [ESP + 0x5d0]
//   XREF to: Stack[-0x18] (READ)
// 00580ab5: CMP EAX,EBX
// 00580ab7: JZ 0x00580ac9
//   XREF to: 00580ac9 (CONDITIONAL_JUMP)
// 00580ab9: MOV EDI,dword ptr [EBX]
// 00580abb: MOV dword ptr [EAX],EDI
// 00580abd: MOV EDI,dword ptr [EBX + 0x4]
// 00580ac0: MOV dword ptr [EAX + 0x4],EDI
// 00580ac3: MOV EDI,dword ptr [EBX + 0x8]
// 00580ac6: MOV dword ptr [EAX + 0x8],EDI
// 00580ac9: MOV EAX,dword ptr [EDX + 0x18]
//   Label: LAB_00580ac9
// 00580acc: MOV dword ptr [ECX + 0x18],EAX
// 00580acf: MOV EAX,dword ptr [EDX + 0x1c]
// 00580ad2: MOV dword ptr [ECX + 0x1c],EAX
// 00580ad5: MOV EAX,dword ptr [EDX + 0x20]
// 00580ad8: MOV dword ptr [ECX + 0x20],EAX
// 00580adb: CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
//   Label: LAB_00580adb
//   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)
// 00580ae0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00580ae5: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 00580aea: TEST EAX,EAX
// 00580aec: JNZ 0x0058116b
//   XREF to: 0058116b (CONDITIONAL_JUMP)
// 00580af2: JMP 0x005807bc
//   XREF to: 005807bc (UNCONDITIONAL_JUMP)
// 00580af7: ADD EAX,dword ptr [ESP + 0x5c0]
//   Label: LAB_00580af7
//   XREF to: Stack[-0x28] (READ)
// 00580afe: LEA ESI,[EAX + 0x154]
// 00580b04: JMP 0x005807e1
//   XREF to: 005807e1 (UNCONDITIONAL_JUMP)
// 00580b09: ADD EAX,dword ptr [ESP + 0x5c0]
//   Label: LAB_00580b09
//   XREF to: Stack[-0x28] (READ)
// 00580b10: PUSH EAX
// 00580b11: PUSH 0x648663
//   XREF to: 00648663 (DATA)
// 00580b16: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x240] (DATA)
// 00580b1d: PUSH EAX
// 00580b1e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00580b23: ADD ESP,0xc
// 00580b26: PUSH 0x16
// 00580b28: PUSH 0x0
// 00580b2a: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x240] (DATA)
// 00580b31: PUSH EAX
// 00580b32: JMP 0x0058081e
//   XREF to: 0058081e (UNCONDITIONAL_JUMP)
// 00580b37: MOV EDX,dword ptr [EAX + 0x17c]
//   Label: LAB_00580b37
// 00580b3d: PUSH EDX
// 00580b3e: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00580b44: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 00580b45: CALL core_sound.cpp_CSound_FUN_005b3c70
//   XREF to: 005b3c70 (UNCONDITIONAL_CALL)
// 00580b4a: ADD ESP,0x8
// 00580b4d: MOV EBX,dword ptr [EBX + 0x15aea4]
// 00580b53: PUSH EAX
// 00580b54: IMUL EAX,EBX,0x1a4
// 00580b5a: ADD EAX,dword ptr [ESP + 0x5c4]
//   XREF to: Stack[-0x28] (READ)
// 00580b61: PUSH EAX
// 00580b62: PUSH 0x6487a3
//   XREF to: 006487a3 (DATA)
// 00580b67: LEA EAX,[ESP + 0x4b4]
//   XREF to: Stack[-0x140] (DATA)
// 00580b6e: PUSH EAX
// 00580b6f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00580b74: ADD ESP,0x10
// 00580b77: JMP 0x005809da
//   XREF to: 005809da (UNCONDITIONAL_JUMP)
// 00580b7c: MOV dword ptr [EDI + 0x15aea4],EAX
//   Label: LAB_00580b7c
// 00580b82: JMP 0x00580adb
//   XREF to: 00580adb (UNCONDITIONAL_JUMP)
// 00580b87: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00580b87
//   XREF to: Stack[0x4] (READ)
// 00580b8a: IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4
// 00580b94: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580b97: ADD EAX,ECX
// 00580b99: CMP dword ptr [EAX + 0x154],0x0
// 00580ba0: SETZ AL
// 00580ba3: MOV ESI,dword ptr [ECX + 0x15aea4]
// 00580ba9: MOV EDX,EAX
// 00580bab: IMUL EAX,ESI,0x1a4
// 00580bb1: ADD EAX,ECX
// 00580bb3: AND EDX,0xff
// 00580bb9: MOV dword ptr [EAX + 0x154],EDX
// 00580bbf: IMUL EAX,dword ptr [ECX + 0x15aea4],0x1a4
// 00580bc9: ADD EAX,dword ptr [ESP + 0x5c0]
//   XREF to: Stack[-0x28] (READ)
// 00580bd0: MOV ECX,dword ptr [ESP + 0x5c4]
//   XREF to: Stack[-0x24] (READ)
// 00580bd7: MOV EDX,dword ptr [ECX]
// 00580bd9: MOV dword ptr [EAX + 0x154],EDX
// 00580bdf: ADD EAX,0x154
// 00580be4: MOV EDX,dword ptr [ECX + 0x4]
// 00580be7: MOV EBX,EAX
// 00580be9: MOV dword ptr [EAX + 0x4],EDX
// 00580bec: ADD EAX,0xc
// 00580bef: MOV EDX,dword ptr [ECX + 0x8]
// 00580bf2: MOV dword ptr [EAX + -0x4],EDX
// 00580bf5: MOV EDX,dword ptr [ESP + 0x5d0]
//   XREF to: Stack[-0x18] (READ)
// 00580bfc: CMP EAX,EDX
// 00580bfe: JZ 0x00580c10
//   XREF to: 00580c10 (CONDITIONAL_JUMP)
// 00580c00: MOV ESI,dword ptr [EDX]
// 00580c02: MOV dword ptr [EAX],ESI
// 00580c04: MOV ESI,dword ptr [EDX + 0x4]
// 00580c07: MOV dword ptr [EAX + 0x4],ESI
// 00580c0a: MOV ESI,dword ptr [EDX + 0x8]
// 00580c0d: MOV dword ptr [EAX + 0x8],ESI
// 00580c10: MOV EAX,dword ptr [ECX + 0x18]
//   Label: LAB_00580c10
// 00580c13: MOV dword ptr [EBX + 0x18],EAX
// 00580c16: MOV EAX,dword ptr [ECX + 0x1c]
// 00580c19: MOV dword ptr [EBX + 0x1c],EAX
// 00580c1c: MOV EAX,dword ptr [ECX + 0x20]
// 00580c1f: MOV dword ptr [EBX + 0x20],EAX
// 00580c22: CMP dword ptr [ESP + 0x5bc],0x1b
//   Label: LAB_00580c22
//   XREF to: Stack[-0x2c] (READ)
// 00580c2a: JNZ 0x005807bc
//   XREF to: 005807bc (CONDITIONAL_JUMP)
// 00580c30: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00580c35: MOV ESP,EBP
// 00580c37: POP EBP
// 00580c38: POP EDI
// 00580c39: POP ESI
// 00580c3a: POP EBX
// 00580c3b: RET
// 00580c3c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00580c3c
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00580c41: MOV EAX,0x6487f3
//   XREF to: 006487f3 (DATA)
// 00580c46: PUSH EAX
//   XREF to: 006487f3 (DATA)
// 00580c47: PUSH 0x0
// 00580c49: PUSH 0x0
// 00580c4b: PUSH 0x1e
// 00580c4d: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x140] (DATA)
// 00580c54: PUSH EAX
// 00580c55: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00580c5a: ADD ESP,0x14
// 00580c5d: LEA EDI,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580c64: SUB ECX,ECX
// 00580c66: DEC ECX
// 00580c67: XOR EAX,EAX
// 00580c69: SCASB.REPNE ES:EDI
// 00580c6b: NOT ECX
// 00580c6d: DEC ECX
// 00580c6e: TEST ECX,ECX
// 00580c70: JZ 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 00580c72: LEA EAX,[ESI + 0x14]
// 00580c75: PUSH EAX
// 00580c76: LEA EAX,[ESI + 0x10]
// 00580c79: PUSH EAX
// 00580c7a: ADD ESI,0xc
// 00580c7d: PUSH ESI
// 00580c7e: MOV EAX,0x64880f
//   XREF to: 0064880f (DATA)
// 00580c83: PUSH EAX
//   XREF to: 0064880f (DATA)
// 00580c84: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x140] (DATA)
// 00580c8b: PUSH EAX
// 00580c8c: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00580c91: ADD ESP,0x14
// 00580c94: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580c96: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00580c96
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00580c9b: PUSH 0x648818
//   XREF to: 00648818 (DATA)
// 00580ca0: PUSH 0x0
// 00580ca2: PUSH 0x0
// 00580ca4: PUSH 0x1e
// 00580ca6: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x140] (DATA)
// 00580cad: PUSH EAX
// 00580cae: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00580cb3: ADD ESP,0x14
// 00580cb6: LEA EDI,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580cbd: SUB ECX,ECX
// 00580cbf: DEC ECX
// 00580cc0: XOR EAX,EAX
// 00580cc2: SCASB.REPNE ES:EDI
// 00580cc4: NOT ECX
// 00580cc6: DEC ECX
// 00580cc7: TEST ECX,ECX
// 00580cc9: JZ 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 00580ccf: LEA EAX,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580cd6: PUSH EAX
// 00580cd7: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00580cdc: MOV dword ptr [ESP + 0x5ac],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00580ce3: MOV dword ptr [ESP + 0x5b0],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00580cea: FLD double ptr [ESP + 0x5ac]
//   XREF to: Stack[-0x40] (READ)
// 00580cf1: FSTP float ptr [ESI + 0x18]
// 00580cf4: ADD ESP,0x4
// 00580cf7: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580cfc: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00580cfc
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00580d01: PUSH 0x64882e
//   XREF to: 0064882e (DATA)
// 00580d06: PUSH 0x0
// 00580d08: PUSH 0x0
// 00580d0a: PUSH 0x1e
// 00580d0c: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x140] (DATA)
// 00580d13: PUSH EAX
// 00580d14: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00580d19: ADD ESP,0x14
// 00580d1c: LEA EDI,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580d23: SUB ECX,ECX
// 00580d25: DEC ECX
// 00580d26: XOR EAX,EAX
// 00580d28: SCASB.REPNE ES:EDI
// 00580d2a: NOT ECX
// 00580d2c: DEC ECX
// 00580d2d: TEST ECX,ECX
// 00580d2f: JZ 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 00580d35: LEA EAX,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580d3c: PUSH EAX
// 00580d3d: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00580d42: MOV dword ptr [ESP + 0x5ac],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00580d49: MOV dword ptr [ESP + 0x5b0],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00580d50: FLD double ptr [ESP + 0x5ac]
//   XREF to: Stack[-0x40] (READ)
// 00580d57: FSTP float ptr [ESI + 0x1c]
// 00580d5a: ADD ESP,0x4
// 00580d5d: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580d62: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00580d62
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00580d67: PUSH 0x648846
//   XREF to: 00648846 (DATA)
// 00580d6c: PUSH 0x0
// 00580d6e: PUSH 0x0
// 00580d70: PUSH 0x14
// 00580d72: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x140] (DATA)
// 00580d79: PUSH EAX
// 00580d7a: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00580d7f: ADD ESP,0x14
// 00580d82: LEA EDI,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580d89: SUB ECX,ECX
// 00580d8b: DEC ECX
// 00580d8c: XOR EAX,EAX
// 00580d8e: SCASB.REPNE ES:EDI
// 00580d90: NOT ECX
// 00580d92: DEC ECX
// 00580d93: TEST ECX,ECX
// 00580d95: JZ 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 00580d9b: LEA EAX,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580da2: PUSH EAX
// 00580da3: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00580da8: MOV dword ptr [ESP + 0x5ac],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00580daf: MOV dword ptr [ESP + 0x5b0],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00580db6: FLD double ptr [ESP + 0x5ac]
//   XREF to: Stack[-0x40] (READ)
// 00580dbd: FSTP float ptr [ESI + 0x20]
// 00580dc0: ADD ESP,0x4
// 00580dc3: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580dc8: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00580dc8
//   XREF to: Stack[0x4] (READ)
// 00580dcb: MOV ECX,dword ptr [EAX + 0x15aea4]
// 00580dd1: PUSH ECX
// 00580dd2: PUSH EAX
// 00580dd3: CALL core_setedit.cpp_FUN_00581320
//   XREF to: 00581320 (UNCONDITIONAL_CALL)
// 00580dd8: ADD ESP,0x8
// 00580ddb: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580de0: PUSH 0x0
//   Label: LAB_00580de0
// 00580de2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580de5: PUSH EDX
// 00580de6: CALL core_setedit.cpp_FUN_00581320
//   XREF to: 00581320 (UNCONDITIONAL_CALL)
// 00580deb: ADD ESP,0x8
// 00580dee: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580df3: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00580df3
//   XREF to: Stack[0x4] (READ)
// 00580df6: PUSH EAX
// 00580df7: CALL core_setedit.cpp_BackdropMaybe_FUN_005805a0
//   XREF to: 005805a0 (UNCONDITIONAL_CALL)
// 00580dfc: ADD ESP,0x4
// 00580dff: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580e04: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00580e04
//   XREF to: Stack[0x4] (READ)
// 00580e07: MOV DL,byte ptr [EAX + 0x14d0f0]
// 00580e0d: TEST DL,DL
// 00580e0f: JNZ 0x00580e61
//   XREF to: 00580e61 (CONDITIONAL_JUMP)
// 00580e11: MOV byte ptr [ESP + 0x4a8],DL
//   XREF to: Stack[-0x140] (WRITE)
// 00580e18: PUSH 0x1
//   Label: LAB_00580e18
// 00580e1a: LEA EAX,[ESP + 0x4ac]
//   XREF to: Stack[-0x140] (DATA)
// 00580e21: PUSH EAX
// 00580e22: PUSH 0x64888c
//   XREF to: 0064888c (DATA)
// 00580e27: PUSH 0x648890
//   XREF to: 00648890 (DATA)
// 00580e2c: PUSH 0x648897
//   XREF to: 00648897 (DATA)
// 00580e31: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00580e37: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00580e38: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 00580e3d: ADD ESP,0x18
// 00580e40: TEST EAX,EAX
// 00580e42: JZ 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 00580e48: LEA EAX,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580e4f: PUSH EAX
// 00580e50: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580e53: PUSH ECX
// 00580e54: CALL core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
//   XREF to: 0057a2a0 (UNCONDITIONAL_CALL)
// 00580e59: ADD ESP,0x8
// 00580e5c: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580e61: PUSH 0x0
//   Label: LAB_00580e61
// 00580e63: LEA EAX,[ESP + 0x4ac]
//   XREF to: Stack[-0x140] (DATA)
// 00580e6a: PUSH EAX
// 00580e6b: PUSH 0x0
// 00580e6d: PUSH 0x0
// 00580e6f: MOV EAX,dword ptr [ESP + 0x5c4]
//   XREF to: Stack[-0x34] (READ)
// 00580e76: PUSH EAX
// 00580e77: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00580e7c: ADD ESP,0x14
// 00580e7f: MOV ESI,0x648887
//   XREF to: 00648887 (DATA)
// 00580e84: LEA EDI,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580e8b: PUSH EDI
// 00580e8c: SUB ECX,ECX
// 00580e8e: DEC ECX
// 00580e8f: MOV AL,0x0
// 00580e91: SCASB.REPNE ES:EDI
// 00580e93: DEC EDI
// 00580e94: MOV AL,byte ptr [ESI]
//   Label: LAB_00580e94
//   XREF to: 00648887 (READ)
//   XREF to: 00648889 (READ)
// 00580e96: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x140] (DATA)
// 00580e98: CMP AL,0x0
// 00580e9a: JZ 0x00580eac
//   XREF to: 00580eac (CONDITIONAL_JUMP)
// 00580e9c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00648888 (READ)
//   XREF to: 0064888a (READ)
// 00580e9f: ADD ESI,0x2
// 00580ea2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x13f] (WRITE)
// 00580ea5: ADD EDI,0x2
// 00580ea8: CMP AL,0x0
// 00580eaa: JNZ 0x00580e94
//   XREF to: 00580e94 (CONDITIONAL_JUMP)
// 00580eac: POP EDI
//   Label: LAB_00580eac
// 00580ead: LEA EAX,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 00580eb4: PUSH EAX
// 00580eb5: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 00580eba: ADD ESP,0x4
// 00580ebd: JMP 0x00580e18
//   XREF to: 00580e18 (UNCONDITIONAL_JUMP)
// 00580ec2: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00580ec2
//   XREF to: Stack[0x4] (READ)
// 00580ec5: IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4
// 00580ecf: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580ed2: CMP dword ptr [EDX + EAX*0x1 + 0x154],0x0
// 00580eda: JZ 0x00580efd
//   XREF to: 00580efd (CONDITIONAL_JUMP)
// 00580edc: MOV ESI,dword ptr [ESP + 0x5b0]
//   XREF to: Stack[-0x38] (READ)
// 00580ee3: PUSH ESI
// 00580ee4: PUSH 0x6488a0
//   XREF to: 006488a0 (DATA)
// 00580ee9: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 00580eef: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 00580ef0: CALL core_sound.cpp_CSound_FUN_005b3d20
//   XREF to: 005b3d20 (UNCONDITIONAL_CALL)
// 00580ef5: ADD ESP,0xc
// 00580ef8: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580efd: MOV EDI,dword ptr [ESP + 0x5c0]
//   Label: LAB_00580efd
//   XREF to: Stack[-0x28] (READ)
// 00580f04: ADD EAX,EDI
// 00580f06: PUSH EAX
// 00580f07: PUSH 0x6488b8
//   XREF to: 006488b8 (DATA)
// 00580f0c: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x140] (DATA)
// 00580f13: PUSH EAX
// 00580f14: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00580f19: ADD ESP,0xc
// 00580f1c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580f1f: IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4
// 00580f29: ADD EAX,EDI
// 00580f2b: ADD EAX,0x178
// 00580f30: PUSH EAX
// 00580f31: LEA EAX,[ESP + 0x4ac]
//   XREF to: Stack[-0x140] (DATA)
// 00580f38: PUSH EAX
// 00580f39: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00580f3f: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 00580f40: CALL core_sound.cpp_CSound_FUN_005b3d20
//   XREF to: 005b3d20 (UNCONDITIONAL_CALL)
// 00580f45: ADD ESP,0xc
// 00580f48: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00580f4d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00580f4d
//   XREF to: Stack[0x4] (READ)
// 00580f50: IMUL EAX,dword ptr [EAX + 0x15aea4],0x1a4
// 00580f5a: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580f5d: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00580f60: MOV EBX,dword ptr [EAX + 0x154]
// 00580f66: MOV ESI,dword ptr [ESI + 0x15ac7c]
// 00580f6c: TEST EBX,EBX
// 00580f6e: JNZ 0x00580f76
//   XREF to: 00580f76 (CONDITIONAL_JUMP)
// 00580f70: MOV ESI,dword ptr [EAX + 0x17c]
// 00580f76: PUSH ESI
//   Label: LAB_00580f76
// 00580f77: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 00580f7d: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 00580f7e: CALL core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
//   XREF to: 005b3cc0 (UNCONDITIONAL_CALL)
// 00580f83: ADD ESP,0x8
// 00580f86: CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 00580f8b: PUSH 0x0
// 00580f8d: PUSH 0x0
// 00580f8f: PUSH 0x0
// 00580f91: PUSH 0x0
// 00580f93: PUSH 0x0
// 00580f95: PUSH 0x0
// 00580f97: CALL sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
//   XREF to: 005aa020 (UNCONDITIONAL_CALL)
// 00580f9c: ADD ESP,0x18
// 00580f9f: PUSH 0x3ff00000
// 00580fa4: PUSH 0x0
// 00580fa6: PUSH 0x0
// 00580fa8: PUSH 0x0
// 00580faa: PUSH 0x0
// 00580fac: PUSH 0x0
// 00580fae: PUSH 0x0
// 00580fb0: PUSH 0x0
// 00580fb2: PUSH 0x3ff00000
// 00580fb7: PUSH 0x0
// 00580fb9: PUSH 0x0
// 00580fbb: PUSH 0x0
// 00580fbd: PUSH 0x0
// 00580fbf: PUSH 0x0
// 00580fc1: PUSH 0x0
// 00580fc3: PUSH 0x0
// 00580fc5: PUSH 0x3ff00000
// 00580fca: PUSH 0x0
// 00580fcc: XOR EDI,EDI
// 00580fce: CALL sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
//   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)
// 00580fd3: ADD ESP,0x48
// 00580fd6: MOV EAX,ESP
//   Label: LAB_00580fd6
// 00580fd8: PUSH EAX
// 00580fd9: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00580fde: ADD ESP,0x4
// 00580fe1: PUSH 0x6488d2
//   XREF to: 006488d2 (DATA)
// 00580fe6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00580fea: PUSH EAX
// 00580feb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00580ff0: ADD ESP,0x8
// 00580ff3: PUSH 0x6488d9
//   XREF to: 006488d9 (DATA)
// 00580ff8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00580ffc: PUSH EAX
// 00580ffd: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581002: ADD ESP,0x8
// 00581005: PUSH 0x6488e6
//   XREF to: 006488e6 (DATA)
// 0058100a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 0058100e: PUSH EAX
// 0058100f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581014: ADD ESP,0x8
// 00581017: PUSH 0x6488f2
//   XREF to: 006488f2 (DATA)
// 0058101c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00581020: PUSH EAX
// 00581021: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581026: ADD ESP,0x8
// 00581029: PUSH 0x6488fe
//   XREF to: 006488fe (DATA)
// 0058102e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00581032: PUSH EAX
// 00581033: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581038: ADD ESP,0x8
// 0058103b: PUSH 0x648911
//   XREF to: 00648911 (DATA)
// 00581040: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00581044: PUSH EAX
// 00581045: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0058104a: ADD ESP,0x8
// 0058104d: PUSH 0x64891d
//   XREF to: 0064891d (DATA)
// 00581052: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00581056: PUSH EAX
// 00581057: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0058105c: ADD ESP,0x8
// 0058105f: PUSH 0x648927
//   XREF to: 00648927 (DATA)
// 00581064: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00581068: PUSH EAX
// 00581069: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0058106e: ADD ESP,0x8
// 00581071: PUSH 0x64893f
//   XREF to: 0064893f (DATA)
// 00581076: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 0058107a: PUSH EAX
// 0058107b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581080: ADD ESP,0x8
// 00581083: PUSH 0x648957
//   XREF to: 00648957 (DATA)
// 00581088: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 0058108c: PUSH EAX
// 0058108d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581092: ADD ESP,0x8
// 00581095: PUSH 0x64896f
//   XREF to: 0064896f (DATA)
// 0058109a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 0058109e: PUSH EAX
// 0058109f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005810a4: ADD ESP,0x8
// 005810a7: PUSH 0x648987
//   XREF to: 00648987 (DATA)
// 005810ac: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 005810b0: PUSH EAX
// 005810b1: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005810b6: ADD ESP,0x8
// 005810b9: PUSH 0x64899f
//   XREF to: 0064899f (DATA)
// 005810be: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 005810c2: PUSH EAX
// 005810c3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005810c8: ADD ESP,0x8
// 005810cb: PUSH 0x6489ac
//   XREF to: 006489ac (DATA)
// 005810d0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 005810d4: PUSH EAX
// 005810d5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005810da: ADD ESP,0x8
// 005810dd: PUSH 0x0
// 005810df: PUSH EDI
// 005810e0: PUSH ESI
// 005810e1: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 005810e7: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 005810e8: CALL core_sound.cpp_CSound_FUN_005b3c70
//   XREF to: 005b3c70 (UNCONDITIONAL_CALL)
// 005810ed: ADD ESP,0x8
// 005810f0: PUSH EAX
// 005810f1: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5e8] (DATA)
// 005810f5: PUSH EAX
// 005810f6: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005810fb: MOV EBX,EAX
// 005810fd: ADD ESP,0x10
// 00581100: MOV EDI,EAX
// 00581102: TEST EAX,EAX
// 00581104: JL 0x00581152
//   XREF to: 00581152 (CONDITIONAL_JUMP)
// 00581106: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 0058110b: PUSH 0x40340000
// 00581110: PUSH 0x0
// 00581112: PUSH 0x0
// 00581114: PUSH 0x0
// 00581116: PUSH 0x0
// 00581118: PUSH 0x0
// 0058111a: CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
// 0058111f: ADD ESP,0x18
// 00581122: PUSH EBX
// 00581123: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00581127: PUSH EAX
// 00581128: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0058112d: ADD ESP,0x8
// 00581130: PUSH EAX
// 00581131: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 00581136: ADD ESP,0x4
// 00581139: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 0058113e: PUSH 0x0
// 00581140: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00581144: PUSH EAX
// 00581145: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0058114a: ADD ESP,0x8
// 0058114d: JMP 0x00580fd6
//   XREF to: 00580fd6 (UNCONDITIONAL_JUMP)
// 00581152: PUSH 0x0
//   Label: LAB_00581152
// 00581154: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5e8] (DATA)
// 00581158: PUSH EAX
// 00581159: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0058115e: ADD ESP,0x8
// 00581161: CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 00581166: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 0058116b: MOV EDI,dword ptr [0x0067cf44]
//   Label: LAB_0058116b
//   XREF to: 0067cf44 (READ)
// 00581171: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 00581172: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 00581177: ADD ESP,0x4
// 0058117a: MOV dword ptr [ESP + 0x5bc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00581181: CMP EAX,0x37
// 00581184: JNC 0x005811fc
//   XREF to: 005811fc (CONDITIONAL_JUMP)
// 00581186: CMP EAX,0x33
// 00581189: JNC 0x00581241
//   XREF to: 00581241 (CONDITIONAL_JUMP)
// 0058118f: CMP EAX,0x31
// 00581192: JC 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 00581198: JBE 0x00580b87
//   XREF to: 00580b87 (CONDITIONAL_JUMP)
// 0058119e: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005811a3: MOV EAX,0x6487d1
//   XREF to: 006487d1 (DATA)
// 005811a8: PUSH EAX
//   XREF to: 006487d1 (DATA)
// 005811a9: PUSH 0x0
// 005811ab: PUSH 0x0
// 005811ad: PUSH 0x1e
// 005811af: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x140] (DATA)
// 005811b6: PUSH EAX
// 005811b7: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 005811bc: ADD ESP,0x14
// 005811bf: LEA EDI,[ESP + 0x4a8]
//   XREF to: Stack[-0x140] (DATA)
// 005811c6: SUB ECX,ECX
// 005811c8: DEC ECX
// 005811c9: XOR EAX,EAX
// 005811cb: SCASB.REPNE ES:EDI
// 005811cd: NOT ECX
// 005811cf: DEC ECX
// 005811d0: TEST ECX,ECX
// 005811d2: JZ 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 005811d8: LEA EAX,[ESI + 0x8]
// 005811db: PUSH EAX
// 005811dc: LEA EAX,[ESI + 0x4]
// 005811df: PUSH EAX
// 005811e0: PUSH ESI
// 005811e1: MOV EAX,0x6487ea
//   XREF to: 006487ea (DATA)
// 005811e6: PUSH EAX
//   XREF to: 006487ea (DATA)
// 005811e7: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x140] (DATA)
// 005811ee: PUSH EAX
// 005811ef: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005811f4: ADD ESP,0x14
// 005811f7: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 005811fc: JBE 0x00580dc8
//   Label: LAB_005811fc
//   XREF to: 00580dc8 (CONDITIONAL_JUMP)
// 00581202: CMP EAX,0x52
// 00581205: JNC 0x0058121e
//   XREF to: 0058121e (CONDITIONAL_JUMP)
// 00581207: CMP EAX,0x38
// 0058120a: JBE 0x00580de0
//   XREF to: 00580de0 (CONDITIONAL_JUMP)
// 00581210: CMP EAX,0x39
// 00581213: JZ 0x00580df3
//   XREF to: 00580df3 (CONDITIONAL_JUMP)
// 00581219: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 0058121e: JBE 0x00580ec2
//   Label: LAB_0058121e
//   XREF to: 00580ec2 (CONDITIONAL_JUMP)
// 00581224: CMP EAX,0x54
// 00581227: JC 0x00580e04
//   XREF to: 00580e04 (CONDITIONAL_JUMP)
// 0058122d: JBE 0x00580d62
//   XREF to: 00580d62 (CONDITIONAL_JUMP)
// 00581233: CMP EAX,0x56
// 00581236: JZ 0x00580f4d
//   XREF to: 00580f4d (CONDITIONAL_JUMP)
// 0058123c: JMP 0x00580c22
//   XREF to: 00580c22 (UNCONDITIONAL_JUMP)
// 00581241: JBE 0x00580c3c
//   Label: LAB_00581241
//   XREF to: 00580c3c (CONDITIONAL_JUMP)
// 00581247: CMP EAX,0x35
// 0058124a: JC 0x00580c96
//   XREF to: 00580c96 (CONDITIONAL_JUMP)
// 00581250: JBE 0x00580cfc
//   XREF to: 00580cfc (CONDITIONAL_JUMP)
// 00581256: PUSH 0x64885e
//   XREF to: 0064885e (DATA)
// 0058125b: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00581261: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00581262: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 00581267: ADD ESP,0x8
// 0058126a: TEST EAX,EAX
// 0058126c: JZ 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 00581272: MOV ECX,dword ptr [ESP + 0x5b8]
//   XREF to: Stack[-0x30] (READ)
// 00581279: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058127c: MOV EAX,dword ptr [ESP + 0x5b8]
//   XREF to: Stack[-0x30] (READ)
// 00581283: ADD ECX,0x154
// 00581289: LEA ESI,[EDI + 0x19a28]
// 0058128f: ADD EAX,0x160
// 00581294: MOV EDX,dword ptr [ESP + 0x5cc]
//   Label: LAB_00581294
//   XREF to: Stack[-0x1c] (READ)
// 0058129b: MOV dword ptr [EDI + 0x154],0x1
// 005812a5: MOV dword ptr [ESP + 0x5c8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005812ac: MOV EDX,dword ptr [EDX]
// 005812ae: MOV dword ptr [ECX],EDX
// 005812b0: MOV EDX,dword ptr [ESP + 0x5cc]
//   XREF to: Stack[-0x1c] (READ)
// 005812b7: MOV EDX,dword ptr [EDX + 0x4]
// 005812ba: MOV dword ptr [ECX + 0x4],EDX
// 005812bd: MOV EDX,dword ptr [ESP + 0x5cc]
//   XREF to: Stack[-0x1c] (READ)
// 005812c4: MOV EDX,dword ptr [EDX + 0x8]
// 005812c7: MOV dword ptr [ECX + 0x8],EDX
// 005812ca: MOV EDX,dword ptr [ESP + 0x5d0]
//   XREF to: Stack[-0x18] (READ)
// 005812d1: MOV EBX,ECX
// 005812d3: CMP EAX,EDX
// 005812d5: JZ 0x005812e7
//   XREF to: 005812e7 (CONDITIONAL_JUMP)
// 005812d7: FLD float ptr [EDX]
// 005812d9: FSTP float ptr [EAX]
// 005812db: FLD float ptr [EDX + 0x4]
// 005812de: FSTP float ptr [EAX + 0x4]
// 005812e1: FLD float ptr [EDX + 0x8]
// 005812e4: FSTP float ptr [EAX + 0x8]
// 005812e7: MOV EDX,dword ptr [ESP + 0x5c8]
//   Label: LAB_005812e7
//   XREF to: Stack[-0x20] (READ)
// 005812ee: ADD EAX,0x1a4
// 005812f3: ADD ECX,0x1a4
// 005812f9: ADD EDI,0x1a4
// 005812ff: FLD float ptr [EDX + 0x18]
// 00581302: FSTP float ptr [EBX + 0x18]
// 00581305: FLD float ptr [EDX + 0x1c]
// 00581308: FSTP float ptr [EBX + 0x1c]
// 0058130b: FLD float ptr [EDX + 0x20]
// 0058130e: FSTP float ptr [EBX + 0x20]
// 00581311: CMP EDI,ESI
// 00581313: JZ 0x00580c22
//   XREF to: 00580c22 (CONDITIONAL_JUMP)
// 00581319: JMP 0x00581294
//   XREF to: 00581294 (UNCONDITIONAL_JUMP)
