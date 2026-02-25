// Name: core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730
// Address: 00580730
// Address Range: [[00580730, 0058131d]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showFogEditor_FUN_00580730(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showFogEditor_FUN_00580730(CDemonSet *this_ptr)

{
  char cVar1;
  C3DSCamera *pCVar2;
  CDemonSet *pCVar3;
  char *pcVar4;
  CVector3f *pCVar5;
  int iVar6;
  SFog *pSVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  int config_param2;
  char *in_stack_fffffa18;
  char local_240 [256];
  char local_140 [256];
  double local_40;
  int *local_38;
  char *local_34;
  C3DSCamera *local_30;
  uint local_2c;
  C3DSCamera *local_28;
  SFog *local_24;
  SFog *local_20;
  SFog *local_1c;
  CVector3f *local_18;
  
  bVar11 = 0;
  core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,0);
  local_30 = this_ptr->cameras;
  this_ptr->selected_camera_index = 0;
  local_24 = &this_ptr->scene_fog;
  local_18 = &(this_ptr->scene_fog).scroll;
  local_38 = &this_ptr->default_master_reverb;
  local_34 = this_ptr->geometry_filename;
  local_28 = local_30;
  local_1c = local_24;
  do {
    do {
      pSVar7 = local_24;
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        pSVar7 = &local_28[this_ptr->selected_camera_index].fog;
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Demented(R) Fog Editor",0,0);
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        _sprintf(local_240,"1.  Fog settings for camera %s");
        pcVar4 = local_240;
      }
      else {
        pcVar4 = "1.  Use global fog";
      }
      engine_2d_c_drawText_FUN_00401fd0(pcVar4,0,0x16);
      _sprintf(local_140,"2.  Fog color : %d,%d,%d");
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x2c);
      _sprintf
                (local_140,"3.  Fog velocity : %f,%f,%f",(double)(pSVar7->scroll).x,
                 (double)(pSVar7->scroll).y,(double)(pSVar7->scroll).z);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x37);
      _sprintf
                (local_140,"4.  Fog taper : %f",(double)pSVar7->height_threshold);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x42);
      _sprintf
                (local_140,"5.  Fog density : %f",(double)pSVar7->density_multiplier);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x4d);
      _sprintf
                (local_140,"T.  Temperature (F) : %3.2f",(double)pSVar7->temperature);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("6.  Reset all cameras to master fog setting",0,99);
      engine_2d_c_drawText_FUN_00401fd0("7.  Precompute fog for selected camera",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("S.  Save set",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("8.  Preview fog settings",0,0x84);
      engine_2d_c_drawText_FUN_00401fd0("9.  Precompute fog",0,0x8f);
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                  (g_CSoundPtr,this_ptr->cameras[this_ptr->selected_camera_index].reverb_preset);
        _sprintf
                  (local_140,"R.  Reverb for camera %s : %s",
                   local_28 + this_ptr->selected_camera_index);
      }
      else {
        core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                  (g_CSoundPtr,this_ptr->default_master_reverb);
        _sprintf(local_140,"R.  Default set reverb : %s");
      }
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("V.  Test reverb",0,0xb0);
      iVar9 = 0;
      if (0 < this_ptr->camera_count) {
        iVar6 = 0;
        pCVar3 = this_ptr;
        do {
          *(int *)((int)&DAT_03659388 + iVar6) = pCVar3->cameras[0].fog_enabled;
          iVar6 = iVar6 + 4;
          iVar9 = iVar9 + 1;
          pCVar3 = (CDemonSet *)&pCVar3->cameras[0].enabled;
        } while (iVar9 < this_ptr->camera_count);
      }
      iVar9 = core_setedit_cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0(this_ptr,&DAT_03659388)
      ;
      if (iVar9 != -1) {
        iVar6 = this_ptr->selected_camera_index;
        if (iVar9 == iVar6) {
          this_ptr->cameras[iVar6].fog_enabled = (uint)(this_ptr->cameras[iVar6].fog_enabled == 0);
          iVar9 = this_ptr->selected_camera_index;
          local_28[iVar9].fog.color_index.r = (local_24->color_index).r;
          local_28[iVar9].fog.color_index.g = (local_24->color_index).g;
          pCVar5 = &local_28[iVar9].fog.scroll;
          local_28[iVar9].fog.color_index.b = (local_24->color_index).b;
          if (pCVar5 != local_18) {
            pCVar5->x = local_18->x;
            local_28[iVar9].fog.scroll.y = local_18->y;
            local_28[iVar9].fog.scroll.z = local_18->z;
          }
          local_28[iVar9].fog.height_threshold = local_24->height_threshold;
          local_28[iVar9].fog.density_multiplier = local_24->density_multiplier;
          local_28[iVar9].fog.temperature = local_24->temperature;
        }
        else {
          this_ptr->selected_camera_index = iVar9;
        }
      }
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar9 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    } while (iVar9 == 0);
    local_2c = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    pCVar2 = local_28;
    if (local_2c < 0x37) {
      if (local_2c < 0x33) {
        if (0x30 < local_2c) {
          if (local_2c < 0x32) {
            this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled =
                 (uint)(this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0);
            iVar9 = this_ptr->selected_camera_index;
            local_28[iVar9].fog.color_index.r = (local_24->color_index).r;
            local_28[iVar9].fog.color_index.g = (local_24->color_index).g;
            pCVar5 = &local_28[iVar9].fog.scroll;
            local_28[iVar9].fog.color_index.b = (local_24->color_index).b;
            if (pCVar5 != local_18) {
              pCVar5->x = local_18->x;
              local_28[iVar9].fog.scroll.y = local_18->y;
              local_28[iVar9].fog.scroll.z = local_18->z;
            }
            local_28[iVar9].fog.height_threshold = local_24->height_threshold;
            local_28[iVar9].fog.density_multiplier = local_24->density_multiplier;
            local_28[iVar9].fog.temperature = local_24->temperature;
          }
          else {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (local_140,0x1e,0,0,"Enter fog color r,g,b : ");
            iVar9 = -1;
            pcVar4 = local_140;
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + (uint)bVar11 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar9 != -2) {
              sscanf(local_140,"%d,%d,%d");
            }
          }
        }
      }
      else if (local_2c < 0x34) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter fog velocity x,y,z : ");
        iVar9 = -1;
        pcVar4 = local_140;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar11 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar9 != -2) {
          sscanf(local_140,"%f,%f,%f");
        }
      }
      else if (local_2c < 0x35) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter in fog taper : ");
        iVar9 = -1;
        pcVar4 = local_140;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar11 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar9 != -2) {
          local_40 = _strtod(in_stack_fffffa18);
          pSVar7->height_threshold = (float)local_40;
        }
      }
      else if (local_2c < 0x36) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter in fog density : ");
        iVar9 = -1;
        pcVar4 = local_140;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar11 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar9 != -2) {
          local_40 = _strtod(in_stack_fffffa18);
          pSVar7->density_multiplier = (float)local_40;
        }
      }
      else {
        iVar9 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Reset all cameras to master fog setting?");
        if (iVar9 != 0) {
          pCVar5 = &(local_30->fog).scroll;
          pSVar7 = &local_30->fog;
          pCVar3 = this_ptr;
          do {
            local_20 = local_1c;
            pCVar3->cameras[0].fog_enabled = 1;
            (pSVar7->color_index).r = (local_1c->color_index).r;
            (pSVar7->color_index).g = (local_1c->color_index).g;
            (pSVar7->color_index).b = (local_1c->color_index).b;
            if (pCVar5 != local_18) {
              pCVar5->x = local_18->x;
              pCVar5->y = local_18->y;
              pCVar5->z = local_18->z;
            }
            pCVar5 = pCVar5 + 0x23;
            pCVar3 = (CDemonSet *)&pCVar3->cameras[0].enabled;
            pSVar7->height_threshold = local_1c->height_threshold;
            pSVar7->density_multiplier = local_1c->density_multiplier;
            pSVar7->temperature = local_1c->temperature;
            pSVar7 = (SFog *)((int)(pSVar7 + 0xb) + 0x18);
          } while (pCVar3 != (CDemonSet *)&this_ptr->cameras[0xf9].enabled);
        }
      }
    }
    else if (local_2c < 0x38) {
      core_setedit_cpp_CDemonSet_computeCameraFog_FUN_00581320
                (this_ptr,this_ptr->selected_camera_index);
    }
    else if (local_2c < 0x52) {
      if (local_2c < 0x39) {
        core_setedit_cpp_CDemonSet_computeCameraFog_FUN_00581320(this_ptr,0);
      }
      else if (local_2c == 0x39) {
        core_setedit_cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0(this_ptr);
      }
    }
    else if (local_2c < 0x53) {
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        _sprintf(local_140,"Edit reverb for camera %s");
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,local_140,&pCVar2[this_ptr->selected_camera_index].reverb_preset);
      }
      else {
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,"Edit default set reverb",local_38);
      }
    }
    else if (local_2c < 0x54) {
      if (this_ptr->geometry_filename[0] == '\0') {
        local_140[0] = '\0';
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  (local_34,(char *)0x0,(char *)0x0,local_140,(char *)0x0);
        pcVar8 = ".set";
        iVar9 = -1;
        pcVar4 = local_140;
        do {
          pcVar10 = pcVar4;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar10 = pcVar4 + (uint)bVar11 * -2 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar10;
        } while (cVar1 != '\0');
        pcVar10 = pcVar10 + -1;
        do {
          cVar1 = *pcVar8;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        strupr(local_140);
      }
      iVar9 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x64888c,
                         (int)local_140);
      if (iVar9 != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,local_140);
      }
    }
    else if (local_2c < 0x55) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (local_140,0x14,0,0,"Enter in temperature : ");
      iVar9 = -1;
      pcVar4 = local_140;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar11 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar9 != -2) {
        local_40 = _strtod(in_stack_fffffa18);
        pSVar7->temperature = (float)local_40;
      }
    }
    else if (local_2c == 0x56) {
      iVar9 = this_ptr->default_master_reverb;
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        iVar9 = this_ptr->cameras[this_ptr->selected_camera_index].reverb_preset;
      }
      core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar9);
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
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(g_CSoundPtr,iVar9);
        iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffa18,pcVar4,iVar6,config_param2);
        if (iVar6 < 0) break;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(0.0,0.0,20.0);
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0xfffffa18,iVar6);
        sound_sndmain_cpp_startSfx_FUN_005a8e90(pcVar4);
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffffa18,0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffffa18,0);
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    }
    if (local_2c == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
