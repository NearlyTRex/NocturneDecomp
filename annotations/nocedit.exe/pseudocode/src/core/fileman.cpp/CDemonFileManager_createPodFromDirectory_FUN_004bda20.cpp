// Name: core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20
// Address: 004bda20
// Address Range: [[004bda20, 004be066]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager * this_ptr)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager *this_ptr)

{
  char cVar1;
  FILE *file_ptr;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  char *pcVar4;
  uint uVar5;
  SIZE_T SVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char local_798 [512];
  char local_598 [499];
  char local_3a5 [256];
  char local_2a5 [257];
  char local_1a4 [100];
  char local_140 [100];
  char local_dc [100];
  char local_78 [100];
  FILE *local_14;
  
  bVar9 = 0;
  iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select response file.",&s_EmptyStr_006295ce,
                     "*.vox",SUB41 /* extract 2-byte value */(local_598,0));
  if (iVar3 != 0) {
    crt_string_c_splitpath_FUN_005ff178(local_598,(char *)0x0,(char *)0x0,local_1a4,(char *)0x0);
    crt_file_c_makepath_FUN_005febfc(local_140,(char *)0x0,(char *)0x0,local_1a4,"pod");
    bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,"Enter POD name to build",&s_EmptyStr_006295ed,
                       0x6295e9,SUB41 /* extract 2-byte value */(local_140,0));
    if ((CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0) &&
       (iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter volume name",local_1a4,100,1),
       iVar3 != 0)) {
      local_14 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_598,(char *)0x0,"rt","..\\core\\fileman.cpp",0xb9);
      engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
                (&this_ptr->base_filemanager);
