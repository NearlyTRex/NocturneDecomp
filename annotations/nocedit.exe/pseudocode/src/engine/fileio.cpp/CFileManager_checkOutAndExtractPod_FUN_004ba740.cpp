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
  FILE *pFVar6;
  int *piVar7;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar8;
  char *pcVar9;
  SVersionControlSession *pSVar10;
  int unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  CCheckOutItem *pCVar13;
  byte bVar14;
  FILE *in_stack_00000010;
  CStrList_vtable *in_stack_00000014;
  CStrList_vtable *in_stack_0000001c;
  CStrList_vtable *in_stack_00000020;
  CCheckOutItem *in_stack_00000024;
  CFileManager *in_stack_00000030;
  int in_stack_00000044;
  CFileManager *in_stack_00000048;
  uint in_stack_fffff9b8;
  CCheckOutItem CStack_480;
  char acStack_314 [28];
  char acStack_2f8 [220];
  char acStack_21c [4];
  char acStack_218 [244];
  char acStack_124 [4];
  char acStack_120 [264];
  CCheckOutList local_18;
  
  pFVar6 = optional_pod_file;
  pCVar13 = checkout_item;
  bVar14 = 0;
  iVar3 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar3 == 0) {
    return 0;
  }
  if (pFVar6 == (FILE *)0x0) {
    iVar3 = engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
                      (pCVar13,"*.pod",CStack_480.value + 0x44);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    pcVar11 = CStack_480.value + 0x44;
    do {
      cVar1 = *(char *)&pFVar6->_ptr;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = *(char *)((int)&pFVar6->_ptr + 1);
      pFVar6 = (FILE *)((int)&pFVar6->_ptr + 2);
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
  }
  pcVar11 = CStack_480.value + 0x48;
  local_18.items = (CCheckOutItem *)0x0;
  iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar3 == 0) {
    return 0;
  }
  local_18.count = 0;
  local_18.items = (CCheckOutItem *)0x0;
  iVar3 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_18);
  if (iVar3 == 0) {
LAB_004ba895:
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff8);
    return 0;
  }
  iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                    ((CCheckOutList *)&local_18.items,CStack_480.value + 0x50);
  if (-1 < iVar3) {
    iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                      ((char *)(unaff_EDI + iVar3 * 0x168 + 0x104),
                       g_VersionControlSession.primary_username);
    iVar3 = unaff_ESI + iVar3 * 0x168;
    if (iVar4 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out",iVar3);
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s",iVar3,iVar3 + 0x104);
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
  uVar5 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,CStack_480.value + 0x54);
  if (((int)uVar5 < 0) || ((uVar5 & 8) != 0)) {
    pFVar6 = (FILE *)&DAT_00000001;
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffff980,"A writable copy of %s exists.  Replace it?",CStack_480.value + 0x58);
    pFVar6 = (FILE *)engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                               ((int *)&stack0xfffff984,g_VersionControlSession.field1_0x20 + 4);
  }
  if (0 < (int)pFVar6) {
    optional_pod_file = (FILE *)0xffffffff;
    if (g_VersionControlSession.network_username[0] == '\0') {
LAB_004ba93f:
      if (g_VersionControlDirectory[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xdd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
      }
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80
                (g_VersionControlDirectory,&stack0x00000000,acStack_124);
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_218,(char *)&this_ptr,acStack_120,(char *)0x0,(char *)0x0);
      pcVar8 = "checkout.txt";
      iVar3 = -1;
      pcVar9 = acStack_218;
      do {
        pcVar12 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar12 = pcVar9 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      iVar3 = 0;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Marking %s as checked out...");
      do {
        pFVar6 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (acStack_21c,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                            0x153);
        if (pFVar6 != (FILE *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490(pFVar6,(char *)0x0,0,0x400);
          goto LAB_004baa09;
        }
        piVar7 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar7 != 6) break;
        iVar3 = iVar3 + 1;
        (*Sleep)(500);
      } while (iVar3 < 10);
      pFVar6 = (FILE *)0x0;
LAB_004baa09:
      if (pFVar6 == (FILE *)0x0) {
        pcVar11 = acStack_21c;
LAB_004baa2c:
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar11);
        goto LAB_004baa34;
      }
      iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                        ((CCheckOutList *)&stack0xfffffff8,(FILE **)&stack0x00000000);
      if (iVar3 != 0) {
        iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                          ((CCheckOutList *)&stack0xfffffffc,pcVar11);
        if (iVar3 < 0) {
          pCVar13 = &CStack_480;
          pcVar9 = pcVar11;
          do {
            cVar1 = *pcVar9;
            pCVar13->name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pCVar13->name[1] = cVar1;
            pCVar13 = (CCheckOutItem *)(pCVar13->name + 2);
          } while (cVar1 != '\0');
          pSVar10 = &g_VersionControlSession;
          pcVar9 = CStack_480.value;
          do {
            cVar1 = pSVar10->primary_username[0];
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pSVar10->primary_username[1];
            pSVar10 = (SVersionControlSession *)(pSVar10->primary_username + 2);
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
          iVar3 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00
                            ((CCheckOutList *)&stack0x00000000,&CStack_480);
          if (iVar3 == 0) {
            if (optional_pod_file != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        (optional_pod_file,"..\\engine\\fileio.cpp",0xc4);
              in_stack_00000010 = (FILE *)0x0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
          }
          else {
            iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                              ((CCheckOutList *)&this_ptr,&optional_pod_file);
            if (iVar3 != 0) {
              if (in_stack_00000010 != (FILE *)0x0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0
                          (in_stack_00000010,"..\\engine\\fileio.cpp",0xc4);
                in_stack_00000014 = (CStrList_vtable *)0x0;
              }
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Getting %s...");
              iVar3 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                                ((char *)in_stack_00000020,pcVar11);
              if (iVar3 == 0) {
                engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (in_stack_00000024,pcVar11);
              }
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Clearing read-only bit for %s...");
              uVar5 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,pcVar11);
              if (((((int)uVar5 < 0) || ((uVar5 & 8) == 0)) ||
                  (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(pcVar11,(byte)uVar5 & 0xf7)
                  , CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0)) && (-1 < (int)uVar5)) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860
                          ((CCheckOutList *)&stack0xfffffffc);
                goto LAB_004baa7f;
              }
              pcVar11 = "Error turning off read-only bit for %s";
              goto LAB_004baa2c;
            }
          }
        }
        else {
          if (checkout_item != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)checkout_item,"..\\engine\\fileio.cpp",0xc4);
            optional_pod_file = (FILE *)0x0;
          }
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                            (checkout_item[iVar3].value,g_VersionControlSession.primary_username);
          if (iVar3 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"You already have %s checked out");
            in_stack_0000001c = (CStrList_vtable *)0x0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"%s is currently checked out by %s");
            in_stack_0000001c = (CStrList_vtable *)0x0;
          }
        }
        goto LAB_004baa34;
      }
      if (this_ptr == (CFileManager *)0x0) goto LAB_004baa34;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
      checkout_item = (CCheckOutItem *)0x0;
    }
    else {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Logging on as version control user...");
      iVar3 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
      if (iVar3 != 0) goto LAB_004ba93f;
LAB_004baa34:
      if (checkout_item != (CCheckOutItem *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((FILE *)checkout_item,"..\\engine\\fileio.cpp",0xc4);
        checkout_item = (CCheckOutItem *)0x0;
      }
    }
    engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
    pFVar6 = optional_pod_file;
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffffc);
  if ((int)pFVar6 < 1) {
    return 0;
  }
LAB_004baa7f:
  iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                    (g_CEditorToolsPtr,"Extract and dismount now?");
  if (iVar3 == 0) {
    return 1;
  }
  in_stack_00000030->batch_mode = 1;
  (*in_stack_00000030->vtable->extractPodFile)(in_stack_00000030,acStack_314);
  *(uint *)(in_stack_00000044 + 0x13880c) = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&checkout_item);
  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
            (in_stack_00000048,(CStrList *)&optional_pod_file);
  iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                    (in_stack_00000048,(CStrList *)&stack0x00000010,acStack_2f8);
  if (-1 < iVar3) {
    shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)&stack0x00000014,iVar3);
    engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
              (in_stack_00000048,(CStrList *)&stack0x00000018);
  }
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Remounting all pods...");
    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0x0000001c,0,in_stack_fffff9b8);
  return 1;
}
