// Name: engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0
// Address: 004b86b0
// Address Range: [[004b86b0, 004b9f3d]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0(CFileManager * this_ptr, char * pod_directory_path)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_managePodFiles_FUN_004b86b0
          (CFileManager *this_ptr,char *pod_directory_path)

{
  char cVar1;
  CFileManager *filename;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  CStrList *config_param1;
  int iVar8;
  FILE *stream_ptr;
  int *piVar9;
  undefined3 extraout_var;
  CStrList_vtable *unaff_EBX;
  char **ppcVar10;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  uint *puVar11;
  char **unaff_ESI;
  char **ppcVar12;
  int unaff_EDI;
  char *pcVar13;
  char *pcVar14;
  byte bVar15;
  char *unaff_retaddr;
  char *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  char **in_stack_00000018;
  CFileManager *in_stack_00000020;
  char *in_stack_00000024;
  int in_stack_00000028;
  CFileManager *in_stack_00000034;
  int in_stack_00000038;
  CFileManager *in_stack_00000048;
  CFileManager *in_stack_0000006c;
  CFileManager *in_stack_00000078;
  uint in_stack_ffffdce4;
  uint in_stack_ffffdd0c;
  uint in_stack_ffffdd10;
  CPickList *in_stack_ffffdd14;
  char *in_stack_ffffdd18;
  char *in_stack_ffffdd1c;
  FILE *in_stack_ffffdd20;
  FILE *file_size_bytes;
  CFileManager *in_stack_ffffdd28;
  char *in_stack_ffffdd30;
  uint in_stack_ffffdd34;
  uint in_stack_ffffdd38;
  uint in_stack_ffffdd3c;
  uint in_stack_ffffdd40;
  uint in_stack_ffffdd44;
  byte auStack_1b04 [16];
  byte auStack_1af4 [1056];
  byte auStack_16d4 [12];
  byte auStack_16c8 [944];
  byte auStack_1318 [20];
  byte auStack_1304 [8];
  byte auStack_12fc [869];
  char acStack_f97 [19];
  char acStack_f84 [504];
  char *pcStack_d8c;
  int iStack_d88;
  char *pcStack_d84;
  int iStack_d80;
  byte auStack_d6c [517];
  char acStack_b67 [7];
  uint uStack_b60;
  int iStack_960;
  uint uStack_958;
  char acStack_93c [12];
  int aiStack_930 [124];
  char acStack_740 [4];
  int aiStack_73c [106];
  char acStack_594 [16];
  char acStack_584 [4];
  byte auStack_580 [12];
  char acStack_574 [32];
  char acStack_554 [232];
  char acStack_46c [8];
  char acStack_464 [244];
  char acStack_370 [4];
  char acStack_36c [252];
  char acStack_270 [4];
  char acStack_26c [4];
  char acStack_268 [4];
  char acStack_264 [244];
  char acStack_170 [4];
  char acStack_16c [4];
  char acStack_168 [4];
  char acStack_164 [4];
  char acStack_160 [220];
  byte local_84 [8];
  byte auStack_7c [8];
  CStrList_vtable *local_74;
  byte local_6c [16];
  uint local_5c;
  uint local_58;
  byte local_54 [8];
  byte local_4c [16];
  byte local_3c [8];
  byte local_34 [16];
  int local_24;
  void *local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  
  bVar15 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54._0_4_ = 0;
  local_54._4_4_ = 0;
  local_4c._0_4_ = (char **)0x0;
  iVar3 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar3 != 0) {
    pcVar13 = g_DefaultPodDirectoryPath;
    pcVar14 = acStack_594;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar14 = *(uint *)pcVar13;
      pcVar13 = pcVar13 + ((uint)bVar15 * -2 + 1) * 4;
      pcVar14 = pcVar14 + ((uint)bVar15 * -2 + 1) * 4;
    }
    if (pod_directory_path != (char *)0x0) {
      pcVar13 = acStack_594;
      do {
        cVar1 = *pod_directory_path;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pod_directory_path[1];
        pod_directory_path = pod_directory_path + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Enter path to update PODs from",acStack_594,0x104,1);
    if ((iVar3 != 0) &&
       ((shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                   (g_CEditorToolsPtr,"Scanning pods..."),
        g_VersionControlDirectory[0] == '\0' ||
        (iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00(), iVar3 != 0)))) {
      shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_84);
      shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
                ((CStrList *)(local_84 + 4),acStack_584,"*.pod");
      if ((int)auStack_7c._0_4_ < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No POD files found in %s",auStack_580);
        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                  ((CStrList *)(auStack_7c + 4),0,in_stack_ffffdce4);
        return;
      }
      shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_6c);
      engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
                (in_stack_00000020,(CStrList *)(local_6c + 4));
      local_34._12_4_ = local_74;
      local_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           ((int)local_74 * 0x39c,"..\\engine\\fileio.cpp",0xc0e);
      if (local_20 == (void *)0x0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xc0f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
      }
      local_4c._0_4_ = (char **)0x0;
      local_4c._4_4_ = (CCheckOutItem *)0x0;
      engine_fileio_cpp_CCheckOutList_load_FUN_004b2890((CCheckOutList *)local_4c);
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Scanning pods");
      local_34._0_4_ = (char **)0x0;
      if (0 < (int)local_18) {
        unaff_retaddr = local_14 + 0x204;
        do {
          in_stack_00000018 = (char **)local_34._0_4_;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)(int)local_34._0_4_,(float)(int)local_18);
          ppcVar10 = (char **)(local_34._8_4_ + local_4c._0_4_ * 0xe7 * 4);
          pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             ((CStrList *)auStack_7c,local_4c._0_4_);
          pcVar13 = local_14;
          pcVar14 = local_14;
          do {
            cVar1 = *pcVar4;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
          engine_dosio_c_splitPath_FUN_00481f20
                    (local_14,(char *)0x0,(char *)0x0,(char *)ppcVar10,(char *)0x0);
          engine_dosio_c_makePath_FUN_00481f50
                    (local_14,(char *)0x0,(char *)0x0,(char *)ppcVar10,"pod");
          pcVar14 = auStack_12fc + 0x364;
          do {
            cVar1 = *pcVar13;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
          iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0
                            ((SFoundFileInfo *)(auStack_12fc + 0x364));
          if (iVar3 == 0) {
            g_CurrentLineNumber = 0xc25;
            g_CurrentFilename = "..\\engine\\fileio.cpp";
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Can't querry for pod file info: %s",acStack_f97 + 3);
          }
          ppcVar10[0xe5] = pcStack_d84;
          pcVar13 = auStack_d6c + 0x204;
          ppcVar12 = ppcVar10 + 0x40;
          ppcVar10[0xe6] = pcStack_d8c;
          do {
            cVar1 = *(char *)ppcVar12;
            *pcVar13 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = *(char *)((int)ppcVar12 + 1);
            ppcVar12 = (char **)((int)ppcVar12 + 2);
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
          iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0
                            ((SFoundFileInfo *)(auStack_d6c + 0x204));
          if (iVar3 == 0) {
            ppcVar10[0xdc] = &DAT_00000004;
          }
          else if (iStack_d80 + 2U < uStack_958) {
            ppcVar10[0xdc] = (char *)0x0;
          }
          else if (uStack_958 < iStack_d80 - 2U) {
            ppcVar10[0xdc] = &DAT_00000001;
          }
          else if (iStack_960 == iStack_d88) {
            ppcVar10[0xdc] = (char *)0x3;
          }
          else {
            ppcVar10[0xdc] = &DAT_00000002;
          }
          iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                            (in_stack_00000034,(CStrList *)local_54,(char *)(ppcVar10 + 0x40));
          ppcVar10[0xdd] = (char *)(uint)(-1 < iVar3);
          engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)auStack_1b04);
          iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                            ((CPodFile *)(auStack_1b04 + 4),acStack_f84);
          if (iVar3 == 0) {
            shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Can't mount %s to check status");
            engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)auStack_1af4);
            goto LAB_004b901b;
          }
          ppcVar10[0xdf] = (char *)0x0;
          ppcVar10[0xe0] = (char *)0x0;
          ppcVar10[0xe1] = (char *)0x0;
          ppcVar10[0xe2] = (char *)0x0;
          ppcVar10[0xe3] = (char *)0x0;
          ppcVar10[0xe4] = (char *)auStack_1af4._1032_4_;
          unaff_EBX = (CStrList_vtable *)0x0;
          if (0 < (int)auStack_1af4._1032_4_) {
            local_34._8_4_ = (char **)0x0;
            do {
              puVar11 = (uint *)(auStack_1af4._1036_4_ + local_34._8_4_);
              pcVar13 = auStack_d6c;
              pcVar14 = (char *)*puVar11;
              do {
                cVar1 = *pcVar14;
                *pcVar13 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar14[1];
                pcVar14 = pcVar14 + 2;
                pcVar13[1] = cVar1;
                pcVar13 = pcVar13 + 2;
              } while (cVar1 != '\0');
              iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_d6c);
              if (iVar3 == 0) {
                ppcVar10[0xe1] = ppcVar10[0xe1] + 1;
              }
              else if (puVar11[3] + 2 < uStack_b60) {
                ppcVar10[0xdf] = ppcVar10[0xdf] + 1;
              }
              else if (uStack_b60 < puVar11[3] - 2) {
                ppcVar10[0xe0] = ppcVar10[0xe0] + 1;
              }
              else if (stack0xfffff498 == puVar11[1]) {
                ppcVar10[0xe3] = ppcVar10[0xe3] + 1;
              }
              else {
                ppcVar10[0xe2] = ppcVar10[0xe2] + 1;
              }
              local_34._8_4_ = local_34._8_4_ + 0x14;
              unaff_EBX = (CStrList_vtable *)((int)&unaff_EBX->dtor + 1);
            } while ((int)unaff_EBX < (int)auStack_1af4._1032_4_);
          }
          iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                            ((CCheckOutList *)(local_3c + 4),(char *)(ppcVar10 + 0x40));
          if (iVar3 < 0) {
            *(char *)(ppcVar10 + 0xc2) = '\0';
          }
          else {
            ppcVar12 = ppcVar10 + 0xc2;
            pcVar13 = (char *)(local_34._4_4_ + iVar3 * 0x168 + 0x104);
            do {
              cVar1 = *pcVar13;
              *(char *)ppcVar12 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              *(char *)((int)ppcVar12 + 1) = cVar1;
              ppcVar12 = (char **)((int)ppcVar12 + 2);
            } while (cVar1 != '\0');
          }
          ppcVar10[0xde] = (char *)0x0;
          ppcVar10[0xdb] = "(Cannot recommend action)";
          if ((*(char *)(ppcVar10 + 0xc2) == '\0') ||
             (iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                                ((char *)(ppcVar10 + 0xc2),g_VersionControlSession.primary_username)
             , iVar3 != 0)) {
            if ((ppcVar10[0xdc] == &DAT_00000004) &&
               ((ppcVar10[0xdf] == (char *)0x0 && (ppcVar10[0xdd] == (char *)0x0)))) {
              ppcVar10[0xde] = &DAT_00000002;
              ppcVar10[0xdb] = "You don't have this pod";
            }
            else if ((ppcVar10[0xdc] == &DAT_00000001) &&
                    (((ppcVar10[0xdf] == (char *)0x0 &&
                      (0 < (int)(ppcVar10[0xe0] + (int)ppcVar10[0xe3] + (int)ppcVar10[0xe2]))) &&
                     (ppcVar10[0xdd] == (char *)0x0)))) {
              ppcVar10[0xde] = (char *)0x3;
              ppcVar10[0xdb] = "Extracted, your files are older";
            }
            else if (((ppcVar10[0xdc] == &DAT_00000001) && (ppcVar10[0xdf] == (char *)0x0)) &&
                    (ppcVar10[0xdd] == (char *)0x0)) {
              ppcVar10[0xde] = &DAT_00000002;
              ppcVar10[0xdb] = "Your pod is older and not mounted";
            }
            else if (((ppcVar10[0xdc] == &DAT_00000001) && (ppcVar10[0xdf] == (char *)0x0)) &&
                    (ppcVar10[0xdd] != (char *)0x0)) {
              ppcVar10[0xdb] = "Your pod is older and mounted";
              ppcVar10[0xde] = &DAT_00000001;
            }
            else if (ppcVar10[0xdc] == (char *)0x0) {
              ppcVar10[0xdb] = "Your pod is newer";
              ppcVar10[0xde] = (char *)0x0;
            }
            else {
              if (((ppcVar10[0xdc] == (char *)0x3) && (ppcVar10[0xdf] == (char *)0x0)) &&
                 (ppcVar10[0xdd] != (char *)0x0)) {
                ppcVar10[0xdb] = "Your pod is in sync and mounted";
                goto LAB_004b8c1d;
              }
              if (((ppcVar10[0xdc] == (char *)0x3) && (ppcVar10[0xdf] == (char *)0x0)) &&
                 (((ppcVar10[0xdd] == (char *)0x0 &&
                   ((ppcVar10[0xe0] == (char *)0x0 && (ppcVar10[0xe1] == (char *)0x0)))) &&
                  (ppcVar10[0xe2] == (char *)0x0)))) {
                ppcVar10[0xdb] = "Extracted and in sync";
                ppcVar10[0xde] = (char *)0x0;
              }
              else if (((ppcVar10[0xdc] == (char *)0x3) && (ppcVar10[0xdf] == (char *)0x0)) &&
                      (ppcVar10[0xdd] == (char *)0x0)) {
                ppcVar10[0xdb] = "Your pod is in sync but not mounted";
                ppcVar10[0xde] = (char *)0x0;
              }
            }
          }
          else {
            ppcVar10[0xdb] = "You have this pod checked out";
LAB_004b8c1d:
            ppcVar10[0xde] = (char *)0x0;
          }
          engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)auStack_1af4);
          in_stack_00000014 = in_stack_00000014 + 0x39c;
          in_stack_00000018 = in_stack_00000018 + 0xe7;
          local_1c = local_1c + 1;
        } while (local_1c < (int)unaff_retaddr);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      in_stack_00000018 = (char **)0x0;
      if (0 < (int)local_54._4_4_) {
        pod_directory_path = (char *)((int)local_14 * 0x39c);
        in_stack_0000000c = pod_directory_path + -0x39c;
        do {
          unaff_ESI = (char **)shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                         ((CStrList *)(local_54 + 4),(int)in_stack_00000018);
          pcVar13 = local_14;
          iVar3 = 0;
          if (0 < (int)local_14) {
            pcVar14 = unaff_EBP + 0x100;
            do {
              iVar5 = crt_string_c_stricmp_FUN_005fe7f0((char *)unaff_ESI,pcVar14);
              if (iVar5 == 0) break;
              iVar3 = iVar3 + 1;
              pcVar14 = pcVar14 + 0x39c;
            } while (iVar3 < (int)pcVar13);
          }
          if ((int)local_14 <= iVar3) {
            pod_directory_path = pod_directory_path + 0x39c;
            local_14 = local_14 + 1;
            in_stack_0000000c = in_stack_0000000c + 0x39c;
            local_34._12_4_ =
                 shape_memdbg_cpp_debugRealloc_FUN_0050f540
                           (unaff_EBP,(int)pod_directory_path,"..\\engine\\fileio.cpp",0xcd3);
            if ((CStrList_vtable *)local_34._12_4_ == (CStrList_vtable *)0x0) {
              g_CurrentFilename = "..\\engine\\fileio.cpp";
              g_CurrentLineNumber = 0xcd4;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
            }
            pcVar4 = (char *)(local_24 + (int)unaff_ESI);
            crt_memory_c_memset_FUN_005fde40(pcVar4,0,0x39c);
            pcVar13 = pcVar4 + 0x100;
            pcVar14 = local_18;
            do {
              cVar1 = *pcVar14;
              *pcVar13 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar13[1] = cVar1;
              pcVar13 = pcVar13 + 2;
            } while (cVar1 != '\0');
            engine_dosio_c_splitPath_FUN_00481f20
                      (acStack_574,(char *)&stack0x00000010,acStack_370,acStack_170,acStack_270);
            engine_dosio_c_makePath_FUN_00481f50
                      (acStack_46c,(char *)0x0,acStack_36c,acStack_16c,acStack_26c);
            engine_dosio_c_splitPath_FUN_00481f20
                      (unaff_EBP,(char *)0x0,(char *)0x0,acStack_168,acStack_268);
            engine_dosio_c_makePath_FUN_00481f50
                      (pcVar4 + 0x204,&stack0x0000001c,acStack_464,acStack_164,acStack_264);
            pcVar13 = acStack_160;
            pcVar14 = pcVar4;
            do {
              cVar1 = *pcVar13;
              *pcVar14 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar13[1];
              pcVar13 = pcVar13 + 2;
              pcVar14[1] = cVar1;
              pcVar14 = pcVar14 + 2;
            } while (cVar1 != '\0');
            pcVar4[0x308] = '\0';
            pcVar4[0x370] = '\x05';
            pcVar4[0x371] = '\0';
            pcVar4[0x372] = '\0';
            pcVar4[0x373] = '\0';
            *(char **)(pcVar4 + 0x36c) = "POD not under version control";
            pcVar4[0x378] = '\0';
            pcVar4[0x379] = '\0';
            pcVar4[0x37a] = '\0';
            pcVar4[0x37b] = '\0';
            pcVar4[0x374] = '\x01';
            pcVar4[0x375] = '\0';
            pcVar4[0x376] = '\0';
            pcVar4[0x377] = '\0';
          }
          in_stack_00000018 = (char **)((int)in_stack_00000018 + 1);
        } while ((int)in_stack_00000018 < (int)local_54._4_4_);
      }
      local_34._8_4_ = (char **)0x0;
