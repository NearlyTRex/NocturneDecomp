// Name: core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0
// Address: 0057c5d0
// Address Range: [[0057c5d0, 0057ce71]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584b82 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Demented_Light_Editor_00647b43
//   TerminatedCString s_s_2d_s_00647b59
//   TerminatedCString s_s_1_Add_spot_light_00647b61
//   TerminatedCString s_s_2_Position_spot_light_00647b74
//   TerminatedCString s_s_3_Delete_light_00647b8c
//   TerminatedCString s_s_4_Precompute_visiblity_00647b9d
//   TerminatedCString s_s_5_Set_ambient_light_00647bb6
//   TerminatedCString s_s_6_Edit_properties_00647bcc
//   TerminatedCString s_s_7_Clone_a_light_00647be0
//   TerminatedCString s_S_Save_set_00647bf2
//   TerminatedCString s_Position_spot_light_00647bff
//   TerminatedCString s_Delete_spot_light_00647c13
//   TerminatedCString s_Precompute_light_visibil_00647c25
//   TerminatedCString s_Set_ambient_level_0_100_00647c42
//   TerminatedCString s_Edit_spot_light_properti_00647c5d
//   TerminatedCString s_Clone_which_light_00647c78
//   TerminatedCString s_set_00647c8a
//   undefined4 DAT_00647c8b
//   undefined4 DAT_00647c8c
//   undefined4 DAT_00647c8d
//   TerminatedCString s_set_00647c8f
//   TerminatedCString s_models_00647c93
//   TerminatedCString s_Save_set_00647c9a
//   float FLOAT_00647ca5 = 100
//   double DOUBLE_00647cad = 0.0100000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   int g_ActiveRenderColor
//   undefined4 g_CDemonLightInstance.light_enabled_flag
//   CGame g_CGameInstance
//   void* g_CKeysPtr
//   int g_MasterLightCount
//   CDemonLight*[96] g_MasterLightList
//   undefined4 DAT_03276db4
// Function calls:
//   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
//   core_game.cpp_CGame_setGameRes_FUN_004dade0
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
//   core_setedit.cpp_FUN_0057b410
//   core_setedit.cpp_FUN_0057b500
//   core_setedit.cpp_FUN_0057b600
//   core_setedit.cpp_FUN_0057b910
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
//   core_setedit.cpp_ResolveMasterLights_FUN_0057c550
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strupr_FUN_00600770
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

