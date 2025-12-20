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
  char *pcVar4;
  void *pvVar5;
  undefined3 extraout_var;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  BADSPACEBASE *in_ESP;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  int in_stack_0000002c;
  int *in_stack_0000003c;
  int *piStack00000040;
  int *in_stack_0000004c;
  int *in_stack_00000050;
  int *in_stack_0000005c;
  uint *in_stack_00000060;
  ulonglong uVar14;
  uint uVar15;
  ulonglong in_stack_fffffa24;
  double dVar16;
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
  byte auStack_230 [260];
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
  
  bVar13 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(unk);
  local_2c = (int)unk + 4;
  *(uint *)((int)unk + 0x15aea4) = 0;
  local_20 = (int)unk + 0x15ac30;
  iStack_14 = (int)unk + 0x15ac3c;
  local_34 = (int)unk + 0x15ac7c;
  local_30 = (int)unk + 0x14d0f0;
  local_24 = local_2c;
  local_18 = local_20;
  do {
    do {
      iVar9 = (int)in_stack_fffffa24;
      iVar3 = *(int *)((int)unk + 0x15aea4) * 0x1a4;
      iVar7 = local_20;
      if (*(int *)((int)unk + iVar3 + 0x154) == 0) {
        iVar7 = iVar3 + local_24 + 0x154;
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Demented(R) Fog Editor",0,0);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_234,"1.  Fog settings for camera %s");
        iVar9 = 0x16;
        uVar14 = ZEXT48(auStack_230);
      }
      else {
        uVar14 = 0x1600000000;
      }
      engine_2d_c_drawText_FUN_00401fd0((char *)uVar14,(int)(uVar14 >> 0x20),iVar9);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_12c,"2.  Fog color : %d,%d,%d");
      engine_2d_c_drawText_FUN_00401fd0(acStack_128,0,0x2c);
      dVar16 = (double)*(float *)(iVar7 + 0x10);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_124,"3.  Fog velocity : %f,%f,%f",(double)*(float *)(iVar7 + 0xc),
                 dVar16,(double)*(float *)(iVar7 + 0x14));
      uVar15 = SUB84 /* extract 2-byte value */(dVar16,0);
      engine_2d_c_drawText_FUN_00401fd0(acStack_120,0,0x37);
      in_stack_fffffa24 = CONCAT44 /* combine 2-byte values */(0x5808b9,uVar15);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_11c,"4.  Fog taper : %f",(double)*(float *)(iVar7 + 0x18));
      engine_2d_c_drawText_FUN_00401fd0(acStack_118,0,0x42);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_114,"5.  Fog density : %f",(double)*(float *)(iVar7 + 0x1c));
      engine_2d_c_drawText_FUN_00401fd0(acStack_110,0,0x4d);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_10c,"T.  Temperature (F) : %3.2f",(double)*(float *)(iVar7 + 0x20));
      engine_2d_c_drawText_FUN_00401fd0(acStack_108,0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("6.  Reset all cameras to master fog setting",0,99);
      engine_2d_c_drawText_FUN_00401fd0("7.  Precompute fog for selected camera",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("S.  Save set",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("8.  Preview fog settings",0,0x84);
      engine_2d_c_drawText_FUN_00401fd0("9.  Precompute fog",0,0x8f);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                           (g_CSoundPtr,
                            *(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c));
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_ec,"R.  Reverb for camera %s : %s",
                   *(int *)((int)unk + 0x15aea4) * 0x1a4 + in_stack_0000002c,pcVar4);
      }
      else {
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                           (g_CSoundPtr,*(int *)((int)unk + 0x15ac7c));
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ec,"R.  Default set reverb : %s",pcVar4);
      }
      engine_2d_c_drawText_FUN_00401fd0(acStack_e8,0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("V.  Test reverb",0,0xb0);
      iVar3 = 0;
      if (0 < *(int *)unk) {
        iVar9 = 0;
        pvVar5 = unk;
        do {
          *(uint *)((int)&DAT_03659388 + iVar9) = *(uint *)((int)pvVar5 + 0x154);
          iVar9 = iVar9 + 4;
          iVar3 = iVar3 + 1;
          pvVar5 = (void *)((int)pvVar5 + 0x1a4);
        } while (iVar3 < *(int *)unk);
      }
      iVar3 = core_setedit_cpp_CDemonSet_FUN_00577af0(unk);
      if (iVar3 != -1) {
        iVar9 = *(int *)((int)unk + 0x15aea4);
        if (iVar3 == iVar9) {
          *(uint *)((int)unk + iVar9 * 0x1a4 + 0x154) =
               (uint)(*(int *)((int)unk + iVar9 * 0x1a4 + 0x154) == 0);
          iVar3 = *(int *)((int)unk + 0x15aea4);
          in_stack_0000003c[iVar3 * 0x69 + 0x55] = *piStack00000040;
          in_stack_0000003c[iVar3 * 0x69 + 0x56] = piStack00000040[1];
          in_stack_0000003c[iVar3 * 0x69 + 0x57] = piStack00000040[2];
          if (in_stack_0000003c + iVar3 * 0x69 + 0x58 != in_stack_0000004c) {
            in_stack_0000003c[iVar3 * 0x69 + 0x58] = *in_stack_0000004c;
            in_stack_0000003c[iVar3 * 0x69 + 0x59] = in_stack_0000004c[1];
            in_stack_0000003c[iVar3 * 0x69 + 0x5a] = in_stack_0000004c[2];
          }
          in_stack_0000003c[iVar3 * 0x69 + 0x5b] = piStack00000040[6];
          in_stack_0000003c[iVar3 * 0x69 + 0x5c] = piStack00000040[7];
          in_stack_0000003c[iVar3 * 0x69 + 0x5d] = piStack00000040[8];
        }
        else {
          *(int *)((int)unk + 0x15aea4) = iVar3;
        }
      }
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    } while (iVar3 == 0);
    uVar6 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar6 < 0x37) {
      if (uVar6 < 0x33) {
        if (0x30 < uVar6) {
          if (uVar6 < 0x32) {
            *(uint *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) =
                 (uint)(*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0);
            iVar7 = *(int *)((int)unk + 0x15aea4);
            in_stack_0000004c[iVar7 * 0x69 + 0x55] = *in_stack_00000050;
            in_stack_0000004c[iVar7 * 0x69 + 0x56] = in_stack_00000050[1];
            in_stack_0000004c[iVar7 * 0x69 + 0x57] = in_stack_00000050[2];
            if (in_stack_0000004c + iVar7 * 0x69 + 0x58 != in_stack_0000005c) {
              in_stack_0000004c[iVar7 * 0x69 + 0x58] = *in_stack_0000005c;
              in_stack_0000004c[iVar7 * 0x69 + 0x59] = in_stack_0000005c[1];
              in_stack_0000004c[iVar7 * 0x69 + 0x5a] = in_stack_0000005c[2];
            }
            in_stack_0000004c[iVar7 * 0x69 + 0x5b] = in_stack_00000050[6];
            in_stack_0000004c[iVar7 * 0x69 + 0x5c] = in_stack_00000050[7];
            in_stack_0000004c[iVar7 * 0x69 + 0x5d] = in_stack_00000050[8];
          }
          else {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (acStack_c8,0x1e,0,0,"Enter fog color r,g,b : ");
            iVar3 = -1;
            pcVar4 = acStack_c4;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + (uint)bVar13 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar3 != -2) {
              crt_stdio_c_sscanf_FUN_0060013c(acStack_c4,"%d,%d,%d",iVar7,iVar7 + 4,iVar7 + 8)
              ;
            }
          }
        }
      }
      else if (uVar6 < 0x34) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_c8,0x1e,0,0,"Enter fog velocity x,y,z : ");
        iVar3 = -1;
        pcVar4 = acStack_c4;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar13 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          crt_stdio_c_sscanf_FUN_0060013c
                    (acStack_c4,"%f,%f,%f",iVar7 + 0xc,iVar7 + 0x10,iVar7 + 0x14);
        }
      }
      else if (uVar6 < 0x35) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_c8,0x1e,0,0,"Enter in fog taper : ");
        iVar3 = -1;
        pcVar4 = acStack_c4;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar13 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          _piStack00000040 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa94);
          *(float *)(iVar7 + 0x18) = (float)_piStack00000040;
        }
      }
      else if (uVar6 < 0x36) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_c8,0x1e,0,0,"Enter in fog density : ");
        iVar3 = -1;
        pcVar4 = acStack_c4;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar13 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          _piStack00000040 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa94);
          *(float *)(iVar7 + 0x1c) = (float)_piStack00000040;
        }
      }
      else {
        iVar7 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Reset all cameras to master fog setting?");
        if (iVar7 != 0) {
          puVar8 = (uint *)(uVar6 + 0x160);
          piVar10 = (int *)(uVar6 + 0x154);
          pvVar5 = unk;
          do {
            *(uint *)((int)pvVar5 + 0x154) = 1;
            *piVar10 = *in_stack_0000005c;
            piVar10[1] = in_stack_0000005c[1];
            piVar10[2] = in_stack_0000005c[2];
            if (puVar8 != in_stack_00000060) {
              *puVar8 = *in_stack_00000060;
              puVar8[1] = in_stack_00000060[1];
              puVar8[2] = in_stack_00000060[2];
            }
            puVar8 = puVar8 + 0x69;
            pvVar5 = (void *)((int)pvVar5 + 0x1a4);
            piVar10[6] = in_stack_0000005c[6];
            piVar10[7] = in_stack_0000005c[7];
            piVar10[8] = in_stack_0000005c[8];
            piVar10 = piVar10 + 0x69;
          } while (pvVar5 != (void *)((int)unk + 0x19a28));
        }
      }
    }
    else if (uVar6 < 0x38) {
      core_setedit_cpp_FUN_00581320();
    }
    else if (uVar6 < 0x52) {
      if (uVar6 < 0x39) {
        core_setedit_cpp_FUN_00581320();
      }
      else if (uVar6 == 0x39) {
        core_setedit_cpp_BackdropMaybe_FUN_005805a0();
      }
    }
    else if (uVar6 < 0x53) {
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_cc,"Edit reverb for camera %s",
                   in_stack_0000004c + *(int *)((int)unk + 0x15aea4) * 0x69);
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,acStack_c8,
                   in_stack_0000004c + *(int *)((int)unk + 0x15aea4) * 0x69 + 0x5e);
      }
      else {
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,"Edit default set reverb",in_stack_0000003c);
      }
    }
    else if (uVar6 < 0x54) {
      if (*(char *)((int)unk + 0x14d0f0) == '\0') {
        acStack_cc[0] = '\0';
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  ((char *)piStack00000040,(char *)0x0,(char *)0x0,acStack_cc,(char *)0x0);
        pcVar11 = ".set";
        iVar7 = -1;
        pcVar4 = acStack_d0;
        do {
          pcVar12 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar12 = pcVar4 + (uint)bVar13 * -2 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar12;
        } while (cVar1 != '\0');
        pcVar12 = pcVar12 + -1;
        do {
          cVar1 = *pcVar11;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
        crt_string_c_strupr_FUN_00600770(acStack_d0);
      }
      bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x64888c,
                         SUB41 /* extract 2-byte value */(acStack_cc,0));
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(unk,acStack_c8);
      }
    }
    else if (uVar6 < 0x55) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (acStack_c8,0x14,0,0,"Enter in temperature : ");
      iVar3 = -1;
      pcVar4 = acStack_c4;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar13 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        _piStack00000040 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffa94);
        *(float *)(iVar7 + 0x20) = (float)_piStack00000040;
      }
    }
    else if (uVar6 == 0x56) {
      iVar7 = *(int *)((int)unk + 0x15ac7c);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        iVar7 = *(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c);
      }
      core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar7);
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
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(g_CSoundPtr,iVar7);
        iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffadc,pcVar4,(int)config_param1,
                           (int)in_stack_fffffad8);
        in_stack_fffffad8 = (CStrList_vtable *)&stack0xfffffae0;
        if (iVar3 < 0) break;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        in_stack_fffffad8 = (CStrList_vtable *)0x0;
        sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(0.0,0.0,20.0);
        in_stack_fffffae0 = (CStrList_vtable *)&stack0xfffffae8;
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0xfffffae8,iVar3);
        in_stack_fffffae4 = (char **)0x581136;
        sound_sndmain_cpp_startSfx_FUN_005a8e90(pcVar4);
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
