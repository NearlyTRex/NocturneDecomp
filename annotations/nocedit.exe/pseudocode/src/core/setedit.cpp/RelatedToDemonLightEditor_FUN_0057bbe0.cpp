// Name: core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
// Address: 0057bbe0
// Address Range: [[0057bbe0, 0057c544]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0()

#include "nocturne.h"

void core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0(void)

{
  char cVar1;
  int iVar2;
  int extraout_EAX;
  int extraout_EAX_00;
  char (*pacVar3) [40];
  char (*pacVar4) [40];
  C3DSLight *pCVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar6;
  char (*pacVar7) [40];
  int iVar8;
  char (*pacVar9) [40];
  double dVar10;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  float *result_ptr;
  bool enable_range_check;
  char *pcVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char **buffer;
  ulonglong uVar15;
  CPickList CStack_4f8;
  char acStack_150 [4];
  char acStack_14c [4];
  char acStack_148 [4];
  char acStack_144 [4];
  char acStack_140 [4];
  char acStack_13c [4];
  char acStack_138 [4];
  char *pcStack_134;
  char acStack_130 [4];
  char acStack_12c [216];
  double local_54;
  char (*local_48) [40];
  float *local_44;
  float *local_40;
  float *local_3c;
  float *local_38;
  char *local_34;
  char (*local_30) [40];
  int local_2c;
  float *local_28;
  char (*local_24) [40];
  int local_20;
  char (*local_1c) [40];
  int local_18;
  C3DSLight *pCStack_14;
  
  pCStack_14 = in_stack_00000004->lights + in_stack_00000008;
  local_48 = pCStack_14->filter_names;
  local_28 = pCStack_14->filter_durations;
  local_40 = &pCStack_14->on_time;
  local_38 = &pCStack_14->cycle_time;
  local_44 = &pCStack_14->aspect;
  local_3c = &pCStack_14->intensity;
  local_34 = pCStack_14->name;
  local_30 = local_48;
  local_24 = local_48;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_150,"Current light : %s",local_34);
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_150,"A.  On time : %f",SUB84 /* extract 2-byte value */((double)pCStack_14->on_time,0),
               (int)((ulonglong)(double)pCStack_14->on_time >> 0x20));
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_150,"B.  Total time : %f",SUB84 /* extract 2-byte value */((double)pCStack_14->cycle_time,0),
               (int)((ulonglong)(double)pCStack_14->cycle_time >> 0x20));
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C.  Add filter",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("D.  Delete filter",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("E.  Edit filter",0,0x42);
    if (pCStack_14->blend_filter == 0) {
      pcVar11 = "F.  Blend filter : No";
    }
    else {
      pcVar11 = "F.  Blend filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_150,pcVar11);
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0x58);
    if (*(int *)(unaff_EBP + 0x17f4) == 0) {
      pcVar11 = "G. Move filter : No";
    }
    else {
      pcVar11 = "G. Move filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,pcVar11);
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,g_WindowWidth / 3,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_14c,"H. Velocity X : %f",
               SUB84 /* extract 2-byte value */((double)*(int *)(unaff_EBP + 0x17f8) * 0.00390625,0));
    engine_2d_c_drawText_FUN_00401fd0(acStack_148,g_WindowWidth / 3,0x21);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_144,"I. Velocity Y : %f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_140,g_WindowWidth / 3,0x2c);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_13c,"J. Aspect (Y/X) : %f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_138,g_WindowWidth / 3,0x37);
    buffer = &pcStack_134;
    uVar13._0_4_ = 0;
    uVar13._4_4_ = 0x57bef5;
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)buffer,"K. Intensity : %f");
    uVar15._4_4_ = (CStrList_vtable *)0x57bf19;
    uVar15._0_4_ = buffer;
    engine_2d_c_drawText_FUN_00401fd0(acStack_130,g_WindowWidth / 3,0x37);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_12c,"Filter count = %d");
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,99);
    iVar2 = SUB84 /* extract 2-byte value */(uVar13,4);
    iVar8 = 0;
    if (0 < pCStack_14->filter_count) {
      iVar6 = 0x41;
      local_1c = local_30;
      local_20 = 0x6e;
      pCVar5 = pCStack_14;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_150,"%c.  %s for %1.3f seconds",iVar6,local_1c,
                   SUB84 /* extract 2-byte value */((double)pCVar5->filter_durations[0],0),
                   (int)((ulonglong)(double)pCVar5->filter_durations[0] >> 0x20));
        pCVar5 = (C3DSLight *)pCVar5->name;
        iVar8 = iVar8 + 1;
        engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,local_20);
        iVar2 = SUB84 /* extract 2-byte value */(uVar13,4);
        iVar6 = iVar6 + 1;
        local_20 = local_20 + 0xb;
        local_1c = local_1c + 1;
      } while (iVar8 < pCStack_14->filter_count);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar14._4_4_ = iVar2;
    uVar14._0_4_ = (int)g_CKeysPtr;
    fVar12 = 8.058612e-39;
    local_2c = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(local_2c) {
    case 0x41:
      pcVar11 = "Enter on time";
      result_ptr = local_40;
      goto LAB_0057c050;
    case 0x42:
      fVar12 = 0.0;
      enable_range_check = false;
      pcVar11 = "Enter total time";
      result_ptr = local_38;
      goto LAB_0057c056;
    case 0x43:
      if (pCStack_14->filter_count < 0x20) {
        iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter new filter name",
                           local_24[pCStack_14->filter_count],0x28,0);
        if ((iVar8 != 0) &&
           (iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                              (g_CEditorToolsPtr,"Enter new filter time",
                               local_28 + pCStack_14->filter_count,false,0.0,0.0,false), iVar8 != 0)
           ) {
          pCStack_14->filter_count = pCStack_14->filter_count + 1;
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Already max filters for this light.");
      }
      break;
    case 0x44:
      if (pCStack_14->filter_count < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to delete!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_4f8);
        iVar8 = 0;
        pacVar3 = local_48;
        if (0 < pCStack_14->filter_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_4f8.base_strlist,*pacVar3);
            iVar8 = iVar8 + 1;
            pacVar3 = pacVar3 + 1;
          } while (iVar8 < pCStack_14->filter_count);
        }
        iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&CStack_4f8,"Select filter to delete",-1,0);
        if (-1 < iVar8) {
          pacVar4 = local_24 + iVar8;
          pacVar3 = local_24 + iVar8 + 1;
          pcVar11 = pCStack_14->name + iVar8 * 4 + -4;
          local_18 = iVar8;
          while (iVar8 = pCStack_14->filter_count + -1, local_18 < iVar8) {
            pacVar7 = pacVar3;
            pacVar9 = pacVar4;
            do {
              cVar1 = (*pacVar7)[0];
              (*pacVar9)[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = (*pacVar7)[1];
              pacVar7 = (char (*) [40])(*pacVar7 + 2);
              (*pacVar9)[1] = cVar1;
              pacVar9 = (char (*) [40])(*pacVar9 + 2);
            } while (cVar1 != '\0');
            pacVar4 = pacVar4 + 1;
            pacVar3 = pacVar3 + 1;
            local_18 = local_18 + 1;
            *(float *)(pcVar11 + 0x16f4) = *(float *)(pcVar11 + 0x16f8);
            pcVar11 = pcVar11 + 4;
          }
          pCStack_14->filter_count = iVar8;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_4f8,0,(uint)fVar12,(uint)uVar14,SUB84 /* extract 2-byte value */(uVar14,4),(uint)(char **)uVar15,
                   (uint)SUB84 /* extract 2-byte value */(uVar15,4));
      }
      break;
    case 0x45:
      if (pCStack_14->filter_count < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to edit!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff760);
        iVar8 = 0;
        pacVar3 = local_24;
        if (0 < pCStack_14->filter_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff760,*pacVar3);
            iVar8 = iVar8 + 1;
            pacVar3 = pacVar3 + 1;
          } while (iVar8 < pCStack_14->filter_count);
        }
        iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff760,"Select filter to edit",-1,0);
        if ((-1 < iVar8) &&
           (iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                              (g_CEditorToolsPtr,"Edit filter name",local_24[iVar8],0x28,0)
           , iVar2 != 0)) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Edit filter time",local_28 + iVar8,false,0.0,0.0,
                     true);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff760,0,(uint)fVar12,(uint)uVar14,SUB84 /* extract 2-byte value */(uVar14,4),
                   (uint)(char **)uVar15,(uint)SUB84 /* extract 2-byte value */(uVar15,4));
      }
      break;
    case 0x46:
      pCStack_14->blend_filter = (uint)(pCStack_14->blend_filter == 0);
      break;
    case 0x47:
      pCStack_14->move_filter = (uint)(pCStack_14->move_filter == 0);
      break;
    case 0x48:
      fVar12 = (float)(pCStack_14->filter_vel).x * (float)0.00390625;
      iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light X velocity",
                         (float *)&stack0xfffff75c,false,0.0,0.0,true);
      if (iVar8 != 0) {
        local_54 = crt_math_c_floor_FUN_005feb90
                             ((double)(fVar12 * (float)256 + (float)0.5));
        dVar10 = crt_math_c_round_FUN_005fe6b0(local_54);
        *(int *)(extraout_EAX + 0x17f8) = (int)ROUND(dVar10);
      }
      break;
    case 0x49:
      fVar12 = (float)(pCStack_14->filter_vel).y * (float)0.00390625;
      iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light Y velocity",
                         (float *)&stack0xfffff75c,false,0.0,0.0,true);
      if (iVar8 != 0) {
        local_54 = crt_math_c_floor_FUN_005feb90
                             ((double)(fVar12 * (float)256 + (float)0.5));
        dVar10 = crt_math_c_round_FUN_005fe6b0(local_54);
        *(int *)(extraout_EAX_00 + 0x17fc) = (int)ROUND(dVar10);
      }
      break;
    case 0x4a:
      pcVar11 = "Enter light aspect ratio (Y/X)";
      result_ptr = local_44;
LAB_0057c050:
      fVar12 = 0.0;
      enable_range_check = false;
      goto LAB_0057c056;
    case 0x4b:
      fVar12 = 1.0;
      enable_range_check = true;
      pcVar11 = "Enter light intensity (0..1)";
      result_ptr = local_3c;
LAB_0057c056:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,pcVar11,result_ptr,enable_range_check,0.0,fVar12,true);
    }
    if (local_30 == (char (*) [40])0x1b) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
      return;
    }
  } while( true );
}
