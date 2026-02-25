// Name: engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0
// Address: 004b86b0
// Address Range: [[004b86b0, 004b9f3d]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_managePodFiles_FUN_004b86b0(CFileManager *this_ptr,char *pod_directory_path)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_managePodFiles_FUN_004b86b0(CFileManager *this_ptr,char *pod_directory_path)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  _FILE *stream_ptr;
  _FILE *dest_file;
  int *piVar8;
  char *filename;
  int iVar9;
  void *pvVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcVar13;
  SFoundFileInfo *pSVar14;
  byte bVar15;
  int *dialog_message;
  char local_2338 [2048];
  CPodFile local_1b38;
  CPickList local_170c;
  CPickList local_1364;
  SFoundFileInfo local_fbc;
  SFoundFileInfo local_da8;
  SFoundFileInfo local_b94;
  int local_980 [125];
  int local_78c [125];
  char local_598 [260];
  char local_494 [256];
  char local_394 [256];
  char local_294 [256];
  char local_194 [256];
  CStrList local_94;
  CStrList local_84;
  CCheckOutList local_74;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  void *local_44;
  int local_40;
  char *local_3c;
  uint local_38;
  char *local_34;
  char *local_30;
  int local_2c;
  int local_28;
  char *local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_14 [4];
  
  bVar15 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  iVar2 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar2 != 0) {
    pcVar12 = g_DefaultPodDirectoryPath;
    pcVar13 = local_598;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar13 = *(uint *)pcVar12;
      pcVar12 = pcVar12 + ((uint)bVar15 * -2 + 1) * 4;
      pcVar13 = pcVar13 + ((uint)bVar15 * -2 + 1) * 4;
    }
    if (pod_directory_path != (char *)0x0) {
      pcVar12 = local_598;
      do {
        cVar1 = *pod_directory_path;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pod_directory_path[1];
        pod_directory_path = pod_directory_path + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Enter path to update PODs from",local_598,0x104,1);
    if ((iVar2 != 0) &&
       ((shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                   (g_CEditorToolsPtr,"Scanning pods..."),
        g_VersionControlDirectory[0] == '\0' ||
        (iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00(), iVar2 != 0)))) {
      shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_94);
      shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
                (&local_94,local_598,"*.pod");
      if (local_94.item_count < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No POD files found in %s",local_598);
        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_94,0);
        return;
      }
      shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_84);
      engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(this_ptr,&local_84);
      local_48 = local_94.item_count;
      local_44 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (local_94.item_count * 0x39c,"..\\engine\\fileio.cpp",0xc0e);
      if (local_44 == (void *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xc0f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
      }
      local_74.count = 0;
      local_74.items = (CCheckOutItem *)0x0;
      engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_74);
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Scanning pods");
      local_64 = 0;
      if (0 < local_48) {
        local_34 = (char *)((int)local_44 + 0x100);
        local_30 = (char *)((int)local_44 + 0x204);
        do {
          local_18 = local_64;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)local_64,(float)local_48);
          filename = (char *)(local_64 * 0x39c + (int)local_44);
          pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_94,local_64);
          pcVar12 = local_30;
          pcVar13 = local_30;
          do {
            cVar1 = *pcVar3;
            *pcVar13 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
          engine_dosio_c_splitPath_FUN_00481f20
                    (local_30,(char *)0x0,(char *)0x0,filename,(char *)0x0);
          engine_dosio_c_makePath_FUN_00481f50
                    (local_34,(char *)0x0,(char *)0x0,filename,"pod");
          pSVar14 = &local_fbc;
          do {
            cVar1 = *pcVar12;
            pSVar14->found_path[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            pSVar14->found_path[1] = cVar1;
            pSVar14 = (SFoundFileInfo *)(pSVar14->found_path + 2);
          } while (cVar1 != '\0');
          iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_fbc);
          if (iVar2 == 0) {
            g_CurrentLineNumber = 0xc25;
            g_CurrentFilename = "..\\engine\\fileio.cpp";
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Can't querry for pod file info: %s",&local_fbc);
          }
          *(uint *)(filename + 0x394) = local_fbc.timestamp;
          pSVar14 = &local_b94;
          pcVar12 = filename + 0x100;
          *(uint *)(filename + 0x398) = local_fbc.file_size;
          do {
            cVar1 = *pcVar12;
            pSVar14->found_path[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            pSVar14->found_path[1] = cVar1;
            pSVar14 = (SFoundFileInfo *)(pSVar14->found_path + 2);
          } while (cVar1 != '\0');
          iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_b94);
          if (iVar2 == 0) {
            filename[0x370] = '\x04';
            filename[0x371] = '\0';
            filename[0x372] = '\0';
            filename[0x373] = '\0';
          }
          else if (local_fbc.timestamp + 2 < local_b94.timestamp) {
            filename[0x370] = '\0';
            filename[0x371] = '\0';
            filename[0x372] = '\0';
            filename[0x373] = '\0';
          }
          else if (local_b94.timestamp < local_fbc.timestamp - 2) {
            filename[0x370] = '\x01';
            filename[0x371] = '\0';
            filename[0x372] = '\0';
            filename[0x373] = '\0';
          }
          else if (local_b94.file_size == local_fbc.file_size) {
            filename[0x370] = '\x03';
            filename[0x371] = '\0';
            filename[0x372] = '\0';
            filename[0x373] = '\0';
          }
          else {
            filename[0x370] = '\x02';
            filename[0x371] = '\0';
            filename[0x372] = '\0';
            filename[0x373] = '\0';
          }
          iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                            (this_ptr,&local_84,filename + 0x100);
          *(uint *)(filename + 0x374) = (uint)(-1 < iVar2);
          engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_1b38);
          iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                            (&local_1b38,local_fbc.found_path);
          if (iVar2 == 0) {
            shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Can't mount %s to check status",&local_fbc);
            engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1b38,0);
            goto LAB_004b901b;
          }
          filename[0x37c] = '\0';
          filename[0x37d] = '\0';
          filename[0x37e] = '\0';
          filename[0x37f] = '\0';
          filename[0x380] = '\0';
          filename[0x381] = '\0';
          filename[0x382] = '\0';
          filename[899] = '\0';
          filename[900] = '\0';
          filename[0x385] = '\0';
          filename[0x386] = '\0';
          filename[0x387] = '\0';
          filename[0x388] = '\0';
          filename[0x389] = '\0';
          filename[0x38a] = '\0';
          filename[0x38b] = '\0';
          filename[0x38c] = '\0';
          filename[0x38d] = '\0';
          filename[0x38e] = '\0';
          filename[0x38f] = '\0';
          *(int *)(filename + 0x390) = local_1b38.file_count;
          local_40 = 0;
          if (0 < local_1b38.file_count) {
            local_68 = 0;
            do {
              puVar11 = (uint *)
                        ((int)&(local_1b38.directory_entries)->name_or_offset + local_68);
              pSVar14 = &local_da8;
              pcVar12 = (char *)*puVar11;
              do {
                cVar1 = *pcVar12;
                pSVar14->found_path[0] = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar12[1];
                pcVar12 = pcVar12 + 2;
                pSVar14->found_path[1] = cVar1;
                pSVar14 = (SFoundFileInfo *)(pSVar14->found_path + 2);
              } while (cVar1 != '\0');
              iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_da8);
              if (iVar2 == 0) {
                *(int *)(filename + 900) = *(int *)(filename + 900) + 1;
              }
              else if (puVar11[3] + 2 < local_da8.timestamp) {
                *(int *)(filename + 0x37c) = *(int *)(filename + 0x37c) + 1;
              }
              else if (local_da8.timestamp < puVar11[3] - 2) {
                *(int *)(filename + 0x380) = *(int *)(filename + 0x380) + 1;
              }
              else if (local_da8.file_size == puVar11[1]) {
                *(int *)(filename + 0x38c) = *(int *)(filename + 0x38c) + 1;
              }
              else {
                *(int *)(filename + 0x388) = *(int *)(filename + 0x388) + 1;
              }
              local_68 = local_68 + 0x14;
              local_40 = local_40 + 1;
            } while (local_40 < local_1b38.file_count);
          }
          iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_74,filename + 0x100)
          ;
          if (iVar2 < 0) {
            filename[0x308] = '\0';
          }
          else {
            pcVar12 = filename + 0x308;
            pcVar13 = local_74.items[iVar2].value;
            do {
              cVar1 = *pcVar13;
              *pcVar12 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar12[1] = cVar1;
              pcVar12 = pcVar12 + 2;
            } while (cVar1 != '\0');
          }
          filename[0x378] = '\0';
          filename[0x379] = '\0';
          filename[0x37a] = '\0';
          filename[0x37b] = '\0';
          *(char **)(filename + 0x36c) = "(Cannot recommend action)";
          if ((filename[0x308] == '\0') ||
             (iVar2 = stricmp
                                (filename + 0x308,g_VersionControlSession.primary_username),
             iVar2 != 0)) {
            if ((*(int *)(filename + 0x370) == 4) &&
               ((*(int *)(filename + 0x37c) == 0 && (*(int *)(filename + 0x374) == 0)))) {
              filename[0x378] = '\x02';
              filename[0x379] = '\0';
              filename[0x37a] = '\0';
              filename[0x37b] = '\0';
              *(char **)(filename + 0x36c) = "You don't have this pod";
            }
            else if ((*(int *)(filename + 0x370) == 1) &&
                    (((*(int *)(filename + 0x37c) == 0 &&
                      (0 < *(int *)(filename + 0x380) + *(int *)(filename + 0x38c) +
                           *(int *)(filename + 0x388))) && (*(int *)(filename + 0x374) == 0)))) {
              filename[0x378] = '\x03';
              filename[0x379] = '\0';
              filename[0x37a] = '\0';
              filename[0x37b] = '\0';
              *(char **)(filename + 0x36c) = "Extracted, your files are older";
            }
            else if (((*(int *)(filename + 0x370) == 1) && (*(int *)(filename + 0x37c) == 0)) &&
                    (*(int *)(filename + 0x374) == 0)) {
              filename[0x378] = '\x02';
              filename[0x379] = '\0';
              filename[0x37a] = '\0';
              filename[0x37b] = '\0';
              *(char **)(filename + 0x36c) = "Your pod is older and not mounted";
            }
            else if (((*(int *)(filename + 0x370) == 1) && (*(int *)(filename + 0x37c) == 0)) &&
                    (*(int *)(filename + 0x374) != 0)) {
              *(char **)(filename + 0x36c) = "Your pod is older and mounted";
              filename[0x378] = '\x01';
              filename[0x379] = '\0';
              filename[0x37a] = '\0';
              filename[0x37b] = '\0';
            }
            else if (*(int *)(filename + 0x370) == 0) {
              *(char **)(filename + 0x36c) = "Your pod is newer";
              filename[0x378] = '\0';
              filename[0x379] = '\0';
              filename[0x37a] = '\0';
              filename[0x37b] = '\0';
            }
            else {
              if (((*(int *)(filename + 0x370) == 3) && (*(int *)(filename + 0x37c) == 0)) &&
                 (*(int *)(filename + 0x374) != 0)) {
                *(char **)(filename + 0x36c) = "Your pod is in sync and mounted";
                goto LAB_004b8c1d;
              }
              if (((*(int *)(filename + 0x370) == 3) && (*(int *)(filename + 0x37c) == 0)) &&
                 (((*(int *)(filename + 0x374) == 0 &&
                   ((*(int *)(filename + 0x380) == 0 && (*(int *)(filename + 900) == 0)))) &&
                  (*(int *)(filename + 0x388) == 0)))) {
                *(char **)(filename + 0x36c) = "Extracted and in sync";
                filename[0x378] = '\0';
                filename[0x379] = '\0';
                filename[0x37a] = '\0';
                filename[0x37b] = '\0';
              }
              else if (((*(int *)(filename + 0x370) == 3) && (*(int *)(filename + 0x37c) == 0)) &&
                      (*(int *)(filename + 0x374) == 0)) {
                *(char **)(filename + 0x36c) = "Your pod is in sync but not mounted";
                filename[0x378] = '\0';
                filename[0x379] = '\0';
                filename[0x37a] = '\0';
                filename[0x37b] = '\0';
              }
            }
          }
          else {
            *(char **)(filename + 0x36c) = "You have this pod checked out";
LAB_004b8c1d:
            filename[0x378] = '\0';
            filename[0x379] = '\0';
            filename[0x37a] = '\0';
            filename[0x37b] = '\0';
          }
          engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1b38,0);
          local_34 = local_34 + 0x39c;
          local_30 = local_30 + 0x39c;
          local_64 = local_64 + 1;
        } while (local_64 < local_48);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      local_1c = 0;
      if (0 < local_84.item_count) {
        local_2c = local_48 * 0x39c;
        local_28 = local_2c + -0x39c;
        do {
          local_3c = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_84,local_1c);
          iVar2 = local_48;
          iVar9 = 0;
          if (0 < local_48) {
            pcVar12 = (char *)((int)local_44 + 0x100);
            do {
              iVar4 = stricmp(local_3c,pcVar12);
              if (iVar4 == 0) break;
              iVar9 = iVar9 + 1;
              pcVar12 = pcVar12 + 0x39c;
            } while (iVar9 < iVar2);
          }
          if (local_48 <= iVar9) {
            local_2c = local_2c + 0x39c;
            local_48 = local_48 + 1;
            local_28 = local_28 + 0x39c;
            local_44 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (local_44,local_2c,"..\\engine\\fileio.cpp",0xcd3);
            if (local_44 == (void *)0x0) {
              g_CurrentFilename = "..\\engine\\fileio.cpp";
              g_CurrentLineNumber = 0xcd4;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
            }
            pcVar3 = (char *)((int)local_44 + local_28);
            memset(pcVar3,0,0x39c);
            pcVar12 = pcVar3 + 0x100;
            pcVar13 = local_3c;
            do {
              cVar1 = *pcVar13;
              *pcVar12 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar12[1] = cVar1;
              pcVar12 = pcVar12 + 2;
            } while (cVar1 != '\0');
            engine_dosio_c_splitPath_FUN_00481f20(local_598,local_14,local_394,local_194,local_294);
            engine_dosio_c_makePath_FUN_00481f50
                      (local_494,(char *)0x0,local_394,local_194,local_294);
            engine_dosio_c_splitPath_FUN_00481f20
                      (local_3c,(char *)0x0,(char *)0x0,local_194,local_294);
            engine_dosio_c_makePath_FUN_00481f50
                      (pcVar3 + 0x204,local_14,local_494,local_194,local_294);
            pcVar12 = local_194;
            pcVar13 = pcVar3;
            do {
              cVar1 = *pcVar12;
              *pcVar13 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar12[1];
              pcVar12 = pcVar12 + 2;
              pcVar13[1] = cVar1;
              pcVar13 = pcVar13 + 2;
            } while (cVar1 != '\0');
            pcVar3[0x308] = '\0';
            pcVar3[0x370] = '\x05';
            pcVar3[0x371] = '\0';
            pcVar3[0x372] = '\0';
            pcVar3[0x373] = '\0';
            *(char **)(pcVar3 + 0x36c) = "POD not under version control";
            pcVar3[0x378] = '\0';
            pcVar3[0x379] = '\0';
            pcVar3[0x37a] = '\0';
            pcVar3[0x37b] = '\0';
            pcVar3[0x374] = '\x01';
            pcVar3[0x375] = '\0';
            pcVar3[0x376] = '\0';
            pcVar3[0x377] = '\0';
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_84.item_count);
      }
      local_60 = 0;
