// Name: core_setedit.cpp_DementedFogEditor_FUN_00580730
// Address: 00580730
// Address Range: [[00580730, 0058131d]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_DementedFogEditor_FUN_00580730(void * unk)

#include "nocturne.h"

void __cdecl core_setedit_cpp_DementedFogEditor_FUN_00580730(void *unk)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined3 extraout_var;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  BADSPACEBASE *in_ESP;
  int *unaff_EBP;
  char *pcVar8;
  byte bVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  CStrList_vtable *config_param1;
  CStrList_vtable *in_stack_fffffa6c;
  CStrList_vtable *in_stack_fffffa74;
  char **in_stack_fffffa78;
  CStrList_vtable *in_stack_fffffa7c;
  CStrList_vtable *in_stack_fffffa80;
  char **in_stack_fffffa84;
  CStrList_vtable *in_stack_fffffa88;
  CStrList_swap *in_stack_fffffa8c;
  char **in_stack_fffffa90;
  CStrList_vtable *in_stack_fffffa94;
  CStrList_swap *in_stack_fffffa98;
  char acStack_234 [248];
  char acStack_13c [4];
  char acStack_138 [4];
  char acStack_134 [4];
  char acStack_130 [4];
  char acStack_12c [12];
  char acStack_120 [236];
  int local_34;
  int *local_30;
  ulonglong local_2c;
  uint local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  uint *puStack_14;
  
  bVar9 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(unk);
  local_24 = (int)unk + 4;
  *(uint *)((int)unk + 0x15aea4) = 0;
  local_20 = (int *)((int)unk + 0x15ac30);
  puStack_14 = (uint *)((int)unk + 0x15ac3c);
  local_2c = (double)CONCAT44 /* combine 2-byte values */(local_2c._4_4_,local_24);
  local_34 = (int)unk + 0x15ac7c;
  local_30 = (int *)((int)unk + 0x14d0f0);
  local_18 = local_20;
  do {
    do {
      iVar3 = *(int *)((int)unk + 0x15aea4) * 0x1a4;
      piVar7 = local_20;
      if (*(int *)((int)unk + iVar3 + 0x154) == 0) {
        piVar7 = (int *)(iVar3 + local_24 + 0x154);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Demented(R) Fog Editor",0,0);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        piVar12 = local_1c + *(int *)((int)unk + 0x15aea4) * 0x69;
        pcVar11 = "1.  Fog settings for camera %s";
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_234,"1.  Fog settings for camera %s");
        pcVar10 = (char *)0x16;
      }
      else {
        piVar12 = (int *)0x16;
        pcVar11 = (char *)0x0;
        pcVar10 = "1.  Use global fog";
      }
      engine_2d_c_drawText_FUN_00401fd0(pcVar10,(int)pcVar11,(int)piVar12);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_130,"2.  Fog color : %d,%d,%d",*piVar7,piVar7[1],piVar7[2]);
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x2c);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_138,"3.  Fog velocity : %f,%f,%f",SUB84 /* extract 2-byte value */((double)(float)piVar7[3],0),
                 (int)((ulonglong)(double)(float)piVar7[3] >> 0x20),
                 SUB84 /* extract 2-byte value */((double)(float)piVar7[4],0),
                 (int)((ulonglong)(double)(float)piVar7[4] >> 0x20),
                 SUB84 /* extract 2-byte value */((double)(float)piVar7[5],0),
                 (int)((ulonglong)(double)(float)piVar7[5] >> 0x20));
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x37);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_138,"4.  Fog taper : %f",SUB84 /* extract 2-byte value */((double)(float)piVar7[6],0),
                 (int)((ulonglong)(double)(float)piVar7[6] >> 0x20));
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x42);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_138,"5.  Fog density : %f",SUB84 /* extract 2-byte value */((double)(float)piVar7[7],0),
                 (int)((ulonglong)(double)(float)piVar7[7] >> 0x20));
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x4d);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_138,"T.  Temperature (F) : %3.2f",SUB84 /* extract 2-byte value */((double)(float)piVar7[8],0),
                 (int)((ulonglong)(double)(float)piVar7[8] >> 0x20));
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("6.  Reset all cameras to master fog setting",0,99);
      engine_2d_c_drawText_FUN_00401fd0("7.  Precompute fog for selected camera",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("S.  Save set",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("8.  Preview fog settings",0,0x84);
      engine_2d_c_drawText_FUN_00401fd0("9.  Precompute fog",0,0x8f);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                  (g_CSoundPtr,*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c));
        pcVar10 = acStack_120;
        crt_stdio_c_sprintf_FUN_005fdbd0(pcVar10,"R.  Reverb for camera %s : %s");
      }
      else {
        core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                  (g_CSoundPtr,*(int *)((int)unk + 0x15ac7c));
        pcVar10 = (char *)0x5809d7;
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_120,"R.  Default set reverb : %s");
      }
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("V.  Test reverb",0,0xb0);
      iVar3 = 0;
      if (0 < *(int *)unk) {
        iVar6 = 0;
        pvVar4 = unk;
        do {
          *(uint *)((int)&DAT_03659388 + iVar6) = *(uint *)((int)pvVar4 + 0x154);
          iVar6 = iVar6 + 4;
          iVar3 = iVar3 + 1;
          pvVar4 = (void *)((int)pvVar4 + 0x1a4);
        } while (iVar3 < *(int *)unk);
      }
      iVar3 = core_setedit_cpp_CDemonSet_FUN_00577af0(unk);
      if (iVar3 != -1) {
        iVar6 = *(int *)((int)unk + 0x15aea4);
        if (iVar3 == iVar6) {
          *(uint *)((int)unk + iVar6 * 0x1a4 + 0x154) =
               (uint)(*(int *)((int)unk + iVar6 * 0x1a4 + 0x154) == 0);
          iVar3 = *(int *)((int)unk + 0x15aea4);
          local_30[iVar3 * 0x69 + 0x55] = *(int *)local_2c;
          local_30[iVar3 * 0x69 + 0x56] = ((int *)local_2c)[1];
          local_30[iVar3 * 0x69 + 0x57] = ((int *)local_2c)[2];
          if (local_30 + iVar3 * 0x69 + 0x58 != local_20) {
            local_30[iVar3 * 0x69 + 0x58] = *local_20;
            local_30[iVar3 * 0x69 + 0x59] = local_20[1];
            local_30[iVar3 * 0x69 + 0x5a] = local_20[2];
          }
          local_30[iVar3 * 0x69 + 0x5b] = ((int *)local_2c)[6];
          local_30[iVar3 * 0x69 + 0x5c] = ((int *)local_2c)[7];
          local_30[iVar3 * 0x69 + 0x5d] = ((int *)local_2c)[8];
        }
        else {
          *(int *)((int)unk + 0x15aea4) = iVar3;
        }
      }
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    } while (iVar3 == 0);
    local_24 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    piVar12 = local_20;
    if (local_24 < 0x37) {
      if (local_24 < 0x33) {
        if (0x30 < local_24) {
          if (local_24 < 0x32) {
            *(uint *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) =
                 (uint)(*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0);
            iVar3 = *(int *)((int)unk + 0x15aea4);
            local_20[iVar3 * 0x69 + 0x55] = *local_1c;
            local_20[iVar3 * 0x69 + 0x56] = local_1c[1];
            local_20[iVar3 * 0x69 + 0x57] = local_1c[2];
            if (local_20 + iVar3 * 0x69 + 0x58 != unaff_EBP) {
              local_20[iVar3 * 0x69 + 0x58] = *unaff_EBP;
              local_20[iVar3 * 0x69 + 0x59] = unaff_EBP[1];
              local_20[iVar3 * 0x69 + 0x5a] = unaff_EBP[2];
            }
            local_20[iVar3 * 0x69 + 0x5b] = local_1c[6];
            local_20[iVar3 * 0x69 + 0x5c] = local_1c[7];
            local_20[iVar3 * 0x69 + 0x5d] = local_1c[8];
          }
          else {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (acStack_134,0x1e,0,0,"Enter fog color r,g,b : ");
            iVar3 = -1;
            pcVar10 = acStack_130;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar3 != -2) {
              crt_stdio_c_sscanf_FUN_0060013c
                        (acStack_130,"%d,%d,%d",piVar7,piVar7 + 1,piVar7 + 2);
            }
          }
        }
      }
      else if (local_24 < 0x34) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_134,0x1e,0,0,"Enter fog velocity x,y,z : ");
        iVar3 = -1;
        pcVar10 = acStack_130;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          crt_stdio_c_sscanf_FUN_0060013c
                    (acStack_130,"%f,%f,%f",piVar7 + 3,piVar7 + 4,piVar7 + 5);
        }
      }
      else if (local_24 < 0x35) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_134,0x1e,0,0,"Enter in fog taper : ");
        iVar3 = -1;
        pcVar11 = acStack_130;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          local_2c = crt_string_c_strtod_FUN_005ff0f3(pcVar10);
          piVar7[6] = (int)(float)local_2c;
        }
      }
      else if (local_24 < 0x36) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_134,0x1e,0,0,"Enter in fog density : ");
        iVar3 = -1;
        pcVar11 = acStack_130;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          local_2c = crt_string_c_strtod_FUN_005ff0f3(pcVar10);
          piVar7[7] = (int)(float)local_2c;
        }
      }
      else {
        iVar3 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Reset all cameras to master fog setting?");
        if (iVar3 != 0) {
          puVar5 = (uint *)((int)(int *)local_2c + 0x160);
          piVar7 = (int *)((int)(int *)local_2c + 0x154);
          pvVar4 = unk;
          do {
            local_1c = local_18;
            *(uint *)((int)pvVar4 + 0x154) = 1;
            *piVar7 = *local_18;
            piVar7[1] = local_18[1];
            piVar7[2] = local_18[2];
            if (puVar5 != puStack_14) {
              *puVar5 = *puStack_14;
              puVar5[1] = puStack_14[1];
              puVar5[2] = puStack_14[2];
            }
            puVar5 = puVar5 + 0x69;
            pvVar4 = (void *)((int)pvVar4 + 0x1a4);
            piVar7[6] = local_18[6];
            piVar7[7] = local_18[7];
            piVar7[8] = local_18[8];
            piVar7 = piVar7 + 0x69;
          } while (pvVar4 != (void *)((int)unk + 0x19a28));
        }
      }
    }
    else if (local_24 < 0x38) {
      core_setedit_cpp_FUN_00581320();
    }
    else if (local_24 < 0x52) {
      if (local_24 < 0x39) {
        core_setedit_cpp_FUN_00581320();
      }
      else if (local_24 == 0x39) {
        core_setedit_cpp_BackdropMaybe_FUN_005805a0();
      }
    }
    else if (local_24 < 0x53) {
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_138,"Edit reverb for camera %s",
                   local_20 + *(int *)((int)unk + 0x15aea4) * 0x69);
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,acStack_13c,piVar12 + *(int *)((int)unk + 0x15aea4) * 0x69 + 0x5e);
      }
      else {
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,"Edit default set reverb",local_30);
      }
    }
    else if (local_24 < 0x54) {
      if (*(char *)((int)unk + 0x14d0f0) == '\0') {
        acStack_138[0] = '\0';
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  ((char *)(int *)local_2c,(char *)0x0,(char *)0x0,acStack_138,(char *)0x0);
        pcVar11 = ".set";
        iVar3 = -1;
        pcVar10 = acStack_134;
        do {
          pcVar8 = pcVar10;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar8 = pcVar10 + (uint)bVar9 * -2 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar8;
        } while (cVar1 != '\0');
        pcVar8 = pcVar8 + -1;
        do {
          cVar1 = *pcVar11;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        crt_string_c_strupr_FUN_00600770(acStack_134);
      }
      bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x64888c,
                         SUB41 /* extract 2-byte value */(acStack_130,0));
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(unk,acStack_12c);
      }
    }
    else if (local_24 < 0x55) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (acStack_134,0x14,0,0,"Enter in temperature : ");
      iVar3 = -1;
      pcVar11 = acStack_130;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar9 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        local_2c = crt_string_c_strtod_FUN_005ff0f3(pcVar10);
        piVar7[8] = (int)(float)local_2c;
      }
    }
    else if (local_24 == 0x56) {
      iVar3 = *(int *)((int)unk + 0x15ac7c);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        iVar3 = *(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c);
      }
      core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar3);
      sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
      sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
      sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
      while( true ) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffa30);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa34,"45.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa38,"cre-fire.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa3c,"shotgun.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa40,"zom-s04.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa44,"stranger_hit01.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa48,"xplode1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa4c,"limb1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa50,"footstep-str-0-ct-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa54,"footstep-str-0-wd-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa58,"footstep-str-0-mt-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa5c,"footstep-str-0-mb-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa60,"footstep-str-0-gr-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa64,"ric-mt0a.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa68,"ric-ct0a.wav");
        config_param1 = (CStrList_vtable *)0x0;
        pcVar10 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(g_CSoundPtr,iVar3);
        iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffa70,pcVar10,(int)config_param1,
                           (int)in_stack_fffffa6c);
        in_stack_fffffa6c = (CStrList_vtable *)&stack0xfffffa74;
        if (iVar6 < 0) break;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        in_stack_fffffa6c = (CStrList_vtable *)0x0;
        sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(0.0,0.0,20.0);
        in_stack_fffffa74 = (CStrList_vtable *)&stack0xfffffa7c;
        pcVar10 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)&stack0xfffffa7c,iVar6);
        in_stack_fffffa78 = (char **)0x581136;
        sound_sndmain_cpp_startSfx_FUN_005a8e90(pcVar10);
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        in_stack_fffffa80 = (CStrList_vtable *)&stack0xfffffa88;
        in_stack_fffffa84 = (char **)0x0;
        in_stack_fffffa7c = (CStrList_vtable *)0x58114a;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffffa88,0,(uint)in_stack_fffffa88,(uint)in_stack_fffffa8c,
                   (uint)in_stack_fffffa90,(uint)in_stack_fffffa94,(uint)in_stack_fffffa98);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffa74,0,(uint)in_stack_fffffa74,(uint)in_stack_fffffa78,
                 (uint)in_stack_fffffa7c,(uint)in_stack_fffffa80,(uint)in_stack_fffffa84);
      in_stack_fffffa74 = (CStrList_vtable *)0x581166;
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    }
    if (local_2c._4_4_ == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
