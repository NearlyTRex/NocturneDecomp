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
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  byte bVar10;
  char *pcVar11;
  uint d2;
  uint d3;
  CStrList_vtable *d5;
  CStrList_vtable *pCVar12;
  CStrList_vtable *d6;
  char acStack_23c [256];
  char acStack_13c [4];
  char acStack_138 [252];
  double dStack_3c;
  int *local_34;
  char *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *puStack_14;
  
  bVar10 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(unk);
  local_2c = (int)unk + 4;
  *(uint *)((int)unk + 0x15aea4) = 0;
  local_20 = (uint *)((int)unk + 0x15ac30);
  puStack_14 = (uint *)((int)unk + 0x15ac3c);
  local_34 = (int *)((int)unk + 0x15ac7c);
  local_30 = (char *)((int)unk + 0x14d0f0);
  local_24 = local_2c;
  local_18 = local_20;
  do {
    do {
      iVar3 = *(int *)((int)unk + 0x15aea4) * 0x1a4;
      puVar8 = local_20;
      if (*(int *)((int)unk + iVar3 + 0x154) == 0) {
        puVar8 = (uint *)(iVar3 + local_24 + 0x154);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Demented(R) Fog Editor",0,0);
      iVar3 = *(int *)((int)unk + 0x15aea4) * 0x1a4;
      if (*(int *)((int)unk + iVar3 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_23c,"1.  Fog settings for camera %s",iVar3 + local_24);
        pcVar11 = acStack_23c;
      }
      else {
        pcVar11 = "1.  Use global fog";
      }
      engine_2d_c_drawText_FUN_00401fd0(pcVar11,0,0x16);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_138,"2.  Fog color : %d,%d,%d",*puVar8,puVar8[1])
      ;
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x2c);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_138,"3.  Fog velocity : %f,%f,%f",SUB84 /* extract 2-byte value */((double)(float)puVar8[3],0),
                 (int)((ulonglong)(double)(float)puVar8[3] >> 0x20),
                 SUB84 /* extract 2-byte value */((double)(float)puVar8[4],0),
                 (int)((ulonglong)(double)(float)puVar8[4] >> 0x20),
                 SUB84 /* extract 2-byte value */((double)(float)puVar8[5],0));
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x37);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_138,"4.  Fog taper : %f",SUB84 /* extract 2-byte value */((double)(float)puVar8[6],0));
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x42);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_138,"5.  Fog density : %f",SUB84 /* extract 2-byte value */((double)(float)puVar8[7],0));
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x4d);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_138,"T.  Temperature (F) : %3.2f",SUB84 /* extract 2-byte value */((double)(float)puVar8[8],0));
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("6.  Reset all cameras to master fog setting",0,99);
      engine_2d_c_drawText_FUN_00401fd0("7.  Precompute fog for selected camera",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("S.  Save set",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("8.  Preview fog settings",0,0x84);
      pcVar11 = "9.  Precompute fog";
      d3 = 0x58098c;
      engine_2d_c_drawText_FUN_00401fd0("9.  Precompute fog",0,0x8f);
      pCVar12 = (CStrList_vtable *)g_CSoundPtr;
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        d6 = *(CStrList_vtable **)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c);
        d5 = (CStrList_vtable *)0x580b4a;
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(g_CSoundPtr,(int)d6);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_13c,"R.  Reverb for camera %s : %s",
                   *(int *)((int)unk + 0x15aea4) * 0x1a4 + local_24,pcVar4);
      }
      else {
        d6 = *(CStrList_vtable **)((int)unk + 0x15ac7c);
        d5 = (CStrList_vtable *)0x5809c1;
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(g_CSoundPtr,(int)d6);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_13c,"R.  Default set reverb : %s",pcVar4);
      }
      engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("V.  Test reverb",0,0xb0);
      iVar3 = 0;
      if (0 < *(int *)unk) {
        iVar7 = 0;
        pvVar5 = unk;
        do {
          *(uint *)((int)&DAT_03659388 + iVar7) = *(uint *)((int)pvVar5 + 0x154);
          iVar7 = iVar7 + 4;
          iVar3 = iVar3 + 1;
          pvVar5 = (void *)((int)pvVar5 + 0x1a4);
        } while (iVar3 < *(int *)unk);
      }
      iVar3 = core_setedit_cpp_CDemonSet_FUN_00577af0(unk);
      if (iVar3 != -1) {
        iVar7 = *(int *)((int)unk + 0x15aea4);
        if (iVar3 == iVar7) {
          *(uint *)((int)unk + iVar7 * 0x1a4 + 0x154) =
               (uint)(*(int *)((int)unk + iVar7 * 0x1a4 + 0x154) == 0);
          iVar3 = *(int *)((int)unk + 0x15aea4) * 0x1a4 + local_24;
          *(uint *)(iVar3 + 0x154) = *local_20;
          *(uint *)(iVar3 + 0x158) = local_20[1];
          *(uint *)(iVar3 + 0x15c) = local_20[2];
          if ((uint *)(iVar3 + 0x160) != puStack_14) {
            *(uint *)(iVar3 + 0x160) = *puStack_14;
            *(uint *)(iVar3 + 0x164) = puStack_14[1];
            *(uint *)(iVar3 + 0x168) = puStack_14[2];
          }
          *(uint *)(iVar3 + 0x16c) = local_20[6];
          *(uint *)(iVar3 + 0x170) = local_20[7];
          *(uint *)(iVar3 + 0x174) = local_20[8];
        }
        else {
          *(int *)((int)unk + 0x15aea4) = iVar3;
        }
      }
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    } while (iVar3 == 0);
    local_28 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    iVar3 = local_24;
    if (local_28 < 0x37) {
      if (local_28 < 0x33) {
        if (0x30 < local_28) {
          if (local_28 < 0x32) {
            *(uint *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) =
                 (uint)(*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0);
            iVar3 = *(int *)((int)unk + 0x15aea4) * 0x1a4 + local_24;
            *(uint *)(iVar3 + 0x154) = *local_20;
            *(uint *)(iVar3 + 0x158) = local_20[1];
            *(uint *)(iVar3 + 0x15c) = local_20[2];
            if ((uint *)(iVar3 + 0x160) != puStack_14) {
              *(uint *)(iVar3 + 0x160) = *puStack_14;
              *(uint *)(iVar3 + 0x164) = puStack_14[1];
              *(uint *)(iVar3 + 0x168) = puStack_14[2];
            }
            *(uint *)(iVar3 + 0x16c) = local_20[6];
            *(uint *)(iVar3 + 0x170) = local_20[7];
            *(uint *)(iVar3 + 0x174) = local_20[8];
          }
          else {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (acStack_138,0x1e,0,0,"Enter fog color r,g,b : ");
            iVar3 = -1;
            pcVar11 = acStack_13c;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar3 != -2) {
              crt_stdio_c_sscanf_FUN_0060013c
                        (acStack_13c,"%d,%d,%d",puVar8,puVar8 + 1,puVar8 + 2);
            }
          }
        }
      }
      else if (local_28 < 0x34) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_138,0x1e,0,0,"Enter fog velocity x,y,z : ");
        iVar3 = -1;
        pcVar11 = acStack_13c;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          crt_stdio_c_sscanf_FUN_0060013c
                    (acStack_13c,"%f,%f,%f",puVar8 + 3,puVar8 + 4,puVar8 + 5);
        }
      }
      else if (local_28 < 0x35) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        pcVar4 = "Enter in fog taper : ";
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_138,0x1e,0,0,"Enter in fog taper : ");
        iVar3 = -1;
        pcVar11 = acStack_13c;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          dStack_3c = crt_string_c_strtod_FUN_005ff0f3(pcVar4);
          puVar8[6] = (float)dStack_3c;
        }
      }
      else if (local_28 < 0x36) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        pcVar4 = "Enter in fog density : ";
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_138,0x1e,0,0,"Enter in fog density : ");
        iVar3 = -1;
        pcVar11 = acStack_13c;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          dStack_3c = crt_string_c_strtod_FUN_005ff0f3(pcVar4);
          puVar8[7] = (float)dStack_3c;
        }
      }
      else {
        iVar3 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Reset all cameras to master fog setting?");
        if (iVar3 != 0) {
          puVar6 = (uint *)(local_2c + 0x160);
          puVar8 = (uint *)(local_2c + 0x154);
          pvVar5 = unk;
          do {
            local_1c = local_18;
            *(uint *)((int)pvVar5 + 0x154) = 1;
            *puVar8 = *local_18;
            puVar8[1] = local_18[1];
            puVar8[2] = local_18[2];
            if (puVar6 != puStack_14) {
              *puVar6 = *puStack_14;
              puVar6[1] = puStack_14[1];
              puVar6[2] = puStack_14[2];
            }
            puVar6 = puVar6 + 0x69;
            pvVar5 = (void *)((int)pvVar5 + 0x1a4);
            puVar8[6] = local_18[6];
            puVar8[7] = local_18[7];
            puVar8[8] = local_18[8];
            puVar8 = puVar8 + 0x69;
          } while (pvVar5 != (void *)((int)unk + 0x19a28));
        }
      }
    }
    else if (local_28 < 0x38) {
      core_setedit_cpp_FUN_00581320();
    }
    else if (local_28 < 0x52) {
      if (local_28 < 0x39) {
        core_setedit_cpp_FUN_00581320();
      }
      else if (local_28 == 0x39) {
        core_setedit_cpp_BackdropMaybe_FUN_005805a0();
      }
    }
    else if (local_28 < 0x53) {
      iVar7 = *(int *)((int)unk + 0x15aea4) * 0x1a4;
      if (*(int *)((int)unk + iVar7 + 0x154) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_13c,"Edit reverb for camera %s",iVar7 + local_24);
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,acStack_13c,
                   (int *)(*(int *)((int)unk + 0x15aea4) * 0x1a4 + iVar3 + 0x178));
      }
      else {
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,"Edit default set reverb",local_34);
      }
    }
    else if (local_28 < 0x54) {
      if (*(char *)((int)unk + 0x14d0f0) == '\0') {
        acStack_13c[0] = '\0';
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  (local_30,(char *)0x0,(char *)0x0,acStack_13c,(char *)0x0);
        pcVar4 = ".set";
        iVar3 = -1;
        pcVar11 = acStack_13c;
        do {
          pcVar9 = pcVar11;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar9 = pcVar11 + (uint)bVar10 * -2 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar9;
        } while (cVar1 != '\0');
        pcVar9 = pcVar9 + -1;
        do {
          cVar1 = *pcVar4;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        crt_string_c_strupr_FUN_00600770(acStack_13c);
      }
      bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x64888c,
                         SUB41 /* extract 2-byte value */(acStack_13c,0));
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(unk,acStack_13c);
      }
    }
    else if (local_28 < 0x55) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      pcVar4 = "Enter in temperature : ";
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (acStack_138,0x14,0,0,"Enter in temperature : ");
      iVar3 = -1;
      pcVar11 = acStack_13c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        dStack_3c = crt_string_c_strtod_FUN_005ff0f3(pcVar4);
        puVar8[8] = (float)dStack_3c;
      }
    }
    else if (local_28 == 0x56) {
      iVar3 = *(int *)((int)unk + 0x15ac7c);
      if (*(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x154) == 0) {
        iVar3 = *(int *)((int)unk + *(int *)((int)unk + 0x15aea4) * 0x1a4 + 0x17c);
      }
      core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar3);
      sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
      d2 = 0;
      sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
      sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
      while( true ) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffa1c);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"45.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"cre-fire.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"shotgun.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"zom-s04.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"stranger_hit01.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"xplode1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"limb1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"footstep-str-0-ct-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"footstep-str-0-wd-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"footstep-str-0-mt-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"footstep-str-0-mb-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"footstep-str-0-gr-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"ric-mt0a.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffa1c,"ric-ct0a.wav");
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(g_CSoundPtr,iVar3);
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffa24,pcVar4,d2,d3);
        if (iVar7 < 0) break;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(0.0,0.0,20.0);
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0xfffffa1c,iVar7);
        sound_sndmain_cpp_startSfx_FUN_005a8e90(pcVar4);
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        d2 = 0;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffffa20,0,d3,(uint)pcVar11,(uint)d5,(uint)pCVar12,(uint)d6)
        ;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffa1c,0,d2,d3,(uint)pcVar11,(uint)d5,(uint)pCVar12);
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    }
    if (local_28 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
