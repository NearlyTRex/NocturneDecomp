// Name: core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
// Address: 0057bbe0
// Address Range: [[0057bbe0, 0057c544]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0()
// Cross-references:
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cc1f [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0057bbb0 = 0057c03b
//   TerminatedCString s_Current_light_s_0064786a
//   TerminatedCString s_A_On_time_f_0064787d
//   TerminatedCString s_B_Total_time_f_0064788e
//   TerminatedCString s_C_Add_filter_006478a2
//   TerminatedCString s_D_Delete_filter_006478b1
//   TerminatedCString s_E_Edit_filter_006478c3
//   TerminatedCString s_F_Blend_filter_Yes_006478d3
//   TerminatedCString s_F_Blend_filter_No_006478ea
//   TerminatedCString s_G_Move_filter_Yes_00647900
//   TerminatedCString s_G_Move_filter_No_00647915
//   TerminatedCString s_H_Velocity_X_f_00647929
//   TerminatedCString s_I_Velocity_Y_f_0064793c
//   TerminatedCString s_J_Aspect_Y_X_f_0064794f
//   TerminatedCString s_K_Intensity_f_00647964
//   TerminatedCString s_Filter_count_d_00647976
//   TerminatedCString s_c_s_for_1_3f_seconds_00647988
//   TerminatedCString s_Enter_on_time_006479a2
//   TerminatedCString s_Enter_total_time_006479b0
//   TerminatedCString s_Already_max_filters_for__006479c1
//   TerminatedCString s_Enter_new_filter_name_006479e5
//   TerminatedCString s_Enter_new_filter_time_006479fb
//   TerminatedCString s_No_filters_to_delete_00647a11
//   TerminatedCString s_Select_filter_to_delete_00647a27
//   TerminatedCString s_No_filters_to_edit_00647a3f
//   TerminatedCString s_Select_filter_to_edit_00647a53
//   TerminatedCString s_Edit_filter_name_00647a69
//   TerminatedCString s_Edit_filter_time_00647a7a
//   TerminatedCString s_Enter_light_X_velocity_00647a8b
//   TerminatedCString s_Enter_light_Y_velocity_00647aa2
//   TerminatedCString s_Enter_light_aspect_ratio_00647ab9
//   TerminatedCString s_Enter_light_intensity_0__00647ad8
//   double DOUBLE_00647af5 = 0.00390625
//   double DOUBLE_00647afd = 256
//   double DOUBLE_00647b05 = 0.5
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
               CDemonSet *param_5,int param_6,undefined4 param_7,int param_8,undefined4 param_9,
               int param_10,undefined4 param_11,int param_12,char *param_13,uint param_14,
               int param_15,uint param_16,undefined4 param_17,int param_18,undefined4 param_19,
               int param_20,int param_21,char *param_22,int param_23,undefined4 param_24,
               int param_25,int param_26,int param_27)