LAB_004b8d5b:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_170c);
      shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_170c,1);
      iVar2 = 0;
      pvVar10 = local_44;
      if (0 < local_48) {
        do {
          _sprintf
                    (local_2338,"%s\t%s\t%s",pvVar10,*(uint *)((int)pvVar10 + 0x36c),
                     PTR_ARRAY_00679da0[*(int *)((int)pvVar10 + 0x378)]);
          if (*(char *)((int)pvVar10 + 0x308) != '\0') {
            pcVar12 = local_2338;
            do {
              pcVar13 = pcVar12;
              if (*pcVar12 == '\0') goto LAB_004b8df1;
              if (*pcVar12 == '\0') break;
              pcVar13 = pcVar12 + 1;
              if (*pcVar13 == '\0') goto LAB_004b8df1;
              pcVar12 = pcVar12 + 2;
            } while (*pcVar13 != '\0');
            pcVar13 = (char *)0x0;
LAB_004b8df1:
            _sprintf
                      (pcVar13,"\tChecked out by %s",(int)pvVar10 + 0x308);
          }
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_170c.base,local_2338);
          iVar2 = iVar2 + 1;
          pvVar10 = (void *)((int)pvVar10 + 0x39c);
        } while (iVar2 < local_48);
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_170c.base,"Go!");
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_170c,"Select action for each pod, select \"Go!\" when you are done",local_60,0);
      pvVar10 = local_44;
      local_60 = iVar2;
      if (iVar2 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_170c,0);
        goto LAB_004b901b;
      }
      if (iVar2 < local_170c.base.item_count + -1) {
        iVar9 = (int)local_44 + iVar2 * 0x39c + 0x204;
        iVar4 = _sprintf(local_2338,"Select action for %s\n",iVar9);
        pcVar12 = local_2338 + iVar4;
        switch(*(uint *)((int)pvVar10 + iVar2 * 0x39c + 0x370)) {
        case 0:
          iVar9 = _sprintf
                            (pcVar12,"Your pod %s is newer than %s\n",
                             (int)pvVar10 + iVar2 * 0x39c + 0x100,iVar9);
          break;
        case 1:
          iVar9 = _sprintf
                            (pcVar12,"Your pod %s is older than %s\n",
                             (int)pvVar10 + iVar2 * 0x39c + 0x100,iVar9);
          break;
        case 2:
          iVar9 = _sprintf
                            (pcVar12,"Your pod %s is different than %s\n",
                             (int)pvVar10 + iVar2 * 0x39c + 0x100,iVar9);
          break;
        case 3:
          iVar9 = _sprintf
                            (pcVar12,"Your pod %s is the same as %s\n",
                             (int)pvVar10 + iVar2 * 0x39c + 0x100,iVar9);
          break;
        case 4:
          iVar9 = _sprintf
                            (pcVar12,"You don't have the pod %s\n",
                             (int)pvVar10 + iVar2 * 0x39c + 0x100);
          break;
        case 5:
          iVar9 = _sprintf
                            (pcVar12,"%s is mounted, but %s does not exist\n",
                             (int)pvVar10 + iVar2 * 0x39c + 0x100,iVar9);
          break;
        default:
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0xd1c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
          goto LAB_004b9590;
        }
        pcVar12 = pcVar12 + iVar9;
LAB_004b9590:
        if (*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x370) != 5) {
          iVar4 = _sprintf(pcVar12,"---------------------\n");
          iVar6 = _sprintf
                            (pcVar12 + iVar4,"Of the %d files in %s:\n",
                             *(uint *)((int)pvVar10 + iVar2 * 0x39c + 0x390),
                             (int)pvVar10 + iVar2 * 0x39c + 0x204);
          iVar9 = *(int *)((int)pvVar10 + iVar2 * 0x39c + 900);
          pcVar12 = pcVar12 + iVar4 + iVar6;
          if (0 < iVar9) {
            iVar9 = _sprintf
                              (pcVar12,"%d files don't exist locally\n",iVar9);
            pcVar12 = pcVar12 + iVar9;
          }
          iVar9 = *(int *)((int)pvVar10 + iVar2 * 0x39c + 0x37c);
          if (0 < iVar9) {
            iVar9 = _sprintf
                              (pcVar12,"%d local files are newer\n",iVar9);
            pcVar12 = pcVar12 + iVar9;
          }
          iVar9 = *(int *)((int)pvVar10 + iVar2 * 0x39c + 0x380);
          if (0 < iVar9) {
            iVar9 = _sprintf
                              (pcVar12,"%d local files are older\n",iVar9);
            pcVar12 = pcVar12 + iVar9;
          }
          iVar9 = *(int *)((int)pvVar10 + iVar2 * 0x39c + 0x388);
          if (0 < iVar9) {
            iVar9 = _sprintf
                              (pcVar12,"%d local files are different\n",iVar9);
            pcVar12 = pcVar12 + iVar9;
          }
          iVar9 = *(int *)((int)pvVar10 + iVar2 * 0x39c + 0x38c);
          if (0 < iVar9) {
            iVar9 = _sprintf
                              (pcVar12,"%d local files are in sync\n",iVar9);
            pcVar12 = pcVar12 + iVar9;
          }
          iVar9 = _sprintf(pcVar12,"---------------------\n");
          pcVar12 = pcVar12 + iVar9;
          if (*(char *)((int)pvVar10 + iVar2 * 0x39c + 0x308) != '\0') {
            pcVar13 = (char *)((int)pvVar10 + iVar2 * 0x39c + 0x308);
            iVar9 = stricmp
                              (pcVar13,g_VersionControlSession.primary_username);
            if (iVar9 == 0) {
              iVar9 = _sprintf(pcVar12,"You currently have this pod checked out\n")
              ;
            }
            else {
              iVar9 = _sprintf
                                (pcVar12,"%s currently has this pod checked out\n",pcVar13);
            }
            pcVar12 = pcVar12 + iVar9;
          }
          if (*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x374) == 0) {
            pcVar13 = "Your currently do not have this pod mounted.\n";
          }
          else {
            pcVar13 = "Your currently have this pod mounted.\n";
          }
          _sprintf(pcVar12,pcVar13);
        }
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1364);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1364.base,PTR_ARRAY_00679da0[0]);
        if (*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1364.base,PTR_ARRAY_00679da0[1]);
        }
        if ((*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x374) == 0) &&
           (*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x370) != 5)) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1364.base,PTR_ARRAY_00679da0[2]);
        }
        if (*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1364.base,PTR_ARRAY_00679da0[3]);
        }
        if (*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x370) == 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1364.base,PTR_ARRAY_00679da0[4]);
        }
        if (*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x370) == 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1364.base,PTR_ARRAY_00679da0[5]);
        }
        if (*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_1364.base,"Show local file differences");
        }
        iVar9 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                          (&local_1364.base,
                           PTR_ARRAY_00679da0[*(int *)((int)pvVar10 + iVar2 * 0x39c + 0x378)]);
        while (iVar9 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_1364,local_2338,iVar9,0), -1 < iVar9) {
          pcVar13 = "Show local file differences";
          pcVar12 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_1364.base,iVar9);
          iVar4 = stricmp(pcVar12,pcVar13);
          if (iVar4 != 0) {
            iVar4 = 0;
            iVar6 = 0;
            goto LAB_004b994d;
          }
          engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
                    (this_ptr,(char *)((int)pvVar10 + iVar2 * 0x39c + 0x204));
        }
        goto LAB_004b9978;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_170c,0);
      local_20 = 0;
      this_ptr->batch_mode = 1;
      g_VersionControlSession.overwrite_own_choice = 0;
      g_VersionControlSession.overwrite_writeable_choice = 0;
      if (0 < local_48) {
        local_24 = (char *)((int)local_44 + 0x100);
        do {
          iVar9 = local_20;
          pcVar12 = local_24;
          pvVar10 = local_44;
          iVar2 = *(int *)((int)local_44 + local_20 * 0x39c + 0x378);
          if (iVar2 == 0) {
            if (((*(int *)((int)local_44 + local_20 * 0x39c + 0x370) == 3) &&
                (*(int *)((int)local_44 + local_20 * 0x39c + 0x37c) == 0)) &&
               ((*(int *)((int)local_44 + local_20 * 0x39c + 0x374) != 0 &&
                (((g_VersionControlDirectory[0] != '\0' &&
                  (uVar5 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,local_24),
                  -1 < (int)uVar5)) && ((uVar5 & 8) == 0)))))) {
              engine_dosio_c_setFileAttributes_FUN_004819f0(local_24,(byte)uVar5 | 8);
            }
          }
          else {
            if (iVar2 == 5) {
              engine_dosio_c_setFileAttributes_FUN_004819f0(local_24,0);
              iVar2 = remove(pcVar12);
              if (iVar2 == 0) {
                local_4c = local_4c + 1;
              }
              else {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Can't delete %s",pcVar12);
              }
            }
            iVar2 = *(int *)((int)pvVar10 + iVar9 * 0x39c + 0x378);
            if ((iVar2 == 4) || (iVar2 == 5)) {
              pcVar12 = (char *)((int)pvVar10 + iVar9 * 0x39c + 0x100);
              iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                (this_ptr,&local_84,pcVar12);
              if (iVar2 < 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Can't dismount %s because it isn't mounted??  Get Fletch.",pcVar12);
              }
              else {
                shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(&local_84,iVar2);
                local_50 = local_50 + 1;
              }
            }
            else {
              pcVar12 = (char *)((int)pvVar10 + iVar9 * 0x39c + 0x100);
              local_6c = 0;
              if (g_VersionControlDirectory[0] == '\0') {
                uVar5 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,pcVar12);
                if ((-1 < (int)uVar5) && ((uVar5 & 8) != 0)) {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"%s exists and is read only.  Cannot copy POD.",pcVar12);
                  goto LAB_004b8f32;
                }
              }
              else {
                local_38 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,pcVar12);
                pcVar13 = (char *)((int)pvVar10 + iVar9 * 0x39c + 0x308);
                if (-1 < (int)local_38) {
                  if (((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) ||
                     (iVar2 = stricmp
                                        (pcVar13,g_VersionControlSession.primary_username),
                     iVar2 != 0)) {
                    if ((local_38 & 8) != 0) goto LAB_004b9af4;
                    _sprintf
                              ((char *)local_980,"A writable copy of %s exists.  Replace it?",pcVar12);
                    dialog_message = &g_VersionControlSession.overwrite_writeable_choice;
                    piVar8 = local_980;
                  }
                  else {
                    _sprintf
                              ((char *)local_78c,"You currently have %s checked out.  Replace local copy with network copy?",pcVar12);
                    dialog_message = &g_VersionControlSession.overwrite_own_choice;
                    piVar8 = local_78c;
                  }
                  iVar2 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                                    (piVar8,(char *)dialog_message);
                  if (iVar2 < 0) break;
                  if (iVar2 == 0) goto LAB_004b8f32;
                }
LAB_004b9af4:
                engine_dosio_c_setFileAttributes_FUN_004819f0
                          ((char *)((int)pvVar10 + iVar9 * 0x39c + 0x100),0);
              }
              iVar2 = 0;
              pcVar12 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_94,local_20);
              do {
                stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                       (pcVar12,(char *)0x0,"rb",
                                        "..\\engine\\fileio.cpp",0x153);
                if (stream_ptr != (_FILE *)0x0) {
                  _setvbuf(stream_ptr,(char *)0x0,0,0x400);
                  if (stream_ptr != (_FILE *)0x0) {
                    pcVar12 = (char *)((int)pvVar10 + iVar9 * 0x39c + 0x100);
                    dest_file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                          (pcVar12,(char *)0x0,"wb",
                                           "..\\engine\\fileio.cpp",0xdbb);
                    if (dest_file == (_FILE *)0x0) {
                      if (stream_ptr != (_FILE *)0x0) {
                        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                  (stream_ptr,"..\\engine\\fileio.cpp",0xc4);
                      }
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Can't create local %s",
                                 (int)pvVar10 + iVar9 * 0x39c + 0x100);
                    }
                    else {
                      iVar2 = *(int *)((int)pvVar10 + iVar9 * 0x39c + 0x398);
                      pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                          (&local_94,local_20);
                      pcVar12 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                                          (stream_ptr,dest_file,pcVar13,pcVar12,iVar2);
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (stream_ptr,"..\\engine\\fileio.cpp",0xdc5);
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (dest_file,"..\\engine\\fileio.cpp",0xdc6);
                      if (pcVar12 != (char *)0x0) {
                        g_CurrentFilename = "..\\engine\\fileio.cpp";
                        g_CurrentLineNumber = 0xdc7;
                        core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar12);
                      }
                      pcVar12 = (char *)((int)pvVar10 + iVar9 * 0x39c + 0x100);
                      local_5c = local_5c + 1;
                      iVar2 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                                        (pcVar12,*(char **)((int)pvVar10 + iVar9 * 0x39c + 0x394));
                      if (iVar2 == 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)",pcVar12);
                      }
                      if ((g_VersionControlDirectory[0] != '\0') &&
                         (iVar2 = stricmp
                                            ((char *)((int)pvVar10 + iVar9 * 0x39c + 0x308),
                                             g_VersionControlSession.primary_username), iVar2 != 0))
                      {
                        pcVar12 = (char *)((int)pvVar10 + iVar9 * 0x39c + 0x100);
                        iVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                          (pcVar12,(byte)local_6c | 8);
                        if (iVar2 == 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Warning: couldn't mark %s as read-only.",pcVar12);
                        }
                      }
                      if (*(int *)((int)pvVar10 + iVar9 * 0x39c + 0x378) != 3) {
                        pcVar12 = (char *)((int)pvVar10 + iVar9 * 0x39c + 0x100);
                        iVar2 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280
                                          ((CPod *)g_CDemonPodPtr,pcVar12);
                        if (iVar2 == 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Warning: %s failed CRC check",pcVar12);
                        }
                      }
                      uVar5 = *(uint *)((int)pvVar10 + iVar9 * 0x39c + 0x378);
                      if (1 < uVar5) {
                        pcVar12 = (char *)((int)pvVar10 + iVar9 * 0x39c + 0x100);
                        if (uVar5 < 3) {
                          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_84,pcVar12);
                          local_58 = local_58 + 1;
                        }
                        else if (uVar5 == 3) {
                          (*this_ptr->vtable->extractPodFile)(this_ptr,pcVar12);
                          local_4c = local_4c + 1;
                        }
                      }
                    }
                    goto LAB_004b8f32;
                  }
                  break;
                }
                piVar8 = (int *)_errno();
                if (*piVar8 != 6) break;
                iVar2 = iVar2 + 1;
                (*g_SleepFunc)(500);
              } while (iVar2 < 10);
              pcVar12 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_94,local_20);
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s",pcVar12);
            }
          }