LAB_004b8d5b:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1af4 + 0x41c));
      shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)auStack_16d4,1);
      iVar3 = 0;
      ppcVar10 = unaff_ESI;
      if (0 < unaff_EDI) {
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffdd04,"%s\t%s\t%s");
          if (*(char *)(ppcVar10 + 0xc2) != '\0') {
            pcVar13 = &stack0xffffdcfc;
            do {
              pcVar14 = pcVar13;
              if (*pcVar13 == '\0') goto LAB_004b8df1;
              if (*pcVar13 == '\0') break;
              pcVar14 = pcVar13 + 1;
              if (*pcVar14 == '\0') goto LAB_004b8df1;
              pcVar13 = pcVar13 + 2;
            } while (*pcVar14 != '\0');
            pcVar14 = (char *)0x0;
LAB_004b8df1:
            crt_stdio_c_sprintf_FUN_005fdbd0(pcVar14,"\tChecked out by %s",ppcVar10 + 0xc2);
          }
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_16d4,&stack0xffffdd00);
          iVar3 = iVar3 + 1;
          ppcVar10 = ppcVar10 + 0xe7;
        } while (iVar3 < unaff_EDI);
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_16d4 + 4),"Go!");
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)(auStack_16d4 + 8),"Select action for each pod, select \"Go!\" when you are done",
                         (int)local_20,0);
      local_1c = iVar3;
      if (iVar3 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_16c8,0,in_stack_ffffdd0c,in_stack_ffffdd10,
                   (uint)in_stack_ffffdd14,(uint)in_stack_ffffdd18,(uint)in_stack_ffffdd1c);
        goto LAB_004b901b;
      }
      if (iVar3 < (int)((int)&((CStrList_vtable *)(auStack_16c8._0_4_ + -0x1c))->handleInput + 3)) {
        iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffdd0c,"Select action for %s\n");
        pcVar13 = &stack0xffffdd0c + iVar5;
        switch(*(uint *)(unaff_retaddr + iVar3 * 0x39c + 0x370)) {
        case 0:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"Your pod %s is newer than %s\n");
          break;
        case 1:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"Your pod %s is older than %s\n");
          break;
        case 2:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"Your pod %s is different than %s\n");
          break;
        case 3:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"Your pod %s is the same as %s\n");
          break;
        case 4:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"You don't have the pod %s\n");
          break;
        case 5:
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%s is mounted, but %s does not exist\n");
          break;
        default:
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0xd1c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
          goto LAB_004b9590;
        }
        pcVar13 = pcVar13 + iVar5;