{
  char cVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  char *pcVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  int unaff_EDI;
  int iVar5;
  char *pcVar6;
  float10 in_ST0;
  float10 fVar7;
  double dVar8;
  char *pcVar9;
  ulonglong uVar10;
  float max_value;
  CPickList *in_stack_fffff7cc;
  char **in_stack_fffff7d0;
  CStrList_vtable *in_stack_fffff7d4;
  CStrList_vtable *in_stack_fffff7d8;
  uint in_stack_fffff7dc;
  char **in_stack_fffff7e0;
  CStrList_vtable *in_stack_fffff7e4;
  undefined1 auStack_490 [8];
  CPickList CStack_488;
  char (*local_4c) [40];
  float *local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  char *local_38;
  char (*local_34) [40];
  int local_30;
  float *local_2c;
  char (*local_28) [40];
  C3DSLight *local_18;
  
  local_18 = param_5->lights + param_6;
  local_4c = local_18->filter_names;
  local_2c = local_18->filter_durations;
  local_44 = &local_18->on_time;
  local_3c = &local_18->cycle_time;
  local_48 = &local_18->aspect;
  local_40 = &local_18->intensity;
  local_38 = local_18->name;
  local_34 = local_4c;
  local_28 = local_4c;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0x5c,"Current light : %s",local_34);
    engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0x60,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 100,"A.  On time : %f",
               (double)*(float *)(unaff_EDI + 0x11e0));
    engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0x68,0,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0x6c,"B.  Total time : %f",
               (double)*(float *)(unaff_EBX + 0x11e4));
    engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0x70,0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C.  Add filter",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("D.  Delete filter",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("E.  Edit filter",0,0x42);
    if (*(int *)(param_8 + 0x11f0) == 0) {
      pcVar9 = "F.  Blend filter : No";
    }
    else {
      pcVar9 = "F.  Blend filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(CStack_488.cancel_button.button_text + 0x80,pcVar9);
    engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0x84,0,0x58);
    if (*(int *)(param_10 + 0x17f4) == 0) {
      pcVar9 = "G. Move filter : No";
    }
    else {
      pcVar9 = "G. Move filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(CStack_488.cancel_button.button_text + 0x88,pcVar9);
    engine_2d_c_drawText_FUN_00401fd0
              (CStack_488.cancel_button.button_text + 0x8c,g_WindowWidth / 3,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0x90,"H. Velocity X : %f",
               (double)*(int *)(param_12 + 0x17f8) * DOUBLE_00647af5);
    engine_2d_c_drawText_FUN_00401fd0
              (CStack_488.cancel_button.button_text + 0x94,g_WindowWidth / 3,0x21);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0x98,"I. Velocity Y : %f",
               (double)*(int *)(param_14 + 0x17fc) * DOUBLE_00647af5);
    engine_2d_c_drawText_FUN_00401fd0
              (CStack_488.cancel_button.button_text + 0x9c,g_WindowWidth / 3,0x2c);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0xa0,"J. Aspect (Y/X) : %f",
               (double)*(float *)(param_16 + 0x120));
    engine_2d_c_drawText_FUN_00401fd0
              (CStack_488.cancel_button.button_text + 0xa4,g_WindowWidth / 3,0x37);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0xa8,"K. Intensity : %f",
               (double)*(float *)(param_18 + 0x124));
    engine_2d_c_drawText_FUN_00401fd0
              (CStack_488.cancel_button.button_text + 0xac,g_WindowWidth / 3,0x37);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0xb0,"Filter count = %d",
               *(undefined4 *)(param_20 + 0x11ec));
    engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0xb4,0,99);
    iVar5 = 0;
    if (0 < *(int *)(param_22 + 0x11ec)) {
      iVar3 = 0x41;
      param_20 = param_15;
      pcVar9 = param_22;
      do {
        pcVar2 = CStack_488.cancel_button.button_text + 0xb8;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (pcVar2,"%c.  %s for %1.3f seconds",pcVar2,"%c.  %s for %1.3f seconds",
                   iVar3,param_20,(double)*(float *)(pcVar9 + 0x16f4));
        pcVar9 = pcVar9 + 4;
        iVar5 = iVar5 + 1;
        engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0xb4,0,param_18);
        iVar3 = iVar3 + 1;
        param_20 = param_20 + 0x28;
      } while (iVar5 < *(int *)(param_22 + 0x11ec));
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    iVar5 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(iVar5) {
    case 0x41:
      uVar10 = (ulonglong)param_14;
      pcVar9 = "Enter on time";
      goto LAB_0057c050;
    case 0x42:
      max_value = 0.0;
      uVar10 = (ulonglong)param_16;
      pcVar9 = "Enter total time";
      goto LAB_0057c056;
    case 0x43:
      if (*(int *)(param_25 + 0x11ec) < 0x20) {
        iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter new filter name",
                           (char *)(*(int *)(param_25 + 0x11ec) * 0x28 + param_21),0x28,0);
        if ((iVar5 != 0) &&
           (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                              (g_CEditorToolsPtr,"Enter new filter time",
                               (float *)(*(int *)(param_26 + 0x11ec) * 4 + param_21),false,0.0,0.0,
                               false), iVar5 != 0)) {
          *(int *)(param_27 + 0x11ec) = *(int *)(param_27 + 0x11ec) + 1;
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Already max filters for this light.");
      }
      break;
    case 0x44:
      if (*(int *)(param_25 + 0x11ec) < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to delete!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_490);
        iVar5 = 0;
        pcVar9 = param_13;
        if (0 < *(int *)(param_26 + 0x11ec)) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_490 + 4),pcVar9);
            iVar5 = iVar5 + 1;
            pcVar9 = pcVar9 + 0x28;
          } while (iVar5 < *(int *)(param_26 + 0x11ec));
        }
        iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)(auStack_490 + 4),"Select filter to delete",-1,0);
        if (-1 < iVar5) {
          pcVar2 = (char *)(param_23 + iVar5 * 0x28);
          pcVar9 = (char *)(iVar5 * 0x28 + 0x28 + param_23);
          iVar3 = iVar5 * 4 + param_27;
          param_26 = iVar5;
          while (iVar5 = *(int *)(param_27 + 0x11ec) + -1, param_26 < iVar5) {
            pcVar4 = pcVar9;
            pcVar6 = pcVar2;
            do {
              cVar1 = *pcVar4;
              *pcVar6 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar4[1];
              pcVar4 = pcVar4 + 2;
              pcVar6[1] = cVar1;
              pcVar6 = pcVar6 + 2;
            } while (cVar1 != '\0');
            pcVar2 = pcVar2 + 0x28;
            pcVar9 = pcVar9 + 0x28;
            param_26 = param_26 + 1;
            *(undefined4 *)(iVar3 + 0x16f4) = *(undefined4 *)(iVar3 + 0x16f8);
            iVar3 = iVar3 + 4;
          }
          *(int *)(param_27 + 0x11ec) = iVar5;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_488,0,(uint)in_stack_fffff7cc,(uint)in_stack_fffff7d0,
                   (uint)in_stack_fffff7d4,(uint)in_stack_fffff7d8,in_stack_fffff7dc);
      }
      break;
    case 0x45:
      if (*(int *)(param_25 + 0x11ec) < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to edit!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff7c8);
        iVar5 = 0;
        pcVar9 = param_22;
        if (0 < *(int *)(param_26 + 0x11ec)) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff7cc,pcVar9);
            iVar5 = iVar5 + 1;
            pcVar9 = pcVar9 + 0x28;
          } while (iVar5 < *(int *)(param_26 + 0x11ec));
        }
        iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff7cc,"Select filter to edit",-1,0);
        if ((-1 < iVar5) &&
           (iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                              (g_CEditorToolsPtr,"Edit filter name",
                               (char *)(iVar5 * 0x28 + param_23),0x28,0), iVar3 != 0)) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Edit filter time",(float *)(iVar5 * 4 + param_23),
                     false,0.0,0.0,true);
        }
        in_stack_fffff7d0 = (char **)0x0;
        in_stack_fffff7cc = (CPickList *)&stack0xfffff7d8;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (in_stack_fffff7cc,0,(uint)in_stack_fffff7d4,(uint)in_stack_fffff7d8,
                   in_stack_fffff7dc,(uint)in_stack_fffff7e0,(uint)in_stack_fffff7e4);
      }
      break;
    case 0x46:
      *(uint *)(param_25 + 0x11f0) = (uint)(*(int *)(param_25 + 0x11f0) == 0);
      break;
    case 0x47:
      *(uint *)(param_25 + 0x17f4) = (uint)(*(int *)(param_25 + 0x17f4) == 0);
      break;
    case 0x48:
      iVar5 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light X velocity",
                         (float *)&stack0xfffff7c4,false,0.0,0.0,true);
      if (iVar5 != 0) {
        dVar8 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar8;
        fVar7 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,param_25));
        *(int *)(SUB84(dVar8,0) + 0x17f8) = (int)ROUND(fVar7);
        param_10 = extraout_EAX;
      }
      break;
    case 0x49:
      iVar5 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light Y velocity",
                         (float *)&stack0xfffff7c4,false,0.0,0.0,true);
      if (iVar5 != 0) {
        dVar8 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar8;
        fVar7 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,param_25));
        *(int *)(SUB84(dVar8,0) + 0x17fc) = (int)ROUND(fVar7);
        param_10 = extraout_EAX_00;
      }
      break;
    case 0x4a:
      uVar10 = ZEXT48(param_13);
      pcVar9 = "Enter light aspect ratio (Y/X)";
