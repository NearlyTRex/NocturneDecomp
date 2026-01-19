// Name: core_setedit.cpp_DementedFogEditor_FUN_00580730
// Address: 00580730
// Address Range: [[00580730, 0058131d]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_DementedFogEditor_FUN_00580730(void * unk)

#include "nocturne.h"

void __cdecl core_setedit_cpp_DementedFogEditor_FUN_00580730(void *unk)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  int config_param2;
  char *in_stack_fffffa18;
  uint in_stack_fffffa1c;
  char **in_stack_fffffa20;
  CStrList_vtable *in_stack_fffffa24;
  uint in_stack_fffffa28;
  char local_240 [256];
  char local_140 [256];
  double local_40;
  int *local_38;
  char *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  
  bVar10 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(unk);
  local_30 = (int)unk + 4;
  *(uint *)((int)unk + 0x15aea4) = 0;
  local_24 = (uint *)((int)unk + 0x15ac30);
  local_18 = (uint *)((int)unk + 0x15ac3c);
  local_38 = (int *)((int)unk + 0x15ac7c);
  local_34 = (char *)((int)unk + 0x14d0f0);
  local_28 = local_30;
  local_1c = local_24;
  do {
    do {
      iVar2 = *(int *)((int)unk + 0x15aea4) * 0x1a4;
      puVar7 = local_24;
      if (*(int *)((int)unk + iVar2 + 0x154) == 0) {
        puVar7 = (uint *)(iVar2 + local_28 + 0x154);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Demented(R) Fog Editor",0,0);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_240,"1.  Fog settings for camera %s");
        pcVar4 = local_240;
      }
      else {
        pcVar4 = "1.  Use global fog";
      }
      engine_2d_c_drawText_FUN_00401fd0(pcVar4,0,0x16);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_140,"2.  Fog color : %d,%d,%d");
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x2c);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_140,"3.  Fog velocity : %f,%f,%f",(double)(float)puVar7[3],
                 (double)(float)puVar7[4],(double)(float)puVar7[5]);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x37);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_140,"4.  Fog taper : %f",(double)(float)puVar7[6]);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x42);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_140,"5.  Fog density : %f",(double)(float)puVar7[7]);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x4d);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_140,"T.  Temperature (F) : %3.2f",(double)(float)puVar7[8]);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("6.  Reset all cameras to master fog setting",0,99);
      engine_2d_c_drawText_FUN_00401fd0("7.  Precompute fog for selected camera",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("S.  Save set",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("8.  Preview fog settings",0,0x84);
      engine_2d_c_drawText_FUN_00401fd0("9.  Precompute fog",0,0x8f);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                  (g_CSoundPtr,*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c));
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_140,"R.  Reverb for camera %s : %s",
                   *(int *)((int)unk + 0x15aea4) * 0x1a4 + local_28);
      }
      else {
        core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                  (g_CSoundPtr,*(int *)((int)unk + 0x15ac7c));
        crt_stdio_c_sprintf_FUN_005fdbd0(local_140,"R.  Default set reverb : %s");
      }
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("V.  Test reverb",0,0xb0);
      iVar2 = 0;
      if (0 < *(int *)unk) {
        iVar6 = 0;
        pvVar3 = unk;
        do {
          *(uint *)((int)&DAT_03659388 + iVar6) = *(uint *)((int)pvVar3 + 0x154);
          iVar6 = iVar6 + 4;
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)((int)pvVar3 + 0x1a4);
        } while (iVar2 < *(int *)unk);
      }
      iVar2 = core_setedit_cpp_CDemonSet_FUN_00577af0(unk);
      if (iVar2 != -1) {
        iVar6 = *(int *)((int)unk + 0x15aea4);
        if (iVar2 == iVar6) {
          *(uint *)((int)unk + iVar6 * 0x1a4 + 0x154) =
               (uint)(*(int *)((int)unk + iVar6 * 0x1a4 + 0x154) == 0);
          iVar2 = *(int *)((int)unk + 0x15aea4) * 0x1a4 + local_28;
          *(uint *)(iVar2 + 0x154) = *local_24;
          *(uint *)(iVar2 + 0x158) = local_24[1];
          *(uint *)(iVar2 + 0x15c) = local_24[2];
          if ((uint *)(iVar2 + 0x160) != local_18) {
            *(uint *)(iVar2 + 0x160) = *local_18;
            *(uint *)(iVar2 + 0x164) = local_18[1];
            *(uint *)(iVar2 + 0x168) = local_18[2];
          }
          *(uint *)(iVar2 + 0x16c) = local_24[6];
          *(uint *)(iVar2 + 0x170) = local_24[7];
          *(uint *)(iVar2 + 0x174) = local_24[8];
        }
        else {
          *(int *)((int)unk + 0x15aea4) = iVar2;
        }
      }
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    } while (iVar2 == 0);
    local_2c = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    iVar2 = local_28;
    if (local_2c < 0x37) {
      if (local_2c < 0x33) {
        if (0x30 < local_2c) {
          if (local_2c < 0x32) {
            *(uint *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) =
                 (uint)(*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0);
            iVar2 = *(int *)((int)unk + 0x15aea4) * 0x1a4 + local_28;
            *(uint *)(iVar2 + 0x154) = *local_24;
            *(uint *)(iVar2 + 0x158) = local_24[1];
            *(uint *)(iVar2 + 0x15c) = local_24[2];
            if ((uint *)(iVar2 + 0x160) != local_18) {
              *(uint *)(iVar2 + 0x160) = *local_18;
              *(uint *)(iVar2 + 0x164) = local_18[1];
              *(uint *)(iVar2 + 0x168) = local_18[2];
            }
            *(uint *)(iVar2 + 0x16c) = local_24[6];
            *(uint *)(iVar2 + 0x170) = local_24[7];
            *(uint *)(iVar2 + 0x174) = local_24[8];
          }
          else {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (local_140,0x1e,0,0,"Enter fog color r,g,b : ");
            iVar2 = -1;
            pcVar4 = local_140;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar2 != -2) {
              crt_stdio_c_sscanf_FUN_0060013c(local_140,"%d,%d,%d");
            }
          }
        }
      }
      else if (local_2c < 0x34) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter fog velocity x,y,z : ");
        iVar2 = -1;
        pcVar4 = local_140;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != -2) {
          crt_stdio_c_sscanf_FUN_0060013c(local_140,"%f,%f,%f");
        }
      }
      else if (local_2c < 0x35) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter in fog taper : ");
        iVar2 = -1;
        pcVar4 = local_140;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != -2) {
          local_40 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa18);
          puVar7[6] = (float)local_40;
        }
      }
      else if (local_2c < 0x36) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter in fog density : ");
        iVar2 = -1;
        pcVar4 = local_140;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != -2) {
          local_40 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa18);
          puVar7[7] = (float)local_40;
        }
      }
      else {
        iVar2 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Reset all cameras to master fog setting?");
        if (iVar2 != 0) {
          puVar5 = (uint *)(local_30 + 0x160);
          puVar7 = (uint *)(local_30 + 0x154);
          pvVar3 = unk;
          do {
            local_20 = local_1c;
            *(uint *)((int)pvVar3 + 0x154) = 1;
            *puVar7 = *local_1c;
            puVar7[1] = local_1c[1];
            puVar7[2] = local_1c[2];
            if (puVar5 != local_18) {
              *puVar5 = *local_18;
              puVar5[1] = local_18[1];
              puVar5[2] = local_18[2];
            }
            puVar5 = puVar5 + 0x69;
            pvVar3 = (void *)((int)pvVar3 + 0x1a4);
            puVar7[6] = local_1c[6];
            puVar7[7] = local_1c[7];
            puVar7[8] = local_1c[8];
            puVar7 = puVar7 + 0x69;
          } while (pvVar3 != (void *)((int)unk + 0x19a28));
        }
      }
    }
    else if (local_2c < 0x38) {
      core_setedit_cpp_FUN_00581320();
    }
    else if (local_2c < 0x52) {
      if (local_2c < 0x39) {
        core_setedit_cpp_FUN_00581320();
      }
      else if (local_2c == 0x39) {
        core_setedit_cpp_BackdropMaybe_FUN_005805a0();
      }
    }
    else if (local_2c < 0x53) {
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_140,"Edit reverb for camera %s");
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,local_140,
                   (int *)(*(int *)((int)unk + 0x15aea4) * 0x1a4 + iVar2 + 0x178));
      }
      else {
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,"Edit default set reverb",local_38);
      }
    }
    else if (local_2c < 0x54) {
      if (*(char *)((int)unk + 0x14d0f0) == '\0') {
        local_140[0] = '\0';
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  (local_34,(char *)0x0,(char *)0x0,local_140,(char *)0x0);
        pcVar8 = ".set";
        iVar2 = -1;
        pcVar4 = local_140;
        do {
          pcVar9 = pcVar4;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar9 = pcVar4 + (uint)bVar10 * -2 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar9;
        } while (cVar1 != '\0');
        pcVar9 = pcVar9 + -1;
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        crt_string_c_strupr_FUN_00600770(local_140);
      }
      iVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x64888c,
                         (int)local_140);
      if (iVar2 != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(unk,local_140);
      }
    }
    else if (local_2c < 0x55) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (local_140,0x14,0,0,"Enter in temperature : ");
      iVar2 = -1;
      pcVar4 = local_140;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        local_40 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa18);
        puVar7[8] = (float)local_40;
      }
    }
    else if (local_2c == 0x56) {
      iVar2 = *(int *)((int)unk + 0x15ac7c);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        iVar2 = *(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c);
      }
      core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar2);
      sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
      sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
      iVar6 = 0;
      sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
      while( true ) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffa18);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"45.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"cre-fire.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"shotgun.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"zom-s04.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"stranger_hit01.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"xplode1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"limb1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"footstep-str-0-ct-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"footstep-str-0-wd-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"footstep-str-0-mt-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"footstep-str-0-mb-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"footstep-str-0-gr-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"ric-mt0a.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa18,"ric-ct0a.wav");
        config_param2 = 0;
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(g_CSoundPtr,iVar2);
        iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffa18,pcVar4,iVar6,config_param2);
        if (iVar6 < 0) break;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(0.0,0.0,20.0);
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0xfffffa18,iVar6);
        sound_sndmain_cpp_startSfx_FUN_005a8e90(pcVar4);
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffffa18,0,(uint)in_stack_fffffa18,in_stack_fffffa1c,
                   (uint)in_stack_fffffa20,(uint)in_stack_fffffa24,in_stack_fffffa28);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffa18,0,(uint)in_stack_fffffa18,in_stack_fffffa1c,
                 (uint)in_stack_fffffa20,(uint)in_stack_fffffa24,in_stack_fffffa28);
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    }
    if (local_2c == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
