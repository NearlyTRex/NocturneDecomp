// Name: core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
// Address: 00584940
// Address Range: [[00584940, 00584e6d]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507799 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Demon_R_Set_Editor_TM_00648e6d
//   TerminatedCString s_s_1_Load_set_00648e85
//   TerminatedCString s_s_2_Save_set_00648e92
//   TerminatedCString s_s_3_Import_set_00648e9f
//   TerminatedCString s_s_4_View_set_00648eae
//   TerminatedCString s_s_7_Light_editor_00648ebb
//   TerminatedCString s_s_9_Camera_editor_00648ecc
//   TerminatedCString s_A_Fog_editor_00648ede
//   TerminatedCString s_C_Rebuild_thumbs_00648eed
//   TerminatedCString s_D_Default_ground_type_s_00648f00
//   TerminatedCString s_F_Export_lights_cameras__00648f1c
//   TerminatedCString s_G_Virtual_director_box_e_00648f42
//   TerminatedCString s_H_Weather_s_00648f62
//   TerminatedCString s_I_Edit_ground_types_00648f72
//   TerminatedCString s_set_00648f88
//   TerminatedCString s_models_00648f8e
//   TerminatedCString s_Load_set_00648f95
//   TerminatedCString s_set_00648f9e
//   undefined4 DAT_00648f9f
//   undefined4 DAT_00648fa0
//   undefined4 DAT_00648fa1
//   TerminatedCString s_set_00648fa3
//   TerminatedCString s_models_00648fa7
//   TerminatedCString s_Save_set_00648fae
//   TerminatedCString s_Select_default_ground_ty_00648fb7
//   TerminatedCString s_txt_00648fd3
//   TerminatedCString s_txt_00648fd8
//   TerminatedCString s_Select_ground_type_file__00648fde
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   TerminatedCString s_GroundTypes_006816d8
//   undefined4 s_\GroundTypes_006816d9
//   undefined4 s_GroundTypes_006816da
//   undefined4 s_roundTypes_006816db
//   void* PTR_s_None_006817f0 = 006491a0
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CDemonLightInstance.field17_0x1cbc
//   void* g_CKeysPtr
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_ground.cpp_getGroundTypeName_FUN_004eed80
//   core_set.cpp_CDemonSet_load_FUN_00569410
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0
//   core_setedit.cpp_CDemonSet_FUN_00583170
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0
//   core_setedit.cpp_DementedFogEditor_FUN_00580730
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strupr_FUN_00600770
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet *this_ptr)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char *in_stack_0000003c;
  char *in_stack_00000040;
  char **in_stack_fffff950;
  CStrList_vtable *in_stack_fffff954;
  CStrList_vtable *in_stack_fffff958;
  CStrList_vtable *in_stack_fffff95c;
  uint in_stack_fffff960;
  char acStack_318 [8];
  char acStack_310 [4];
  char acStack_30c [252];
  char acStack_210 [4];
  char acStack_20c [248];
  char acStack_114 [8];
  char acStack_10c [208];
  char acStack_3c [4];
  char acStack_38 [12];
  char acStack_2c [4];
  char acStack_28 [16];
  char *local_18;
  char local_14 [4];
  
  bVar8 = 0;
  local_18 = this_ptr->geometry_filename;
  this_ptr->actor_list_ptr = (void *)0x0;
  g_CDemonLightInstance.field17_0x1cbc = 0;
  g_CDemonRaytraceInstance.rendering_mode = 1;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demon(R) Set Editor(TM)",0,0);
    engine_2d_c_drawText_FUN_00401fd0("1.  Load set",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2.  Save set",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("3.  Import set",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("4.  View set",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("7.  Light editor",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("9.  Camera editor",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("A.  Fog editor",0,0x79);
    engine_2d_c_drawText_FUN_00401fd0("C.  Rebuild thumbs",0,0x8f);
    pcVar3 = core_ground_cpp_getGroundTypeName_FUN_004eed80(this_ptr->default_ground_type);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_3c,"D.  Default ground type: %s",pcVar3);
    engine_2d_c_drawText_FUN_00401fd0(acStack_38,0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("F.  Export lights/cameras to .LC file",0,0xb0);
    engine_2d_c_drawText_FUN_00401fd0("G.  Virtual director box editor",0,0xbb);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_2c,"H.  Weather: %s",(&PTR_s_None_006817f0)[this_ptr->weather_type]);
    engine_2d_c_drawText_FUN_00401fd0(acStack_28,0,0xc6);
    engine_2d_c_drawText_FUN_00401fd0("I.  Edit ground types",0,0xd1);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar4 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar4 < 0x41) {
      if (uVar4 < 0x33) {
        if (0x30 < uVar4) {
          if (uVar4 < 0x32) {
            iVar5 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                              (g_CEditorToolsPtr,"Load set","models",
                               "*.set",SUB41(local_14,0));
            if (iVar5 != 0) {
              core_set_cpp_CDemonSet_load_FUN_00569410(this_ptr,&stack0xfffffff0);
            }
          }
          else {
            if (this_ptr->geometry_filename[0] == '\0') {
              local_14[0] = '\0';
            }
            else {
              engine_dosio_c_splitPath_FUN_00481f20
                        (in_stack_0000003c,(char *)0x0,(char *)0x0,local_14,(char *)0x0);
              pcVar6 = ".set";
              iVar5 = -1;
              pcVar3 = &stack0xfffffff0;
              do {
                pcVar7 = pcVar3;
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                pcVar7 = pcVar3 + (uint)bVar8 * -2 + 1;
                cVar1 = *pcVar3;
                pcVar3 = pcVar7;
              } while (cVar1 != '\0');
              pcVar7 = pcVar7 + -1;
              do {
                cVar1 = *pcVar6;
                *pcVar7 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar6[1];
                pcVar6 = pcVar6 + 2;
                pcVar7[1] = cVar1;
                pcVar7 = pcVar7 + 2;
              } while (cVar1 != '\0');
              crt_string_c_strupr_FUN_00600770(&stack0xfffffff0);
            }
            bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                              (g_CEditorToolsPtr,"Save set","models",0x648fa3,
                               SUB41(&stack0xfffffff4,0));
            if (CONCAT31(extraout_var_00,bVar2) != 0) {
              core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,&stack0xfffffff8);
            }
          }
        }
      }
      else if (uVar4 < 0x34) {
        core_setedit_cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20(this_ptr);
      }
      else if (uVar4 < 0x37) {
        if (uVar4 == 0x34) {
          core_setedit_cpp_CDemonSet_ViewerVisitSet_FUN_0057a940(this_ptr);
        }
      }
      else if (uVar4 < 0x38) {
        core_setedit_cpp_showDementedLightEditor_FUN_0057c5d0(this_ptr);
      }
      else if (uVar4 == 0x39) {
        core_setedit_cpp_DementedCameraEditor_FUN_0057e7c0(this_ptr);
      }
    }
    else if (uVar4 < 0x42) {
      core_setedit_cpp_DementedFogEditor_FUN_00580730(this_ptr);
    }
    else if (uVar4 < 0x46) {
      if (0x42 < uVar4) {
        if (uVar4 < 0x44) {
          core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
        }
        else if (uVar4 == 0x44) {
          iVar5 = 2;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff940);
          do {
            pcVar3 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar5);
            iVar5 = iVar5 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff948,pcVar3);
          } while (iVar5 < 0xe);
          uVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff94c,"Select default ground type.",
                             this_ptr->default_ground_type + -2,0);
          if (-1 < (int)uVar4) {
            this_ptr->default_ground_type = uVar4 + 2;
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffff950,0,(uint)in_stack_fffff950,(uint)in_stack_fffff954
                     ,(uint)in_stack_fffff958,(uint)in_stack_fffff95c,in_stack_fffff960);
        }
      }
    }
    else if (uVar4 < 0x47) {
      core_setedit_cpp_CDemonSet_ExportSomething_FUN_0057a0c0(this_ptr);
    }
    else if (uVar4 < 0x48) {
      core_setedit_cpp_CDemonSet_FUN_00583170(this_ptr);
    }
    else if (uVar4 < 0x49) {
      iVar5 = this_ptr->weather_type + 1;
      this_ptr->weather_type = iVar5;
      if (2 < iVar5) {
        this_ptr->weather_type = 0;
      }
    }
    else if (uVar4 == 0x49) {
      pcVar6 = ".\\GroundTypes";
      pcVar3 = acStack_318;
      do {
        cVar1 = *pcVar6;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      if (this_ptr->geometry_filename[0] != '\0') {
        engine_dosio_c_ensureTrailingSlash_FUN_00481f80
                  (".\\GroundTypes",(char *)&stack0x00000040,acStack_114);
        engine_dosio_c_splitPath_FUN_00481f20
                  (in_stack_00000040,(char *)0x0,(char *)0x0,acStack_210,(char *)0x0);
        engine_dosio_c_makePath_FUN_00481f50
                  (acStack_310,&stack0x00000048,acStack_10c,acStack_20c,".txt");
      }
      bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                        (g_CEditorToolsPtr,"Select ground type file to edit",true,acStack_30c);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        core_setedit_cpp_EditingGroundTypesAndSaving_FUN_00578630();
      }
    }
    if (uVar4 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}


