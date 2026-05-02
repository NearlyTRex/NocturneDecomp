// Name: core_setedit.cpp_CDemonSet_showLightFilterEditor_FUN_0057bbe0
// Address: 0057bbe0
// MANUAL RECONSTRUCTION
// Address Range: [[0057bbe0, 0057c544]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showLightFilterEditor_FUN_0057bbe0(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showLightFilterEditor_FUN_0057bbe0(CDemonSet *this_ptr,int light_index)

{
  char (*pacVar1) [40];
  char cVar2;
  int iVar3;
  int iVar4;
  char (*pacVar2) [40];
  C3DSLight *pCVar5;
  char (*pacVar3) [40];
  C3DSLight *pCVar4;
  char (*pacVar7) [40];
  char *pcVar8;
  int iVar5;
  char (*pacVar6) [40];
  int iVar7;
  char (*pacVar8) [40];
  double dVar9;
  int iVar10;
  float local_8a8;
  CPickList local_8a4;
  CPickList local_4fc;
  char local_154 [256];
  char (*local_4c) [40];
  char (*local_34) [40];
  char (*local_28) [40];
  int local_24;
  char (*local_20) [40];
  int local_1c;
  char cVar1;
  char *pcVar9;
  float *result_ptr;
  ulonglong uVar10;
  
  pCVar5 = this_ptr->lights + light_index;
  pacVar1 = pCVar5->filter_names;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    _sprintf(local_154,"Current light : %s",pCVar5->name);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0);
    _sprintf(local_154,"A.  On time : %f",(double)pCVar5->on_time);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x16);
    _sprintf
              (local_154,"B.  Total time : %f",(double)pCVar5->cycle_time);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C.  Add filter",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("D.  Delete filter",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("E.  Edit filter",0,0x42);
    if (pCVar5->blend_filter == 0) {
      pcVar8 = "F.  Blend filter : No";
    }
    else {
      pcVar8 = "F.  Blend filter : Yes";
    }
    _sprintf(local_154,pcVar8);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,0x58);
    if (pCVar5->move_filter == 0) {
      pcVar8 = "G. Move filter : No";
    }
    else {
      pcVar8 = "G. Move filter : Yes";
    }
    _sprintf(local_154,pcVar8);
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x16);
    _sprintf
              (local_154,"H. Velocity X : %f",(double)(pCVar5->filter_vel).x * 0.00390625)
    ;
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x21);
    _sprintf
              (local_154,"I. Velocity Y : %f",(double)(pCVar5->filter_vel).y * 0.00390625)
    ;
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x2c);
    _sprintf(local_154,"J. Aspect (Y/X) : %f",(double)pCVar5->aspect);
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x37);
    _sprintf(local_154,"K. Intensity : %f",(double)pCVar5->intensity);
    engine_2d_c_drawText_FUN_00401fd0(local_154,g_WindowWidth / 3,0x37);
    _sprintf(local_154,"Filter count = %d",pCVar5->filter_count);
    engine_2d_c_drawText_FUN_00401fd0(local_154,0,99);
    iVar7 = 0;
    if (0 < pCVar5->filter_count) {
      iVar5 = 0x41;
      local_24 = 0x6e;
      pCVar4 = pCVar5;
      local_20 = pacVar1;
      do {
        _sprintf
                  (local_154,"%c.  %s for %1.3f seconds",iVar5,(char *)local_20,
                   (double)pCVar4->filter_durations[0]);
        pCVar4 = (C3DSLight *)pCVar4->name;
        iVar7 = iVar7 + 1;
        engine_2d_c_drawText_FUN_00401fd0(local_154,0,local_24);
        iVar5 = iVar5 + 1;
        local_24 = local_24 + 0xb;
        local_20 = local_20 + 1;
      } while (iVar7 < pCVar5->filter_count);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    iVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(iVar3) {
    case 0x41:
      pcVar9 = "Enter on time";
      result_ptr = &pCVar5->on_time;
      goto LAB_0057c050;
    case 0x42:
      uVar10 = 0x100000000;
      iVar10 = 0;
      pcVar9 = "Enter total time";
      result_ptr = &pCVar5->cycle_time;
      goto LAB_0057c056;
    case 0x43:
      if (pCVar5->filter_count < 0x20) {
        iVar10 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                           (g_CEditorToolsPtr,"Enter new filter name",
                            pacVar1[pCVar5->filter_count],0x28,0);
        if ((iVar10 != 0) &&
           (iVar10 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                               (g_CEditorToolsPtr,"Enter new filter time",
                                pCVar5->filter_durations + pCVar5->filter_count,0,0.0,0.0,0),
           iVar10 != 0)) {
          pCVar5->filter_count = pCVar5->filter_count + 1;
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Already max filters for this light.");
      }
      break;
    case 0x44:
      if (pCVar5->filter_count < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to delete!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4fc);
        iVar10 = 0;
        pacVar7 = pacVar1;
        if (0 < pCVar5->filter_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4fc.base,*pacVar7);
            iVar10 = iVar10 + 1;
            pacVar7 = pacVar7 + 1;
          } while (iVar10 < pCVar5->filter_count);
        }
        local_1c = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                             (&local_4fc,"Select filter to delete",-1,0);
        if (-1 < local_1c) {
          pacVar3 = pacVar1 + local_1c;
          pacVar2 = pacVar1 + local_1c + 1;
          pcVar8 = pCVar5->name + local_1c * 4 + -4;
          while (iVar10 = pCVar5->filter_count + -1, local_1c < iVar10) {
            pacVar6 = pacVar2;
            pacVar8 = pacVar3;
            do {
              cVar1 = (*pacVar6)[0];
              (*pacVar8)[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar2 = (*pacVar6)[1];
              pacVar6 = (char (*) [40])(*pacVar6 + 2);
              (*pacVar8)[1] = cVar2;
              pacVar8 = (char (*) [40])(*pacVar8 + 2);
            } while (cVar2 != '\0');
            pacVar3 = pacVar3 + 1;
            pacVar2 = pacVar2 + 1;
            local_1c = local_1c + 1;
            *(float *)(pcVar8 + 0x16f4) = *(float *)(pcVar8 + 0x16f8);
            pcVar8 = pcVar8 + 4;
          }
          pCVar5->filter_count = iVar10;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_4fc,0);
      }
      break;
    case 0x45:
      if (pCVar5->filter_count < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No filters to edit!");
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8a4);
        iVar10 = 0;
        pacVar7 = pacVar1;
        if (0 < pCVar5->filter_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8a4.base,*pacVar7);
            iVar10 = iVar10 + 1;
            pacVar7 = pacVar7 + 1;
          } while (iVar10 < pCVar5->filter_count);
        }
        iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           (&local_8a4,"Select filter to edit",-1,0);
        if ((-1 < iVar10) &&
           (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                              (g_CEditorToolsPtr,"Edit filter name",pacVar1[iVar10],0x28,0)
           , iVar4 != 0)) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Edit filter time",pCVar5->filter_durations + iVar10
                     ,0,0.0,0.0,1);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_8a4,0);
      }
      break;
    case 0x46:
      pCVar5->blend_filter = (uint)(pCVar5->blend_filter == 0);
      break;
    case 0x47:
      pCVar5->move_filter = (uint)(pCVar5->move_filter == 0);
      break;
    case 0x48:
      local_8a8 = (float)(pCVar5->filter_vel).x * (float)0.00390625;
      iVar10 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                         (g_CEditorToolsPtr,"Enter light X velocity",&local_8a8,0,0.0,0.0,1
                         );
      if (iVar10 != 0) {
        dVar9 = floor
                          ((double)(local_8a8 * (float)256 + (float)0.5));
        (pCVar5->filter_vel).x = (int)ROUND(ROUND(dVar9));
      }
      break;
    case 0x49:
      local_8a8 = (float)(pCVar5->filter_vel).y * (float)0.00390625;
      iVar10 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                         (g_CEditorToolsPtr,"Enter light Y velocity",&local_8a8,0,0.0,0.0,1
                         );
      if (iVar10 != 0) {
        dVar9 = floor
                          ((double)(local_8a8 * (float)256 + (float)0.5));
        (pCVar5->filter_vel).y = (int)ROUND(ROUND(dVar9));
      }
      break;
    case 0x4a:
      pcVar9 = "Enter light aspect ratio (Y/X)";
      result_ptr = &pCVar5->aspect;
LAB_0057c050:
      uVar10 = 0x100000000;
      iVar10 = 0;
      goto LAB_0057c056;
    case 0x4b:
      uVar10 = 0x13f800000;
      iVar10 = 1;
      pcVar9 = "Enter light intensity (0..1)";
      result_ptr = &pCVar5->intensity;
LAB_0057c056:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,pcVar9,result_ptr,iVar10,0.0,(float)uVar10,
                 (int)((ulonglong)uVar10 >> 0x20));
    }
    if (iVar3 == 0x1b) {
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      return;
    }
  } while( true );
}
