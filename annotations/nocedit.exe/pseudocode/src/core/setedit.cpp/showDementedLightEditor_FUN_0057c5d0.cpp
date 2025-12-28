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
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  CDemonSet *pCVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar12;
  char *in_stack_00000010;
  float fVar13;
  CPickList *in_stack_fffff074;
  CStrList_vtable *in_stack_fffff078;
  uint in_stack_fffff07c;
  char **in_stack_fffff080;
  CStrList_vtable *in_stack_fffff084;
  uint in_stack_fffff088;
  uint in_stack_fffff08c;
  byte auStack_bf0 [16];
  byte auStack_be0 [924];
  byte auStack_844 [932];
  byte auStack_4a0 [16];
  CPickList CStack_490;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  char *local_28;
  char *local_20;
  int local_1c;
  int local_18;
  uint uStack_14;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar11;
  
  bVar12 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  local_20 = this_ptr->geometry_filename;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    uStack_14 = 0xffffffff;
    if (0x1df < g_WindowHeight) {
      iVar7 = 0x120;
      iVar9 = 0x40;
      if (0x1e < g_MasterLightCount) {
        iVar7 = 0xc0;
        iVar9 = 0x30;
      }
      iVar14 = 0;
      if (0 < g_MasterLightCount) {
        iVar16 = 0;
        iVar15 = 0;
        do {
          core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                    (*(CDemonLight **)((int)g_MasterLightList + iVar16),iVar15,iVar7,iVar9);
          if ((((iVar15 <= g_MouseX) && (g_MouseX < iVar15 + iVar9)) && (iVar7 <= g_MouseY)) &&
             (g_MouseY < iVar7 + iVar9)) {
            local_28 = local_20;
            iStack_38 = iVar15 + iVar9 + -1;
            g_ActiveRenderColor = 1;
            local_34 = iVar7 + iVar9 + -1;
            engine_2d_c_drawLine_FUN_004011b0(iVar15,iVar7,iStack_38,iVar7);
            engine_2d_c_drawLine_FUN_004011b0(iVar15,local_30,local_34,local_30);
            engine_2d_c_drawLine_FUN_004011b0(iVar15,iVar7,iVar15,local_2c);
            engine_2d_c_drawLine_FUN_004011b0(local_2c,iVar7,local_2c,(int)local_28);
          }
          iVar5 = iVar15 + iVar9;
          engine_2d_c_drawText_FUN_00401fd0
                    ((char *)(*(int *)((int)g_MasterLightList + iVar14) + 0x40),iVar15,iVar7);
          if (g_WindowWidth < iVar5 + iVar9) {
            iVar7 = iVar7 + iVar9;
            iVar5 = 0;
          }
          iVar16 = iVar16 + 4;
          iVar14 = iVar14 + 1;
          iVar15 = iVar5;
        } while (iVar14 < g_MasterLightCount);
      }
    }
    iVar9 = 0x16;
    iVar7 = 0;
    iVar14 = 0;
    engine_2d_c_drawText_FUN_00401fd0("Demented Light Editor",0,0);
    if (0 < g_MasterLightCount) {
      iVar15 = 0;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_490.cancel_button.button_text + 0x94,"%2d. %s",iVar14,
                   *(int *)((int)g_MasterLightList + iVar15) + 0x40);
        engine_2d_c_drawText_FUN_00401fd0(CStack_490.cancel_button.button_text + 0x84,iVar7,iVar9);
        iVar9 = iVar9 + 0xb;
        if (g_WindowHeight / 3 + -0x16 <= iVar9) {
          iVar9 = 0x16;
          iVar7 = iVar7 + g_WindowWidth / 6;
        }
        iVar15 = iVar15 + 4;
        iVar14 = iVar14 + 1;
      } while (iVar14 < g_MasterLightCount);
    }
    iVar7 = g_WindowHeight / 3;
    if (this_ptr->light_count < 200) {
      engine_2d_c_drawText_FUN_00401fd0("1.  Add spot light",0,iVar7);
    }
    if (0 < this_ptr->light_count) {
      engine_2d_c_drawText_FUN_00401fd0("2.  Position spot light",0,iVar7 + 0xb);
    }
    engine_2d_c_drawText_FUN_00401fd0
              ("3.  Delete light",
               (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                    (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2,iVar7);
    iVar9 = iVar7 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0
              ("4.  Precompute visiblity",
               (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                    (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2,iVar9);
    fVar13 = 8.06181e-39;
    engine_2d_c_drawText_FUN_00401fd0("5.  Set ambient light",g_WindowWidth / 2,iVar7);
    engine_2d_c_drawText_FUN_00401fd0("6.  Edit properties",g_WindowWidth / 2,iVar9);
    engine_2d_c_drawText_FUN_00401fd0
              ("7.  Clone a light",
               ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                     (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,iVar7);
    engine_2d_c_drawText_FUN_00401fd0
              ("S.  Save set",
               ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -4) -
                     (uint)((g_WindowWidth >> 0x1f) << 1 < 0)) >> 2) + g_WindowWidth / 2,iVar9);
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar7 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar7 == 0) {
      in_stack_00000010 = (char *)0x0;
    }
    else {
      uVar4 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (uVar4 < 0x34) {
        if (uVar4 < 0x32) {
          if (uVar4 == 0x31) {
            core_setedit_cpp_FUN_0057b410();
          }
        }
        else if (uVar4 < 0x33) {
          iVar7 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_4a0);
          if (0 < g_MasterLightCount) {
            iVar9 = 0;
            do {
              piVar1 = (int *)((int)g_MasterLightList + iVar9);
              iVar9 = iVar9 + 4;
              iVar7 = iVar7 + 1;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)(auStack_4a0 + 4),(char *)(*piVar1 + 0x40));
            } while (iVar7 < g_MasterLightCount);
          }
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)(auStack_4a0 + 4),"Position spot light",-1,0);
          if (-1 < iVar7) {
            core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
            core_setedit_cpp_FUN_0057b500();
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_490,0,(uint)in_stack_fffff074,(uint)in_stack_fffff078,in_stack_fffff07c
                     ,(uint)in_stack_fffff080,(uint)in_stack_fffff084);
        }
        else {
          iVar7 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_be0 + 0x398));
          if (0 < g_MasterLightCount) {
            iVar9 = 0;
            do {
              piVar1 = (int *)((int)g_MasterLightList + iVar9);
              iVar9 = iVar9 + 4;
              iVar7 = iVar7 + 1;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)auStack_844,(char *)(*piVar1 + 0x40));
            } while (iVar7 < g_MasterLightCount);
          }
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)auStack_844,"Delete spot light",-1,0);
          if (-1 < iVar7) {
            iVar7 = core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
            iVar7 = this_ptr->lights[iVar7].light_type;
            core_setedit_cpp_FUN_0057b910();
            if (iVar7 == 0) {
              core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
              core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
            }
          }
          in_stack_fffff078 = (CStrList_vtable *)0x0;
          in_stack_fffff074 = (CPickList *)(auStack_844 + 0x14);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (in_stack_fffff074,0,in_stack_fffff07c,(uint)in_stack_fffff080,
                     (uint)in_stack_fffff084,in_stack_fffff088,in_stack_fffff08c);
        }
      }
      else if (uVar4 < 0x35) {
        core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
        iVar7 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Precompute light visibility?");
        if (iVar7 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(this_ptr);
        }
        core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      }
      else if (uVar4 < 0x36) {
        iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,"Set ambient level (0..100)",
                           (float *)&stack0xfffff064,true,0.0,100.0,true);
        if (iVar7 != 0) {
          this_ptr->min_ambient_value = fVar13 * (float)0.01;
          iVar7 = 0;
          pCVar6 = this_ptr;
          if (0 < this_ptr->camera_count) {
            do {
              iVar7 = iVar7 + 1;
              pCVar6->cameras[0].ambient_value = this_ptr->min_ambient_value;
              pCVar6 = (CDemonSet *)&pCVar6->cameras[0].field17_0x1a0;
            } while (iVar7 < this_ptr->camera_count);
          }
        }
      }
      else if (uVar4 < 0x37) {
        iVar7 = 0;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_bf0);
        if (0 < g_MasterLightCount) {
          iVar9 = 0;
          do {
            piVar1 = (int *)((int)g_MasterLightList + iVar9);
            iVar9 = iVar9 + 4;
            iVar7 = iVar7 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)(auStack_bf0 + 4),(char *)(*piVar1 + 0x40));
          } while (iVar7 < g_MasterLightCount);
        }
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)(auStack_bf0 + 4),"Edit spot light properties",-1,0);
        if (-1 < iVar7) {
          core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
          core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0();
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_be0,0,(uint)in_stack_fffff074,(uint)in_stack_fffff078,
                   in_stack_fffff07c,(uint)in_stack_fffff080,(uint)in_stack_fffff084);
      }
      else if (uVar4 < 0x38) {
        iVar7 = 0;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff068);
        if (0 < g_MasterLightCount) {
          iVar9 = 0;
          do {
            piVar1 = (int *)((int)g_MasterLightList + iVar9);
            iVar9 = iVar9 + 4;
            iVar7 = iVar7 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffff06c,(char *)(*piVar1 + 0x40));
          } while (iVar7 < g_MasterLightCount);
        }
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff06c,"Clone which light",-1,0);
        if (-1 < iVar7) {
          core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
          core_setedit_cpp_FUN_0057b600();
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff078,0,(uint)in_stack_fffff074,(uint)in_stack_fffff078,
                   in_stack_fffff07c,(uint)in_stack_fffff080,(uint)in_stack_fffff084);
      }
      else if (uVar4 == 0x53) {
        if (this_ptr->geometry_filename[0] == '\0') {
          CStack_490.cancel_button.button_text[0xbc] = '\0';
        }
        else {
          engine_dosio_c_splitPath_FUN_00481f20
                    (in_stack_00000010,(char *)0x0,(char *)0x0,
                     CStack_490.cancel_button.button_text + 0xbc,(char *)0x0);
          pcVar8 = ".set";
          iVar7 = -1;
          pcVar11 = CStack_490.cancel_button.button_text + 0xc0;
          do {
            pcVar10 = pcVar11;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar10 = pcVar11 + (uint)bVar12 * -2 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar10;
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
          crt_string_c_strupr_FUN_00600770(CStack_490.cancel_button.button_text + 0xc0);
        }
        bVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                          (g_CEditorToolsPtr,"Save set","models",0x647c8f,
                           (bool)((char)&CStack_490 + -0x60));
        if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) != 0) {
          core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,(char *)&CStack_490.selection_state)
          ;
        }
      }
    }
    if ((((byte)g_MouseButtonFlags & 1) != 0) && (local_18 != -1)) {
      core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
      core_setedit_cpp_FUN_0057b500();
    }
    if (local_1c == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
      g_CDemonLightInstance.light_enabled_flag = 0;
      return;
    }
  } while( true );
}
