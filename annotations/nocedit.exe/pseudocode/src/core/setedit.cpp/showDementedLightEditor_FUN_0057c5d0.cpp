// Name: core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0
// Address: 0057c5d0
// Address Range: [[0057c5d0, 0057ce71]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_showDementedLightEditor_FUN_0057c5d0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_showDementedLightEditor_FUN_0057c5d0(CDemonSet *this_ptr)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte bVar11;
  float in_stack_fffff028;
  uint in_stack_fffff02c;
  uint in_stack_fffff030;
  char **in_stack_fffff034;
  CStrList_vtable *in_stack_fffff038;
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
  
  bVar11 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  local_2c = this_ptr->geometry_filename;
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
        iVar8 = 0;
        do {
          core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                    (*(CDemonLight **)((int)g_MasterLightList + local_18),iVar8,iVar5,iVar7);
          if ((((iVar8 <= g_MouseX) && (g_MouseX < iVar8 + iVar7)) && (iVar5 <= g_MouseY)) &&
             (g_MouseY < iVar5 + iVar7)) {
            local_24 = local_1c;
            local_34 = iVar8 + iVar7 + -1;
            g_ActiveRenderColor = 1;
            local_30 = iVar5 + iVar7 + -1;
            engine_2d_c_drawLine_FUN_004011b0(iVar8,iVar5,local_34,iVar5);
            engine_2d_c_drawLine_FUN_004011b0(iVar8,local_30,local_34,local_30);
            engine_2d_c_drawLine_FUN_004011b0(iVar8,iVar5,iVar8,local_30);
            engine_2d_c_drawLine_FUN_004011b0(local_34,iVar5,local_34,local_30);
          }
          iVar3 = iVar8 + iVar7;
          engine_2d_c_drawText_FUN_00401fd0
                    ((char *)(*(int *)((int)g_MasterLightList + local_18) + 0x40),iVar8,iVar5);
          if (g_WindowWidth < iVar3 + iVar7) {
            iVar5 = iVar5 + iVar7;
            iVar3 = 0;
          }
          local_18 = local_18 + 4;
          local_1c = local_1c + 1;
          iVar8 = iVar3;
        } while (local_1c < g_MasterLightCount);
      }
    }
    iVar7 = 0x16;
    iVar5 = 0;
    iVar8 = 0;
    engine_2d_c_drawText_FUN_00401fd0("Demented Light Editor",0,0);
    if (0 < g_MasterLightCount) {
      local_20 = 0;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_134,"%2d. %s",iVar8,
                   *(int *)((int)g_MasterLightList + local_20) + 0x40);
        engine_2d_c_drawText_FUN_00401fd0(local_134,iVar5,iVar7);
        iVar7 = iVar7 + 0xb;
        if (g_WindowHeight / 3 + -0x16 <= iVar7) {
          iVar7 = 0x16;
          iVar5 = iVar5 + g_WindowWidth / 6;
        }
        local_20 = local_20 + 4;
        iVar8 = iVar8 + 1;
      } while (iVar8 < g_MasterLightCount);
    }
    iVar5 = g_WindowHeight / 3;
    if (this_ptr->light_count < 200) {
      engine_2d_c_drawText_FUN_00401fd0("1.  Add spot light",0,iVar5);
    }
    if (0 < this_ptr->light_count) {
      engine_2d_c_drawText_FUN_00401fd0("2.  Position spot light",0,iVar5 + 0xb);
    }
    engine_2d_c_drawText_FUN_00401fd0
              ("3.  Delete light",
               (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                    (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2,iVar5);
    iVar7 = iVar5 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0
              ("4.  Precompute visiblity",
               (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                    (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2,iVar7);
    engine_2d_c_drawText_FUN_00401fd0("5.  Set ambient light",g_WindowWidth / 2,iVar5);
    engine_2d_c_drawText_FUN_00401fd0("6.  Edit properties",g_WindowWidth / 2,iVar7);
    engine_2d_c_drawText_FUN_00401fd0
              ("7.  Clone a light",
               ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                     (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,iVar5);
    engine_2d_c_drawText_FUN_00401fd0
              ("S.  Save set",
               ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                     (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,iVar7);
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar5 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (local_28 < 0x34) {
        if (local_28 < 0x32) {
          if (local_28 == 0x31) {
            core_setedit_cpp_FUN_0057b410();
          }
        }
        else if (local_28 < 0x33) {
          iVar5 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4dc);
          if (0 < g_MasterLightCount) {
            iVar7 = 0;
            do {
              piVar1 = (int *)((int)g_MasterLightList + iVar7);
              iVar7 = iVar7 + 4;
              iVar5 = iVar5 + 1;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4dc.base,(char *)(*piVar1 + 0x40))
              ;
            } while (iVar5 < g_MasterLightCount);
          }
          iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_4dc,"Position spot light",-1,0);
          if (-1 < iVar5) {
            core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
            core_setedit_cpp_FUN_0057b500();
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_4dc,0,(uint)in_stack_fffff028,in_stack_fffff02c,in_stack_fffff030,
                     (uint)in_stack_fffff034,(uint)in_stack_fffff038);
        }
        else {
          iVar5 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_884);
          if (0 < g_MasterLightCount) {
            iVar7 = 0;
            do {
              piVar1 = (int *)((int)g_MasterLightList + iVar7);
              iVar7 = iVar7 + 4;
              iVar5 = iVar5 + 1;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_884.base,(char *)(*piVar1 + 0x40))
              ;
            } while (iVar5 < g_MasterLightCount);
          }
          iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_884,"Delete spot light",-1,0);
          if (-1 < iVar5) {
            iVar5 = core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
            iVar5 = this_ptr->lights[iVar5].light_type;
            core_setedit_cpp_FUN_0057b910();
            if (iVar5 == 0) {
              core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
              core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
            }
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_884,0,(uint)in_stack_fffff028,in_stack_fffff02c,in_stack_fffff030,
                     (uint)in_stack_fffff034,(uint)in_stack_fffff038);
        }
      }
      else if (local_28 < 0x35) {
        core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
        iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Precompute light visibility?");
        if (iVar5 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(this_ptr);
        }
        core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      }
      else if (local_28 < 0x36) {
        in_stack_fffff028 = this_ptr->min_ambient_value * 100.0f;
        iVar5 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,"Set ambient level (0..100)",
                           (float *)&stack0xfffff028,1,0.0,100.0,1);
        if (iVar5 != 0) {
          this_ptr->min_ambient_value = in_stack_fffff028 * (float)0.01;
          iVar5 = 0;
          pCVar4 = this_ptr;
          if (0 < this_ptr->camera_count) {
            do {
              iVar5 = iVar5 + 1;
              pCVar4->cameras[0].ambient_value = this_ptr->min_ambient_value;
              pCVar4 = (CDemonSet *)&pCVar4->cameras[0].unk4;
            } while (iVar5 < this_ptr->camera_count);
          }
        }
      }
      else if (local_28 < 0x37) {
        iVar5 = 0;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_c2c);
        if (0 < g_MasterLightCount) {
          iVar7 = 0;
          do {
            piVar1 = (int *)((int)g_MasterLightList + iVar7);
            iVar7 = iVar7 + 4;
            iVar5 = iVar5 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c2c.base,(char *)(*piVar1 + 0x40));
          } while (iVar5 < g_MasterLightCount);
        }
        iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_c2c,"Edit spot light properties",-1,0);
        if (-1 < iVar5) {
          core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
          core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0();
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_c2c,0,(uint)in_stack_fffff028,in_stack_fffff02c,in_stack_fffff030,
                   (uint)in_stack_fffff034,(uint)in_stack_fffff038);
      }
      else if (local_28 < 0x38) {
        iVar5 = 0;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff02c);
        if (0 < g_MasterLightCount) {
          iVar7 = 0;
          do {
            piVar1 = (int *)((int)g_MasterLightList + iVar7);
            iVar7 = iVar7 + 4;
            iVar5 = iVar5 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffff02c,(char *)(*piVar1 + 0x40));
          } while (iVar5 < g_MasterLightCount);
        }
        iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff02c,"Clone which light",-1,0);
        if (-1 < iVar5) {
          core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
          core_setedit_cpp_FUN_0057b600();
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff02c,0,(uint)in_stack_fffff028,in_stack_fffff02c,
                   in_stack_fffff030,(uint)in_stack_fffff034,(uint)in_stack_fffff038);
      }
      else if (local_28 == 0x53) {
        if (this_ptr->geometry_filename[0] == '\0') {
          local_134[0] = '\0';
        }
        else {
          engine_dosio_c_splitPath_FUN_00481f20
                    (local_2c,(char *)0x0,(char *)0x0,local_134,(char *)0x0);
          pcVar6 = ".set";
          iVar5 = -1;
          pcVar10 = local_134;
          do {
            pcVar9 = pcVar10;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar9 = pcVar10 + (uint)bVar11 * -2 + 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar9;
          } while (cVar2 != '\0');
          pcVar9 = pcVar9 + -1;
          do {
            cVar2 = *pcVar6;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
          crt_string_c_strupr_FUN_00600770(local_134);
        }
        iVar5 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                          (g_CEditorToolsPtr,"Save set","models",0x647c8f,
                           (int)local_134);
        if (iVar5 != 0) {
          core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,local_134);
        }
      }
    }
    if ((((byte)g_MouseButtonFlags & 1) != 0) && (local_24 != -1)) {
      core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
      core_setedit_cpp_FUN_0057b500();
    }
    if (local_28 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
      g_CDemonLightInstance.light_enabled_flag = 0;
      return;
    }
  } while( true );
}
