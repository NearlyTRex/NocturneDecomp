// Name: core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
// Address: 0057bbe0
// Address Range: [[0057bbe0, 0057c544]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0()

#include "nocturne.h"

void core_setedit_cpp_RelatedToDemonLightEditor_FUN_0057bbe0
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               CDemonSet *param_5,int param_6)

{
  char cVar1;
  C3DSLight *pCVar2;
  int extraout_EAX;
  int extraout_EAX_00;
  char *pcVar3;
  char (*pacVar4) [40];
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  double dVar9;
  char *pcVar10;
  ulonglong uVar11;
  float fVar12;
  int iVar13;
  uint d2;
  char **buffer;
  ulonglong uVar14;
  CStrList_vtable *pCVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte auStack_500 [8];
  CPickList CStack_4f8;
  char acStack_150 [4];
  char acStack_14c [4];
  char acStack_148 [4];
  char acStack_144 [4];
  char acStack_140 [4];
  char *pcStack_13c;
  char acStack_138 [4];
  CStrList_vtable aCStack_134 [7];
  double dStack_58;
  char (*local_4c) [40];
  char (*local_48) [40];
  float *local_44;
  float *local_40;
  float *local_3c;
  char *local_38;
  char (*local_34) [40];
  float *local_30;
  float *local_2c;
  char (*local_28) [40];
  int local_24;
  int local_20;
  int local_1c;
  C3DSLight *local_18;
  int iStack_14;
  
  local_18 = param_5->lights + param_6;
  local_4c = local_18->filter_names;
  local_2c = local_18->filter_durations;
  local_44 = &local_18->on_time;
  local_3c = &local_18->cycle_time;
  local_48 = (char (*) [40])&local_18->aspect;
  local_40 = &local_18->intensity;
  local_38 = local_18->name;
  local_34 = local_4c;
  local_28 = local_4c;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"Current light : %s");
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"A.  On time : %f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"B.  Total time : %f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C.  Add filter",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("D.  Delete filter",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("E.  Edit filter",0,0x42);
    if (*(int *)(unaff_EBX + 0x11f0) == 0) {
      pcVar10 = "F.  Blend filter : No";
    }
    else {
      pcVar10 = "F.  Blend filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_140,pcVar10);
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0x58);
    if (*(int *)(unaff_EBP + 0x17f4) == 0) {
      pcVar10 = "G. Move filter : No";
    }
    else {
      pcVar10 = "G. Move filter : Yes";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,pcVar10);
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,g_WindowWidth / 3,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"H. Velocity X : %f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_148,g_WindowWidth / 3,0x21);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_144,"I. Velocity Y : %f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_140,g_WindowWidth / 3,0x2c);
    buffer = &pcStack_13c;
    iVar7 = 0x57bea9;
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)buffer,"J. Aspect (Y/X) : %f");
    engine_2d_c_drawText_FUN_00401fd0(acStack_138,g_WindowWidth / 3,0x37);
    pCVar15 = aCStack_134;
    uVar14._4_4_ = (char **)0x57bef5;
    uVar14._0_4_ = (int)buffer;
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)pCVar15,"K. Intensity : %f");
    uVar16._4_4_ = 0x57bf19;
    uVar16._0_4_ = (int)pCVar15;
    engine_2d_c_drawText_FUN_00401fd0((char *)&aCStack_134[0].remove,g_WindowWidth / 3,0x37);
    uVar17._4_4_ = &aCStack_134[0].sort;
    uVar17._0_4_ = 0x57bf3c;
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)&aCStack_134[0].sort,"Filter count = %d");
    uVar11 = CONCAT44 /* combine 2-byte values */(iVar7,99);
    engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,99);
    iVar7 = 0;
    if (0 < *(int *)((int)(local_28 + 0x72) + 0x1c)) {
      iVar5 = 0x41;
      local_30 = local_44;
      local_34 = (char (*) [40])0x6e;
      pacVar4 = local_28;
      do {
        iVar13 = (int)(uVar11 >> 0x20);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_4f8.cancel_button.button_text + 0xb8,"%c.  %s for %1.3f seconds",iVar5
                   ,local_30,(double)*(float *)((int)(pacVar4 + 0x92) + 0x24));
        uVar11 = CONCAT44 /* combine 2-byte values */(iVar13,local_20);
        pacVar4 = (char (*) [40])(*pacVar4 + 4);
        iVar7 = iVar7 + 1;
        engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,local_20);
        iVar5 = iVar5 + 1;
        local_34 = (char (*) [40])((int)local_34 + 0xb);
        local_30 = local_30 + 10;
      } while (iVar7 < *(int *)((int)(local_28 + 0x72) + 0x1c));
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    local_34 = (char (*) [40])engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    fVar12 = (float)(uVar11 >> 0x20);
    switch(local_34) {
    case (char (*) [40])0x41:
      pcVar10 = "Enter on time";
      pacVar4 = local_48;
      goto LAB_0057c050;
    case (char (*) [40])0x42:
      fVar12 = 0.0;
      uVar11 = ZEXT48(local_40);
      pcVar10 = "Enter total time";
      goto LAB_0057c056;
    case (char (*) [40])0x43:
      if (*(int *)(local_1c + 0x11ec) < 0x20) {
        iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter new filter name",
                           (char *)(local_2c + *(int *)(local_1c + 0x11ec) * 10),0x28,0);
        if ((iVar7 != 0) &&
           (iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                              (g_CEditorToolsPtr,"Enter new filter time",
                               local_2c + local_18->filter_count,false,0.0,0.0,false), iVar7 != 0))
        {
          *(int *)(iStack_14 + 0x11ec) = *(int *)(iStack_14 + 0x11ec) + 1;
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Already max filters for this light.");
      }
      break;
    case (char (*) [40])0x44:
      if (*(int *)(local_1c + 0x11ec) < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to delete!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_500);
        iVar7 = 0;
        pacVar4 = local_4c;
        if (0 < local_18->filter_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_500 + 4),*pacVar4);
            iVar7 = iVar7 + 1;
            pacVar4 = pacVar4 + 1;
          } while (iVar7 < local_18->filter_count);
        }
        pCVar2 = (C3DSLight *)
                 shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           ((CPickList *)(auStack_500 + 4),"Select filter to delete",-1,0);
        d2 = (uint)(uVar11 >> 0x20);
        if (-1 < (int)pCVar2) {
          pcVar3 = (char *)(local_24 + (int)pCVar2 * 0x28);
          pcVar10 = (char *)((int)pCVar2 * 0x28 + 0x28 + local_24);
          iVar7 = (int)pCVar2 * 4 + iStack_14;
          local_18 = pCVar2;
          while( true ) {
            d2 = (uint)(uVar11 >> 0x20);
            iVar5 = *(int *)(iStack_14 + 0x11ec) + -1;
            if (iVar5 <= (int)local_18) break;
            uVar11 = uVar11 & 0xffffffff00000000;
            pcVar6 = pcVar10;
            pcVar8 = pcVar3;
            do {
              cVar1 = *pcVar6;
              *pcVar8 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar6[1];
              pcVar6 = pcVar6 + 2;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
            pcVar3 = pcVar3 + 0x28;
            pcVar10 = pcVar10 + 0x28;
            local_18 = (C3DSLight *)((int)&local_18->light_type + 1);
            *(uint *)(iVar7 + 0x16f4) = *(uint *)(iVar7 + 0x16f8);
            iVar7 = iVar7 + 4;
          }
          *(int *)(iStack_14 + 0x11ec) = iVar5;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_4f8,0,d2,(uint)(char **)uVar14,(uint)SUB84 /* extract 2-byte value */(uVar14,4),
                   (uint)(CStrList_vtable *)uVar16,SUB84 /* extract 2-byte value */(uVar16,4));
      }
      break;
    case (char (*) [40])0x45:
      if (*(int *)(local_1c + 0x11ec) < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to edit!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff758);
        pCVar15 = SUB84 /* extract 2-byte value */(uVar14,4);
        iVar7 = 0;
        pacVar4 = local_28;
        if (0 < local_18->filter_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff75c,*pacVar4);
            pCVar15 = SUB84 /* extract 2-byte value */(uVar14,4);
            iVar7 = iVar7 + 1;
            pacVar4 = pacVar4 + 1;
          } while (iVar7 < local_18->filter_count);
        }
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff75c,"Select filter to edit",-1,0);
        if ((-1 < iVar7) &&
           (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                              (g_CEditorToolsPtr,"Edit filter name",
                               (char *)(iVar7 * 0x28 + local_24),0x28,0), iVar5 != 0)) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Edit filter time",(float *)(iVar7 * 4 + local_24),
                     false,0.0,0.0,true);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff768,0,(uint)pCVar15,(uint)(CStrList_vtable *)uVar16,
                   SUB84 /* extract 2-byte value */(uVar16,4),(uint)(char **)uVar17,(uint)SUB84 /* extract 2-byte value */(uVar17,4));
      }
      break;
    case (char (*) [40])0x46:
      *(uint *)(local_1c + 0x11f0) = (uint)(*(int *)(local_1c + 0x11f0) == 0);
      break;
    case (char (*) [40])0x47:
      *(uint *)(local_1c + 0x17f4) = (uint)(*(int *)(local_1c + 0x17f4) == 0);
      break;
    case (char (*) [40])0x48:
      iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light X velocity",
                         (float *)&stack0xfffff754,false,0.0,0.0,true);
      if (iVar7 != 0) {
        dStack_58 = crt_math_c_floor_FUN_005feb90
                              ((double)(fVar12 * (float)256 + (float)0.5));
        dVar9 = crt_math_c_round_FUN_005fe6b0(dStack_58);
        *(int *)(extraout_EAX + 0x17f8) = (int)ROUND(dVar9);
      }
      break;
    case (char (*) [40])0x49:
      iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter light Y velocity",
                         (float *)&stack0xfffff754,false,0.0,0.0,true);
      if (iVar7 != 0) {
        dStack_58 = crt_math_c_floor_FUN_005feb90
                              ((double)(fVar12 * (float)256 + (float)0.5));
        dVar9 = crt_math_c_round_FUN_005fe6b0(dStack_58);
        *(int *)(extraout_EAX_00 + 0x17fc) = (int)ROUND(dVar9);
      }
      break;
    case (char (*) [40])0x4a:
      pcVar10 = "Enter light aspect ratio (Y/X)";
      pacVar4 = local_4c;
LAB_0057c050:
      uVar11 = ZEXT48(pacVar4);
      fVar12 = 0.0;
      goto LAB_0057c056;
    case (char (*) [40])0x4b:
      fVar12 = 1.0;
      uVar11 = CONCAT44 /* combine 2-byte values */(1,local_44);
      pcVar10 = "Enter light intensity (0..1)";
LAB_0057c056:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,pcVar10,(float *)uVar11,SUB81 /* extract 2-byte value */(uVar11 >> 0x20,0),0.0,fVar12,true);
    }
    if (local_2c == (float *)0x1b) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(param_5);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(param_5);
      return;
    }
  } while( true );
}