LAB_004b9590:
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5) {
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"---------------------\n");
          iVar7 = crt_stdio_c_sprintf_FUN_005fdbd0
                            (pcVar13 + iVar5,"Of the %d files in %s:\n",
                             *(uint *)(unaff_retaddr + iVar3 * 0x39c + 0x390),
                             unaff_retaddr + iVar3 * 0x39c + 0x204);
          pcVar13 = pcVar13 + iVar5 + iVar7;
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 900)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d files don't exist locally\n");
            pcVar13 = pcVar13 + iVar5;
          }
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x37c)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local files are newer\n");
            pcVar13 = pcVar13 + iVar5;
          }
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x380)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local files are older\n");
            pcVar13 = pcVar13 + iVar5;
          }
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x388)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local files are different\n");
            pcVar13 = pcVar13 + iVar5;
          }
          if (0 < *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x38c)) {
            iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local files are in sync\n");
            pcVar13 = pcVar13 + iVar5;
          }
          iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"---------------------\n");
          pcVar13 = pcVar13 + iVar5;
          if (unaff_retaddr[iVar3 * 0x39c + 0x308] != '\0') {
            iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                              (unaff_retaddr + iVar3 * 0x39c + 0x308,
                               g_VersionControlSession.primary_username);
            if (iVar5 == 0) {
              iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"You currently have this pod checked out\n");
            }
            else {
              iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%s currently has this pod checked out\n");
            }
            pcVar13 = pcVar13 + iVar5;
          }
          if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x374) == 0) {
            pcVar14 = "Your currently do not have this pod mounted.\n";
          }
          else {
            pcVar14 = "Your currently have this pod mounted.\n";
          }
          crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,pcVar14);
        }
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_1318);
        in_stack_ffffdd0c = 0x4b96d7;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_1318 + 4),PTR_s_Skip_00679da0);
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 8),PTR_s_Copy_00679da4);
        }
        if ((*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x374) == 0) &&
           (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5)) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),PTR_s_Copy_Mount_00628453_00679da8);
        }
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),PTR_s_Copy_Extract_00628460_00679dac);
        }
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) == 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),PTR_s_Dismount_00679db0);
        }
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) == 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),PTR_s_Dismount_Delete_00628478_00679db4);
        }
        if (*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x370) != 5) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_1318 + 0xc),"Show local file differences");
        }
        config_param1 =
             (CStrList *)
             shape_edittool_cpp_CStrList_findString_FUN_004a3030
                       ((CStrList *)(auStack_1318 + 0xc),
                        (&PTR_s_Skip_00679da0)[*(int *)(unaff_retaddr + iVar3 * 0x39c + 0x378)]);
        while( true ) {
          in_stack_ffffdd18 = &stack0xffffdd24;
          in_stack_ffffdd20 = (FILE *)0x0;
          in_stack_ffffdd14 = (CPickList *)(auStack_1318 + 0x10);
          in_stack_ffffdd10 = 0x4b97b2;
          in_stack_ffffdd1c = (char *)config_param1;
          config_param1 =
               (CStrList *)
               shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (in_stack_ffffdd14,&stack0xffffdd24,(int)config_param1,0);
          if ((int)config_param1 < 0) break;
          in_stack_ffffdd1c = auStack_1304;
          in_stack_ffffdd18 = (char *)0x4b97d2;
          pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                              ((CStrList *)in_stack_ffffdd1c,(int)config_param1);
          iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pcVar13,(char *)in_stack_ffffdd28);
          if (iVar5 != 0) {
            iVar5 = 0;
            iVar7 = 0;
            goto LAB_004b994d;
          }
          in_stack_ffffdd28 = in_stack_0000006c;
          engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
                    (in_stack_0000006c,unaff_retaddr + iVar3 * 0x39c + 0x204);
        }
        goto LAB_004b9978;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_16c8,0,in_stack_ffffdd0c,in_stack_ffffdd10,
                 (uint)in_stack_ffffdd14,(uint)in_stack_ffffdd18,(uint)in_stack_ffffdd1c);
      in_stack_00000024 = (char *)0x0;
      in_stack_00000048->batch_mode = 1;
      g_VersionControlSession.field1_0x20[0] = '\0';
      g_VersionControlSession.field1_0x20[1] = '\0';
      g_VersionControlSession.field1_0x20[2] = '\0';
      g_VersionControlSession.field1_0x20[3] = '\0';
      g_VersionControlSession.field1_0x20[4] = '\0';
      g_VersionControlSession.field1_0x20[5] = '\0';
      g_VersionControlSession.field1_0x20[6] = '\0';
      g_VersionControlSession.field1_0x20[7] = '\0';
      if (0 < (int)unaff_EBX) {
        in_stack_00000020 = (CFileManager *)(unaff_retaddr + 0x100);
        do {
          pcVar13 = in_stack_00000024;
          filename = in_stack_00000020;
          if (*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x378) == 0) {
            if (((((*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x370) == 3) &&
                  (*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x37c) == 0)) &&
                 (*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x374) != 0)) &&
                ((g_VersionControlDirectory[0] != '\0' &&
                 (uVar6 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                    ((char *)0x0,(char *)in_stack_00000020), -1 < (int)uVar6)))) &&
               ((uVar6 & 8) == 0)) {
              engine_dosio_c_setFileAttributes_FUN_004819f0(in_stack_00000024,(byte)uVar6 | 8);
            }
          }
          else {
            if (*(int *)(unaff_retaddr + (int)in_stack_00000024 * 0x39c + 0x378) == 5) {
              engine_dosio_c_setFileAttributes_FUN_004819f0((char *)in_stack_00000020,0);
              iVar3 = crt_io_c_deleteFile_FUN_005ff9d0((char *)filename);
              if (iVar3 == 0) {
                unaff_EDI = unaff_EDI + 1;
              }
              else {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Can't delete %s");
              }
            }
            if ((*(int *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x378) == 4) ||
               (*(int *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x378) == 5)) {
              iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                                (in_stack_00000048,(CStrList *)(local_4c + 0xc),
                                 unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
              if (iVar3 < 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Can't dismount %s because it isn't mounted??  Get Fletch.");
              }
              else {
                shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)local_3c,iVar3);
                unaff_EBX = (CStrList_vtable *)((int)&unaff_EBX->dtor + 1);
              }
            }
            else {
              local_34._12_4_ = (CStrList_vtable *)0x0;
              if (g_VersionControlDirectory[0] == '\0') {
                uVar6 = engine_dosio_c_getFileTimestamp_FUN_00481960
                                  ((char *)0x0,unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
                file_size_bytes = in_stack_ffffdd20;
                if ((-1 < (int)uVar6) && ((uVar6 & 8) != 0)) {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"%s exists and is read only.  Cannot copy POD.");
                  goto LAB_004b8f32;
                }
              }
              else {
                in_stack_00000010 =
                     engine_dosio_c_getFileTimestamp_FUN_00481960
                               ((char *)0x0,unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
                pcVar14 = unaff_retaddr + (int)pcVar13 * 0x39c + 0x308;
                if (-1 < in_stack_00000010) {
                  if (((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) ||
                     (iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                                        (pcVar14,g_VersionControlSession.primary_username),
                     iVar3 != 0)) {
                    if (((uint)in_stack_0000000c & 8) != 0) goto LAB_004b9af4;
                    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_93c,(char *)0x4b9bfb);
                    pcVar14 = g_VersionControlSession.field1_0x20 + 4;
                    piVar9 = aiStack_930;
                  }
                  else {
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (acStack_740,"You currently have %s checked out.  Replace local copy with network copy?");
                    pcVar14 = g_VersionControlSession.field1_0x20;
                    piVar9 = aiStack_73c;
                  }
                  iVar3 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                                    (piVar9,pcVar14);
                  if (iVar3 < 0) break;
                  if (iVar3 == 0) goto LAB_004b8f32;
                }
LAB_004b9af4:
                engine_dosio_c_setFileAttributes_FUN_004819f0
                          (unaff_retaddr + (int)pcVar13 * 0x39c + 0x100,0);
                file_size_bytes = in_stack_ffffdd20;
              }
              iVar3 = 0;
              pcVar14 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                  ((CStrList *)local_4c,in_stack_00000028);
              do {
                stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                       (pcVar14,(char *)0x0,"rb",
                                        "..\\engine\\fileio.cpp",0x153);
                if (stream_ptr != (FILE *)0x0) {
                  crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
                  in_stack_ffffdd20 = file_size_bytes;
                  if (stream_ptr != (FILE *)0x0) {
                    in_stack_ffffdd20 =
                         shape_memdbg_cpp_openFile_FUN_0050f7a0
                                   (unaff_retaddr + (int)pcVar13 * 0x39c + 0x100,(char *)0x0,
                                    "wb","..\\engine\\fileio.cpp",0xdbb);
                    if (in_stack_ffffdd20 == (FILE *)0x0) {
                      if (stream_ptr != (FILE *)0x0) {
                        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                  (stream_ptr,"..\\engine\\fileio.cpp",0xc4);
                      }
                      in_stack_ffffdd20 = (FILE *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
                      in_stack_ffffdd1c = "Can't create local %s";
                      in_stack_ffffdd18 = &g_CEditorToolsPtr->field0_0x0;
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Can't create local %s");
                    }
                    else {
                      pcVar14 = *(char **)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x398);
                      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                         ((CStrList *)local_3c,in_stack_00000038);
                      pcVar14 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                                          (stream_ptr,in_stack_ffffdd20,pcVar4,pcVar14,
                                           (int)file_size_bytes);
                      in_stack_ffffdd18 = (char *)0x4b9cd1;
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (stream_ptr,"..\\engine\\fileio.cpp",0xdc5);
                      in_stack_ffffdd1c = (char *)0x4b9ce4;
                      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                                (in_stack_ffffdd20,"..\\engine\\fileio.cpp",0xdc6);
                      if (pcVar14 != (char *)0x0) {
                        g_CurrentFilename = "..\\engine\\fileio.cpp";
                        g_CurrentLineNumber = 0xdc7;
                        core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar14);
                      }
                      in_stack_00000010 = in_stack_00000010 + 1;
                      iVar3 = engine_dosio_c_copyFileTimestamp_FUN_00481910
                                        (unaff_retaddr + (int)pcVar13 * 0x39c + 0x100,
                                         *(char **)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x394));
                      if (iVar3 == 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)");
                      }
                      if (((g_VersionControlDirectory[0] != '\0') &&
                          (iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                                             (unaff_retaddr + (int)pcVar13 * 0x39c + 0x308,
                                              g_VersionControlSession.primary_username), iVar3 != 0)
                          ) && (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                                  (unaff_retaddr + (int)pcVar13 * 0x39c + 0x100,
                                                   (byte)unaff_retaddr | 8),
                               CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0)) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Warning: couldn't mark %s as read-only.");
                      }
                      if ((*(int *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x378) != 3) &&
                         (iVar3 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280
                                            ((CPod *)g_CDemonPodPtr,
                                             unaff_retaddr + (int)pcVar13 * 0x39c + 0x100),
                         iVar3 == 0)) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Warning: %s failed CRC check");
                      }
                      uVar6 = *(uint *)(unaff_retaddr + (int)pcVar13 * 0x39c + 0x378);
                      if (1 < uVar6) {
                        if (uVar6 < 3) {
                          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                    ((CStrList *)&stack0xfffffff0,
                                     unaff_retaddr + (int)pcVar13 * 0x39c + 0x100);
                          in_stack_00000020 =
                               (CFileManager *)((int)&in_stack_00000020->file_ptr + 1);
                        }
                        else if (uVar6 == 3) {
                          (*in_stack_00000078->vtable->extractPodFile)
                                    (in_stack_00000078,unaff_retaddr + (int)pcVar13 * 0x39c + 0x100)
                          ;
                          in_stack_00000034 =
                               (CFileManager *)((int)&in_stack_00000034->file_ptr + 1);
                        }
                      }
                    }
                    goto LAB_004b8f32;
                  }
                  break;
                }
                piVar9 = (int *)crt_errno_c_errno_FUN_00601450();
                in_stack_ffffdd20 = file_size_bytes;
                if (*piVar9 != 6) break;
                iVar3 = iVar3 + 1;
                (*Sleep)(500);
                in_stack_ffffdd20 = file_size_bytes;
              } while (iVar3 < 10);
              in_stack_ffffdd1c =
                   shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             ((CStrList *)(local_4c + 0xc),(int)in_stack_00000034);
              in_stack_ffffdd18 = "Can't open %s";
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s");
            }
          }