// Assembly code:
// 00584940: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
// 00584941: PUSH ESI
// 00584942: PUSH EDI
// 00584943: PUSH EBP
// 00584944: SUB ESP,0x704
// 0058494a: MOV EBP,dword ptr [ESP + 0x718]
//   XREF to: Stack[0x4] (READ)
// 00584951: MOV EDX,0x1
// 00584956: LEA EAX,[EBP + 0x14d0f0]
// 0058495c: XOR ECX,ECX
// 0058495e: MOV dword ptr [EBP + 0x14d154],0x0
// 00584968: MOV dword ptr [0x02d807ac],ECX
//   XREF to: 02d807ac (WRITE)
// 0058496e: MOV dword ptr [ESP + 0x6fc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00584975: MOV dword ptr [0x03277d14],EDX
//   XREF to: 03277d14 (WRITE)
// 0058497b: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0058497b
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00584980: PUSH 0x0
// 00584982: PUSH 0x0
// 00584984: PUSH 0x648e6d
//   XREF to: 00648e6d (DATA)
// 00584989: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058498e: ADD ESP,0xc
// 00584991: PUSH 0x16
// 00584993: PUSH 0x0
// 00584995: PUSH 0x648e85
//   XREF to: 00648e85 (DATA)
// 0058499a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058499f: ADD ESP,0xc
// 005849a2: PUSH 0x21
// 005849a4: PUSH 0x0
// 005849a6: PUSH 0x648e92
//   XREF to: 00648e92 (DATA)
// 005849ab: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005849b0: ADD ESP,0xc
// 005849b3: PUSH 0x2c
// 005849b5: PUSH 0x0
// 005849b7: PUSH 0x648e9f
//   XREF to: 00648e9f (DATA)
// 005849bc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005849c1: ADD ESP,0xc
// 005849c4: PUSH 0x42
// 005849c6: PUSH 0x0
// 005849c8: PUSH 0x648eae
//   XREF to: 00648eae (DATA)
// 005849cd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005849d2: ADD ESP,0xc
// 005849d5: PUSH 0x58
// 005849d7: PUSH 0x0
// 005849d9: PUSH 0x648ebb
//   XREF to: 00648ebb (DATA)
// 005849de: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005849e3: ADD ESP,0xc
// 005849e6: PUSH 0x6e
// 005849e8: PUSH 0x0
// 005849ea: PUSH 0x648ecc
//   XREF to: 00648ecc (DATA)
// 005849ef: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005849f4: ADD ESP,0xc
// 005849f7: PUSH 0x79
// 005849f9: PUSH 0x0
// 005849fb: PUSH 0x648ede
//   XREF to: 00648ede (DATA)
// 00584a00: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00584a05: ADD ESP,0xc
// 00584a08: PUSH 0x8f
// 00584a0d: PUSH 0x0
// 00584a0f: PUSH 0x648eed
//   XREF to: 00648eed (DATA)
// 00584a14: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00584a19: ADD ESP,0xc
// 00584a1c: MOV EBX,dword ptr [EBP + 0x15f67c]
// 00584a22: PUSH EBX
// 00584a23: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 00584a28: ADD ESP,0x4
// 00584a2b: PUSH EAX
// 00584a2c: PUSH 0x648f00
//   XREF to: 00648f00 (DATA)
// 00584a31: LEA EAX,[ESP + 0x6b4]
//   XREF to: Stack[-0x68] (DATA)
// 00584a38: PUSH EAX
// 00584a39: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00584a3e: ADD ESP,0xc
// 00584a41: PUSH 0x9a
// 00584a46: PUSH 0x0
// 00584a48: LEA EAX,[ESP + 0x6b4]
//   XREF to: Stack[-0x68] (DATA)
// 00584a4f: PUSH EAX
// 00584a50: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00584a55: ADD ESP,0xc
// 00584a58: PUSH 0xb0
// 00584a5d: PUSH 0x0
// 00584a5f: PUSH 0x648f1c
//   XREF to: 00648f1c (DATA)
// 00584a64: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00584a69: ADD ESP,0xc
// 00584a6c: PUSH 0xbb
// 00584a71: PUSH 0x0
// 00584a73: PUSH 0x648f42
//   XREF to: 00648f42 (DATA)
// 00584a78: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00584a7d: MOV EAX,dword ptr [EBP + 0x161668]
// 00584a83: ADD ESP,0xc
// 00584a86: MOV ESI,dword ptr [EAX*0x4 + 0x6817f0]
//   XREF to: 006817f0 (DATA)
// 00584a8d: PUSH ESI
// 00584a8e: PUSH 0x648f62
//   XREF to: 00648f62 (DATA)
// 00584a93: LEA EAX,[ESP + 0x6b4]
//   XREF to: Stack[-0x68] (DATA)
// 00584a9a: PUSH EAX
// 00584a9b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00584aa0: ADD ESP,0xc
// 00584aa3: PUSH 0xc6
// 00584aa8: PUSH 0x0
// 00584aaa: LEA EAX,[ESP + 0x6b4]
//   XREF to: Stack[-0x68] (DATA)
// 00584ab1: PUSH EAX
// 00584ab2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00584ab7: ADD ESP,0xc
// 00584aba: PUSH 0xd1
// 00584abf: PUSH 0x0
// 00584ac1: PUSH 0x648f72
//   XREF to: 00648f72 (DATA)
// 00584ac6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00584acb: ADD ESP,0xc
// 00584ace: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00584ad3: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00584ad8: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00584ade: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 00584adf: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 00584ae4: ADD ESP,0x4
// 00584ae7: MOV EBX,EAX
// 00584ae9: CMP EAX,0x41
// 00584aec: JNC 0x00584d41
//   XREF to: 00584d41 (CONDITIONAL_JUMP)
// 00584af2: CMP EAX,0x33
// 00584af5: JNC 0x00584d8c
//   XREF to: 00584d8c (CONDITIONAL_JUMP)
// 00584afb: CMP EAX,0x31
// 00584afe: JNC 0x00584db9
//   XREF to: 00584db9 (CONDITIONAL_JUMP)
// 00584b04: CMP EBX,0x1b
//   Label: LAB_00584b04
// 00584b07: JNZ 0x0058497b
//   XREF to: 0058497b (CONDITIONAL_JUMP)
// 00584b0d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00584b12: ADD ESP,0x704
// 00584b18: POP EBP
// 00584b19: POP EDI
// 00584b1a: POP ESI
// 00584b1b: POP EBX
// 00584b1c: RET
// 00584b1d: PUSH 0x0
//   Label: LAB_00584b1d
// 00584b1f: LEA EAX,[ESP + 0x6b0]
//   XREF to: Stack[-0x68] (DATA)
// 00584b26: PUSH EAX
// 00584b27: MOV EAX,0x648f88
//   XREF to: 00648f88 (DATA)
// 00584b2c: PUSH EAX
//   XREF to: 00648f88 (DATA)
// 00584b2d: MOV EAX,0x648f8e
//   XREF to: 00648f8e (DATA)
// 00584b32: PUSH EAX
//   XREF to: 00648f8e (DATA)
// 00584b33: MOV EAX,0x648f95
//   XREF to: 00648f95 (PARAM)
// 00584b38: PUSH EAX
//   XREF to: 00648f95 (DATA)
// 00584b39: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00584b3f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00584b40: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 00584b45: ADD ESP,0x18
// 00584b48: TEST EAX,EAX
// 00584b4a: JZ 0x00584b04
//   XREF to: 00584b04 (CONDITIONAL_JUMP)
// 00584b4c: LEA EAX,[ESP + 0x6ac]
//   XREF to: Stack[-0x68] (DATA)
// 00584b53: PUSH EAX
// 00584b54: PUSH EBP
// 00584b55: CALL core_set.cpp_CDemonSet_load_FUN_00569410
//   XREF to: 00569410 (UNCONDITIONAL_CALL)
// 00584b5a: ADD ESP,0x8
// 00584b5d: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584b5f: MOV byte ptr [ESP + 0x6ac],DL
//   Label: LAB_00584b5f
//   XREF to: Stack[-0x68] (WRITE)
// 00584b66: JMP 0x00584e29
//   XREF to: 00584e29 (UNCONDITIONAL_JUMP)
// 00584b6b: PUSH EBP
//   Label: LAB_00584b6b
// 00584b6c: CALL core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20
//   XREF to: 00578a20 (UNCONDITIONAL_CALL)
// 00584b71: ADD ESP,0x4
// 00584b74: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584b76: PUSH EBP
//   Label: LAB_00584b76
// 00584b77: CALL core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940
//   XREF to: 0057a940 (UNCONDITIONAL_CALL)
// 00584b7c: ADD ESP,0x4
// 00584b7f: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584b81: PUSH EBP
//   Label: LAB_00584b81
// 00584b82: CALL core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0
//   XREF to: 0057c5d0 (UNCONDITIONAL_CALL)
// 00584b87: ADD ESP,0x4
// 00584b8a: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584b8f: PUSH EBP
//   Label: LAB_00584b8f
// 00584b90: CALL core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0
//   XREF to: 0057e7c0 (UNCONDITIONAL_CALL)
// 00584b95: ADD ESP,0x4
// 00584b98: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584b9d: PUSH EBP
//   Label: LAB_00584b9d
// 00584b9e: CALL core_setedit.cpp_DementedFogEditor_FUN_00580730
//   XREF to: 00580730 (UNCONDITIONAL_CALL)
// 00584ba3: ADD ESP,0x4
// 00584ba6: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584bab: PUSH 0x1
//   Label: LAB_00584bab
// 00584bad: PUSH EBP
// 00584bae: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 00584bb3: ADD ESP,0x8
// 00584bb6: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584bbb: MOV EAX,ESP
//   Label: LAB_00584bbb
// 00584bbd: PUSH EAX
// 00584bbe: MOV ESI,0x2
// 00584bc3: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00584bc8: ADD ESP,0x4
// 00584bcb: PUSH ESI
//   Label: LAB_00584bcb
// 00584bcc: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 00584bd1: ADD ESP,0x4
// 00584bd4: PUSH EAX
// 00584bd5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x714] (DATA)
// 00584bd9: PUSH EAX
// 00584bda: INC ESI
// 00584bdb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00584be0: ADD ESP,0x8
// 00584be3: CMP ESI,0xd
// 00584be6: JLE 0x00584bcb
//   XREF to: 00584bcb (CONDITIONAL_JUMP)
// 00584be8: MOV EAX,dword ptr [EBP + 0x15f67c]
// 00584bee: PUSH 0x0
// 00584bf0: SUB EAX,0x2
// 00584bf3: PUSH EAX
// 00584bf4: PUSH 0x648fb7
//   XREF to: 00648fb7 (DATA)
// 00584bf9: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x714] (DATA)
// 00584bfd: PUSH EAX
// 00584bfe: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00584c03: ADD ESP,0x10
// 00584c06: MOV EBX,EAX
// 00584c08: TEST EAX,EAX
// 00584c0a: JL 0x00584c15
//   XREF to: 00584c15 (CONDITIONAL_JUMP)
// 00584c0c: ADD EAX,0x2
// 00584c0f: MOV dword ptr [EBP + 0x15f67c],EAX
// 00584c15: PUSH 0x0
//   Label: LAB_00584c15
// 00584c17: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x714] (DATA)
// 00584c1b: PUSH EAX
// 00584c1c: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00584c21: ADD ESP,0x8
// 00584c24: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584c29: PUSH EBP
//   Label: LAB_00584c29
// 00584c2a: CALL core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0
//   XREF to: 0057a0c0 (UNCONDITIONAL_CALL)
// 00584c2f: ADD ESP,0x4
// 00584c32: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584c37: PUSH EBP
//   Label: LAB_00584c37
// 00584c38: CALL core_setedit.cpp_CDemonSet_FUN_00583170
//   XREF to: 00583170 (UNCONDITIONAL_CALL)
// 00584c3d: ADD ESP,0x4
// 00584c40: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584c45: MOV ECX,dword ptr [EBP + 0x161668]
//   Label: LAB_00584c45
// 00584c4b: INC ECX
// 00584c4c: MOV dword ptr [EBP + 0x161668],ECX
// 00584c52: CMP ECX,0x2
// 00584c55: JLE 0x00584b04
//   XREF to: 00584b04 (CONDITIONAL_JUMP)
// 00584c5b: MOV dword ptr [EBP + 0x161668],0x0
// 00584c65: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584c6a: MOV ESI,0x6816d8
//   Label: LAB_00584c6a
//   XREF to: 006816d8 (DATA)
// 00584c6f: LEA EDI,[ESP + 0x3a8]
//   XREF to: Stack[-0x36c] (DATA)
// 00584c76: PUSH EDI
// 00584c77: MOV AL,byte ptr [ESI]
//   Label: LAB_00584c77
//   XREF to: 006816d8 (READ)
//   XREF to: 006816da (READ)
// 00584c79: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x36c] (DATA)
// 00584c7b: CMP AL,0x0
// 00584c7d: JZ 0x00584c8f
//   XREF to: 00584c8f (CONDITIONAL_JUMP)
// 00584c7f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006816d9 (READ)
//   XREF to: 006816db (READ)
// 00584c82: ADD ESI,0x2
// 00584c85: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x36b] (WRITE)
// 00584c88: ADD EDI,0x2
// 00584c8b: CMP AL,0x0
// 00584c8d: JNZ 0x00584c77
//   XREF to: 00584c77 (CONDITIONAL_JUMP)
// 00584c8f: POP EDI
//   Label: LAB_00584c8f
// 00584c90: CMP byte ptr [EBP + 0x14d0f0],0x0
// 00584c97: JZ 0x00584d01
//   XREF to: 00584d01 (CONDITIONAL_JUMP)
// 00584c99: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x168] (DATA)
// 00584ca0: PUSH EAX
// 00584ca1: LEA EAX,[ESP + 0x704]
//   XREF to: Stack[-0x14] (DATA)
// 00584ca8: PUSH EAX
// 00584ca9: PUSH 0x6816d8
//   XREF to: 006816d8 (DATA)
// 00584cae: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 00584cb3: ADD ESP,0xc
// 00584cb6: PUSH 0x0
// 00584cb8: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x268] (DATA)
// 00584cbf: PUSH EAX
// 00584cc0: PUSH 0x0
// 00584cc2: PUSH 0x0
// 00584cc4: MOV EAX,dword ptr [ESP + 0x70c]
//   XREF to: Stack[-0x18] (READ)
// 00584ccb: PUSH EAX
// 00584ccc: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00584cd1: ADD ESP,0x14
// 00584cd4: PUSH 0x648fd3
//   XREF to: 00648fd3 (DATA)
// 00584cd9: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x268] (DATA)
// 00584ce0: PUSH EAX
// 00584ce1: LEA EAX,[ESP + 0x5b4]
//   XREF to: Stack[-0x168] (DATA)
// 00584ce8: PUSH EAX
// 00584ce9: LEA EAX,[ESP + 0x70c]
//   XREF to: Stack[-0x14] (DATA)
// 00584cf0: PUSH EAX
// 00584cf1: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x36c] (DATA)
// 00584cf8: PUSH EAX
// 00584cf9: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 00584cfe: ADD ESP,0x14
// 00584d01: PUSH 0x1
//   Label: LAB_00584d01
// 00584d03: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x36c] (DATA)
// 00584d0a: PUSH EAX
// 00584d0b: PUSH 0x648fd8
//   XREF to: 00648fd8 (DATA)
// 00584d10: PUSH 0x648fde
//   XREF to: 00648fde (DATA)
// 00584d15: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00584d1b: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00584d1c: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 00584d21: ADD ESP,0x14
// 00584d24: TEST EAX,EAX
// 00584d26: JZ 0x00584b04
//   XREF to: 00584b04 (CONDITIONAL_JUMP)
// 00584d2c: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x36c] (DATA)
// 00584d33: PUSH EAX
// 00584d34: CALL core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630
//   XREF to: 00578630 (UNCONDITIONAL_CALL)
// 00584d39: ADD ESP,0x4
// 00584d3c: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584d41: JBE 0x00584b9d
//   Label: LAB_00584d41
//   XREF to: 00584b9d (CONDITIONAL_JUMP)
// 00584d47: CMP EAX,0x46
// 00584d4a: JNC 0x00584d69
//   XREF to: 00584d69 (CONDITIONAL_JUMP)
// 00584d4c: CMP EAX,0x43
// 00584d4f: JC 0x00584b04
//   XREF to: 00584b04 (CONDITIONAL_JUMP)
// 00584d55: JBE 0x00584bab
//   XREF to: 00584bab (CONDITIONAL_JUMP)
// 00584d5b: CMP EAX,0x44
// 00584d5e: JZ 0x00584bbb
//   XREF to: 00584bbb (CONDITIONAL_JUMP)
// 00584d64: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584d69: JBE 0x00584c29
//   Label: LAB_00584d69
//   XREF to: 00584c29 (CONDITIONAL_JUMP)
// 00584d6f: CMP EAX,0x48
// 00584d72: JC 0x00584c37
//   XREF to: 00584c37 (CONDITIONAL_JUMP)
// 00584d78: JBE 0x00584c45
//   XREF to: 00584c45 (CONDITIONAL_JUMP)
// 00584d7e: CMP EAX,0x49
// 00584d81: JZ 0x00584c6a
//   XREF to: 00584c6a (CONDITIONAL_JUMP)
// 00584d87: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584d8c: JBE 0x00584b6b
//   Label: LAB_00584d8c
//   XREF to: 00584b6b (CONDITIONAL_JUMP)
// 00584d92: CMP EAX,0x37
// 00584d95: JNC 0x00584da5
//   XREF to: 00584da5 (CONDITIONAL_JUMP)
// 00584d97: CMP EAX,0x34
// 00584d9a: JZ 0x00584b76
//   XREF to: 00584b76 (CONDITIONAL_JUMP)
// 00584da0: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584da5: JBE 0x00584b81
//   Label: LAB_00584da5
//   XREF to: 00584b81 (CONDITIONAL_JUMP)
// 00584dab: CMP EAX,0x39
// 00584dae: JZ 0x00584b8f
//   XREF to: 00584b8f (CONDITIONAL_JUMP)
// 00584db4: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
// 00584db9: JBE 0x00584b1d
//   Label: LAB_00584db9
//   XREF to: 00584b1d (CONDITIONAL_JUMP)
// 00584dbf: MOV DL,byte ptr [EBP + 0x14d0f0]
// 00584dc5: TEST DL,DL
// 00584dc7: JZ 0x00584b5f
//   XREF to: 00584b5f (CONDITIONAL_JUMP)
// 00584dcd: PUSH 0x0
// 00584dcf: LEA EAX,[ESP + 0x6b0]
//   XREF to: Stack[-0x68] (DATA)
// 00584dd6: PUSH EAX
// 00584dd7: PUSH 0x0
// 00584dd9: PUSH 0x0
// 00584ddb: MOV EDI,dword ptr [ESP + 0x70c]
//   XREF to: Stack[-0x18] (READ)
// 00584de2: PUSH EDI
// 00584de3: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00584de8: ADD ESP,0x14
// 00584deb: MOV ESI,0x648f9e
//   XREF to: 00648f9e (DATA)
// 00584df0: LEA EDI,[ESP + 0x6ac]
//   XREF to: Stack[-0x68] (DATA)
// 00584df7: PUSH EDI
// 00584df8: SUB ECX,ECX
// 00584dfa: DEC ECX
// 00584dfb: MOV AL,0x0
// 00584dfd: SCASB.REPNE ES:EDI
// 00584dff: DEC EDI
// 00584e00: MOV AL,byte ptr [ESI]
//   Label: LAB_00584e00
//   XREF to: 00648f9e (READ)
//   XREF to: 00648fa0 (READ)
// 00584e02: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x68] (DATA)
// 00584e04: CMP AL,0x0
// 00584e06: JZ 0x00584e18
//   XREF to: 00584e18 (CONDITIONAL_JUMP)
// 00584e08: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00648f9f (READ)
//   XREF to: 00648fa1 (READ)
// 00584e0b: ADD ESI,0x2
// 00584e0e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x67] (WRITE)
// 00584e11: ADD EDI,0x2
// 00584e14: CMP AL,0x0
// 00584e16: JNZ 0x00584e00
//   XREF to: 00584e00 (CONDITIONAL_JUMP)
// 00584e18: POP EDI
//   Label: LAB_00584e18
// 00584e19: LEA EAX,[ESP + 0x6ac]
//   XREF to: Stack[-0x68] (DATA)
// 00584e20: PUSH EAX
// 00584e21: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 00584e26: ADD ESP,0x4
// 00584e29: PUSH 0x1
//   Label: LAB_00584e29
// 00584e2b: LEA EAX,[ESP + 0x6b0]
//   XREF to: Stack[-0x68] (DATA)
// 00584e32: PUSH EAX
// 00584e33: PUSH 0x648fa3
//   XREF to: 00648fa3 (DATA)
// 00584e38: PUSH 0x648fa7
//   XREF to: 00648fa7 (DATA)
// 00584e3d: PUSH 0x648fae
//   XREF to: 00648fae (DATA)
// 00584e42: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00584e47: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00584e48: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 00584e4d: ADD ESP,0x18
// 00584e50: TEST EAX,EAX
// 00584e52: JZ 0x00584b04
//   XREF to: 00584b04 (CONDITIONAL_JUMP)
// 00584e58: LEA EAX,[ESP + 0x6ac]
//   XREF to: Stack[-0x68] (DATA)
// 00584e5f: PUSH EAX
// 00584e60: PUSH EBP
// 00584e61: CALL core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
//   XREF to: 0057a2a0 (UNCONDITIONAL_CALL)
// 00584e66: ADD ESP,0x8
// 00584e69: JMP 0x00584b04
//   XREF to: 00584b04 (UNCONDITIONAL_JUMP)
