// Name: core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730
// Address: 00580730
// Address Range: [[00580730, 0058131d]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showFogEditor_FUN_00580730(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showFogEditor_FUN_00580730(CDemonSet *this_ptr)

{
  char cVar2;
  SFog *pSVar3;
  CVector3f *pCVar4;
  CDemonSet *pCVar3;
  int iVar5;
  CVector3f *pCVar6;
  char *pcVar4;
  char *pcVar7;
  uint uVar8;
  CVector3f *pCVar5;
  int iVar6;
  SFog *pSVar7;
  SFog *pSVar9;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar10;
  CDemonSet *pCVar11;
  byte bVar11;
  double dVar12;
  CPickList local_5e8;
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
  uint window_flags;
  char cVar1;
  C3DSCamera *pCVar2;
  
  bVar11 = 0;
  core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,0);
  this_ptr->selected_camera_index = 0;
  pSVar3 = &this_ptr->scene_fog;
  pCVar4 = &(this_ptr->scene_fog).scroll;
  do {
    do {
      pSVar9 = pSVar3;
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        pSVar9 = &this_ptr->cameras[this_ptr->selected_camera_index].fog;
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Demented(R) Fog Editor",0,0);
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        _sprintf(local_240,"1.  Fog settings for camera %s");
        pcVar7 = local_240;
      }
      else {
        pcVar7 = "1.  Use global fog";
      }
      engine_2d_c_drawText_FUN_00401fd0(pcVar7,0,0x16);
      _sprintf(local_140,"2.  Fog color : %d,%d,%d");
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x2c);
      _sprintf(local_140,"3.  Fog velocity : %f,%f,%f",(double)(pSVar9->scroll).x,
                 (double)(pSVar9->scroll).y,(double)(pSVar9->scroll).z);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x37);
      _sprintf(local_140,"4.  Fog taper : %f",(double)pSVar9->height_threshold);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x42);
      _sprintf(local_140,"5.  Fog density : %f",(double)pSVar9->density_multiplier);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x4d);
      _sprintf(local_140,"T.  Temperature (F) : %3.2f",(double)pSVar9->temperature);
      engine_2d_c_drawText_FUN_00401fd0(local_140,0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("6.  Reset all cameras to master fog setting",0,99);
      engine_2d_c_drawText_FUN_00401fd0("7.  Precompute fog for selected camera",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("S.  Save set",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("8.  Preview fog settings",0,0x84);
      engine_2d_c_drawText_FUN_00401fd0("9.  Precompute fog",0,0x8f);
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70
                  (g_CSoundPtr,this_ptr->cameras[this_ptr->selected_camera_index].reverb_preset);
        _sprintf(local_140,"R.  Reverb for camera %s : %s",
                   this_ptr->cameras + this_ptr->selected_camera_index);
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
          *(int *)((int)g_CameraFogEnabledFlags + iVar6) = pCVar3->cameras[0].fog_enabled;
          iVar6 = iVar6 + 4;
          iVar9 = iVar9 + 1;
          pCVar3 = (CDemonSet *)&pCVar3->cameras[0].enabled;
        } while (iVar9 < this_ptr->camera_count);
      }
      iVar5 = core_setedit_cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0
                        (this_ptr,g_CameraFogEnabledFlags);
      if (iVar5 != -1) {
        iVar10 = this_ptr->selected_camera_index;
        if (iVar5 == iVar10) {
          this_ptr->cameras[iVar10].fog_enabled = (uint)(this_ptr->cameras[iVar10].fog_enabled == 0)
          ;
          iVar5 = this_ptr->selected_camera_index;
          this_ptr->cameras[iVar5].fog.color_index.r = (pSVar3->color_index).r;
          this_ptr->cameras[iVar5].fog.color_index.g = (this_ptr->scene_fog).color_index.g;
          pCVar6 = &this_ptr->cameras[iVar5].fog.scroll;
          this_ptr->cameras[iVar5].fog.color_index.b = (this_ptr->scene_fog).color_index.b;
          if (pCVar6 != pCVar4) {
            pCVar6->x = pCVar4->x;
            this_ptr->cameras[iVar5].fog.scroll.y = (this_ptr->scene_fog).scroll.y;
            this_ptr->cameras[iVar5].fog.scroll.z = (this_ptr->scene_fog).scroll.z;
          }
          this_ptr->cameras[iVar5].fog.height_threshold = (this_ptr->scene_fog).height_threshold;
          this_ptr->cameras[iVar5].fog.density_multiplier = (this_ptr->scene_fog).density_multiplier
          ;
          this_ptr->cameras[iVar5].fog.temperature = (this_ptr->scene_fog).temperature;
        }
        else {
          this_ptr->selected_camera_index = iVar5;
        }
      }
      wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    } while (iVar5 == 0);
    uVar8 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar8 < 0x37) {
      if (uVar8 < 0x33) {
        if (0x30 < uVar8) {
          if (uVar8 < 0x32) {
            this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled =
                 (uint)(this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0);
            iVar5 = this_ptr->selected_camera_index;
            this_ptr->cameras[iVar5].fog.color_index.r = (pSVar3->color_index).r;
            this_ptr->cameras[iVar5].fog.color_index.g = (this_ptr->scene_fog).color_index.g;
            pCVar6 = &this_ptr->cameras[iVar5].fog.scroll;
            this_ptr->cameras[iVar5].fog.color_index.b = (this_ptr->scene_fog).color_index.b;
            if (pCVar6 != pCVar4) {
              pCVar6->x = pCVar4->x;
              this_ptr->cameras[iVar5].fog.scroll.y = (this_ptr->scene_fog).scroll.y;
              this_ptr->cameras[iVar5].fog.scroll.z = (this_ptr->scene_fog).scroll.z;
            }
            this_ptr->cameras[iVar5].fog.height_threshold = (this_ptr->scene_fog).height_threshold;
            this_ptr->cameras[iVar5].fog.density_multiplier =
                 (this_ptr->scene_fog).density_multiplier;
            this_ptr->cameras[iVar5].fog.temperature = (this_ptr->scene_fog).temperature;
          }
          else {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (local_140,0x1e,0,0,"Enter fog color r,g,b : ");
            iVar5 = -1;
            pcVar7 = local_140;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar5 != -2) {
              sscanf(local_140,"%d,%d,%d");
            }
          }
        }
      }
      else if (uVar8 < 0x34) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter fog velocity x,y,z : ");
        iVar5 = -1;
        pcVar7 = local_140;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
        } while (cVar2 != '\0');
        if (iVar5 != -2) {
          sscanf(local_140,"%f,%f,%f");
        }
      }
      else if (uVar8 < 0x35) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter in fog taper : ");
        iVar5 = -1;
        pcVar7 = local_140;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
        } while (cVar2 != '\0');
        if (iVar5 != -2) {
          dVar12 = _strtod(local_140);
          pSVar9->height_threshold = (float)dVar12;
        }
      }
      else if (uVar8 < 0x36) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (local_140,0x1e,0,0,"Enter in fog density : ");
        iVar5 = -1;
        pcVar7 = local_140;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
        } while (cVar2 != '\0');
        if (iVar5 != -2) {
          dVar12 = _strtod(local_140);
          pSVar9->density_multiplier = (float)dVar12;
        }
      }
      else {
        iVar5 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Reset all cameras to master fog setting?");
        if (iVar5 != 0) {
          pCVar5 = &this_ptr->cameras[0].fog.scroll;
          pSVar7 = &this_ptr->cameras[0].fog;
          pCVar11 = this_ptr;
          do {
            pCVar11->cameras[0].fog_enabled = 1;
            (pSVar7->color_index).r = (pSVar3->color_index).r;
            (pSVar7->color_index).g = (this_ptr->scene_fog).color_index.g;
            (pSVar7->color_index).b = (this_ptr->scene_fog).color_index.b;
            if (pCVar5 != pCVar4) {
              pCVar5->x = pCVar4->x;
              pCVar5->y = (this_ptr->scene_fog).scroll.y;
              pCVar5->z = (this_ptr->scene_fog).scroll.z;
            }
            pCVar5 = pCVar5 + 0x23;
            pCVar11 = (CDemonSet *)&pCVar11->cameras[0].enabled;
            pSVar7->height_threshold = (this_ptr->scene_fog).height_threshold;
            pSVar7->density_multiplier = (this_ptr->scene_fog).density_multiplier;
            pSVar7->temperature = (this_ptr->scene_fog).temperature;
            pSVar7 = (SFog *)&pSVar7[0xb].height_threshold;
          } while (pCVar11 != (CDemonSet *)&this_ptr->cameras[0xf9].enabled);
        }
      }
    }
    else if (uVar8 < 0x38) {
      core_setedit_cpp_CDemonSet_computeCameraFog_FUN_00581320
                (this_ptr,this_ptr->selected_camera_index);
    }
    else if (uVar8 < 0x52) {
      if (uVar8 < 0x39) {
        core_setedit_cpp_CDemonSet_computeCameraFog_FUN_00581320(this_ptr,0);
      }
      else if (uVar8 == 0x39) {
        core_setedit_cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0(this_ptr);
      }
    }
    else if (uVar8 < 0x53) {
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        _sprintf(local_140,"Edit reverb for camera %s");
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,local_140,
                   &this_ptr->cameras[this_ptr->selected_camera_index].reverb_preset);
      }
      else {
        core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
                  (g_CSoundPtr,"Edit default set reverb",&this_ptr->default_master_reverb);
      }
    }
    else if (uVar8 < 0x54) {
      if (this_ptr->geometry_filename[0] == '\0') {
        local_140[0] = '\0';
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,local_140,(char *)0x0);
        pcVar8 = ".set";
        iVar5 = -1;
        pcVar10 = local_140;
        do {
          pcVar10 = pcVar10;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10;
        } while (cVar2 != '\0');
        pcVar7 = pcVar10 + -1;
        do {
          cVar2 = *pcVar8;
          *pcVar7 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar7[1] = cVar2;
          pcVar7 = pcVar7 + 2;
        } while (cVar2 != '\0');
        strupr(local_140);
      }
      iVar5 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models","set",
                         local_140,1);
      if (iVar5 != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,local_140);
      }
    }
    else if (uVar8 < 0x55) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (local_140,0x14,0,0,"Enter in temperature : ");
      iVar5 = -1;
      pcVar7 = local_140;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
      } while (cVar2 != '\0');
      if (iVar5 != -2) {
        dVar12 = _strtod(local_140);
        pSVar9->temperature = (float)dVar12;
      }
    }
    else if (uVar8 == 0x56) {
      iVar5 = this_ptr->default_master_reverb;
      if (this_ptr->cameras[this_ptr->selected_camera_index].fog_enabled == 0) {
        iVar5 = this_ptr->cameras[this_ptr->selected_camera_index].reverb_preset;
      }
      core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar5);
      sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
      sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
      iVar10 = 0;
      sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
      while( true ) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5e8);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"45.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"cre-fire.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"shotgun.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"zom-s04.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"stranger_hit01.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"xplode1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"limb1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_5e8.base,"footstep-str-0-ct-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_5e8.base,"footstep-str-0-wd-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_5e8.base,"footstep-str-0-mt-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_5e8.base,"footstep-str-0-mb-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_5e8.base,"footstep-str-0-gr-1.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"ric-mt0a.wav");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5e8.base,"ric-ct0a.wav");
        window_flags = 0;
        pcVar4 = core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(g_CSoundPtr,iVar5);
        iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           (&local_5e8,pcVar4,iVar10,window_flags);
        if (iVar10 < 0) break;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(0.0,0.0,20.0);
        pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_5e8.base,iVar10);
        sound_sndmain_cpp_startSfx_FUN_005a8e90(pcVar7);
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5e8,0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5e8,0);
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    }
    if (uVar8 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