LAB_004b8f32:
          in_stack_00000020 = (CFileManager *)(in_stack_00000020->file_entries[7] + 0x14);
          in_stack_00000024 = in_stack_00000024 + 1;
        } while ((int)in_stack_00000024 < (int)unaff_EBX);
      }
      in_stack_00000048->batch_mode = 0;
      if ((0 < (int)local_14) || (0 < unaff_EDI)) {
        engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                  (in_stack_00000048,(CStrList *)(local_4c + 0xc));
      }
      if ((((local_18 == (char *)0x0) && (local_14 == (char *)0x0)) && (unaff_EBP == (char *)0x0))
         && ((unaff_ESI == (char **)0x0 && (unaff_EDI == 0)))) {
        pcVar14 = "PODs not changed.";
        pcVar13 = acStack_554;
      }
      else {
        pcVar13 = acStack_554;
        if (0 < (int)local_18) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d pods copied\n");
          pcVar13 = acStack_554 + iVar3;
        }
        if (0 < (int)unaff_EBP) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d pods extracted\n");
          pcVar13 = pcVar13 + iVar3;
        }
        if (0 < (int)local_14) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d pods mounted\n");
          pcVar13 = pcVar13 + iVar3;
        }
        if (0 < unaff_EDI) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d pods dismounted\n");
          pcVar13 = pcVar13 + iVar3;
        }
        if (0 < (int)unaff_ESI) {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"%d local pods deleted\n");
          pcVar13 = pcVar13 + iVar3;
        }
        if (((int)local_14 < 1) && (unaff_EDI < 1)) {
          pcVar14 = "To apply these changes, you should restart the application.";
        }
        else {
          iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar13,"POD.INI re-written\n");
          pcVar13 = pcVar13 + iVar3;
          pcVar14 = "To apply these changes, you should restart the application.";
        }
      }
      do {
        cVar1 = *pcVar14;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(g_CEditorToolsPtr,acStack_554);
LAB_004b901b:
      if (this_ptr != (CFileManager *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr,"..\\engine\\fileio.cpp",0xe10);
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_34 + 0xc));
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)local_34,0,(uint)in_stack_ffffdd18);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)(local_4c + 0xc),0,(uint)in_stack_ffffdd1c);
      return;
    }
  }
  return;
  while( true ) {
    iVar5 = iVar5 + 4;
    iVar7 = iVar7 + 1;
    if (0x17 < iVar5) break;
LAB_004b994d:
    in_stack_ffffdd20 = (FILE *)0x4b9962;
    pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                        ((CStrList *)auStack_12fc,(int)config_param1);
    iVar8 = crt_string_c_stricmp_FUN_005fe7f0(pcVar13,in_stack_ffffdd30);
    if (iVar8 == 0) {
      *(int *)(unaff_retaddr + iVar3 * 0x39c + 0x378) = iVar7;
      break;
    }
  }
LAB_004b9978:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)auStack_12fc,0,(uint)in_stack_ffffdd30,in_stack_ffffdd34,in_stack_ffffdd38
             ,in_stack_ffffdd3c,in_stack_ffffdd40);
  in_stack_ffffdd30 = (char *)0x0;
  in_stack_ffffdd28 = (CFileManager *)0x4b9999;
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(auStack_16c8 + 0x28),0,in_stack_ffffdd34,in_stack_ffffdd38,
             in_stack_ffffdd3c,in_stack_ffffdd40,in_stack_ffffdd44);
  goto LAB_004b8d5b;
}
