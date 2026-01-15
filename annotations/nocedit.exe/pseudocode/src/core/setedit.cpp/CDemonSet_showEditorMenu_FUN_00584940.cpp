// Name: core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
// Address: 00584940
// Address Range: [[00584940, 00584e6d]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet * this_ptr)

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
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  uint in_stack_fffff8ec;
  uint in_stack_fffff8f0;
  char **in_stack_fffff8f4;
  CStrList_vtable *in_stack_fffff8f8;
  uint in_stack_fffff8fc;
  char local_36c [260];
  char local_268 [256];
  char local_168 [256];
  char local_68 [80];
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
    crt_stdio_c_sprintf_FUN_005fdbd0(local_68,"D.  Default ground type: %s",pcVar3);
    engine_2d_c_drawText_FUN_00401fd0(local_68,0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("F.  Export lights/cameras to .LC file",0,0xb0);
    engine_2d_c_drawText_FUN_00401fd0("G.  Virtual director box editor",0,0xbb);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_68,"H.  Weather: %s",(&PTR_s_None_006817f0)[this_ptr->weather_type]);
    engine_2d_c_drawText_FUN_00401fd0(local_68,0,0xc6);
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
                               "*.set",SUB41 /* extract 2-byte value */(local_68,0));
            if (iVar5 != 0) {
              core_set_cpp_CDemonSet_load_FUN_00569410(this_ptr,local_68);
            }
          }
          else {
            if (this_ptr->geometry_filename[0] == '\0') {
              local_68[0] = '\0';
            }
            else {
              engine_dosio_c_splitPath_FUN_00481f20
                        (local_18,(char *)0x0,(char *)0x0,local_68,(char *)0x0);
              pcVar6 = ".set";
              iVar5 = -1;
              pcVar3 = local_68;
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
              crt_string_c_strupr_FUN_00600770(local_68);
            }
            bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                              (g_CEditorToolsPtr,"Save set","models",0x648fa3,
                               SUB41 /* extract 2-byte value */(local_68,0));
            if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2) != 0) {
              core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,local_68);
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
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff8ec);
          do {
            pcVar3 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar5);
            iVar5 = iVar5 + 1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff8ec,pcVar3);
          } while (iVar5 < 0xe);
          uVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)&stack0xfffff8ec,"Select default ground type.",
                             this_ptr->default_ground_type + -2,0);
          if (-1 < (int)uVar4) {
            this_ptr->default_ground_type = uVar4 + 2;
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffff8ec,0,in_stack_fffff8ec,in_stack_fffff8f0,
                     (uint)in_stack_fffff8f4,(uint)in_stack_fffff8f8,in_stack_fffff8fc);
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
      pcVar3 = local_36c;
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
        engine_dosio_c_ensureTrailingSlash_FUN_00481f80(".\\GroundTypes",local_14,local_168);
        engine_dosio_c_splitPath_FUN_00481f20
                  (local_18,(char *)0x0,(char *)0x0,local_268,(char *)0x0);
        engine_dosio_c_makePath_FUN_00481f50(local_36c,local_14,local_168,local_268,".txt");
      }
      bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                        (g_CEditorToolsPtr,"Select ground type file to edit",true,local_36c);
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0) {
        core_setedit_cpp_EditingGroundTypesAndSaving_FUN_00578630();
      }
    }
    if (uVar4 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
