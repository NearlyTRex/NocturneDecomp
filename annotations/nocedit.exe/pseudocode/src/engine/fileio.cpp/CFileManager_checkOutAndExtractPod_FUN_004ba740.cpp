// Name: engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740
// Address: 004ba740
// Address Range: [[004ba740, 004baef6]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740(CFileManager * this_ptr, CCheckOutItem * checkout_item, FILE * optional_pod_file)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740
          (CFileManager *this_ptr,CCheckOutItem *checkout_item,FILE *optional_pod_file)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  CStrList_vtable *stream_ptr;
  int *piVar5;
  FILE *pFVar6;
  char *pcVar7;
  SVersionControlSession *pSVar8;
  char *pcVar9;
  char *pcVar10;
  CCheckOutItem *pCVar11;
  byte bVar12;
  char *pcVar13;
  uint in_stack_fffff970;
  CCheckOutItem local_4a8;
  char local_340 [8];
  char acStack_338 [252];
  char local_23c [260];
  char local_138 [264];
  byte auStack_30 [8];
  CCheckOutList local_28;
  CStrList_vtable *local_20;
  CCheckOutItem *local_1c;
  int local_18;
  char local_14 [4];
  
  bVar12 = 0;
  iVar2 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  if (optional_pod_file == (FILE *)0x0) {
    iVar2 = engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
                      (checkout_item,"*.pod",local_340);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    pcVar9 = local_340;
    pFVar6 = optional_pod_file;
    do {
      cVar1 = *(char *)&pFVar6->_ptr;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = *(char *)((int)&pFVar6->_ptr + 1);
      pFVar6 = (FILE *)((int)&pFVar6->_ptr + 2);
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  pcVar9 = local_340;
  local_1c = checkout_item;
  local_20 = (CStrList_vtable *)0x0;
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  local_28.count = 0;
  local_28.items = (CCheckOutItem *)0x0;
  iVar2 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_28);
  if (iVar2 == 0) {
LAB_004ba895:
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_28);
    return 0;
  }
  iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_28,local_340);
  if (-1 < iVar2) {
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                      (local_28.items[iVar2].value,g_VersionControlSession.primary_username);
    pCVar11 = local_28.items + iVar2;
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out",pCVar11);
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar11,pCVar11->value);
    }
    goto LAB_004ba895;
  }
  g_VersionControlSession.field1_0x20[0] = '\0';
  g_VersionControlSession.field1_0x20[1] = '\0';
  g_VersionControlSession.field1_0x20[2] = '\0';
  g_VersionControlSession.field1_0x20[3] = '\0';
  g_VersionControlSession.field1_0x20[4] = '\0';
  g_VersionControlSession.field1_0x20[5] = '\0';
  g_VersionControlSession.field1_0x20[6] = '\0';
  g_VersionControlSession.field1_0x20[7] = '\0';
  uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,local_340);
  if (((int)uVar4 < 0) || ((uVar4 & 8) != 0)) {
    iVar2 = 1;
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffff964,"A writable copy of %s exists.  Replace it?",local_340)
    ;
    iVar2 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                      ((int *)&stack0xfffff964,g_VersionControlSession.field1_0x20 + 4);
  }
  if (0 < iVar2) {
    local_18 = -1;
    if (g_VersionControlSession.network_username[0] == '\0') {
LAB_004ba93f:
      if (g_VersionControlDirectory[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xdd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
      }
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_14,local_138);
      engine_dosio_c_makePath_FUN_00481f50(local_23c,local_14,local_138,(char *)0x0,(char *)0x0);
      pcVar7 = "checkout.txt";
      iVar2 = -1;
      pcVar13 = local_23c;
      do {
        pcVar10 = pcVar13;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar13 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      iVar2 = 0;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Marking %s as checked out...");
      do {
        stream_ptr = (CStrList_vtable *)
                     shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_23c,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                                0x153);
        if (stream_ptr != (CStrList_vtable *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490((FILE *)stream_ptr,(char *)0x0,0,0x400);
          goto LAB_004baa09;
        }
        piVar5 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar5 != 6) break;
        iVar2 = iVar2 + 1;
        (*g_SleepFunc)(500);
      } while (iVar2 < 10);
      stream_ptr = (CStrList_vtable *)0x0;
LAB_004baa09:
      local_20 = stream_ptr;
      if (stream_ptr == (CStrList_vtable *)0x0) {
        pcVar9 = local_23c;
        pcVar13 = "Can't access %s.";
LAB_004baa2c:
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar13,pcVar9);
        goto LAB_004baa34;
      }
      iVar2 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_28,(FILE **)&local_20);
      if (iVar2 != 0) {
        iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_28,pcVar9);
        if (iVar2 < 0) {
          pCVar11 = &local_4a8;
          pcVar13 = pcVar9;
          do {
            cVar1 = *pcVar13;
            pCVar11->name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pCVar11->name[1] = cVar1;
            pCVar11 = (CCheckOutItem *)(pCVar11->name + 2);
          } while (cVar1 != '\0');
          pSVar8 = &g_VersionControlSession;
          pcVar13 = local_4a8.value;
          do {
            cVar1 = pSVar8->primary_username[0];
            *pcVar13 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pSVar8->primary_username[1];
            pSVar8 = (SVersionControlSession *)(pSVar8->primary_username + 2);
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
          iVar2 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(&local_28,&local_4a8);
          if (iVar2 == 0) {
            if (local_20 != (CStrList_vtable *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)local_20,"..\\engine\\fileio.cpp",0xc4);
              local_20 = (CStrList_vtable *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
          }
          else {
            iVar2 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_28,(FILE **)&local_20)
            ;
            if (iVar2 != 0) {
              if (local_20 != (CStrList_vtable *)0x0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0
                          ((FILE *)local_20,"..\\engine\\fileio.cpp",0xc4);
                local_20 = (CStrList_vtable *)0x0;
              }
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Getting %s...");
              iVar2 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                                (local_1c->name,pcVar9);
              if (iVar2 == 0) {
                engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (local_1c,pcVar9);
              }
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Clearing read-only bit for %s...");
              uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,pcVar9);
              if (((((int)uVar4 < 0) || ((uVar4 & 8) == 0)) ||
                  (iVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(pcVar9,(byte)uVar4 & 0xf7),
                  iVar2 != 0)) && (-1 < (int)uVar4)) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_28);
                goto LAB_004baa7f;
              }
              pcVar13 = "Error turning off read-only bit for %s";
              goto LAB_004baa2c;
            }
          }
        }
        else {
          if (local_20 != (CStrList_vtable *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_20,"..\\engine\\fileio.cpp",0xc4);
            local_20 = (CStrList_vtable *)0x0;
          }
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                            (local_28.items[iVar2].value,g_VersionControlSession.primary_username);
          pCVar11 = local_28.items + iVar2;
          if (iVar3 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"You already have %s checked out",pCVar11);
            local_18 = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar11,pCVar11->value)
            ;
            local_18 = 0;
          }
        }
        goto LAB_004baa34;
      }
      if (local_20 == (CStrList_vtable *)0x0) goto LAB_004baa34;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_20,"..\\engine\\fileio.cpp",0xc4);
      local_20 = (CStrList_vtable *)0x0;
    }
    else {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Logging on as version control user...");
      iVar2 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
      if (iVar2 != 0) goto LAB_004ba93f;
LAB_004baa34:
      if (local_20 != (CStrList_vtable *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_20,"..\\engine\\fileio.cpp",0xc4);
        local_20 = (CStrList_vtable *)0x0;
      }
    }
    engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
    iVar2 = local_18;
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_28);
  if (iVar2 < 1) {
    return 0;
  }
LAB_004baa7f:
  iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                    (g_CEditorToolsPtr,"Extract and dismount now?");
  if (iVar2 == 0) {
    return 1;
  }
  this_ptr->batch_mode = 1;
  (*this_ptr->vtable->extractPodFile)(this_ptr,local_340);
  optional_pod_file[0xb292]._bufsize = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_30);
  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
            ((CFileManager *)optional_pod_file,(CStrList *)auStack_30);
  iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                    ((CFileManager *)optional_pod_file,(CStrList *)auStack_30,acStack_338);
  if (-1 < iVar2) {
    shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)auStack_30,iVar2);
    engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
              ((CFileManager *)optional_pod_file,(CStrList *)auStack_30);
  }
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Remounting all pods...");
    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)(auStack_30 + 4),0,in_stack_fffff970);
  return 1;
}
