// Name: core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20
// Address: 004bda20
// MANUAL RECONSTRUCTION
// Address Range: [[004bda20, 004be066]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager *this_ptr)

#include "nocturne.h"

void __cdecl core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager *this_ptr)

{
  char cVar2;
  int iVar2;
  int iVar3;
  _FILE *file;
  char *pcVar3;
  uint uVar4;
  SIZE_T SVar5;
  uint uVar5;
  SIZE_T SVar6;
  char *pcVar6;
  char *pcVar8;
  char *pcVar9;
  char *pcVar7;
  char *pcVar10;
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
  char cVar1;
  _FILE *file_ptr;
  
  bVar8 = 0;
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select response file.",&s_EmptyChar_006295ce,
                     "*.vox",local_598,0);
  if (iVar2 != 0) {
    splitpath(local_598,(char *)0x0,(char *)0x0,local_1a4,(char *)0x0);
    makepath(local_140,(char *)0x0,(char *)0x0,local_1a4,"pod");
    iVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,"Enter POD name to build",&s_EmptyChar_006295ed,
                       "pod",local_140,1);
    if ((iVar3 != 0) &&
       (iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter volume name",local_1a4,100,1),
       iVar3 != 0)) {
      file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_598,(char *)0x0,"rt","..\\core\\fileman.cpp",0xb9);
      engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(&this_ptr->base);
LAB_004bdb2c:
      do {
        do {
          iVar3 = _fscanf(file," %[^\n]\n",local_798);
          if (iVar3 != 1) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\fileman.cpp",0x12d);
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
          pcVar9 = local_798;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          SVar5 = ~uVar4 - 1;
          if (0 < (int)SVar5) {
            pcVar9 = local_798 + (~uVar4 - 1);
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
              SVar5 = SVar5 - 1;
              pcVar9 = pcVar9 + -1;
            } while (0 < (int)SVar5);
          }
          local_798[SVar5] = '\0';
          while ((g_CharacterClassificationTable[(byte)(local_798[0] + 1)] & 2) != 0) {
            memmove(local_798,local_798 + 1,SVar5);
            SVar5 = SVar5 - 1;
          }
        } while (local_798[0] == '\0');
        iVar3 = sscanf(local_798," %[^:]:%s",local_2a5 + 1,local_3a5 + 1);
        if (iVar3 != 2) {
          pcVar6 = "file";
          pcVar9 = local_2a5 + 1;
          do {
            cVar2 = *pcVar6;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
          pcVar9 = local_3a5 + 1;
          pcVar8 = local_798;
          do {
            cVar2 = *pcVar8;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
        }
        uVar5 = 0xffffffff;
        pcVar9 = local_2a5 + 1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
        } while (cVar2 != '\0');
        SVar6 = ~uVar5 - 1;
        if (0 < (int)SVar6) {
          pcVar9 = local_2a5 + ~uVar5;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
            SVar6 = SVar6 - 1;
            pcVar9 = pcVar9 + -1;
          } while (0 < (int)SVar6);
        }
        (local_2a5 + 1)[SVar6] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_2a5[1] + 1)] & 2) != 0) {
          memmove(local_2a5 + 1,local_2a5 + 2,SVar6);
          SVar6 = SVar6 - 1;
        }
        uVar5 = 0xffffffff;
        pcVar9 = local_3a5 + 1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
        } while (cVar2 != '\0');
        SVar6 = ~uVar5 - 1;
        if (0 < (int)SVar6) {
          pcVar9 = local_3a5 + ~uVar5;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar9[-1] + 1)] & 2) == 0) break;
            SVar6 = SVar6 - 1;
            pcVar9 = pcVar9 + -1;
          } while (0 < (int)SVar6);
        }
        (local_3a5 + 1)[SVar6] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_3a5[1] + 1)] & 2) != 0) {
          memmove(local_3a5 + 1,local_3a5 + 2,SVar6);
          SVar6 = SVar6 - 1;
        }
        iVar3 = _stricmp(local_2a5 + 1,"sounds");
        if (iVar3 != 0) {
          iVar3 = _stricmp(local_2a5 + 1,"file");
          if (iVar3 == 0) {
            _fprintf((this_ptr->base).file_ptr,"%s\n",local_3a5 + 1);
          }
          else {
            iVar3 = _stricmp(local_2a5 + 1,"msn");
            if (iVar3 == 0) {
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Loading %s",local_3a5 + 1);
              core_mission_cpp_CDemonMission_load_FUN_00522d90(g_CDemonMissionPtr,local_3a5 + 1,0);
              core_mission_cpp_CDemonMission_createHeros_FUN_00524a80
                        (g_CDemonMissionPtr,(CCharacter *)0x0);
              core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(g_CDemonMissionPtr);
              _fprintf((this_ptr->base).file_ptr,"WORLD\\%s\n",local_3a5 + 1);
              splitpath
                        (local_3a5 + 1,(char *)0x0,(char *)0x0,local_dc,(char *)0x0);
              strcat(local_dc,".scr");
              iVar3 = engine_dosio_c_getFileSize_FUN_00481880("world",local_dc);
              if (0 < iVar3) {
                _fprintf((this_ptr->base).file_ptr,"WORLD\\%s\n",local_dc);
              }
              splitpath
                        (local_3a5 + 1,(char *)0x0,(char *)0x0,local_78,(char *)0x0);
              strcat(local_78,".txt");
              iVar3 = engine_dosio_c_getFileSize_FUN_00481880("world",local_78);
              if (0 < iVar3) {
                _fprintf((this_ptr->base).file_ptr,"WORLD\\%s\n",local_78);
              }
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Adding to file list.");
              core_mission_cpp_CDemonMission_addFilesToExtract_FUN_00524e60
                        (g_CDemonMissionPtr,(this_ptr->base).file_ptr,0);
            }
            else {
              iVar3 = _stricmp(local_2a5 + 1,"kfm");
              if (iVar3 == 0) {
                core_fileman_cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
                          (this_ptr,local_3a5 + 1);
              }
              else {
                iVar3 = _stricmp(local_2a5 + 1,"cth");
                if (iVar3 == 0) {
                  core_fileman_cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
                            (this_ptr,local_3a5 + 1);
                }
                else {
                  iVar3 = _stricmp(local_2a5 + 1,"dfm");
                  if (iVar3 == 0) {
                    core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
                              (this_ptr,local_3a5 + 1);
                  }
                  else {
                    iVar3 = _stricmp(local_2a5 + 1,"set");
                    if (iVar3 != 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid tag \"%s\"",local_2a5 + 1);
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (file,"..\\core\\fileman.cpp",0x126);
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