LAB_0057c050:
      max_value = 0.0;
      goto LAB_0057c056;
    case 0x4b:
      max_value = 1.0;
      uVar10 = CONCAT44(1,param_15);
      pcVar9 = "Enter light intensity (0..1)";
LAB_0057c056:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,pcVar9,(float *)uVar10,SUB81(uVar10 >> 0x20,0),0.0,max_value,true
                );
    }
    if (local_30 == 0x1b) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(param_5);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(param_5);
      return;
    }
  } while( true );
}


// Assembly code:
// 0057bbe0: PUSH EBX
//   Label: core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
// 0057bbe1: PUSH ESI
// 0057bbe2: PUSH EDI
// 0057bbe3: PUSH EBP
// 0057bbe4: MOV EBP,ESP
// 0057bbe6: SUB ESP,0x894
// 0057bbec: AND ESP,0xfffffff8
// 0057bbef: IMUL EAX,dword ptr [EBP + 0x18],0x1898
//   XREF to: Stack[0x8] (READ)
// 0057bbf6: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057bbf9: ADD EDX,0x19a30
// 0057bbff: ADD EDX,EAX
// 0057bc01: MOV dword ptr [ESP + 0x890],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0057bc08: LEA EAX,[EDX + 0x11f4]
// 0057bc0e: MOV dword ptr [ESP + 0x880],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0057bc15: MOV dword ptr [ESP + 0x85c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0057bc1c: LEA EAX,[EDX + 0x16f4]
// 0057bc22: MOV dword ptr [ESP + 0x87c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0057bc29: MOV EAX,dword ptr [ESP + 0x880]
//   XREF to: Stack[-0x28] (READ)
// 0057bc30: MOV dword ptr [ESP + 0x874],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0057bc37: LEA EAX,[EDX + 0x11e0]
// 0057bc3d: MOV dword ptr [ESP + 0x864],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0057bc44: LEA EAX,[EDX + 0x11e4]
// 0057bc4a: MOV dword ptr [ESP + 0x86c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0057bc51: LEA EAX,[EDX + 0x120]
// 0057bc57: MOV dword ptr [ESP + 0x860],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0057bc5e: LEA EAX,[EDX + 0x124]
// 0057bc64: MOV dword ptr [ESP + 0x868],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0057bc6b: LEA EAX,[EDX + 0x4]
// 0057bc6e: MOV dword ptr [ESP + 0x870],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0057bc75: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0057bc75
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0057bc7a: MOV ECX,dword ptr [ESP + 0x870]
//   XREF to: Stack[-0x38] (READ)
// 0057bc81: PUSH ECX
// 0057bc82: PUSH 0x64786a
//   XREF to: 0064786a (DATA)
// 0057bc87: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bc8e: PUSH EAX
// 0057bc8f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bc94: ADD ESP,0xc
// 0057bc97: PUSH 0x0
// 0057bc99: PUSH 0x0
// 0057bc9b: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bca2: PUSH EAX
// 0057bca3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bca8: ADD ESP,0xc
// 0057bcab: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bcb2: SUB ESP,0x8
// 0057bcb5: FLD float ptr [EAX + 0x11e0]
// 0057bcbb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057bcbe: PUSH 0x64787d
//   XREF to: 0064787d (DATA)
// 0057bcc3: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x154] (DATA)
// 0057bcca: PUSH EAX
// 0057bccb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bcd0: ADD ESP,0x10
// 0057bcd3: PUSH 0x16
// 0057bcd5: PUSH 0x0
// 0057bcd7: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bcde: PUSH EAX
// 0057bcdf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bce4: ADD ESP,0xc
// 0057bce7: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bcee: SUB ESP,0x8
// 0057bcf1: FLD float ptr [EAX + 0x11e4]
// 0057bcf7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057bcfa: PUSH 0x64788e
//   XREF to: 0064788e (DATA)
// 0057bcff: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x154] (DATA)
// 0057bd06: PUSH EAX
// 0057bd07: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bd0c: ADD ESP,0x10
// 0057bd0f: PUSH 0x21
// 0057bd11: PUSH 0x0
// 0057bd13: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bd1a: PUSH EAX
// 0057bd1b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bd20: ADD ESP,0xc
// 0057bd23: PUSH 0x2c
// 0057bd25: PUSH 0x0
// 0057bd27: PUSH 0x6478a2
//   XREF to: 006478a2 (DATA)
// 0057bd2c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bd31: ADD ESP,0xc
// 0057bd34: PUSH 0x37
// 0057bd36: PUSH 0x0
// 0057bd38: PUSH 0x6478b1
//   XREF to: 006478b1 (DATA)
// 0057bd3d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bd42: ADD ESP,0xc
// 0057bd45: PUSH 0x42
// 0057bd47: PUSH 0x0
// 0057bd49: PUSH 0x6478c3
//   XREF to: 006478c3 (DATA)
// 0057bd4e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bd53: ADD ESP,0xc
// 0057bd56: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bd5d: CMP dword ptr [EAX + 0x11f0],0x0
// 0057bd64: JNZ 0x0057c08b
//   XREF to: 0057c08b (CONDITIONAL_JUMP)
// 0057bd6a: PUSH 0x6478ea
//   XREF to: 006478ea (DATA)
// 0057bd6f: LEA EAX,[ESP + 0x758]
//   Label: LAB_0057bd6f
//   XREF to: Stack[-0x154] (DATA)
// 0057bd76: PUSH EAX
// 0057bd77: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bd7c: ADD ESP,0x8
// 0057bd7f: PUSH 0x58
// 0057bd81: PUSH 0x0
// 0057bd83: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bd8a: PUSH EAX
// 0057bd8b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bd90: ADD ESP,0xc
// 0057bd93: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bd9a: CMP dword ptr [EAX + 0x17f4],0x0
// 0057bda1: JZ 0x0057c095
//   XREF to: 0057c095 (CONDITIONAL_JUMP)
// 0057bda7: PUSH 0x647900
//   XREF to: 00647900 (DATA)
// 0057bdac: LEA EAX,[ESP + 0x758]
//   Label: LAB_0057bdac
//   XREF to: Stack[-0x154] (DATA)
// 0057bdb3: PUSH EAX
// 0057bdb4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bdb9: ADD ESP,0x8
// 0057bdbc: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057bdc1: MOV EDX,EAX
// 0057bdc3: MOV ECX,0x3
// 0057bdc8: SAR EDX,0x1f
// 0057bdcb: IDIV ECX
// 0057bdcd: PUSH 0x16
// 0057bdcf: PUSH EAX
// 0057bdd0: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bdd7: PUSH EAX
// 0057bdd8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bddd: ADD ESP,0xc
// 0057bde0: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bde7: FILD dword ptr [EAX + 0x17f8]
// 0057bded: FMUL double ptr [0x00647af5]
//   XREF to: 00647af5 (READ)
// 0057bdf3: SUB ESP,0x8
// 0057bdf6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057bdf9: PUSH 0x647929
//   XREF to: 00647929 (DATA)
// 0057bdfe: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x154] (DATA)
// 0057be05: PUSH EAX
// 0057be06: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057be0b: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057be10: MOV EDX,EAX
// 0057be12: MOV ECX,0x3
// 0057be17: SAR EDX,0x1f
// 0057be1a: IDIV ECX
// 0057be1c: ADD ESP,0x10
// 0057be1f: PUSH 0x21
// 0057be21: PUSH EAX
// 0057be22: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057be29: PUSH EAX
// 0057be2a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057be2f: ADD ESP,0xc
// 0057be32: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057be39: FILD dword ptr [EAX + 0x17fc]
// 0057be3f: FMUL double ptr [0x00647af5]
//   XREF to: 00647af5 (READ)
// 0057be45: SUB ESP,0x8
// 0057be48: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057be4b: PUSH 0x64793c
//   XREF to: 0064793c (DATA)
// 0057be50: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x154] (DATA)
// 0057be57: PUSH EAX
// 0057be58: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057be5d: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057be62: MOV EDX,EAX
// 0057be64: MOV ECX,0x3
// 0057be69: SAR EDX,0x1f
// 0057be6c: IDIV ECX
// 0057be6e: ADD ESP,0x10
// 0057be71: PUSH 0x2c
// 0057be73: PUSH EAX
// 0057be74: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057be7b: PUSH EAX
// 0057be7c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057be81: ADD ESP,0xc
// 0057be84: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057be8b: SUB ESP,0x8
// 0057be8e: FLD float ptr [EAX + 0x120]
// 0057be94: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057be97: PUSH 0x64794f
//   XREF to: 0064794f (DATA)
// 0057be9c: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x154] (DATA)
// 0057bea3: PUSH EAX
// 0057bea4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bea9: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057beae: MOV EDX,EAX
// 0057beb0: MOV ECX,0x3
// 0057beb5: SAR EDX,0x1f
// 0057beb8: IDIV ECX
// 0057beba: ADD ESP,0x10
// 0057bebd: PUSH 0x37
// 0057bebf: PUSH EAX
// 0057bec0: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bec7: PUSH EAX
// 0057bec8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057becd: ADD ESP,0xc
// 0057bed0: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bed7: SUB ESP,0x8
// 0057beda: FLD float ptr [EAX + 0x124]
// 0057bee0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057bee3: PUSH 0x647964
//   XREF to: 00647964 (DATA)
// 0057bee8: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x154] (DATA)
// 0057beef: PUSH EAX
// 0057bef0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bef5: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057befa: MOV EDX,EAX
// 0057befc: MOV ECX,0x3
// 0057bf01: SAR EDX,0x1f
// 0057bf04: IDIV ECX
// 0057bf06: ADD ESP,0x10
// 0057bf09: PUSH 0x37
// 0057bf0b: PUSH EAX
// 0057bf0c: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bf13: PUSH EAX
// 0057bf14: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bf19: ADD ESP,0xc
// 0057bf1c: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bf23: MOV EDI,dword ptr [EAX + 0x11ec]
// 0057bf29: PUSH EDI
// 0057bf2a: PUSH 0x647976
//   XREF to: 00647976 (DATA)
// 0057bf2f: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bf36: PUSH EAX
// 0057bf37: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bf3c: ADD ESP,0xc
// 0057bf3f: PUSH 0x63
// 0057bf41: PUSH 0x0
// 0057bf43: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bf4a: PUSH EAX
// 0057bf4b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bf50: ADD ESP,0xc
// 0057bf53: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bf5a: MOV EDX,dword ptr [EAX + 0x11ec]
// 0057bf60: XOR EDI,EDI
// 0057bf62: TEST EDX,EDX
// 0057bf64: JLE 0x0057c00c
//   XREF to: 0057c00c (CONDITIONAL_JUMP)
// 0057bf6a: MOV EAX,dword ptr [ESP + 0x874]
//   XREF to: Stack[-0x34] (READ)
// 0057bf71: MOV EDX,0x6e
// 0057bf76: MOV ESI,0x41
// 0057bf7b: MOV EBX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bf82: MOV dword ptr [ESP + 0x888],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057bf89: MOV dword ptr [ESP + 0x884],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0057bf90: SUB ESP,0x8
//   Label: LAB_0057bf90
// 0057bf93: FLD float ptr [EBX + 0x16f4]
// 0057bf99: MOV ECX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x20] (READ)
// 0057bfa0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057bfa3: PUSH ECX
// 0057bfa4: PUSH ESI
// 0057bfa5: PUSH 0x647988
//   XREF to: 00647988 (DATA)
// 0057bfaa: LEA EDX,[ESP + 0x768]
//   XREF to: Stack[-0x154] (DATA)
// 0057bfb1: PUSH EDX
// 0057bfb2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057bfb7: ADD ESP,0x18
// 0057bfba: MOV EAX,dword ptr [ESP + 0x884]
//   XREF to: Stack[-0x24] (READ)
// 0057bfc1: PUSH EAX
// 0057bfc2: PUSH 0x0
// 0057bfc4: LEA EDX,[ESP + 0x75c]
//   XREF to: Stack[-0x154] (DATA)
// 0057bfcb: PUSH EDX
// 0057bfcc: ADD EBX,0x4
// 0057bfcf: INC EDI
// 0057bfd0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057bfd5: ADD ESP,0xc
// 0057bfd8: INC ESI
// 0057bfd9: MOV EDX,dword ptr [ESP + 0x884]
//   XREF to: Stack[-0x24] (READ)
// 0057bfe0: MOV ECX,dword ptr [ESP + 0x888]
//   XREF to: Stack[-0x20] (READ)
// 0057bfe7: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057bfee: ADD EDX,0xb
// 0057bff1: ADD ECX,0x28
// 0057bff4: MOV dword ptr [ESP + 0x884],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0057bffb: MOV EDX,dword ptr [EAX + 0x11ec]
// 0057c001: MOV dword ptr [ESP + 0x888],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0057c008: CMP EDI,EDX
// 0057c00a: JL 0x0057bf90
//   XREF to: 0057bf90 (CONDITIONAL_JUMP)
// 0057c00c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0057c00c
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0057c011: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0057c016: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 0057c01c: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 0057c01d: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 0057c022: ADD ESP,0x4
// 0057c025: MOV dword ptr [ESP + 0x878],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0057c02c: SUB EAX,0x41
// 0057c02f: CMP EAX,0xa
// 0057c032: JA 0x0057c05e
//   XREF to: 0057c05e (CONDITIONAL_JUMP)
// 0057c034: JMP dword ptr [EAX*0x4 + 0x57bbb0]
//   Label: switchD
//   XREF to: 0057c03b (COMPUTED_JUMP)
//   XREF to: 0057c09f (COMPUTED_JUMP)
//   XREF to: 0057c0bd (COMPUTED_JUMP)
//   XREF to: 0057c164 (COMPUTED_JUMP)
//   XREF to: 0057c2a8 (COMPUTED_JUMP)
//   XREF to: 0057c3a5 (COMPUTED_JUMP)
//   XREF to: 0057c3cd (COMPUTED_JUMP)
//   XREF to: 0057c3f5 (COMPUTED_JUMP)
//   XREF to: 0057c47e (COMPUTED_JUMP)
//   XREF to: 0057c507 (COMPUTED_JUMP)
//   XREF to: 0057c521 (COMPUTED_JUMP)
//   XREF to: 0057bbb0 (DATA)
// 0057c03b: PUSH 0x1
//   Label: caseD_41
// 0057c03d: PUSH 0x0
// 0057c03f: PUSH 0x0
// 0057c041: PUSH 0x0
// 0057c043: MOV EDI,dword ptr [ESP + 0x874]
//   XREF to: Stack[-0x44] (READ)
// 0057c04a: PUSH EDI
// 0057c04b: PUSH 0x6479a2
//   XREF to: 006479a2 (DATA)
// 0057c050: MOV EAX,[0x00678a60]
//   Label: LAB_0057c050
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057c055: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0057c056: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   Label: LAB_0057c056
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0057c05b: ADD ESP,0x1c
// 0057c05e: CMP dword ptr [ESP + 0x878],0x1b
//   Label: default
//   XREF to: Stack[-0x30] (READ)
// 0057c066: JNZ 0x0057bc75
//   XREF to: 0057bc75 (CONDITIONAL_JUMP)
// 0057c06c: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057c06f: PUSH ECX
// 0057c070: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057c075: ADD ESP,0x4
// 0057c078: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057c07b: PUSH EBX
// 0057c07c: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057c081: ADD ESP,0x4
// 0057c084: MOV ESP,EBP
// 0057c086: POP EBP
// 0057c087: POP EDI
// 0057c088: POP ESI
// 0057c089: POP EBX
// 0057c08a: RET
// 0057c08b: PUSH 0x6478d3
//   Label: LAB_0057c08b
//   XREF to: 006478d3 (DATA)
// 0057c090: JMP 0x0057bd6f
//   XREF to: 0057bd6f (UNCONDITIONAL_JUMP)
// 0057c095: PUSH 0x647915
//   Label: LAB_0057c095
//   XREF to: 00647915 (DATA)
// 0057c09a: JMP 0x0057bdac
//   XREF to: 0057bdac (UNCONDITIONAL_JUMP)
// 0057c09f: PUSH 0x1
//   Label: caseD_42
// 0057c0a1: PUSH 0x0
// 0057c0a3: PUSH 0x0
// 0057c0a5: PUSH 0x0
// 0057c0a7: MOV EBX,dword ptr [ESP + 0x87c]
//   XREF to: Stack[-0x3c] (READ)
// 0057c0ae: PUSH EBX
// 0057c0af: PUSH 0x6479b0
//   XREF to: 006479b0 (DATA)
// 0057c0b4: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057c0ba: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0057c0bb: JMP 0x0057c056
//   XREF to: 0057c056 (UNCONDITIONAL_JUMP)
// 0057c0bd: MOV EAX,dword ptr [ESP + 0x890]
//   Label: caseD_43
//   XREF to: Stack[-0x18] (READ)
// 0057c0c4: MOV EDX,dword ptr [EAX + 0x11ec]
// 0057c0ca: CMP EDX,0x20
// 0057c0cd: JL 0x0057c0e8
//   XREF to: 0057c0e8 (CONDITIONAL_JUMP)
// 0057c0cf: PUSH 0x6479c1
//   XREF to: 006479c1 (DATA)
// 0057c0d4: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057c0da: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057c0db: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0057c0e0: ADD ESP,0x8
// 0057c0e3: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c0e8: IMUL EAX,EDX,0x28
//   Label: LAB_0057c0e8
// 0057c0eb: PUSH 0x0
// 0057c0ed: MOV EBX,dword ptr [ESP + 0x884]
//   XREF to: Stack[-0x28] (READ)
// 0057c0f4: PUSH 0x28
// 0057c0f6: ADD EAX,EBX
// 0057c0f8: PUSH EAX
// 0057c0f9: PUSH 0x6479e5
//   XREF to: 006479e5 (DATA)
// 0057c0fe: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057c104: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0057c105: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0057c10a: ADD ESP,0x14
// 0057c10d: TEST EAX,EAX
// 0057c10f: JZ 0x0057c05e
//   XREF to: 0057c05e (CONDITIONAL_JUMP)
// 0057c115: PUSH 0x0
// 0057c117: MOV EAX,dword ptr [ESP + 0x894]
//   XREF to: Stack[-0x18] (READ)
// 0057c11e: MOV EDI,dword ptr [ESP + 0x880]
//   XREF to: Stack[-0x2c] (READ)
// 0057c125: PUSH 0x0
// 0057c127: MOV EAX,dword ptr [EAX + 0x11ec]
// 0057c12d: PUSH 0x0
// 0057c12f: SHL EAX,0x2
// 0057c132: PUSH 0x0
// 0057c134: ADD EAX,EDI
// 0057c136: PUSH EAX
// 0057c137: PUSH 0x6479fb
//   XREF to: 006479fb (DATA)
// 0057c13c: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057c141: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0057c142: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0057c147: ADD ESP,0x1c
// 0057c14a: TEST EAX,EAX
// 0057c14c: JZ 0x0057c05e
//   XREF to: 0057c05e (CONDITIONAL_JUMP)
// 0057c152: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c159: INC dword ptr [EAX + 0x11ec]
// 0057c15f: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c164: MOV EAX,dword ptr [ESP + 0x890]
//   Label: caseD_44
//   XREF to: Stack[-0x18] (READ)
// 0057c16b: CMP dword ptr [EAX + 0x11ec],0x1
// 0057c172: JL 0x0057c273
//   XREF to: 0057c273 (CONDITIONAL_JUMP)
// 0057c178: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x4fc] (DATA)
// 0057c17f: PUSH EAX
// 0057c180: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057c185: ADD ESP,0x4
// 0057c188: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c18f: MOV EDI,dword ptr [EAX + 0x11ec]
// 0057c195: XOR ESI,ESI
// 0057c197: TEST EDI,EDI
// 0057c199: JLE 0x0057c1c8
//   XREF to: 0057c1c8 (CONDITIONAL_JUMP)
// 0057c19b: MOV EBX,dword ptr [ESP + 0x85c]
//   XREF to: Stack[-0x4c] (READ)
// 0057c1a2: PUSH EBX
//   Label: LAB_0057c1a2
// 0057c1a3: LEA EDX,[ESP + 0x3b0]
//   XREF to: Stack[-0x4fc] (DATA)
// 0057c1aa: PUSH EDX
// 0057c1ab: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057c1b0: ADD ESP,0x8
// 0057c1b3: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c1ba: INC ESI
// 0057c1bb: MOV EDI,dword ptr [EAX + 0x11ec]
// 0057c1c1: ADD EBX,0x28
// 0057c1c4: CMP ESI,EDI
// 0057c1c6: JL 0x0057c1a2
//   XREF to: 0057c1a2 (CONDITIONAL_JUMP)
// 0057c1c8: PUSH 0x0
//   Label: LAB_0057c1c8
// 0057c1ca: PUSH -0x1
// 0057c1cc: PUSH 0x647a27
//   XREF to: 00647a27 (DATA)
// 0057c1d1: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x4fc] (DATA)
// 0057c1d8: PUSH EAX
// 0057c1d9: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057c1de: ADD ESP,0x10
// 0057c1e1: TEST EAX,EAX
// 0057c1e3: JL 0x0057c291
//   XREF to: 0057c291 (CONDITIONAL_JUMP)
// 0057c1e9: MOV dword ptr [ESP + 0x88c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057c1f0: LEA EBX,[EAX*0x4 + 0x0]
// 0057c1f7: IMUL EAX,EAX,0x28
// 0057c1fa: ADD EBX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c201: MOV EDX,dword ptr [ESP + 0x880]
//   XREF to: Stack[-0x28] (READ)
// 0057c208: MOV ESI,dword ptr [ESP + 0x880]
//   XREF to: Stack[-0x28] (READ)
// 0057c20f: ADD EDX,EAX
// 0057c211: LEA ECX,[EAX + 0x28]
// 0057c214: ADD ECX,ESI
// 0057c216: MOV EAX,dword ptr [ESP + 0x890]
//   Label: LAB_0057c216
//   XREF to: Stack[-0x18] (READ)
// 0057c21d: MOV ESI,dword ptr [EAX + 0x11ec]
// 0057c223: MOV EDI,dword ptr [ESP + 0x88c]
//   XREF to: Stack[-0x1c] (READ)
// 0057c22a: DEC ESI
// 0057c22b: CMP ESI,EDI
// 0057c22d: JLE 0x0057c28b
//   XREF to: 0057c28b (CONDITIONAL_JUMP)
// 0057c22f: MOV ESI,ECX
// 0057c231: MOV EDI,EDX
// 0057c233: ADD EBX,0x4
// 0057c236: PUSH EDI
// 0057c237: MOV AL,byte ptr [ESI]
//   Label: LAB_0057c237
// 0057c239: MOV byte ptr [EDI],AL
// 0057c23b: CMP AL,0x0
// 0057c23d: JZ 0x0057c24f
//   XREF to: 0057c24f (CONDITIONAL_JUMP)
// 0057c23f: MOV AL,byte ptr [ESI + 0x1]
// 0057c242: ADD ESI,0x2
// 0057c245: MOV byte ptr [EDI + 0x1],AL
// 0057c248: ADD EDI,0x2
// 0057c24b: CMP AL,0x0
// 0057c24d: JNZ 0x0057c237
//   XREF to: 0057c237 (CONDITIONAL_JUMP)
// 0057c24f: POP EDI
//   Label: LAB_0057c24f
// 0057c250: FLD float ptr [EBX + 0x16f4]
// 0057c256: MOV EAX,dword ptr [ESP + 0x88c]
//   XREF to: Stack[-0x1c] (READ)
// 0057c25d: ADD EDX,0x28
// 0057c260: ADD ECX,0x28
// 0057c263: INC EAX
// 0057c264: FSTP float ptr [EBX + 0x16f0]
// 0057c26a: MOV dword ptr [ESP + 0x88c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057c271: JMP 0x0057c216
//   XREF to: 0057c216 (UNCONDITIONAL_JUMP)
// 0057c273: PUSH 0x647a11
//   Label: LAB_0057c273
//   XREF to: 00647a11 (DATA)
// 0057c278: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057c27d: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0057c27e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0057c283: ADD ESP,0x8
// 0057c286: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c28b: MOV dword ptr [EAX + 0x11ec],ESI
//   Label: LAB_0057c28b
// 0057c291: PUSH 0x0
//   Label: LAB_0057c291
// 0057c293: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x4fc] (DATA)
// 0057c29a: PUSH EAX
// 0057c29b: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057c2a0: ADD ESP,0x8
// 0057c2a3: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c2a8: MOV EAX,dword ptr [ESP + 0x890]
//   Label: caseD_45
//   XREF to: Stack[-0x18] (READ)
// 0057c2af: CMP dword ptr [EAX + 0x11ec],0x1
// 0057c2b6: JL 0x0057c38c
//   XREF to: 0057c38c (CONDITIONAL_JUMP)
// 0057c2bc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8a4] (DATA)
// 0057c2c0: PUSH EAX
// 0057c2c1: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057c2c6: ADD ESP,0x4
// 0057c2c9: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c2d0: XOR EBX,EBX
// 0057c2d2: MOV EDX,dword ptr [EAX + 0x11ec]
// 0057c2d8: MOV ESI,dword ptr [ESP + 0x880]
//   XREF to: Stack[-0x28] (READ)
// 0057c2df: TEST EDX,EDX
// 0057c2e1: JLE 0x0057c306
//   XREF to: 0057c306 (CONDITIONAL_JUMP)
// 0057c2e3: PUSH ESI
//   Label: LAB_0057c2e3
// 0057c2e4: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0x8a4] (DATA)
// 0057c2e8: PUSH EDX
// 0057c2e9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057c2ee: ADD ESP,0x8
// 0057c2f1: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c2f8: INC EBX
// 0057c2f9: MOV ECX,dword ptr [EAX + 0x11ec]
// 0057c2ff: ADD ESI,0x28
// 0057c302: CMP EBX,ECX
// 0057c304: JL 0x0057c2e3
//   XREF to: 0057c2e3 (CONDITIONAL_JUMP)
// 0057c306: PUSH 0x0
//   Label: LAB_0057c306
// 0057c308: PUSH -0x1
// 0057c30a: PUSH 0x647a53
//   XREF to: 00647a53 (DATA)
// 0057c30f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8a4] (DATA)
// 0057c313: PUSH EAX
// 0057c314: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057c319: MOV EBX,EAX
// 0057c31b: ADD ESP,0x10
// 0057c31e: TEST EAX,EAX
// 0057c320: JL 0x0057c378
//   XREF to: 0057c378 (CONDITIONAL_JUMP)
// 0057c322: IMUL EAX,EAX,0x28
// 0057c325: PUSH 0x0
// 0057c327: MOV ESI,dword ptr [ESP + 0x884]
//   XREF to: Stack[-0x28] (READ)
// 0057c32e: PUSH 0x28
// 0057c330: ADD EAX,ESI
// 0057c332: PUSH EAX
// 0057c333: PUSH 0x647a69
//   XREF to: 00647a69 (DATA)
// 0057c338: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057c33e: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0057c33f: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0057c344: ADD ESP,0x14
// 0057c347: TEST EAX,EAX
// 0057c349: JZ 0x0057c378
//   XREF to: 0057c378 (CONDITIONAL_JUMP)
// 0057c34b: PUSH 0x1
// 0057c34d: PUSH 0x0
// 0057c34f: MOV EDX,dword ptr [ESP + 0x884]
//   XREF to: Stack[-0x2c] (READ)
// 0057c356: PUSH 0x0
// 0057c358: LEA EAX,[EBX*0x4 + 0x0]
// 0057c35f: PUSH 0x0
// 0057c361: ADD EAX,EDX
// 0057c363: PUSH EAX
// 0057c364: PUSH 0x647a7a
//   XREF to: 00647a7a (DATA)
// 0057c369: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057c36f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057c370: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0057c375: ADD ESP,0x1c
// 0057c378: PUSH 0x0
//   Label: LAB_0057c378
// 0057c37a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x8a4] (DATA)
// 0057c37e: PUSH EAX
// 0057c37f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057c384: ADD ESP,0x8
// 0057c387: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c38c: PUSH 0x647a3f
//   Label: LAB_0057c38c
//   XREF to: 00647a3f (DATA)
// 0057c391: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057c397: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057c398: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0057c39d: ADD ESP,0x8
// 0057c3a0: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c3a5: MOV EAX,dword ptr [ESP + 0x890]
//   Label: caseD_46
//   XREF to: Stack[-0x18] (READ)
// 0057c3ac: CMP dword ptr [EAX + 0x11f0],0x0
// 0057c3b3: SETZ AL
// 0057c3b6: MOV EDX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c3bd: AND EAX,0xff
// 0057c3c2: MOV dword ptr [EDX + 0x11f0],EAX
// 0057c3c8: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c3cd: MOV EAX,dword ptr [ESP + 0x890]
//   Label: caseD_47
//   XREF to: Stack[-0x18] (READ)
// 0057c3d4: CMP dword ptr [EAX + 0x17f4],0x0
// 0057c3db: SETZ AL
// 0057c3de: MOV EDX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c3e5: AND EAX,0xff
// 0057c3ea: MOV dword ptr [EDX + 0x17f4],EAX
// 0057c3f0: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c3f5: PUSH 0x1
//   Label: caseD_48
// 0057c3f7: PUSH 0x0
// 0057c3f9: MOV EAX,dword ptr [ESP + 0x898]
//   XREF to: Stack[-0x18] (READ)
// 0057c400: PUSH 0x0
// 0057c402: PUSH 0x0
// 0057c404: FILD dword ptr [EAX + 0x17f8]
// 0057c40a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8a8] (DATA)
// 0057c40e: PUSH EAX
// 0057c40f: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057c415: PUSH 0x647a8b
//   XREF to: 00647a8b (DATA)
// 0057c41a: FMUL double ptr [0x00647af5]
//   XREF to: 00647af5 (READ)
// 0057c420: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057c421: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8a8] (WRITE)
// 0057c425: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0057c42a: ADD ESP,0x1c
// 0057c42d: TEST EAX,EAX
// 0057c42f: JZ 0x0057c05e
//   XREF to: 0057c05e (CONDITIONAL_JUMP)
// 0057c435: FLD float ptr [ESP]
//   XREF to: Stack[-0x8a8] (DATA)
// 0057c438: FMUL double ptr [0x00647afd]
//   XREF to: 00647afd (READ)
// 0057c43e: FADD double ptr [0x00647b05]
//   XREF to: 00647b05 (READ)
// 0057c444: SUB ESP,0x8
// 0057c447: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057c44a: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0057c44f: MOV dword ptr [ESP + 0x85c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0057c456: MOV dword ptr [ESP + 0x860],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0057c45d: FLD double ptr [ESP + 0x85c]
//   XREF to: Stack[-0x54] (READ)
// 0057c464: ADD ESP,0x8
// 0057c467: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c46e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0057c473: FISTP dword ptr [EAX + 0x17f8]
// 0057c479: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c47e: PUSH 0x1
//   Label: caseD_49
// 0057c480: PUSH 0x0
// 0057c482: MOV EAX,dword ptr [ESP + 0x898]
//   XREF to: Stack[-0x18] (READ)
// 0057c489: PUSH 0x0
// 0057c48b: PUSH 0x0
// 0057c48d: FILD dword ptr [EAX + 0x17fc]
// 0057c493: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8a8] (DATA)
// 0057c497: PUSH EAX
// 0057c498: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057c49e: PUSH 0x647aa2
//   XREF to: 00647aa2 (DATA)
// 0057c4a3: FMUL double ptr [0x00647af5]
//   XREF to: 00647af5 (READ)
// 0057c4a9: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0057c4aa: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8a8] (WRITE)
// 0057c4ae: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0057c4b3: ADD ESP,0x1c
// 0057c4b6: TEST EAX,EAX
// 0057c4b8: JZ 0x0057c05e
//   XREF to: 0057c05e (CONDITIONAL_JUMP)
// 0057c4be: FLD float ptr [ESP]
//   XREF to: Stack[-0x8a8] (DATA)
// 0057c4c1: FMUL double ptr [0x00647afd]
//   XREF to: 00647afd (READ)
// 0057c4c7: FADD double ptr [0x00647b05]
//   XREF to: 00647b05 (READ)
// 0057c4cd: SUB ESP,0x8
// 0057c4d0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8b0] (DATA)
// 0057c4d3: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0057c4d8: MOV dword ptr [ESP + 0x85c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0057c4df: MOV dword ptr [ESP + 0x860],EDX
//   XREF to: Stack[-0x50] (WRITE)
//   XREF to: 02cf1cd4 (DATA)
// 0057c4e6: FLD double ptr [ESP + 0x85c]
//   XREF to: Stack[-0x54] (READ)
// 0057c4ed: ADD ESP,0x8
// 0057c4f0: MOV EAX,dword ptr [ESP + 0x890]
//   XREF to: Stack[-0x18] (READ)
// 0057c4f7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0057c4fc: FISTP dword ptr [EAX + 0x17fc]
// 0057c502: JMP 0x0057c05e
//   XREF to: 0057c05e (UNCONDITIONAL_JUMP)
// 0057c507: PUSH 0x1
//   Label: caseD_4a
// 0057c509: PUSH 0x0
// 0057c50b: PUSH 0x0
// 0057c50d: PUSH 0x0
// 0057c50f: MOV EDI,dword ptr [ESP + 0x870]
//   XREF to: Stack[-0x48] (READ)
// 0057c516: PUSH EDI
// 0057c517: PUSH 0x647ab9
//   XREF to: 00647ab9 (DATA)
// 0057c51c: JMP 0x0057c050
//   XREF to: 0057c050 (UNCONDITIONAL_JUMP)
// 0057c521: PUSH 0x1
//   Label: caseD_4b
// 0057c523: PUSH 0x3f800000
// 0057c528: PUSH 0x0
// 0057c52a: PUSH 0x1
// 0057c52c: MOV EBX,dword ptr [ESP + 0x878]
//   XREF to: Stack[-0x40] (READ)
// 0057c533: PUSH EBX
// 0057c534: PUSH 0x647ad8
//   XREF to: 00647ad8 (DATA)
// 0057c539: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057c53f: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0057c540: JMP 0x0057c056
//   XREF to: 0057c056 (UNCONDITIONAL_JUMP)
