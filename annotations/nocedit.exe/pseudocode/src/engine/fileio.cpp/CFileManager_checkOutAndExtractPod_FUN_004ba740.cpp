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
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  CStrList_vtable *stream_ptr;
  int *piVar6;
  undefined3 extraout_var;
  FILE *pFVar7;
  char *pcVar8;
  SVersionControlSession *pSVar9;
  char *pcVar10;
  char *pcVar11;
  CCheckOutItem *pCVar12;
  byte bVar13;
  char *pcVar14;
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
  
  bVar13 = 0;
  iVar3 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar3 == 0) {
    return 0;
  }
  if (optional_pod_file == (FILE *)0x0) {
    iVar3 = engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
                      (checkout_item,"*.pod",local_340);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    pcVar10 = local_340;
    pFVar7 = optional_pod_file;
    do {
      cVar1 = *(char *)&pFVar7->_ptr;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = *(char *)((int)&pFVar7->_ptr + 1);
      pFVar7 = (FILE *)((int)&pFVar7->_ptr + 2);
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
  }
  pcVar10 = local_340;
  local_1c = checkout_item;
  local_20 = (CStrList_vtable *)0x0;
  iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar3 == 0) {
    return 0;
  }
  local_28.count = 0;
  local_28.items = (CCheckOutItem *)0x0;
  iVar3 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_28);
  if (iVar3 == 0) {
LAB_004ba895:
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_28);
    return 0;
  }
  iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_28,local_340);
  if (-1 < iVar3) {
    iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                      (local_28.items[iVar3].value,g_VersionControlSession.primary_username);
    pCVar12 = local_28.items + iVar3;
    if (iVar4 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out",pCVar12);
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar12,pCVar12->value);
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
  uVar5 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,local_340);
  if (((int)uVar5 < 0) || ((uVar5 & 8) != 0)) {
    iVar3 = 1;
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffff964,"A writable copy of %s exists.  Replace it?",local_340)
    ;
    iVar3 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                      ((int *)&stack0xfffff964,g_VersionControlSession.field1_0x20 + 4);
  }
  if (0 < iVar3) {
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
      pcVar8 = "checkout.txt";
      iVar3 = -1;
      pcVar14 = local_23c;
      do {
        pcVar11 = pcVar14;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar14 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      iVar3 = 0;
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
        piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar6 != 6) break;
        iVar3 = iVar3 + 1;
        (*g_SleepFunc)(500);
      } while (iVar3 < 10);
      stream_ptr = (CStrList_vtable *)0x0;
LAB_004baa09:
      local_20 = stream_ptr;
      if (stream_ptr == (CStrList_vtable *)0x0) {
        pcVar10 = local_23c;
        pcVar14 = "Can't access %s.";
LAB_004baa2c:
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar14,pcVar10);
        goto LAB_004baa34;
      }
      iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_28,(FILE **)&local_20);
      if (iVar3 != 0) {
        iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_28,pcVar10);
        if (iVar3 < 0) {
          pCVar12 = &local_4a8;
          pcVar14 = pcVar10;
          do {
            cVar1 = *pcVar14;
            pCVar12->name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pCVar12->name[1] = cVar1;
            pCVar12 = (CCheckOutItem *)(pCVar12->name + 2);
          } while (cVar1 != '\0');
          pSVar9 = &g_VersionControlSession;
          pcVar14 = local_4a8.value;
          do {
            cVar1 = pSVar9->primary_username[0];
            *pcVar14 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pSVar9->primary_username[1];
            pSVar9 = (SVersionControlSession *)(pSVar9->primary_username + 2);
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
          iVar3 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(&local_28,&local_4a8);
          if (iVar3 == 0) {
            if (local_20 != (CStrList_vtable *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)local_20,"..\\engine\\fileio.cpp",0xc4);
              local_20 = (CStrList_vtable *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
          }
          else {
            iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_28,(FILE **)&local_20)
            ;
            if (iVar3 != 0) {
              if (local_20 != (CStrList_vtable *)0x0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0
                          ((FILE *)local_20,"..\\engine\\fileio.cpp",0xc4);
                local_20 = (CStrList_vtable *)0x0;
              }
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Getting %s...");
              iVar3 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                                (local_1c->name,pcVar10);
              if (iVar3 == 0) {
                engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (local_1c,pcVar10);
              }
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Clearing read-only bit for %s...");
              uVar5 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,pcVar10);
              if (((((int)uVar5 < 0) || ((uVar5 & 8) == 0)) ||
                  (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(pcVar10,(byte)uVar5 & 0xf7)
                  , CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0)) && (-1 < (int)uVar5)) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_28);
                goto LAB_004baa7f;
              }
              pcVar14 = "Error turning off read-only bit for %s";
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
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                            (local_28.items[iVar3].value,g_VersionControlSession.primary_username);
          pCVar12 = local_28.items + iVar3;
          if (iVar4 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"You already have %s checked out",pCVar12);
            local_18 = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar12,pCVar12->value)
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
      iVar3 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
      if (iVar3 != 0) goto LAB_004ba93f;
LAB_004baa34:
      if (local_20 != (CStrList_vtable *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_20,"..\\engine\\fileio.cpp",0xc4);
        local_20 = (CStrList_vtable *)0x0;
      }
    }
    engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
    iVar3 = local_18;
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_28);
  if (iVar3 < 1) {
    return 0;
  }
LAB_004baa7f:
  iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                    (g_CEditorToolsPtr,"Extract and dismount now?");
  if (iVar3 == 0) {
    return 1;
  }
  this_ptr->batch_mode = 1;
  (*this_ptr->vtable->extractPodFile)(this_ptr,local_340);
  optional_pod_file[0xb292]._bufsize = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_30);
  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
            ((CFileManager *)optional_pod_file,(CStrList *)auStack_30);
  iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                    ((CFileManager *)optional_pod_file,(CStrList *)auStack_30,acStack_338);
  if (-1 < iVar3) {
    shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)auStack_30,iVar3);
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
