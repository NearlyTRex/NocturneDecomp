// Name: core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
// Address: 0057bbe0
// Address Range: [[0057bbe0, 0057c544]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0()

#include "nocturne.h"

void core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               CDemonSet *param_5,int param_6,uint param_7,int param_8,uint param_9,
               int param_10,uint param_11,int param_12,char *param_13,uint param_14,
               int param_15,uint param_16,uint param_17,int param_18,uint param_19,
               int param_20,int param_21,char *param_22,int param_23,uint param_24,
               int param_25,int param_26,int param_27)

{
  char cVar1;
  char *pcVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  int unaff_EDI;
  int iVar5;
  char *pcVar6;
  float10 in_ST0;
  double dVar7;
  char *pcVar8;
  ulonglong uVar9;
  float max_value;
  CPickList *in_stack_fffff7cc;
  char **in_stack_fffff7d0;
  CStrList_vtable *in_stack_fffff7d4;
  CStrList_vtable *in_stack_fffff7d8;
  uint in_stack_fffff7dc;
  char **in_stack_fffff7e0;
  CStrList_vtable *in_stack_fffff7e4;
  byte auStack_490 [8];
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
      pcVar8 = "F.  Blend filter : No";
    }
    else {
      pcVar8 = "F.  Blend filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(CStack_488.cancel_button.button_text + 0x80,pcVar8);
    engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0x84,0,0x58);
    if (*(int *)(param_10 + 0x17f4) == 0) {
      pcVar8 = "G. Move filter : No";
    }
    else {
      pcVar8 = "G. Move filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(CStack_488.cancel_button.button_text + 0x88,pcVar8);
    engine_2d_c_drawText_FUN_00401fd0
              (CStack_488.cancel_button.button_text + 0x8c,g_WindowWidth / 3,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0x90,"H. Velocity X : %f",
               (double)*(int *)(param_12 + 0x17f8) * 0.00390625);
    engine_2d_c_drawText_FUN_00401fd0
              (CStack_488.cancel_button.button_text + 0x94,g_WindowWidth / 3,0x21);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_488.cancel_button.button_text + 0x98,"I. Velocity Y : %f",
               (double)*(int *)(param_14 + 0x17fc) * 0.00390625);
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
               *(uint *)(param_20 + 0x11ec));
    engine_2d_c_drawText_FUN_00401fd0(CStack_488.cancel_button.button_text + 0xb4,0,99);
    iVar5 = 0;
    if (0 < *(int *)(param_22 + 0x11ec)) {
      iVar3 = 0x41;
      param_20 = param_15;
      pcVar8 = param_22;
      do {
        pcVar2 = CStack_488.cancel_button.button_text + 0xb8;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (pcVar2,"%c.  %s for %1.3f seconds",pcVar2,"%c.  %s for %1.3f seconds",
                   iVar3,param_20,(double)*(float *)(pcVar8 + 0x16f4));
        pcVar8 = pcVar8 + 4;
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
      uVar9 = (ulonglong)param_14;
      pcVar8 = "Enter on time";
      goto LAB_0057c050;
    case 0x42:
      max_value = 0.0;
      uVar9 = (ulonglong)param_16;
      pcVar8 = "Enter total time";
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
        pcVar8 = param_13;
        if (0 < *(int *)(param_26 + 0x11ec)) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_490 + 4),pcVar8);
            iVar5 = iVar5 + 1;
            pcVar8 = pcVar8 + 0x28;
          } while (iVar5 < *(int *)(param_26 + 0x11ec));
        }
        iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)(auStack_490 + 4),"Select filter to delete",-1,0);
        if (-1 < iVar5) {
          pcVar2 = (char *)(param_23 + iVar5 * 0x28);
          pcVar8 = (char *)(iVar5 * 0x28 + 0x28 + param_23);
          iVar3 = iVar5 * 4 + param_27;
          param_26 = iVar5;
          while (iVar5 = *(int *)(param_27 + 0x11ec) + -1, param_26 < iVar5) {
            pcVar4 = pcVar8;
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
            pcVar8 = pcVar8 + 0x28;
            param_26 = param_26 + 1;
            *(uint *)(iVar3 + 0x16f4) = *(uint *)(iVar3 + 0x16f8);
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
        pcVar8 = param_22;
        if (0 < *(int *)(param_26 + 0x11ec)) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff7cc,pcVar8);
            iVar5 = iVar5 + 1;
            pcVar8 = pcVar8 + 0x28;
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
        dVar7 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar7;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,iVar5));
        *(int *)(param_25 + 0x17f8) = (int)ROUND(dVar7);
        param_10 = iVar5;
      }
      break;
    case 0x49:
      iVar5 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light Y velocity",
                         (float *)&stack0xfffff7c4,false,0.0,0.0,true);
      if (iVar5 != 0) {
        dVar7 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        in_ST0 = (float10)dVar7;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,iVar5));
        *(int *)(param_25 + 0x17fc) = (int)ROUND(dVar7);
        param_10 = iVar5;
      }
      break;
    case 0x4a:
      uVar9 = ZEXT48(param_13);
      pcVar8 = "Enter light aspect ratio (Y/X)";
LAB_0057c050:
      max_value = 0.0;
      goto LAB_0057c056;
    case 0x4b:
      max_value = 1.0;
      uVar9 = CONCAT44 /* combine 2-byte values */(1,param_15);
      pcVar8 = "Enter light intensity (0..1)";
LAB_0057c056:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,pcVar8,(float *)uVar9,SUB81 /* extract 2-byte value */(uVar9 >> 0x20,0),0.0,max_value,true);
    }
    if (local_30 == 0x1b) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(param_5);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(param_5);
      return;
    }
  } while( true );
}