LAB_004bdb2c:
      do {
        do {
          file_ptr = local_14;
          iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(local_14," %[^\n]\n",local_798);
          if (iVar3 != 1) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\fileman.cpp",0x12d);
            engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60
                      (&this_ptr->base_filemanager);
            engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50
                      (&this_ptr->base_filemanager,local_140,(char *)0x0);
            return;
          }
          pcVar4 = crt_string_c_strstr_FUN_005fedd0(local_798,"//");
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = '\0';
          }
          uVar5 = 0xffffffff;
          pcVar4 = local_798;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          SVar6 = ~uVar5 - 1;
          if (0 < (int)SVar6) {
            pcVar4 = local_798 + (~uVar5 - 1);
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2U) == 0) break;
              SVar6 = SVar6 - 1;
              pcVar4 = pcVar4 + -1;
            } while (0 < (int)SVar6);
          }
          local_798[SVar6] = '\0';
          while ((g_CharacterClassificationTable[(byte)(local_798[0] + 1)] & 2U) != 0) {
            crt_string_c_memmove_FUN_005fe5e0(local_798,local_798 + 1,SVar6);
            SVar6 = SVar6 - 1;
          }
        } while (local_798[0] == '\0');
        iVar3 = crt_stdio_c_sscanf_FUN_0060013c(local_798," %[^:]:%s",local_2a5 + 1,local_3a5 + 1);
        if (iVar3 != 2) {
          pcVar7 = "file";
          pcVar4 = local_2a5 + 1;
          do {
            cVar1 = *pcVar7;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          pcVar4 = local_3a5 + 1;
          pcVar7 = local_798;
          do {
            cVar1 = *pcVar7;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
        }
        uVar5 = 0xffffffff;
        pcVar4 = local_2a5 + 1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        SVar6 = ~uVar5 - 1;
        if (0 < (int)SVar6) {
          pcVar4 = local_2a5 + ~uVar5;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2U) == 0) break;
            SVar6 = SVar6 - 1;
            pcVar4 = pcVar4 + -1;
          } while (0 < (int)SVar6);
        }
        (local_2a5 + 1)[SVar6] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_2a5[1] + 1)] & 2U) != 0) {
          crt_string_c_memmove_FUN_005fe5e0(local_2a5 + 1,local_2a5 + 2,SVar6);
          SVar6 = SVar6 - 1;
        }
        uVar5 = 0xffffffff;
        pcVar4 = local_3a5 + 1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        SVar6 = ~uVar5 - 1;
        if (0 < (int)SVar6) {
          pcVar4 = local_3a5 + ~uVar5;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2U) == 0) break;
            SVar6 = SVar6 - 1;
            pcVar4 = pcVar4 + -1;
          } while (0 < (int)SVar6);
        }
        (local_3a5 + 1)[SVar6] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_3a5[1] + 1)] & 2U) != 0) {
          crt_string_c_memmove_FUN_005fe5e0(local_3a5 + 1,local_3a5 + 2,SVar6);
          SVar6 = SVar6 - 1;
        }
        iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_2a5 + 1,"sounds");
        if (iVar3 != 0) {
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_2a5 + 1,"file");
          if (iVar3 == 0) {
            crt_stdio_c_fprintf_FUN_005fe6d0
                      ((this_ptr->base_filemanager).file_ptr,"%s\n",local_3a5 + 1);
          }
          else {
            iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_2a5 + 1,"msn");
            if (iVar3 == 0) {
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Loading %s");
              core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,local_3a5 + 1,0);
              core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
              core_mission_cpp_CDemonMission_FUN_00523cf0(g_CDemonMissionPtr);
              crt_stdio_c_fprintf_FUN_005fe6d0
                        ((this_ptr->base_filemanager).file_ptr,"WORLD\\%s\n",local_3a5 + 1);
              crt_string_c_splitpath_FUN_005ff178
                        (local_3a5 + 1,(char *)0x0,(char *)0x0,local_dc,(char *)0x0);
              pcVar7 = ".scr";
              iVar3 = -1;
              pcVar4 = local_dc;
              do {
                pcVar8 = pcVar4;
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar8;
              } while (cVar1 != '\0');
              pcVar8 = pcVar8 + -1;
              do {
                cVar1 = *pcVar7;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar7[1];
                pcVar7 = pcVar7 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              iVar3 = engine_dosio_c_getFileSize_FUN_00481880("world",local_dc);
              if (0 < iVar3) {
                crt_stdio_c_fprintf_FUN_005fe6d0
                          ((this_ptr->base_filemanager).file_ptr,"WORLD\\%s\n",local_dc);
              }
              crt_string_c_splitpath_FUN_005ff178
                        (local_3a5 + 1,(char *)0x0,(char *)0x0,local_78,(char *)0x0);
              pcVar7 = ".txt";
              iVar3 = -1;
              pcVar4 = local_78;
              do {
                pcVar8 = pcVar4;
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar8;
              } while (cVar1 != '\0');
              pcVar8 = pcVar8 + -1;
              do {
                cVar1 = *pcVar7;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar7[1];
                pcVar7 = pcVar7 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              iVar3 = engine_dosio_c_getFileSize_FUN_00481880("world",local_78);
              if (0 < iVar3) {
                crt_stdio_c_fprintf_FUN_005fe6d0
                          ((this_ptr->base_filemanager).file_ptr,"WORLD\\%s\n",local_78);
              }
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Adding to file list.");
              core_mission_cpp_CDemonMission_FUN_00524e60(g_CDemonMissionPtr);
            }
            else {
              iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_2a5 + 1,"kfm");
              if (iVar3 == 0) {
                core_fileman_cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
                          (this_ptr,local_3a5 + 1);
              }
              else {
                iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_2a5 + 1,"cth");
                if (iVar3 == 0) {
                  core_fileman_cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
                            (this_ptr,local_3a5 + 1);
                }
                else {
                  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_2a5 + 1,"dfm");
                  if (iVar3 == 0) {
                    core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
                              (this_ptr,local_3a5 + 1);
                  }
                  else {
                    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_2a5 + 1,"set");
                    if (iVar3 != 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid tag \"%s\"",local_2a5 + 1);
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (local_14,"..\\core\\fileman.cpp",0x126);
                      return;
                    }
                    core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
                              (this_ptr,local_3a5 + 1);
                  }
                }
              }
            }
          }
          goto LAB_004bdb2c;
        }
        core_fileman_cpp_refreshSoundDirectory_FUN_004be590((FILE *)this_ptr,local_3a5 + 1);
      } while( true );
    }
  }
  return;
}
