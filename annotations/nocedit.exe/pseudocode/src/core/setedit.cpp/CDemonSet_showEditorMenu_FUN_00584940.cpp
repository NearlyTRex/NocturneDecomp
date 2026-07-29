// Name: core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
// Address: 00584940
// Address Range: [[00584940, 00584e6d]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet *this_ptr)

{
  char cVar2;
  char *pcVar2;
  uint uVar3;
  int iVar3;
  EWeatherType EVar4;
  int iVar5;
  EGroundType type;
  char *pcVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar5;
  byte bVar8;
  CPickList local_714;
  char local_36c [260];
  char local_268 [256];
  char local_168 [256];
  char local_68 [80];
  char *local_18;
  char local_14 [4];
  char cVar1;
  
  bVar8 = 0;
  this_ptr->actor_count = 0;
  g_CDemonLightInstance.volumetric_enabled = 0;
  g_CDemonRaytraceInstance.rendering_mode = 1;
  do {
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demon(R) Set Editor(TM)",0,0);
    engine_2d_c_drawText_FUN_00401fd0("1.  Load set",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2.  Save set",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("3.  Import set",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("4.  View set",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("7.  Light editor",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("9.  Camera editor",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("A.  Fog editor",0,0x79);
    engine_2d_c_drawText_FUN_00401fd0("C.  Rebuild thumbs",0,0x8f);
    pcVar2 = core_ground_cpp_getGroundTypeName_FUN_004eed80(this_ptr->default_ground_type);
    _sprintf(local_68,"D.  Default ground type: %s",pcVar2);
    engine_2d_c_drawText_FUN_00401fd0(local_68,0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("F.  Export lights/cameras to .LC file",0,0xb0);
    engine_2d_c_drawText_FUN_00401fd0("G.  Virtual director box editor",0,0xbb);
    _sprintf(local_68,"H.  Weather: %s",g_WeatherTypeNames[this_ptr->weather_type]);
    engine_2d_c_drawText_FUN_00401fd0(local_68,0,0xc6);
    engine_2d_c_drawText_FUN_00401fd0("I.  Edit ground types",0,0xd1);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar3 < 0x41) {
      if (uVar3 < 0x33) {
        if (0x30 < uVar3) {
          if (uVar3 < 0x32) {
            iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                              (g_CEditorToolsPtr,"Load set","models",
                               "*.set",local_68,0);
            if (iVar3 != 0) {
              core_set_cpp_CDemonSet_load_FUN_00569410(this_ptr,local_68);
            }
          }
          else {
            if (this_ptr->geometry_filename[0] == '\0') {
              local_68[0] = '\0';
            }
            else {
              engine_dosio_cpp_splitPath_FUN_00481f20
                        (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,local_68,(char *)0x0);
              pcVar6 = ".set";
              iVar5 = -1;
              pcVar7 = local_68;
              do {
                pcVar7 = pcVar7;
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar7;
              } while (cVar1 != '\0');
              pcVar5 = pcVar7 + -1;
              do {
                cVar2 = *pcVar6;
                *pcVar5 = cVar2;
                if (cVar2 == '\0') break;
                cVar2 = pcVar6[1];
                pcVar6 = pcVar6 + 2;
                pcVar5[1] = cVar2;
                pcVar5 = pcVar5 + 2;
              } while (cVar2 != '\0');
              strupr(local_68);
            }
            iVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                              (g_CEditorToolsPtr,"Save set","models",
                               "set",local_68,1);
            if (iVar3 != 0) {
              core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,local_68);
            }
          }
        }
      }
      else if (uVar3 < 0x34) {
        core_setedit_cpp_CDemonSet_importSet_FUN_00578a20(this_ptr);
      }
      else if (uVar3 < 0x37) {
        if (uVar3 == 0x34) {
          core_setedit_cpp_CDemonSet_showScenePreview_FUN_0057a940(this_ptr);
        }
      }
      else if (uVar3 < 0x38) {
        core_setedit_cpp_CDemonSet_showLightEditor_FUN_0057c5d0(this_ptr);
      }
      else if (uVar3 == 0x39) {
        core_setedit_cpp_CDemonSet_showCameraEditor_FUN_0057e7c0(this_ptr);
      }
    }
    else if (uVar3 < 0x42) {
      core_setedit_cpp_CDemonSet_showFogEditor_FUN_00580730(this_ptr);
    }
    else if (uVar3 < 0x46) {
      if (0x42 < uVar3) {
        if (uVar3 < 0x44) {
          core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,1);
        }
        else if (uVar3 == 0x44) {
          type = GROUND_TYPE_CONCRETE;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_714);
          do {
            pcVar5 = core_ground_cpp_getGroundTypeName_FUN_004eed80(type);
            type = type + GROUND_TYPE_NONE;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_714.base,pcVar5);
          } while ((int)type < 0xe);
          uVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_714,"Select default ground type.",
                             this_ptr->default_ground_type + -2,0);
          if (-1 < (int)uVar3) {
            this_ptr->default_ground_type = uVar3 + 2;
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_714,0);
        }
      }
    }
    else if (uVar3 < 0x47) {
      core_setedit_cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0(this_ptr);
    }
    else if (uVar3 < 0x48) {
      core_setedit_cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(this_ptr);
    }
    else if (uVar3 < 0x49) {
      EVar4 = this_ptr->weather_type + WEATHER_TYPE_RAIN;
      this_ptr->weather_type = EVar4;
      if (2 < (int)EVar4) {
        this_ptr->weather_type = WEATHER_TYPE_NONE;
      }
    }
    else if (uVar3 == 0x49) {
      pcVar4 = g_GroundTypesBuffer;
      pcVar5 = local_36c;
      do {
        cVar2 = *pcVar4;
        *pcVar5 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      if (this_ptr->geometry_filename[0] != '\0') {
        engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(g_GroundTypesBuffer,local_14,local_168);
        engine_dosio_cpp_splitPath_FUN_00481f20
                  (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,local_268,(char *)0x0);
        engine_dosio_cpp_makePath_FUN_00481f50
                  (local_36c,local_14,local_168,local_268,".txt");
      }
      iVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                        (g_CEditorToolsPtr,"Select ground type file to edit","*.txt",
                         local_36c,1);
      if (iVar3 != 0) {
        core_setedit_cpp_editGroundTypes_FUN_00578630(local_36c);
      }
    }
    if (uVar3 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
