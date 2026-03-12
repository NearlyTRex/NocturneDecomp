// Name: core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0
// Address: 0057c5d0
// Address Range: [[0057c5d0, 0057ce71]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showLightEditor_FUN_0057c5d0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showLightEditor_FUN_0057c5d0(CDemonSet *this_ptr)

{
  int *piVar2;
  char cVar3;
  int iVar4;
  int y1;
  int iVar3;
  int iVar6;
  CDemonSet *pCVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar7;
  byte bVar11;
  float local_fd8;
  CPickList local_fd4;
  CPickList local_c2c;
  CPickList local_884;
  CPickList local_4dc;
  char local_134 [256];
  int local_34;
  int local_30;
  char *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *pcVar10;
  char cVar2;
  int *piVar1;
  
  bVar11 = 0;
  core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,0);
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_24 = -1;
    if (0x1df < g_WindowHeight) {
      iVar5 = 0x120;
      iVar7 = 0x40;
      if (0x1e < g_MasterLightCount) {
        iVar5 = 0xc0;
        iVar7 = 0x30;
      }
      local_1c = 0;
      if (0 < g_MasterLightCount) {
        local_18 = 0;
        iVar6 = 0;
        do {
          core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                    (*(CDemonLight **)((int)g_MasterLightList + local_18),iVar6,iVar5,iVar7);
          if ((((iVar6 <= g_MouseX) && (g_MouseX < iVar6 + iVar7)) && (iVar5 <= g_MouseY)) &&
             (g_MouseY < iVar5 + iVar7)) {
            local_24 = local_1c;
            iVar4 = iVar6 + iVar7 + -1;
            g_ActiveRenderColor = 1;
            y1 = iVar5 + iVar7 + -1;
            engine_2d_c_drawLine_FUN_004011b0(iVar6,iVar5,iVar4,iVar5);
            engine_2d_c_drawLine_FUN_004011b0(iVar6,y1,iVar4,y1);
            engine_2d_c_drawLine_FUN_004011b0(iVar6,iVar5,iVar6,y1);
            engine_2d_c_drawLine_FUN_004011b0(iVar4,iVar5,iVar4,y1);
          }
          iVar3 = iVar6 + iVar7;
          engine_2d_c_drawText_FUN_00401fd0
                    ((char *)(*(int *)((int)g_MasterLightList + local_18) + 0x40),iVar6,iVar5);
          if (g_WindowWidth < iVar3 + iVar7) {
            iVar5 = iVar5 + iVar7;
            iVar3 = 0;
          }
          local_18 = local_18 + 4;
          local_1c = local_1c + 1;
          iVar6 = iVar3;
        } while (local_1c < g_MasterLightCount);
      }
    }
    iVar4 = 0x16;
    iVar6 = 0;
    iVar8 = 0;
    engine_2d_c_drawText_FUN_00401fd0("Demented Light Editor",0,0);
    if (0 < g_MasterLightCount) {
      local_20 = 0;
      do {
        _sprintf
                  (local_134,"%2d. %s",iVar8,
                   *(int *)((int)g_MasterLightList + local_20) + 0x40);
        engine_2d_c_drawText_FUN_00401fd0(local_134,iVar6,iVar4);
        iVar4 = iVar4 + 0xb;
        if (g_WindowHeight / 3 + -0x16 <= iVar4) {
          iVar4 = 0x16;
          iVar6 = iVar6 + g_WindowWidth / 6;
        }
        local_20 = local_20 + 4;
        iVar8 = iVar8 + 1;
      } while (iVar8 < g_MasterLightCount);
    }
    iVar6 = g_WindowHeight / 3;
    if (this_ptr->light_count < 200) {
      engine_2d_c_drawText_FUN_00401fd0("1.  Add spot light",0,iVar6);
    }
    if (0 < this_ptr->light_count) {
      engine_2d_c_drawText_FUN_00401fd0("2.  Position spot light",0,iVar6 + 0xb);
    }
    engine_2d_c_drawText_FUN_00401fd0
              ("3.  Delete light",
               (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                    (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2,iVar6);
    iVar4 = iVar6 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0
              ("4.  Precompute visiblity",
               (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                    (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2,iVar4);
    engine_2d_c_drawText_FUN_00401fd0("5.  Set ambient light",g_WindowWidth / 2,iVar6);
    engine_2d_c_drawText_FUN_00401fd0("6.  Edit properties",g_WindowWidth / 2,iVar4);
    engine_2d_c_drawText_FUN_00401fd0
              ("7.  Clone a light",
               ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                     (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,iVar6);
    engine_2d_c_drawText_FUN_00401fd0
              ("S.  Save set",
               ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                     (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,iVar4);
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar6 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar6 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (local_28 < 0x34) {
        if (local_28 < 0x32) {
          if (local_28 == 0x31) {
            core_setedit_cpp_CDemonSet_addSpotLight_FUN_0057b410(this_ptr);
          }
        }
        else if (local_28 < 0x33) {
          iVar6 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4dc);
          if (0 < g_MasterLightCount) {
            iVar4 = 0;
            do {
              piVar2 = (int *)((int)g_MasterLightList + iVar4);
              iVar4 = iVar4 + 4;
              iVar6 = iVar6 + 1;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4dc.base,(char *)(*piVar2 + 0x40))
              ;
            } while (iVar6 < g_MasterLightCount);
          }
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_4dc,"Position spot light",-1,0);
          if (-1 < iVar6) {
            iVar6 = core_setedit_cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550(this_ptr,iVar6);
            core_setedit_cpp_CDemonSet_editSpotLight_FUN_0057b500(this_ptr,iVar6);
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_4dc,0);
        }
        else {
          iVar6 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_884);
          if (0 < g_MasterLightCount) {
            iVar4 = 0;
            do {
              piVar2 = (int *)((int)g_MasterLightList + iVar4);
              iVar4 = iVar4 + 4;
              iVar6 = iVar6 + 1;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_884.base,(char *)(*piVar2 + 0x40))
              ;
            } while (iVar6 < g_MasterLightCount);
          }
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_884,"Delete spot light",-1,0);
          if (-1 < iVar6) {
            iVar4 = core_setedit_cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550(this_ptr,iVar6);
            iVar6 = this_ptr->lights[iVar4].light_type;
            core_setedit_cpp_CDemonSet_deleteLight_FUN_0057b910(this_ptr,iVar4);
            if (iVar6 == 0) {
              core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
              core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
            }
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_884,0);
        }
      }
      else if (local_28 < 0x35) {
        core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
        iVar6 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Precompute light visibility?");
        if (iVar6 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(this_ptr,-1);
        }
        core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      }
      else if (local_28 < 0x36) {
        local_fd8 = this_ptr->min_ambient_value * 100.0f;
        iVar6 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,"Set ambient level (0..100)",&local_fd8,1,0.0,
                           100.0,1);
        if (iVar6 != 0) {
          this_ptr->min_ambient_value = local_fd8 * (float)0.01;
          iVar6 = 0;
          pCVar4 = this_ptr;
          if (0 < this_ptr->camera_count) {
            do {
              iVar6 = iVar6 + 1;
              pCVar4->cameras[0].ambient_value = this_ptr->min_ambient_value;
              pCVar4 = (CDemonSet *)&pCVar4->cameras[0].enabled;
            } while (iVar6 < this_ptr->camera_count);
          }
        }
      }
      else if (local_28 < 0x37) {
        iVar6 = 0;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_c2c);
        if (0 < g_MasterLightCount) {
          iVar4 = 0;
          do {
            piVar1 = (int *)((int)g_MasterLightList + iVar4);
            iVar4 = iVar4 + 4;
            iVar6 = iVar6 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c2c.base,(char *)(*piVar1 + 0x40));
          } while (iVar6 < g_MasterLightCount);
        }
        iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_c2c,"Edit spot light properties",-1,0);
        if (-1 < iVar6) {
          iVar6 = core_setedit_cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550(this_ptr,iVar6);
          core_setedit_cpp_CDemonSet_showLightFilterEditor_FUN_0057bbe0(this_ptr,iVar6);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c2c,0);
      }
      else if (local_28 < 0x38) {
        iVar6 = 0;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_fd4);
        if (0 < g_MasterLightCount) {
          iVar4 = 0;
          do {
            piVar2 = (int *)((int)g_MasterLightList + iVar4);
            iVar4 = iVar4 + 4;
            iVar6 = iVar6 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_fd4.base,(char *)(*piVar2 + 0x40));
          } while (iVar6 < g_MasterLightCount);
        }
        iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_fd4,"Clone which light",-1,0);
        if (-1 < iVar6) {
          iVar6 = core_setedit_cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550(this_ptr,iVar6);
          core_setedit_cpp_CDemonSet_cloneLight_FUN_0057b600(this_ptr,iVar6);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_fd4,0);
      }
      else if (local_28 == 0x53) {
        if (this_ptr->geometry_filename[0] == '\0') {
          local_134[0] = '\0';
        }
        else {
          engine_dosio_c_splitPath_FUN_00481f20
                    (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,local_134,(char *)0x0);
          pcVar6 = ".set";
          iVar6 = -1;
          pcVar9 = local_134;
          do {
            pcVar9 = pcVar9;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar9;
          } while (cVar2 != '\0');
          pcVar7 = pcVar9 + -1;
          do {
            cVar3 = *pcVar6;
            *pcVar7 = cVar3;
            if (cVar3 == '\0') break;
            cVar3 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar3;
            pcVar7 = pcVar7 + 2;
          } while (cVar3 != '\0');
          strupr(local_134);
        }
        iVar6 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                          (g_CEditorToolsPtr,"Save set","models","set",
                           local_134,1);
        if (iVar6 != 0) {
          core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,local_134);
        }
      }
    }
    if (((g_MouseButtonFlags.bytes[0] & 1) != 0) && (local_24 != -1)) {
      iVar6 = core_setedit_cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550(this_ptr,local_24);
      core_setedit_cpp_CDemonSet_editSpotLight_FUN_0057b500(this_ptr,iVar6);
    }
    if (local_28 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
      core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
      g_CDemonLightInstance.light_enabled_flag = 0;
      return;
    }
  } while( true );
}
