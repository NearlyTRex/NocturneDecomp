// Name: core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20
// Address: 004bda20
// Address Range: [[004bda20, 004be066]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager *this_ptr)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager *this_ptr)

{
  char cVar1;
  _FILE *file_ptr;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  SIZE_T SVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_798 [512];
  char local_598 [499];
  char local_3a5 [256];
  char local_2a5 [257];
  char local_1a4 [100];
  char local_140 [100];
  char local_dc [100];
  char local_78 [100];
  _FILE *local_14;
  
  bVar8 = 0;
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select response file.",&s_EmptyStr_006295ce,
                     "*.vox",(int)local_598,0);
  if (iVar2 != 0) {
    splitpath(local_598,(char *)0x0,(char *)0x0,local_1a4,(char *)0x0);
    makepath(local_140,(char *)0x0,(char *)0x0,local_1a4,"pod");
    iVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,"Enter POD name to build",&s_EmptyStr_006295ed,
                       0x6295e9,(int)local_140);
    if ((iVar2 != 0) &&
       (iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter volume name",local_1a4,100,1),
       iVar2 != 0)) {
      local_14 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_598,(char *)0x0,"rt","..\\core\\fileman.cpp",0xb9);
      engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(&this_ptr->base);
LAB_004bdb2c:
      do {
        do {
          file_ptr = local_14;
          iVar2 = _fscanf(local_14," %[^\n]\n",local_798);
          if (iVar2 != 1) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\fileman.cpp",0x12d);
            engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(&this_ptr->base);
            engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50
                      (&this_ptr->base,local_140,(char *)0x0);
            return;
          }
          pcVar3 = strstr(local_798,"//");
          if (pcVar3 != (char *)0x0) {
            *pcVar3 = '\0';
          }
          uVar4 = 0xffffffff;
          pcVar3 = local_798;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          SVar5 = ~uVar4 - 1;
          if (0 < (int)SVar5) {
            pcVar3 = local_798 + (~uVar4 - 1);
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar3[-1] + 1)] & 2) == 0) break;
              SVar5 = SVar5 - 1;
              pcVar3 = pcVar3 + -1;
            } while (0 < (int)SVar5);
          }
          local_798[SVar5] = '\0';
          while ((g_CharacterClassificationTable[(byte)(local_798[0] + 1)] & 2) != 0) {
            memmove(local_798,local_798 + 1,SVar5);
            SVar5 = SVar5 - 1;
          }
        } while (local_798[0] == '\0');
        iVar2 = sscanf(local_798," %[^:]:%s",local_2a5 + 1,local_3a5 + 1);
        if (iVar2 != 2) {
          pcVar6 = "file";
          pcVar3 = local_2a5 + 1;
          do {
            cVar1 = *pcVar6;
            *pcVar3 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar3[1] = cVar1;
            pcVar3 = pcVar3 + 2;
          } while (cVar1 != '\0');
          pcVar3 = local_3a5 + 1;
          pcVar6 = local_798;
          do {
            cVar1 = *pcVar6;
            *pcVar3 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar3[1] = cVar1;
            pcVar3 = pcVar3 + 2;
          } while (cVar1 != '\0');
        }
        uVar4 = 0xffffffff;
        pcVar3 = local_2a5 + 1;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        SVar5 = ~uVar4 - 1;
        if (0 < (int)SVar5) {
          pcVar3 = local_2a5 + ~uVar4;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar3[-1] + 1)] & 2) == 0) break;
            SVar5 = SVar5 - 1;
            pcVar3 = pcVar3 + -1;
          } while (0 < (int)SVar5);
        }
        (local_2a5 + 1)[SVar5] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_2a5[1] + 1)] & 2) != 0) {
          memmove(local_2a5 + 1,local_2a5 + 2,SVar5);
          SVar5 = SVar5 - 1;
        }
        uVar4 = 0xffffffff;
        pcVar3 = local_3a5 + 1;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        SVar5 = ~uVar4 - 1;
        if (0 < (int)SVar5) {
          pcVar3 = local_3a5 + ~uVar4;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar3[-1] + 1)] & 2) == 0) break;
            SVar5 = SVar5 - 1;
            pcVar3 = pcVar3 + -1;
          } while (0 < (int)SVar5);
        }
        (local_3a5 + 1)[SVar5] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_3a5[1] + 1)] & 2) != 0) {
          memmove(local_3a5 + 1,local_3a5 + 2,SVar5);
          SVar5 = SVar5 - 1;
        }
        iVar2 = stricmp(local_2a5 + 1,"sounds");
        if (iVar2 != 0) {
          iVar2 = stricmp(local_2a5 + 1,"file");
          if (iVar2 == 0) {
            _fprintf((this_ptr->base).file_ptr,"%s\n",local_3a5 + 1);
          }
          else {
            iVar2 = stricmp(local_2a5 + 1,"msn");
            if (iVar2 == 0) {
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Loading %s");
              core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,local_3a5 + 1,0);
              core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(g_CDemonMissionPtr,0);
              core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(g_CDemonMissionPtr);
              _fprintf((this_ptr->base).file_ptr,"WORLD\\%s\n",local_3a5 + 1);
              splitpath
                        (local_3a5 + 1,(char *)0x0,(char *)0x0,local_dc,(char *)0x0);
              pcVar6 = ".scr";
              iVar2 = -1;
              pcVar3 = local_dc;
              do {
                pcVar7 = pcVar3;
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
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
              iVar2 = engine_dosio_c_getFileSize_FUN_00481880("world",local_dc);
              if (0 < iVar2) {
                _fprintf((this_ptr->base).file_ptr,"WORLD\\%s\n",local_dc);
              }
              splitpath
                        (local_3a5 + 1,(char *)0x0,(char *)0x0,local_78,(char *)0x0);
              pcVar6 = ".txt";
              iVar2 = -1;
              pcVar3 = local_78;
              do {
                pcVar7 = pcVar3;
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
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
              iVar2 = engine_dosio_c_getFileSize_FUN_00481880("world",local_78);
              if (0 < iVar2) {
                _fprintf((this_ptr->base).file_ptr,"WORLD\\%s\n",local_78);
              }
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Adding to file list.");
              core_mission_cpp_CDemonMission_addFilesToExtract_FUN_00524e60
                        (g_CDemonMissionPtr,(this_ptr->base).file_ptr,0);
            }
            else {
              iVar2 = stricmp(local_2a5 + 1,"kfm");
              if (iVar2 == 0) {
                core_fileman_cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
                          (this_ptr,local_3a5 + 1);
              }
              else {
                iVar2 = stricmp(local_2a5 + 1,"cth");
                if (iVar2 == 0) {
                  core_fileman_cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
                            (this_ptr,local_3a5 + 1);
                }
                else {
                  iVar2 = stricmp(local_2a5 + 1,"dfm");
                  if (iVar2 == 0) {
                    core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
                              (this_ptr,local_3a5 + 1);
                  }
                  else {
                    iVar2 = stricmp(local_2a5 + 1,"set");
                    if (iVar2 != 0) {
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
        core_fileman_cpp_refreshSoundDirectory_FUN_004be590((_FILE *)this_ptr,local_3a5 + 1);
      } while( true );
    }
  }
  return;
}