void __cdecl core_setedit_cpp_showDementedLightEditor_FUN_0057c5d0(CDemonSet *this_ptr)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined3 extraout_var_00;
  int iVar5;
  CDemonSet *pCVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar12;
  char *in_stack_00000010;
  int in_stack_00000034;
  CDemonSet *in_stack_fffff07c;
  CStrList_vtable *in_stack_fffff080;
  uint in_stack_fffff084;
  char **in_stack_fffff088;
  CStrList_vtable *in_stack_fffff08c;
  undefined1 auStack_bf0 [24];
  undefined1 auStack_bd8 [916];
  undefined1 auStack_844 [932];
  undefined1 auStack_4a0 [24];
  CPickList CStack_488;
  char acStack_e0 [168];
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  char *local_28;
  char *local_20;
  int local_1c;
  undefined4 uStack_14;
  int iVar13;
  int iVar14;
  int iVar15;
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
      iVar13 = 0;
      if (0 < g_MasterLightCount) {
        iVar15 = 0;
        iVar14 = 0;
        do {
          core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                    (*(CDemonLight **)((int)g_MasterLightList + iVar15),iVar14,iVar7,iVar9);
          if ((((iVar14 <= g_MouseX) && (g_MouseX < iVar14 + iVar9)) && (iVar7 <= g_MouseY)) &&
             (g_MouseY < iVar7 + iVar9)) {
            local_28 = local_20;
            iStack_38 = iVar14 + iVar9 + -1;
            g_ActiveRenderColor = 1;
            local_34 = iVar7 + iVar9 + -1;
            engine_2d_c_drawLine_FUN_004011b0(iVar14,iVar7,iStack_38,iVar7);
            engine_2d_c_drawLine_FUN_004011b0(iVar14,local_30,local_34,local_30);
            engine_2d_c_drawLine_FUN_004011b0(iVar14,iVar7,iVar14,local_2c);
            engine_2d_c_drawLine_FUN_004011b0(local_2c,iVar7,local_2c,(int)local_28);
          }
          iVar5 = iVar14 + iVar9;
          engine_2d_c_drawText_FUN_00401fd0
                    ((char *)(*(int *)((int)g_MasterLightList + iVar13) + 0x40),iVar14,iVar7);
          if (g_WindowWidth < iVar5 + iVar9) {
            iVar7 = iVar7 + iVar9;
            iVar5 = 0;
          }
          iVar15 = iVar15 + 4;
          iVar13 = iVar13 + 1;
          iVar14 = iVar5;
        } while (iVar13 < g_MasterLightCount);
      }
    }
    iVar9 = 0x16;
    iVar7 = 0;
    iVar13 = 0;
    engine_2d_c_drawText_FUN_00401fd0("Demented Light Editor",0,0);
    if (0 < g_MasterLightCount) {
      iVar14 = 0;
      do {
        pcVar11 = CStack_488.cancel_button.button_text + 0x8c;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (pcVar11,"%2d. %s",pcVar11,"%2d. %s",iVar13,
                   *(int *)((int)g_MasterLightList + iVar14) + 0x40);
        engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0x88,iVar7,iVar9);
        iVar9 = iVar9 + 0xb;
        if (g_WindowHeight / 3 + -0x16 <= iVar9) {
          iVar9 = 0x16;
          iVar7 = iVar7 + g_WindowWidth / 6;
        }
        iVar14 = iVar14 + 4;
        iVar13 = iVar13 + 1;
      } while (iVar13 < g_MasterLightCount);
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
    bVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (CONCAT31(extraout_var,bVar3) == 0) {
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
                        ((CStrList *)(auStack_4a0 + 0xc),(char *)(*piVar1 + 0x40));
            } while (iVar7 < g_MasterLightCount);
          }
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)(auStack_4a0 + 0xc),"Position spot light",-1,0);
          if (-1 < iVar7) {
            core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
            core_setedit_cpp_FUN_0057b500();
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_488,0,(uint)in_stack_fffff07c,(uint)in_stack_fffff080,in_stack_fffff084
                     ,(uint)in_stack_fffff088,(uint)in_stack_fffff08c);
        }
        else {
          iVar7 = 0;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_bd8 + 0x390));
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
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)(auStack_844 + 0x14),0,(uint)in_stack_fffff07c,
                     (uint)in_stack_fffff080,in_stack_fffff084,(uint)in_stack_fffff088,
                     (uint)in_stack_fffff08c);
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
          this_ptr->min_ambient_value = (float)in_stack_fffff080 * (float)DOUBLE_00647cad;
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
                      ((CStrList *)(auStack_bf0 + 0xc),(char *)(*piVar1 + 0x40));
          } while (iVar7 < g_MasterLightCount);
        }
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)(auStack_bf0 + 0xc),"Edit spot light properties",-1,0
                          );
        if (-1 < iVar7) {
          core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
          core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0();
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_bd8,0,(uint)in_stack_fffff07c,(uint)in_stack_fffff080,
                   in_stack_fffff084,(uint)in_stack_fffff088,(uint)in_stack_fffff08c);
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
                      ((CStrList *)&stack0xfffff074,(char *)(*piVar1 + 0x40));
          } while (iVar7 < g_MasterLightCount);
        }
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff074,"Clone which light",-1,0);
        if (-1 < iVar7) {
          core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
          core_setedit_cpp_FUN_0057b600();
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff080,0,(uint)in_stack_fffff07c,(uint)in_stack_fffff080,
                   in_stack_fffff084,(uint)in_stack_fffff088,(uint)in_stack_fffff08c);
      }
      else if (uVar4 == 0x53) {
        if (this_ptr->geometry_filename[0] == '\0') {
          CStack_488.cancel_button.button_text[0xb4] = '\0';
        }
        else {
          engine_dosio_c_splitPath_FUN_00481f20
                    (in_stack_00000010,(char *)0x0,(char *)0x0,
                     CStack_488.cancel_button.button_text + 0xb4,(char *)0x0);
          pcVar8 = ".set";
          iVar7 = -1;
          pcVar11 = CStack_488.cancel_button.button_text + 0xc4;
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
          crt_string_c_strupr_FUN_00600770(CStack_488.cancel_button.button_text + 0xc4);
        }
        bVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                          (g_CEditorToolsPtr,"Save set","models",0x647c8f,
                           (bool)((char)&CStack_488 + -0x5c));
        if (CONCAT31(extraout_var_00,bVar3) != 0) {
          core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,acStack_e0);
        }
      }
    }
    if ((((byte)g_MouseButtonFlags & 1) != 0) && (in_stack_00000034 != -1)) {
      in_stack_fffff080 = (CStrList_vtable *)core_setedit_cpp_ResolveMasterLights_FUN_0057c550();
      in_stack_fffff07c = this_ptr;
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


// Assembly code:
// 0057c5d0: PUSH EBX
//   Label: core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0
// 0057c5d1: PUSH ESI
// 0057c5d2: PUSH EDI
// 0057c5d3: PUSH EBP
// 0057c5d4: MOV EBP,ESP
// 0057c5d6: SUB ESP,0xfc4
// 0057c5dc: AND ESP,0xfffffff8
// 0057c5df: PUSH 0x0
// 0057c5e1: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057c5e4: PUSH EDX
// 0057c5e5: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0057c5ea: ADD ESP,0x8
// 0057c5ed: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0057c5f3: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 0057c5f4: CALL core_game.cpp_CGame_setGameRes_FUN_004dade0
//   XREF to: 004dade0 (UNCONDITIONAL_CALL)
// 0057c5f9: ADD ESP,0x4
// 0057c5fc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057c5ff: PUSH EBX
// 0057c600: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057c605: ADD ESP,0x4
// 0057c608: LEA EAX,[EBX + 0x14d0f0]
// 0057c60e: MOV dword ptr [ESP + 0xfac],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0057c615: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0057c615
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0057c61a: MOV ESI,0xffffffff
// 0057c61f: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0057c625: MOV dword ptr [ESP + 0xfb4],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0057c62c: CMP EDI,0x1e0
// 0057c632: JL 0x0057c79b
//   XREF to: 0057c79b (CONDITIONAL_JUMP)
// 0057c638: MOV ESI,0x120
// 0057c63d: MOV EDI,0x40
// 0057c642: MOV EAX,[0x03276dac]
//   XREF to: 03276dac (READ)
// 0057c647: XOR EBX,EBX
// 0057c649: CMP EAX,0x1e
// 0057c64c: JLE 0x0057c658
//   XREF to: 0057c658 (CONDITIONAL_JUMP)
// 0057c64e: MOV ESI,0xc0
// 0057c653: MOV EDI,0x30
// 0057c658: XOR EDX,EDX
//   Label: LAB_0057c658
// 0057c65a: MOV ECX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057c660: MOV dword ptr [ESP + 0xfbc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057c667: TEST ECX,ECX
// 0057c669: JLE 0x0057c79b
//   XREF to: 0057c79b (CONDITIONAL_JUMP)
// 0057c66f: MOV dword ptr [ESP + 0xfc0],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0057c676: PUSH EDI
//   Label: LAB_0057c676
// 0057c677: PUSH ESI
// 0057c678: MOV EAX,dword ptr [ESP + 0xfc8]
//   XREF to: Stack[-0x18] (READ)
// 0057c67f: PUSH EBX
// 0057c680: MOV EDX,dword ptr [EAX + 0x3276db0]
//   XREF to: 03276db0 (DATA)
//   XREF to: 03276db4 (DATA)
// 0057c686: PUSH EDX
// 0057c687: CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
//   XREF to: 00473390 (UNCONDITIONAL_CALL)
// 0057c68c: MOV ECX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0057c692: ADD ESP,0x10
// 0057c695: CMP EBX,ECX
// 0057c697: JG 0x0057c73f
//   XREF to: 0057c73f (CONDITIONAL_JUMP)
// 0057c69d: LEA EAX,[EBX + EDI*0x1]
// 0057c6a0: CMP EAX,ECX
// 0057c6a2: JLE 0x0057c73f
//   XREF to: 0057c73f (CONDITIONAL_JUMP)
// 0057c6a8: MOV ECX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0057c6ae: CMP ESI,ECX
// 0057c6b0: JG 0x0057c73f
//   XREF to: 0057c73f (CONDITIONAL_JUMP)
// 0057c6b6: LEA EDX,[ESI + EDI*0x1]
// 0057c6b9: CMP EDX,ECX
// 0057c6bb: JLE 0x0057c73f
//   XREF to: 0057c73f (CONDITIONAL_JUMP)
// 0057c6c1: MOV ECX,dword ptr [ESP + 0xfbc]
//   XREF to: Stack[-0x1c] (READ)
// 0057c6c8: MOV dword ptr [ESP + 0xfb4],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0057c6cf: MOV ECX,0x1
// 0057c6d4: PUSH ESI
// 0057c6d5: SUB EAX,ECX
// 0057c6d7: PUSH EAX
// 0057c6d8: PUSH ESI
// 0057c6d9: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 0057c6df: SUB EDX,ECX
// 0057c6e1: PUSH EBX
// 0057c6e2: MOV dword ptr [ESP + 0xfb4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0057c6e9: MOV dword ptr [ESP + 0xfb8],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0057c6f0: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0057c6f5: ADD ESP,0x10
// 0057c6f8: MOV EDX,dword ptr [ESP + 0xfa8]
//   XREF to: Stack[-0x30] (READ)
// 0057c6ff: PUSH EDX
// 0057c700: MOV ECX,dword ptr [ESP + 0xfa8]
//   XREF to: Stack[-0x34] (READ)
// 0057c707: PUSH ECX
// 0057c708: PUSH EDX
// 0057c709: PUSH EBX
// 0057c70a: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0057c70f: ADD ESP,0x10
// 0057c712: MOV EDX,dword ptr [ESP + 0xfa8]
//   XREF to: Stack[-0x30] (READ)
// 0057c719: PUSH EDX
// 0057c71a: PUSH EBX
// 0057c71b: PUSH ESI
// 0057c71c: PUSH EBX
// 0057c71d: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0057c722: ADD ESP,0x10
// 0057c725: MOV ECX,dword ptr [ESP + 0xfa8]
//   XREF to: Stack[-0x30] (READ)
// 0057c72c: PUSH ECX
// 0057c72d: MOV EAX,dword ptr [ESP + 0xfa8]
//   XREF to: Stack[-0x34] (READ)
// 0057c734: PUSH EAX
// 0057c735: PUSH ESI
// 0057c736: PUSH EAX
// 0057c737: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0057c73c: ADD ESP,0x10
// 0057c73f: MOV EAX,dword ptr [ESP + 0xfc0]
//   Label: LAB_0057c73f
//   XREF to: Stack[-0x18] (READ)
// 0057c746: PUSH ESI
// 0057c747: MOV EAX,dword ptr [EAX + 0x3276db0]
//   XREF to: 03276db0 (DATA)
// 0057c74d: PUSH EBX
// 0057c74e: ADD EAX,0x40
// 0057c751: PUSH EAX
// 0057c752: ADD EBX,EDI
// 0057c754: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c759: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0057c75f: LEA EAX,[EBX + EDI*0x1]
// 0057c762: ADD ESP,0xc
// 0057c765: CMP EAX,ECX
// 0057c767: JLE 0x0057c76d
//   XREF to: 0057c76d (CONDITIONAL_JUMP)
// 0057c769: ADD ESI,EDI
// 0057c76b: XOR EBX,EBX
// 0057c76d: MOV EAX,dword ptr [ESP + 0xfc0]
//   Label: LAB_0057c76d
//   XREF to: Stack[-0x18] (READ)
// 0057c774: MOV EDX,dword ptr [ESP + 0xfbc]
//   XREF to: Stack[-0x1c] (READ)
// 0057c77b: MOV ECX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057c781: ADD EAX,0x4
// 0057c784: INC EDX
// 0057c785: MOV dword ptr [ESP + 0xfc0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0057c78c: MOV dword ptr [ESP + 0xfbc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057c793: CMP EDX,ECX
// 0057c795: JL 0x0057c676
//   XREF to: 0057c676 (CONDITIONAL_JUMP)
// 0057c79b: PUSH 0x0
//   Label: LAB_0057c79b
// 0057c79d: PUSH 0x0
// 0057c79f: MOV ESI,0x16
// 0057c7a4: PUSH 0x647b43
//   XREF to: 00647b43 (DATA)
// 0057c7a9: XOR EBX,EBX
// 0057c7ab: XOR EDI,EDI
// 0057c7ad: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c7b2: MOV EAX,[0x03276dac]
//   XREF to: 03276dac (READ)
// 0057c7b7: ADD ESP,0xc
// 0057c7ba: TEST EAX,EAX
// 0057c7bc: JLE 0x0057c855
//   XREF to: 0057c855 (CONDITIONAL_JUMP)
// 0057c7c2: MOV dword ptr [ESP + 0xfb8],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0057c7c9: MOV EAX,dword ptr [ESP + 0xfb8]
//   Label: LAB_0057c7c9
//   XREF to: Stack[-0x20] (READ)
// 0057c7d0: MOV EAX,dword ptr [EAX + 0x3276db0]
//   XREF to: 03276db0 (DATA)
//   XREF to: 03276db4 (DATA)
// 0057c7d6: ADD EAX,0x40
// 0057c7d9: PUSH EAX
// 0057c7da: PUSH EDI
// 0057c7db: PUSH 0x647b59
//   XREF to: 00647b59 (DATA)
// 0057c7e0: LEA EAX,[ESP + 0xeb0]
//   XREF to: Stack[-0x134] (DATA)
// 0057c7e7: PUSH EAX
// 0057c7e8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057c7ed: ADD ESP,0x10
// 0057c7f0: PUSH ESI
// 0057c7f1: PUSH EBX
// 0057c7f2: LEA EAX,[ESP + 0xeac]
//   XREF to: Stack[-0x134] (DATA)
// 0057c7f9: PUSH EAX
// 0057c7fa: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c7ff: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0057c804: MOV EDX,EAX
// 0057c806: MOV ECX,0x3
// 0057c80b: SAR EDX,0x1f
// 0057c80e: IDIV ECX
// 0057c810: ADD ESI,0xb
// 0057c813: SUB EAX,0x16
// 0057c816: ADD ESP,0xc
// 0057c819: CMP ESI,EAX
// 0057c81b: JL 0x0057c835
//   XREF to: 0057c835 (CONDITIONAL_JUMP)
// 0057c81d: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057c822: MOV EDX,EAX
// 0057c824: MOV ECX,0x6
// 0057c829: SAR EDX,0x1f
// 0057c82c: IDIV ECX
// 0057c82e: MOV ESI,0x16
// 0057c833: ADD EBX,EAX
// 0057c835: MOV EDX,dword ptr [ESP + 0xfb8]
//   Label: LAB_0057c835
//   XREF to: Stack[-0x20] (READ)
// 0057c83c: MOV ECX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057c842: ADD EDX,0x4
// 0057c845: INC EDI
// 0057c846: MOV dword ptr [ESP + 0xfb8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0057c84d: CMP EDI,ECX
// 0057c84f: JL 0x0057c7c9
//   XREF to: 0057c7c9 (CONDITIONAL_JUMP)
// 0057c855: MOV EAX,[0x00679398]
//   Label: LAB_0057c855
//   XREF to: 00679398 (READ)
// 0057c85a: MOV EDX,EAX
// 0057c85c: MOV ECX,0x3
// 0057c861: SAR EDX,0x1f
// 0057c864: IDIV ECX
// 0057c866: LEA EBX,[EAX + -0xb]
// 0057c869: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057c86c: CMP dword ptr [EAX + 0x19a2c],0xc8
// 0057c876: JGE 0x0057c88b
//   XREF to: 0057c88b (CONDITIONAL_JUMP)
// 0057c878: LEA EAX,[EBX + 0xb]
// 0057c87b: PUSH EAX
// 0057c87c: PUSH 0x0
// 0057c87e: PUSH 0x647b61
//   XREF to: 00647b61 (DATA)
// 0057c883: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c888: ADD ESP,0xc
// 0057c88b: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057c88b
//   XREF to: Stack[0x4] (READ)
// 0057c88e: CMP dword ptr [EAX + 0x19a2c],0x0
// 0057c895: JLE 0x0057c8aa
//   XREF to: 0057c8aa (CONDITIONAL_JUMP)
// 0057c897: LEA EAX,[EBX + 0x16]
// 0057c89a: PUSH EAX
// 0057c89b: PUSH 0x0
// 0057c89d: PUSH 0x647b74
//   XREF to: 00647b74 (DATA)
// 0057c8a2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c8a7: ADD ESP,0xc
// 0057c8aa: MOV EAX,[0x00679394]
//   Label: LAB_0057c8aa
//   XREF to: 00679394 (READ)
// 0057c8af: MOV EDX,EAX
// 0057c8b1: SAR EDX,0x1f
// 0057c8b4: SHL EDX,0x2
// 0057c8b7: SBB EAX,EDX
// 0057c8b9: SAR EAX,0x2
// 0057c8bc: LEA ESI,[EBX + 0xb]
// 0057c8bf: PUSH ESI
// 0057c8c0: PUSH EAX
// 0057c8c1: PUSH 0x647b8c
//   XREF to: 00647b8c (DATA)
// 0057c8c6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c8cb: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057c8d0: MOV EDX,EAX
// 0057c8d2: SAR EDX,0x1f
// 0057c8d5: SHL EDX,0x2
// 0057c8d8: SBB EAX,EDX
// 0057c8da: SAR EAX,0x2
// 0057c8dd: ADD ESP,0xc
// 0057c8e0: ADD EBX,0x16
// 0057c8e3: PUSH EBX
// 0057c8e4: PUSH EAX
// 0057c8e5: PUSH 0x647b9d
//   XREF to: 00647b9d (DATA)
// 0057c8ea: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c8ef: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057c8f4: MOV EDX,EAX
// 0057c8f6: SAR EDX,0x1f
// 0057c8f9: SUB EAX,EDX
// 0057c8fb: SAR EAX,0x1
// 0057c8fd: ADD ESP,0xc
// 0057c900: PUSH ESI
// 0057c901: PUSH EAX
// 0057c902: PUSH 0x647bb6
//   XREF to: 00647bb6 (DATA)
// 0057c907: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c90c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057c911: MOV EDX,EAX
// 0057c913: SAR EDX,0x1f
// 0057c916: SUB EAX,EDX
// 0057c918: SAR EAX,0x1
// 0057c91a: ADD ESP,0xc
// 0057c91d: PUSH EBX
// 0057c91e: PUSH EAX
// 0057c91f: PUSH 0x647bcc
//   XREF to: 00647bcc (DATA)
// 0057c924: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c929: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057c92e: MOV EDX,EAX
// 0057c930: SAR EDX,0x1f
// 0057c933: SUB EAX,EDX
// 0057c935: SAR EAX,0x1
// 0057c937: ADD ESP,0xc
// 0057c93a: PUSH ESI
// 0057c93b: MOV ESI,EAX
// 0057c93d: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057c942: MOV EDX,EAX
// 0057c944: SAR EDX,0x1f
// 0057c947: SHL EDX,0x2
// 0057c94a: SBB EAX,EDX
// 0057c94c: SAR EAX,0x2
// 0057c94f: ADD EAX,ESI
// 0057c951: PUSH EAX
// 0057c952: PUSH 0x647be0
//   XREF to: 00647be0 (DATA)
// 0057c957: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c95c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057c961: MOV EDX,EAX
// 0057c963: SAR EDX,0x1f
// 0057c966: SUB EAX,EDX
// 0057c968: SAR EAX,0x1
// 0057c96a: ADD ESP,0xc
// 0057c96d: PUSH EBX
// 0057c96e: MOV EBX,EAX
// 0057c970: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057c975: MOV EDX,EAX
// 0057c977: SAR EDX,0x1f
// 0057c97a: SHL EDX,0x2
// 0057c97d: SBB EAX,EDX
// 0057c97f: SAR EAX,0x2
// 0057c982: ADD EAX,EBX
// 0057c984: PUSH EAX
// 0057c985: PUSH 0x647bf2
//   XREF to: 00647bf2 (DATA)
// 0057c98a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057c98f: ADD ESP,0xc
// 0057c992: CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
//   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)
// 0057c997: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0057c99c: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 0057c9a1: TEST EAX,EAX
// 0057c9a3: JZ 0x0057ca4e
//   XREF to: 0057ca4e (CONDITIONAL_JUMP)
// 0057c9a9: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 0057c9af: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 0057c9b0: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 0057c9b5: ADD ESP,0x4
// 0057c9b8: MOV dword ptr [ESP + 0xfb0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0057c9bf: CMP EAX,0x34
// 0057c9c2: JNC 0x0057cd85
//   XREF to: 0057cd85 (CONDITIONAL_JUMP)
// 0057c9c8: CMP EAX,0x32
// 0057c9cb: JNC 0x0057cdb1
//   XREF to: 0057cdb1 (CONDITIONAL_JUMP)
// 0057c9d1: CMP EAX,0x31
// 0057c9d4: JNZ 0x0057c9e2
//   XREF to: 0057c9e2 (CONDITIONAL_JUMP)
// 0057c9d6: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057c9d9: PUSH EBX
// 0057c9da: CALL core_setedit.cpp_FUN_0057b410
//   XREF to: 0057b410 (UNCONDITIONAL_CALL)
// 0057c9df: ADD ESP,0x4
//   Label: LAB_0057c9df
// 0057c9e2: TEST byte ptr [0x02cf6a94],0x1
//   Label: LAB_0057c9e2
//   XREF to: 02cf6a94 (READ)
// 0057c9e9: JZ 0x0057ca11
//   XREF to: 0057ca11 (CONDITIONAL_JUMP)
// 0057c9eb: MOV ESI,dword ptr [ESP + 0xfb4]
//   XREF to: Stack[-0x24] (READ)
// 0057c9f2: CMP ESI,-0x1
// 0057c9f5: JZ 0x0057ca11
//   XREF to: 0057ca11 (CONDITIONAL_JUMP)
// 0057c9f7: PUSH ESI
// 0057c9f8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057c9fb: PUSH EAX
// 0057c9fc: CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550
//   XREF to: 0057c550 (UNCONDITIONAL_CALL)
// 0057ca01: ADD ESP,0x8
// 0057ca04: PUSH EAX
// 0057ca05: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ca08: PUSH EDX
// 0057ca09: CALL core_setedit.cpp_FUN_0057b500
//   XREF to: 0057b500 (UNCONDITIONAL_CALL)
// 0057ca0e: ADD ESP,0x8
// 0057ca11: CMP dword ptr [ESP + 0xfb0],0x1b
//   Label: LAB_0057ca11
//   XREF to: Stack[-0x28] (READ)
// 0057ca19: JNZ 0x0057c615
//   XREF to: 0057c615 (CONDITIONAL_JUMP)
// 0057ca1f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ca22: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0057ca27: PUSH EBX
// 0057ca28: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057ca2d: ADD ESP,0x4
// 0057ca30: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0057ca36: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 0057ca37: XOR EDI,EDI
// 0057ca39: CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   XREF to: 004daed0 (UNCONDITIONAL_CALL)
// 0057ca3e: ADD ESP,0x4
// 0057ca41: MOV dword ptr [0x02d807a4],EDI
//   XREF to: 02d807a4 (WRITE)
// 0057ca47: MOV ESP,EBP
// 0057ca49: POP EBP
// 0057ca4a: POP EDI
// 0057ca4b: POP ESI
// 0057ca4c: POP EBX
// 0057ca4d: RET
// 0057ca4e: MOV dword ptr [ESP + 0xfb0],EAX
//   Label: LAB_0057ca4e
//   XREF to: Stack[-0x28] (WRITE)
// 0057ca55: JMP 0x0057c9e2
//   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
// 0057ca57: LEA EAX,[ESP + 0xafc]
//   Label: LAB_0057ca57
//   XREF to: Stack[-0x4dc] (DATA)
// 0057ca5e: PUSH EAX
// 0057ca5f: XOR EBX,EBX
// 0057ca61: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057ca66: MOV ECX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057ca6c: ADD ESP,0x4
// 0057ca6f: TEST ECX,ECX
// 0057ca71: JLE 0x0057ca9d
//   XREF to: 0057ca9d (CONDITIONAL_JUMP)
// 0057ca73: XOR ESI,ESI
// 0057ca75: MOV EAX,dword ptr [ESI + 0x3276db0]
//   Label: LAB_0057ca75
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0057ca7b: ADD EAX,0x40
// 0057ca7e: PUSH EAX
// 0057ca7f: LEA EAX,[ESP + 0xb00]
//   XREF to: Stack[-0x4dc] (DATA)
// 0057ca86: PUSH EAX
// 0057ca87: ADD ESI,0x4
// 0057ca8a: INC EBX
// 0057ca8b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057ca90: MOV EDX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057ca96: ADD ESP,0x8
// 0057ca99: CMP EBX,EDX
// 0057ca9b: JL 0x0057ca75
//   XREF to: 0057ca75 (CONDITIONAL_JUMP)
// 0057ca9d: PUSH 0x0
//   Label: LAB_0057ca9d
// 0057ca9f: PUSH -0x1
// 0057caa1: PUSH 0x647bff
//   XREF to: 00647bff (DATA)
// 0057caa6: LEA EAX,[ESP + 0xb08]
//   XREF to: Stack[-0x4dc] (DATA)
// 0057caad: PUSH EAX
// 0057caae: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057cab3: ADD ESP,0x10
// 0057cab6: TEST EAX,EAX
// 0057cab8: JL 0x0057cad4
//   XREF to: 0057cad4 (CONDITIONAL_JUMP)
// 0057caba: PUSH EAX
// 0057cabb: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cabe: PUSH ECX
// 0057cabf: CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550
//   XREF to: 0057c550 (UNCONDITIONAL_CALL)
// 0057cac4: ADD ESP,0x8
// 0057cac7: PUSH EAX
// 0057cac8: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cacb: PUSH EBX
// 0057cacc: CALL core_setedit.cpp_FUN_0057b500
//   XREF to: 0057b500 (UNCONDITIONAL_CALL)
// 0057cad1: ADD ESP,0x8
// 0057cad4: PUSH 0x0
//   Label: LAB_0057cad4
// 0057cad6: LEA EAX,[ESP + 0xb00]
//   XREF to: Stack[-0x4dc] (DATA)
// 0057cadd: PUSH EAX
// 0057cade: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057cae3: ADD ESP,0x8
// 0057cae6: JMP 0x0057c9e2
//   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
// 0057caeb: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_0057caeb
//   XREF to: Stack[0x4] (READ)
// 0057caee: PUSH EBX
// 0057caef: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057caf4: ADD ESP,0x4
// 0057caf7: PUSH 0x647c25
//   XREF to: 00647c25 (DATA)
// 0057cafc: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057cb02: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0057cb03: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0057cb08: ADD ESP,0x8
// 0057cb0b: TEST EAX,EAX
// 0057cb0d: JZ 0x0057cb1a
//   XREF to: 0057cb1a (CONDITIONAL_JUMP)
// 0057cb0f: PUSH -0x1
// 0057cb11: PUSH EBX
// 0057cb12: CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   XREF to: 0056a470 (UNCONDITIONAL_CALL)
// 0057cb17: ADD ESP,0x8
// 0057cb1a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057cb1a
//   XREF to: Stack[0x4] (READ)
// 0057cb1d: PUSH EAX
// 0057cb1e: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057cb23: JMP 0x0057c9df
//   XREF to: 0057c9df (UNCONDITIONAL_JUMP)
// 0057cb28: PUSH 0x1
//   Label: LAB_0057cb28
// 0057cb2a: PUSH 0x42c80000
// 0057cb2f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cb32: PUSH 0x0
// 0057cb34: PUSH 0x1
// 0057cb36: FLD float ptr [EAX + 0x14d150]
// 0057cb3c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xfd8] (DATA)
// 0057cb40: PUSH EAX
// 0057cb41: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057cb47: PUSH 0x647c42
//   XREF to: 00647c42 (DATA)
// 0057cb4c: FMUL float ptr [0x00647ca5]
//   XREF to: 00647ca5 (READ)
// 0057cb52: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0057cb53: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xfd8] (WRITE)
// 0057cb57: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0057cb5c: ADD ESP,0x1c
// 0057cb5f: TEST EAX,EAX
// 0057cb61: JZ 0x0057c9e2
//   XREF to: 0057c9e2 (CONDITIONAL_JUMP)
// 0057cb67: FLD float ptr [ESP]
//   XREF to: Stack[-0xfd8] (DATA)
// 0057cb6a: FMUL double ptr [0x00647cad]
//   XREF to: 00647cad (READ)
// 0057cb70: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cb73: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cb76: FSTP float ptr [EAX + 0x14d150]
// 0057cb7c: MOV ECX,dword ptr [EDX]
// 0057cb7e: XOR EAX,EAX
// 0057cb80: TEST ECX,ECX
// 0057cb82: JLE 0x0057c9e2
//   XREF to: 0057c9e2 (CONDITIONAL_JUMP)
// 0057cb88: MOV EBX,EDX
// 0057cb8a: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cb8d: FLD float ptr [EDX + 0x14d150]
//   Label: LAB_0057cb8d
// 0057cb93: INC EAX
// 0057cb94: FSTP float ptr [EBX + 0x14c]
// 0057cb9a: MOV ECX,dword ptr [EDX]
// 0057cb9c: ADD EBX,0x1a4
// 0057cba2: CMP EAX,ECX
// 0057cba4: JL 0x0057cb8d
//   XREF to: 0057cb8d (CONDITIONAL_JUMP)
// 0057cba6: JMP 0x0057c9e2
//   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
// 0057cbab: LEA EAX,[ESP + 0x3ac]
//   Label: LAB_0057cbab
//   XREF to: Stack[-0xc2c] (DATA)
// 0057cbb2: PUSH EAX
// 0057cbb3: XOR ESI,ESI
// 0057cbb5: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057cbba: MOV EAX,[0x03276dac]
//   XREF to: 03276dac (READ)
// 0057cbbf: ADD ESP,0x4
// 0057cbc2: TEST EAX,EAX
// 0057cbc4: JLE 0x0057cbf0
//   XREF to: 0057cbf0 (CONDITIONAL_JUMP)
// 0057cbc6: XOR EBX,EBX
// 0057cbc8: MOV EAX,dword ptr [EBX + 0x3276db0]
//   Label: LAB_0057cbc8
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0057cbce: ADD EAX,0x40
// 0057cbd1: PUSH EAX
// 0057cbd2: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0xc2c] (DATA)
// 0057cbd9: PUSH EAX
// 0057cbda: ADD EBX,0x4
// 0057cbdd: INC ESI
// 0057cbde: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057cbe3: MOV EDI,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057cbe9: ADD ESP,0x8
// 0057cbec: CMP ESI,EDI
// 0057cbee: JL 0x0057cbc8
//   XREF to: 0057cbc8 (CONDITIONAL_JUMP)
// 0057cbf0: PUSH 0x0
//   Label: LAB_0057cbf0
// 0057cbf2: PUSH -0x1
// 0057cbf4: PUSH 0x647c5d
//   XREF to: 00647c5d (DATA)
// 0057cbf9: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0xc2c] (DATA)
// 0057cc00: PUSH EAX
// 0057cc01: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057cc06: ADD ESP,0x10
// 0057cc09: TEST EAX,EAX
// 0057cc0b: JL 0x0057cc27
//   XREF to: 0057cc27 (CONDITIONAL_JUMP)
// 0057cc0d: PUSH EAX
// 0057cc0e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cc11: PUSH EAX
// 0057cc12: CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550
//   XREF to: 0057c550 (UNCONDITIONAL_CALL)
// 0057cc17: ADD ESP,0x8
// 0057cc1a: PUSH EAX
// 0057cc1b: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cc1e: PUSH EDX
// 0057cc1f: CALL core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
//   XREF to: 0057bbe0 (UNCONDITIONAL_CALL)
// 0057cc24: ADD ESP,0x8
// 0057cc27: PUSH 0x0
//   Label: LAB_0057cc27
// 0057cc29: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0xc2c] (DATA)
// 0057cc30: PUSH EAX
// 0057cc31: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057cc36: ADD ESP,0x8
// 0057cc39: JMP 0x0057c9e2
//   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
// 0057cc3e: LEA EAX,[ESP + 0x4]
//   Label: LAB_0057cc3e
//   XREF to: Stack[-0xfd4] (DATA)
// 0057cc42: PUSH EAX
// 0057cc43: XOR ESI,ESI
// 0057cc45: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057cc4a: MOV EDI,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057cc50: ADD ESP,0x4
// 0057cc53: TEST EDI,EDI
// 0057cc55: JLE 0x0057cc7e
//   XREF to: 0057cc7e (CONDITIONAL_JUMP)
// 0057cc57: XOR EBX,EBX
// 0057cc59: MOV EAX,dword ptr [EBX + 0x3276db0]
//   Label: LAB_0057cc59
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0057cc5f: ADD EAX,0x40
// 0057cc62: PUSH EAX
// 0057cc63: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xfd4] (DATA)
// 0057cc67: PUSH EAX
// 0057cc68: ADD EBX,0x4
// 0057cc6b: INC ESI
// 0057cc6c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057cc71: MOV EDX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057cc77: ADD ESP,0x8
// 0057cc7a: CMP ESI,EDX
// 0057cc7c: JL 0x0057cc59
//   XREF to: 0057cc59 (CONDITIONAL_JUMP)
// 0057cc7e: PUSH 0x0
//   Label: LAB_0057cc7e
// 0057cc80: PUSH -0x1
// 0057cc82: PUSH 0x647c78
//   XREF to: 00647c78 (DATA)
// 0057cc87: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xfd4] (DATA)
// 0057cc8b: PUSH EAX
// 0057cc8c: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057cc91: ADD ESP,0x10
// 0057cc94: TEST EAX,EAX
// 0057cc96: JL 0x0057ccb2
//   XREF to: 0057ccb2 (CONDITIONAL_JUMP)
// 0057cc98: PUSH EAX
// 0057cc99: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cc9c: PUSH ECX
// 0057cc9d: CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550
//   XREF to: 0057c550 (UNCONDITIONAL_CALL)
// 0057cca2: ADD ESP,0x8
// 0057cca5: PUSH EAX
// 0057cca6: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cca9: PUSH EBX
// 0057ccaa: CALL core_setedit.cpp_FUN_0057b600
//   XREF to: 0057b600 (UNCONDITIONAL_CALL)
// 0057ccaf: ADD ESP,0x8
// 0057ccb2: PUSH 0x0
//   Label: LAB_0057ccb2
// 0057ccb4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xfd4] (DATA)
// 0057ccb8: PUSH EAX
// 0057ccb9: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057ccbe: ADD ESP,0x8
// 0057ccc1: JMP 0x0057c9e2
//   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
// 0057ccc6: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057ccc6
//   XREF to: Stack[0x4] (READ)
// 0057ccc9: MOV DL,byte ptr [EAX + 0x14d0f0]
// 0057cccf: TEST DL,DL
// 0057ccd1: JZ 0x0057cd7c
//   XREF to: 0057cd7c (CONDITIONAL_JUMP)
// 0057ccd7: PUSH 0x0
// 0057ccd9: LEA EAX,[ESP + 0xea8]
//   XREF to: Stack[-0x134] (DATA)
// 0057cce0: PUSH EAX
// 0057cce1: PUSH 0x0
// 0057cce3: PUSH 0x0
// 0057cce5: MOV ECX,dword ptr [ESP + 0xfbc]
//   XREF to: Stack[-0x2c] (READ)
// 0057ccec: PUSH ECX
// 0057cced: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0057ccf2: ADD ESP,0x14
// 0057ccf5: MOV ESI,0x647c8a
//   XREF to: 00647c8a (DATA)
// 0057ccfa: LEA EDI,[ESP + 0xea4]
//   XREF to: Stack[-0x134] (DATA)
// 0057cd01: PUSH EDI
// 0057cd02: SUB ECX,ECX
// 0057cd04: DEC ECX
// 0057cd05: MOV AL,0x0
// 0057cd07: SCASB.REPNE ES:EDI
// 0057cd09: DEC EDI
// 0057cd0a: MOV AL,byte ptr [ESI]
//   Label: LAB_0057cd0a
//   XREF to: 00647c8a (READ)
//   XREF to: 00647c8c (READ)
// 0057cd0c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x134] (DATA)
// 0057cd0e: CMP AL,0x0
// 0057cd10: JZ 0x0057cd22
//   XREF to: 0057cd22 (CONDITIONAL_JUMP)
// 0057cd12: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00647c8b (READ)
//   XREF to: 00647c8d (READ)
// 0057cd15: ADD ESI,0x2
// 0057cd18: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x133] (WRITE)
// 0057cd1b: ADD EDI,0x2
// 0057cd1e: CMP AL,0x0
// 0057cd20: JNZ 0x0057cd0a
//   XREF to: 0057cd0a (CONDITIONAL_JUMP)
// 0057cd22: POP EDI
//   Label: LAB_0057cd22
// 0057cd23: LEA EAX,[ESP + 0xea4]
//   XREF to: Stack[-0x134] (DATA)
// 0057cd2a: PUSH EAX
// 0057cd2b: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 0057cd30: ADD ESP,0x4
// 0057cd33: PUSH 0x1
//   Label: LAB_0057cd33
// 0057cd35: LEA EAX,[ESP + 0xea8]
//   XREF to: Stack[-0x134] (DATA)
// 0057cd3c: PUSH EAX
// 0057cd3d: PUSH 0x647c8f
//   XREF to: 00647c8f (DATA)
// 0057cd42: PUSH 0x647c93
//   XREF to: 00647c93 (DATA)
// 0057cd47: PUSH 0x647c9a
//   XREF to: 00647c9a (DATA)
// 0057cd4c: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057cd52: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0057cd53: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 0057cd58: ADD ESP,0x18
// 0057cd5b: TEST EAX,EAX
// 0057cd5d: JZ 0x0057c9e2
//   XREF to: 0057c9e2 (CONDITIONAL_JUMP)
// 0057cd63: LEA EAX,[ESP + 0xea4]
//   XREF to: Stack[-0x134] (DATA)
// 0057cd6a: PUSH EAX
// 0057cd6b: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057cd6e: PUSH ESI
// 0057cd6f: CALL core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
//   XREF to: 0057a2a0 (UNCONDITIONAL_CALL)
// 0057cd74: ADD ESP,0x8
// 0057cd77: JMP 0x0057c9e2
//   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
// 0057cd7c: MOV byte ptr [ESP + 0xea4],DL
//   Label: LAB_0057cd7c
//   XREF to: Stack[-0x134] (WRITE)
// 0057cd83: JMP 0x0057cd33
//   XREF to: 0057cd33 (UNCONDITIONAL_JUMP)
// 0057cd85: JBE 0x0057caeb
//   Label: LAB_0057cd85
//   XREF to: 0057caeb (CONDITIONAL_JUMP)
// 0057cd8b: CMP EAX,0x36
// 0057cd8e: JC 0x0057cb28
//   XREF to: 0057cb28 (CONDITIONAL_JUMP)
// 0057cd94: JBE 0x0057cbab
//   XREF to: 0057cbab (CONDITIONAL_JUMP)
// 0057cd9a: CMP EAX,0x37
// 0057cd9d: JBE 0x0057cc3e
//   XREF to: 0057cc3e (CONDITIONAL_JUMP)
// 0057cda3: CMP EAX,0x53
// 0057cda6: JZ 0x0057ccc6
//   XREF to: 0057ccc6 (CONDITIONAL_JUMP)
// 0057cdac: JMP 0x0057c9e2
//   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
// 0057cdb1: JBE 0x0057ca57
//   Label: LAB_0057cdb1
//   XREF to: 0057ca57 (CONDITIONAL_JUMP)
// 0057cdb7: LEA EAX,[ESP + 0x754]
//   XREF to: Stack[-0x884] (DATA)
// 0057cdbe: PUSH EAX
// 0057cdbf: XOR ESI,ESI
// 0057cdc1: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057cdc6: MOV EDX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057cdcc: ADD ESP,0x4
// 0057cdcf: TEST EDX,EDX
// 0057cdd1: JLE 0x0057cdfd
//   XREF to: 0057cdfd (CONDITIONAL_JUMP)
// 0057cdd3: XOR EBX,EBX
// 0057cdd5: MOV EAX,dword ptr [EBX + 0x3276db0]
//   Label: LAB_0057cdd5
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0057cddb: ADD EAX,0x40
// 0057cdde: PUSH EAX
// 0057cddf: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x884] (DATA)
// 0057cde6: PUSH EAX
// 0057cde7: ADD EBX,0x4
// 0057cdea: INC ESI
// 0057cdeb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057cdf0: MOV EDI,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0057cdf6: ADD ESP,0x8
// 0057cdf9: CMP ESI,EDI
// 0057cdfb: JL 0x0057cdd5
//   XREF to: 0057cdd5 (CONDITIONAL_JUMP)
// 0057cdfd: PUSH 0x0
//   Label: LAB_0057cdfd
// 0057cdff: PUSH -0x1
// 0057ce01: PUSH 0x647c13
//   XREF to: 00647c13 (DATA)
// 0057ce06: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x884] (DATA)
// 0057ce0d: PUSH EAX
// 0057ce0e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057ce13: ADD ESP,0x10
// 0057ce16: TEST EAX,EAX
// 0057ce18: JL 0x0057ce5b
//   XREF to: 0057ce5b (CONDITIONAL_JUMP)
// 0057ce1a: PUSH EAX
// 0057ce1b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ce1e: PUSH EAX
// 0057ce1f: CALL core_setedit.cpp_ResolveMasterLights_FUN_0057c550
//   XREF to: 0057c550 (UNCONDITIONAL_CALL)
// 0057ce24: IMUL EDX,EAX,0x1898
// 0057ce2a: ADD ESP,0x8
// 0057ce2d: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ce30: PUSH EAX
// 0057ce31: ADD EDX,ECX
// 0057ce33: PUSH ECX
// 0057ce34: MOV EBX,dword ptr [EDX + 0x19a30]
// 0057ce3a: CALL core_setedit.cpp_FUN_0057b910
//   XREF to: 0057b910 (UNCONDITIONAL_CALL)
// 0057ce3f: ADD ESP,0x8
// 0057ce42: TEST EBX,EBX
// 0057ce44: JNZ 0x0057ce5b
//   XREF to: 0057ce5b (CONDITIONAL_JUMP)
// 0057ce46: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ce49: PUSH EDI
// 0057ce4a: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057ce4f: ADD ESP,0x4
// 0057ce52: PUSH EDI
// 0057ce53: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057ce58: ADD ESP,0x4
// 0057ce5b: PUSH 0x0
//   Label: LAB_0057ce5b
// 0057ce5d: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x884] (DATA)
// 0057ce64: PUSH EAX
// 0057ce65: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057ce6a: ADD ESP,0x8
// 0057ce6d: JMP 0x0057c9e2
//   XREF to: 0057c9e2 (UNCONDITIONAL_JUMP)