LAB_004b8f32:
          local_24 = local_24 + 0x39c;
          local_20 = local_20 + 1;
        } while (local_20 < local_48);
      }
      this_ptr->batch_mode = 0;
      if ((0 < local_58) || (0 < local_50)) {
        engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,&local_84);
      }
      if (((local_5c == 0) && (local_58 == 0)) &&
         ((local_54 == 0 && ((local_4c == 0 && (local_50 == 0)))))) {
        pcVar13 = "PODs not changed.";
        pcVar12 = local_598;
      }
      else {
        pcVar12 = local_598;
        if (0 < local_5c) {
          iVar2 = _sprintf(pcVar12,"%d pods copied\n",local_5c);
          pcVar12 = local_598 + iVar2;
        }
        if (0 < local_54) {
          iVar2 = _sprintf(pcVar12,"%d pods extracted\n",local_54);
          pcVar12 = pcVar12 + iVar2;
        }
        if (0 < local_58) {
          iVar2 = _sprintf(pcVar12,"%d pods mounted\n",local_58);
          pcVar12 = pcVar12 + iVar2;
        }
        if (0 < local_50) {
          iVar2 = _sprintf(pcVar12,"%d pods dismounted\n",local_50);
          pcVar12 = pcVar12 + iVar2;
        }
        if (0 < local_4c) {
          iVar2 = _sprintf
                            (pcVar12,"%d local pods deleted\n",local_4c);
          pcVar12 = pcVar12 + iVar2;
        }
        if ((local_58 < 1) && (local_50 < 1)) {
          pcVar13 = "To apply these changes, you should restart the application.";
        }
        else {
          iVar2 = _sprintf(pcVar12,"POD.INI re-written\n");
          pcVar12 = pcVar12 + iVar2;
          pcVar13 = "To apply these changes, you should restart the application.";
        }
      }
      do {
        cVar1 = *pcVar13;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(g_CEditorToolsPtr,local_598);
LAB_004b901b:
      if (local_44 != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_44,"..\\engine\\fileio.cpp",0xe10);
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_74);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_84,0);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_94,0);
      return;
    }
  }
  return;
  while( true ) {
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 1;
    if (0x17 < iVar4) break;
LAB_004b994d:
    pcVar12 = *(char **)((int)PTR_ARRAY_00679da0 + iVar4);
    pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_1364.base,iVar9);
    iVar7 = stricmp(pcVar13,pcVar12);
    if (iVar7 == 0) {
      *(int *)((int)pvVar10 + iVar2 * 0x39c + 0x378) = iVar6;
      break;
    }
  }
LAB_004b9978:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1364,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_170c,0);
  goto LAB_004b8d5b;
}
