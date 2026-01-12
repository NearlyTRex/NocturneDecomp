// Name: core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0
// Address: 0057c5d0
// Address Range: [[0057c5d0, 0057ce71]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_showDementedLightEditor_FUN_0057c5d0(CDemonSet *this_ptr)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  char **d5;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  CStrList_vtable *d6;
  CDemonSet *pCVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  float fVar12;
  uint d3;
  char *pcVar13;
  CPickList CStack_c28;
  CPickList CStack_880;
  CPickList CStack_4d8;
  char acStack_130 [256];
  int local_30;
  int local_2c;
  char *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  bVar11 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  local_28 = this_ptr->geometry_filename;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_1c = -1;
    if (0x1df < g_WindowHeight) {
      iVar7 = 0x120;
      iVar9 = 0x40;
      iVar4 = 0;
      if (0x1e < g_MasterLightCount) {
        iVar7 = 0xc0;
        iVar9 = 0x30;
      }
      iStack_14 = 0;
      if (0 < g_MasterLightCount) {
        do {
          core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                    (g_MasterLightList[0],iVar4,iVar7,iVar9);
          if ((((iVar4 <= g_MouseX) && (g_MouseX < iVar4 + iVar9)) && (iVar7 <= g_MouseY)) &&
             (g_MouseY < iVar7 + iVar9)) {
            local_20 = local_18;
            local_30 = iVar4 + iVar9 + -1;
            g_ActiveRenderColor = 1;
            local_2c = iVar7 + iVar9 + -1;
            engine_2d_c_drawLine_FUN_004011b0(iVar4,iVar7,local_30,iVar7);
            engine_2d_c_drawLine_FUN_004011b0(iVar4,local_2c,local_30,local_2c);
            engine_2d_c_drawLine_FUN_004011b0(iVar4,iVar7,iVar4,local_2c);
            engine_2d_c_drawLine_FUN_004011b0(local_30,iVar7,local_30,local_2c);
          }
          iVar5 = iVar4 + iVar9;
          engine_2d_c_drawText_FUN_00401fd0
                    ((char *)(*(int *)((int)g_MasterLightList + iStack_14) + 0x40),iVar4,iVar7);
          if (g_WindowWidth < iVar5 + iVar9) {
            iVar7 = iVar7 + iVar9;
            iVar5 = 0;
          }
          iStack_14 = iStack_14 + 4;
          local_18 = local_18 + 1;
          iVar4 = iVar5;
        } while (local_18 < g_MasterLightCount);
      }
    }
    iVar7 = 0x16;
    iVar4 = 0;
    iVar9 = 0;
    engine_2d_c_drawText_FUN_00401fd0("Demented Light Editor",0,0);
    if (0 < g_MasterLightCount) {
      local_1c = 0;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_130,"%2d. %s",iVar9,
                   *(int *)((int)g_MasterLightList + local_1c) + 0x40);
        engine_2d_c_drawText_FUN_00401fd0(acStack_130,iVar4,iVar7);
        iVar7 = iVar7 + 0xb;
        if (g_WindowHeight / 3 + -0x16 <= iVar7) {
          iVar7 = 0x16;
          iVar4 = iVar4 + g_WindowWidth / 6;
        }
        local_1c = local_1c + 4;
        iVar9 = iVar9 + 1;
      } while (iVar9 < g_MasterLightCount);
    }
    iVar4 = g_WindowHeight / 3;
    if (this_ptr->light_count < 200) {
      engine_2d_c_drawText_FUN_00401fd0("1.  Add spot light",0,iVar4);
    }
    if (0 < this_ptr->light_count) {
      engine_2d_c_drawText_FUN_00401fd0("2.  Position spot light",0,iVar4 + 0xb);
    }
    engine_2d_c_drawText_FUN_00401fd0
              ("3.  Delete light",
               (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                    (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2,iVar4);
    d6 = (CStrList_vtable *)(iVar4 + 0xb);
    engine_2d_c_drawText_FUN_00401fd0
              ("4.  Precompute visiblity",
               (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                    (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2,(int)d6);
    engine_2d_c_drawText_FUN_00401fd0("5.  Set ambient light",g_WindowWidth / 2,iVar4);
    engine_2d_c_drawText_FUN_00401fd0("6.  Edit properties",g_WindowWidth / 2,(int)d6);
    fVar12 = 8.061922e-39;
    engine_2d_c_drawText_FUN_00401fd0
              ("7.  Clone a light",
               ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                     (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,iVar4);
    d5 = (char **)(((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                         (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2);
    pcVar13 = "S.  Save set";
    d3 = 0x57c98f;
    engine_2d_c_drawText_FUN_00401fd0("S.  Save set",(int)d5,(int)d6);
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar4 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (local_24 < 0x34) {
        if (local_24 < 0x32) {
          if (local_24 == 0x31) {
            core_setedit_cpp_FUN_0057b410();
          }
        }
        else if (local_24 < 0x33) {
          iVar4 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_4d8);
          if (0 < g_MasterLightCount) {
            iVar7 = 0;
            do {
              piVar1 = (int *)((int)g_MasterLightList + iVar7);
              iVar7 = iVar7 + 4;
              iVar4 = iVar4 + 1;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        (&CStack_4d8.base_strlist,(char *)(*piVar1 + 0x40));
            } while (iVar4 < g_MasterLightCount);
          }
          iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&CStack_4d8,"Position spot light",-1,0);
          if (-1 < iVar4) {
            core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
            core_setedit_cpp_FUN_0057b500();
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_4d8,0,(uint)fVar12,d3,(uint)pcVar13,(uint)d5,(uint)d6);
        }
        else {
          iVar4 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_880);
          if (0 < g_MasterLightCount) {
            iVar7 = 0;
            do {
              piVar1 = (int *)((int)g_MasterLightList + iVar7);
              iVar7 = iVar7 + 4;
              iVar4 = iVar4 + 1;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        (&CStack_880.base_strlist,(char *)(*piVar1 + 0x40));
            } while (iVar4 < g_MasterLightCount);
          }
          iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&CStack_880,"Delete spot light",-1,0);
          if (-1 < iVar4) {
            iVar4 = core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
            iVar4 = this_ptr->lights[iVar4].light_type;
            core_setedit_cpp_FUN_0057b910();
            if (iVar4 == 0) {
              core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
              core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
            }
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_880,0,(uint)fVar12,d3,(uint)pcVar13,(uint)d5,(uint)d6);
        }
      }
      else if (local_24 < 0x35) {
        core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
        iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Precompute light visibility?");
        if (iVar4 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(this_ptr);
        }
        core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      }
      else if (local_24 < 0x36) {
        fVar12 = this_ptr->min_ambient_value * 100f;
        iVar4 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,"Set ambient level (0..100)",
                           (float *)&stack0xfffff02c,true,0.0,100.0,true);
        if (iVar4 != 0) {
          this_ptr->min_ambient_value = fVar12 * (float)0.01;
          iVar4 = 0;
          pCVar6 = this_ptr;
          if (0 < this_ptr->camera_count) {
            do {
              iVar4 = iVar4 + 1;
              pCVar6->cameras[0].ambient_value = this_ptr->min_ambient_value;
              pCVar6 = (CDemonSet *)&pCVar6->cameras[0].field17_0x1a0;
            } while (iVar4 < this_ptr->camera_count);
          }
        }
      }
      else if (local_24 < 0x37) {
        iVar4 = 0;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_c28);
        if (0 < g_MasterLightCount) {
          iVar7 = 0;
          do {
            piVar1 = (int *)((int)g_MasterLightList + iVar7);
            iVar7 = iVar7 + 4;
            iVar4 = iVar4 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      (&CStack_c28.base_strlist,(char *)(*piVar1 + 0x40));
          } while (iVar4 < g_MasterLightCount);
        }
        iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&CStack_c28,"Edit spot light properties",-1,0);
        if (-1 < iVar4) {
          core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
          core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0();
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_c28,0,(uint)fVar12,d3,(uint)pcVar13,(uint)d5,(uint)d6);
      }
      else if (local_24 < 0x38) {
        iVar4 = 0;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff030);
        if (0 < g_MasterLightCount) {
          iVar7 = 0;
          do {
            piVar1 = (int *)((int)g_MasterLightList + iVar7);
            iVar7 = iVar7 + 4;
            iVar4 = iVar4 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffff030,(char *)(*piVar1 + 0x40));
          } while (iVar4 < g_MasterLightCount);
        }
        iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff030,"Clone which light",-1,0);
        if (-1 < iVar4) {
          core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
          core_setedit_cpp_FUN_0057b600();
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff030,0,(uint)fVar12,d3,(uint)pcVar13,(uint)d5,(uint)d6);
      }
      else if (local_24 == 0x53) {
        if (this_ptr->geometry_filename[0] == '\0') {
          acStack_130[0] = '\0';
        }
        else {
          engine_dosio_c_splitPath_FUN_00481f20
                    (local_28,(char *)0x0,(char *)0x0,acStack_130,(char *)0x0);
          pcVar8 = ".set";
          iVar4 = -1;
          pcVar13 = acStack_130;
          do {
            pcVar10 = pcVar13;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar10 = pcVar13 + (uint)bVar11 * -2 + 1;
            cVar2 = *pcVar13;
            pcVar13 = pcVar10;
          } while (cVar2 != '\0');
          pcVar10 = pcVar10 + -1;
          do {
            cVar2 = *pcVar8;
            *pcVar10 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar10[1] = cVar2;
            pcVar10 = pcVar10 + 2;
          } while (cVar2 != '\0');
          crt_string_c_strupr_FUN_00600770(acStack_130);
        }
        bVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                          (g_CEditorToolsPtr,"Save set","models",0x647c8f,
                           SUB41 /* extract 2-byte value */(acStack_130,0));
        if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) != 0) {
          core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,acStack_130);
        }
      }
    }
    if ((((byte)g_MouseButtonFlags & 1) != 0) && (local_20 != -1)) {
      core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
      core_setedit_cpp_FUN_0057b500();
    }
    if (local_24 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
      g_CDemonLightInstance.light_enabled_flag = 0;
      return;
    }
  } while( true );
}
