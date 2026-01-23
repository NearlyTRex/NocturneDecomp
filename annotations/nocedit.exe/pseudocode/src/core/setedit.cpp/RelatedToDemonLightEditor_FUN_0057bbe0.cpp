// Name: core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
// Address: 0057bbe0
// Address Range: [[0057bbe0, 0057c544]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0()

#include "nocturne.h"

void core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0(void)

{
  char cVar1;
  char (*pacVar2) [40];
  char (*pacVar3) [40];
  C3DSLight *pCVar4;
  int iVar5;
  char (*pacVar6) [40];
  int iVar7;
  char (*pacVar8) [40];
  double dVar9;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  char *pcVar10;
  float *result_ptr;
  ulonglong uVar11;
  float in_stack_fffff758;
  uint in_stack_fffff75c;
  uint in_stack_fffff760;
  char **in_stack_fffff764;
  CStrList_vtable *in_stack_fffff768;
  CPickList local_4fc;
  char local_154 [252];
  double dStack_58;
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
  int local_24;
  char (*local_20) [40];
  int local_1c;
  C3DSLight *local_18;
  
  local_18 = in_stack_00000004->lights + in_stack_00000008;
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
    crt_stdio_c_sprintf_FUN_005fdbd0(local_154,"Current light : %s");
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_154,"A.  On time : %f",(double)local_18->on_time);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_154,"B.  Total time : %f",(double)local_18->cycle_time);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C.  Add filter",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("D.  Delete filter",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("E.  Edit filter",0,0x42);
    if (local_18->blend_filter == 0) {
      pcVar10 = "F.  Blend filter : No";
    }
    else {
      pcVar10 = "F.  Blend filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_154,pcVar10);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x58);
    if (local_18->move_filter == 0) {
      pcVar10 = "G. Move filter : No";
    }
    else {
      pcVar10 = "G. Move filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_154,pcVar10);
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_154,"H. Velocity X : %f",
               (double)(local_18->filter_vel).x * 0.00390625);
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x21);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_154,"I. Velocity Y : %f",
               (double)(local_18->filter_vel).y * 0.00390625);
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x2c);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_154,"J. Aspect (Y/X) : %f",(double)local_18->aspect);
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x37);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_154,"K. Intensity : %f",(double)local_18->intensity)
    ;
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x37);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_154,"Filter count = %d");
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,99);
    iVar7 = 0;
    if (0 < local_18->filter_count) {
      iVar5 = 0x41;
      local_20 = local_34;
      local_24 = 0x6e;
      pCVar4 = local_18;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_154,"%c.  %s for %1.3f seconds",iVar5,local_20,
                   (double)pCVar4->filter_durations[0]);
        pCVar4 = (C3DSLight *)pCVar4->name;
        iVar7 = iVar7 + 1;
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,local_24);
        iVar5 = iVar5 + 1;
        local_24 = local_24 + 0xb;
        local_20 = local_20 + 1;
      } while (iVar7 < local_18->filter_count);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    local_30 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(local_30) {
    case 0x41:
      pcVar10 = "Enter on time";
      result_ptr = local_44;
      goto LAB_0057c050;
    case 0x42:
      uVar11 = 0x100000000;
      iVar7 = 0;
      pcVar10 = "Enter total time";
      result_ptr = local_3c;
      goto LAB_0057c056;
    case 0x43:
      if (local_18->filter_count < 0x20) {
        iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter new filter name",
                           local_28[local_18->filter_count],0x28,0);
        if ((iVar7 != 0) &&
           (iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                              (g_CEditorToolsPtr,"Enter new filter time",
                               local_2c + local_18->filter_count,0,0.0,0.0,0), iVar7 != 0)) {
          local_18->filter_count = local_18->filter_count + 1;
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Already max filters for this light.");
      }
      break;
    case 0x44:
      if (local_18->filter_count < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to delete!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4fc);
        iVar7 = 0;
        pacVar2 = local_4c;
        if (0 < local_18->filter_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4fc.base_strlist,*pacVar2);
            iVar7 = iVar7 + 1;
            pacVar2 = pacVar2 + 1;
          } while (iVar7 < local_18->filter_count);
        }
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_4fc,"Select filter to delete",-1,0);
        if (-1 < iVar7) {
          pacVar3 = local_28 + iVar7;
          pacVar2 = local_28 + iVar7 + 1;
          pcVar10 = local_18->name + iVar7 * 4 + -4;
          local_1c = iVar7;
          while (iVar7 = local_18->filter_count + -1, local_1c < iVar7) {
            pacVar6 = pacVar2;
            pacVar8 = pacVar3;
            do {
              cVar1 = (*pacVar6)[0];
              (*pacVar8)[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = (*pacVar6)[1];
              pacVar6 = (char (*) [40])(*pacVar6 + 2);
              (*pacVar8)[1] = cVar1;
              pacVar8 = (char (*) [40])(*pacVar8 + 2);
            } while (cVar1 != '\0');
            pacVar3 = pacVar3 + 1;
            pacVar2 = pacVar2 + 1;
            local_1c = local_1c + 1;
            *(float *)(pcVar10 + 0x16f4) = *(float *)(pcVar10 + 0x16f8);
            pcVar10 = pcVar10 + 4;
          }
          local_18->filter_count = iVar7;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_4fc,0,(uint)in_stack_fffff758,in_stack_fffff75c,in_stack_fffff760,
                   (uint)in_stack_fffff764,(uint)in_stack_fffff768);
      }
      break;
    case 0x45:
      if (local_18->filter_count < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to edit!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff75c);
        iVar7 = 0;
        pacVar2 = local_28;
        if (0 < local_18->filter_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff75c,*pacVar2);
            iVar7 = iVar7 + 1;
            pacVar2 = pacVar2 + 1;
          } while (iVar7 < local_18->filter_count);
        }
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff75c,"Select filter to edit",-1,0);
        if ((-1 < iVar7) &&
           (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                              (g_CEditorToolsPtr,"Edit filter name",local_28[iVar7],0x28,0)
           , iVar5 != 0)) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Edit filter time",local_2c + iVar7,0,0.0,0.0,1);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff75c,0,(uint)in_stack_fffff758,in_stack_fffff75c,
                   in_stack_fffff760,(uint)in_stack_fffff764,(uint)in_stack_fffff768);
      }
      break;
    case 0x46:
      local_18->blend_filter = (uint)(local_18->blend_filter == 0);
      break;
    case 0x47:
      local_18->move_filter = (uint)(local_18->move_filter == 0);
      break;
    case 0x48:
      in_stack_fffff758 = (float)(local_18->filter_vel).x * (float)0.00390625;
      iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light X velocity",
                         (float *)&stack0xfffff758,0,0.0,0.0,1);
      if (iVar7 != 0) {
        dStack_58 = crt_math_c_floor_FUN_005feb90
                              ((double)(in_stack_fffff758 * (float)256 +
                                       (float)0.5));
        iVar7 = local_1c;
        dVar9 = crt_math_c_round_FUN_005fe6b0(dStack_58);
        *(int *)(iVar7 + 0x17f8) = (int)ROUND(dVar9);
      }
      break;
    case 0x49:
      in_stack_fffff758 = (float)(local_18->filter_vel).y * (float)0.00390625;
      iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light Y velocity",
                         (float *)&stack0xfffff758,0,0.0,0.0,1);
      if (iVar7 != 0) {
        dStack_58 = crt_math_c_floor_FUN_005feb90
                              ((double)(in_stack_fffff758 * (float)256 +
                                       (float)0.5));
        iVar7 = local_1c;
        dVar9 = crt_math_c_round_FUN_005fe6b0(dStack_58);
        *(int *)(iVar7 + 0x17fc) = (int)ROUND(dVar9);
      }
      break;
    case 0x4a:
      pcVar10 = "Enter light aspect ratio (Y/X)";
      result_ptr = local_48;
LAB_0057c050:
      uVar11 = 0x100000000;
      iVar7 = 0;
      goto LAB_0057c056;
    case 0x4b:
      uVar11 = 0x13f800000;
      iVar7 = 1;
      pcVar10 = "Enter light intensity (0..1)";
      result_ptr = local_40;
LAB_0057c056:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,pcVar10,result_ptr,iVar7,0.0,(float)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    }
    if (local_30 == 0x1b) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
      return;
    }
  } while( true );
}
