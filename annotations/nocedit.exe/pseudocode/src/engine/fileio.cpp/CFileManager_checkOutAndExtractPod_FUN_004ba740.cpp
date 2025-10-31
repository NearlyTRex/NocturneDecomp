// Name: engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740
// Address: 004ba740
// Address Range: [[004ba740, 004baef6]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740(CFileManager * this_ptr, CCheckOutItem * checkout_item, FILE * optional_pod_file)
// Globals:
//   Sleep* Sleep = 00212228
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_engine_fileio_cpp_00626060
//   TerminatedCString s_versionControlDirectory__00626075
//   TerminatedCString s_checkout_txt_00626096
//   undefined4 s_heckout.txt_00626097
//   undefined4 s_eckout.txt_00626098
//   undefined4 s_ckout.txt_00626099
//   TerminatedCString s_engine_fileio_cpp_00626129
//   TerminatedCString s_A_writable_copy_of_s_exi_0062654c
//   TerminatedCString s_You_already_have_s_check_00626884
//   TerminatedCString s_s_is_currently_checked_o_006268a4
//   TerminatedCString s_Logging_on_as_version_co_006268c6
//   TerminatedCString s_Marking_s_as_checked_out_006268ec
//   TerminatedCString s_r_t_00626909
//   TerminatedCString s_Can_t_access_s_0062690d
//   TerminatedCString s_You_already_have_s_check_0062691e
//   TerminatedCString s_s_is_currently_checked_o_0062693e
//   TerminatedCString s_Out_of_memory_Restart_th_00626960
//   TerminatedCString s_Getting_s_006269ae
//   TerminatedCString s_Clearing_read_only_bit_f_006269bc
//   TerminatedCString s_Error_turning_off_read_o_006269dd
//   TerminatedCString s_Remounting_all_pods_0062759a
//   TerminatedCString s_pod_00628db7
//   TerminatedCString s_Extract_and_dismount_now_00628dbd
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   char[264] g_VersionControlDirectory
//   SVersionControlSession g_VersionControlSession
//   undefined4 DAT_02d12bd1
//   undefined4 DAT_02d12bd2
//   undefined4 DAT_02d12bd3
//   undefined4 g_VersionControlSession.field1_0x20[0]
//   undefined4 g_VersionControlSession.field1_0x20[4]
//   undefined4 g_VersionControlSession.network_username[0]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_errno.c_errno_FUN_00601450
//   crt_stdio.c_setvbuf_FUN_00601490
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_getFileTimestamp_FUN_00481960
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_setFileAttributes_FUN_004819f0
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

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
                  , CONCAT31(extraout_var,bVar2) != 0)) && (-1 < (int)uVar5)) {
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
  *(undefined4 *)(in_stack_00000044 + 0x13880c) = 0;
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


// Assembly code:
// 004ba740: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740
// 004ba741: PUSH ESI
// 004ba742: PUSH EDI
// 004ba743: PUSH EBP
// 004ba744: SUB ESP,0x68c
// 004ba74a: MOV EBX,dword ptr [ESP + 0x6a4]
//   XREF to: Stack[0x8] (READ)
// 004ba751: MOV EBP,dword ptr [ESP + 0x6a8]
//   XREF to: Stack[0xc] (READ)
// 004ba758: MOV EDX,dword ptr [ESP + 0x6a0]
//   XREF to: Stack[0x4] (READ)
// 004ba75f: PUSH EDX
// 004ba760: CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   XREF to: 004bccf0 (UNCONDITIONAL_CALL)
// 004ba765: ADD ESP,0x4
// 004ba768: TEST EAX,EAX
// 004ba76a: JNZ 0x004ba77b
//   XREF to: 004ba77b (CONDITIONAL_JUMP)
// 004ba76c: XOR EBP,EBP
//   Label: LAB_004ba76c
// 004ba76e: MOV EAX,EBP
// 004ba770: ADD ESP,0x68c
// 004ba776: POP EBP
// 004ba777: POP EDI
// 004ba778: POP ESI
// 004ba779: POP EBX
// 004ba77a: RET
// 004ba77b: CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   Label: LAB_004ba77b
//   XREF to: 004b1c00 (UNCONDITIONAL_CALL)
// 004ba780: TEST EAX,EAX
// 004ba782: JZ 0x004ba76c
//   XREF to: 004ba76c (CONDITIONAL_JUMP)
// 004ba784: TEST EBP,EBP
// 004ba786: JZ 0x004ba7da
//   XREF to: 004ba7da (CONDITIONAL_JUMP)
// 004ba788: LEA EDI,[ESP + 0x35c]
//   XREF to: Stack[-0x340] (DATA)
// 004ba78f: MOV ESI,EBP
// 004ba791: PUSH EDI
// 004ba792: MOV AL,byte ptr [ESI]
//   Label: LAB_004ba792
// 004ba794: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x340] (DATA)
// 004ba796: CMP AL,0x0
// 004ba798: JZ 0x004ba7aa
//   XREF to: 004ba7aa (CONDITIONAL_JUMP)
// 004ba79a: MOV AL,byte ptr [ESI + 0x1]
// 004ba79d: ADD ESI,0x2
// 004ba7a0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x33f] (WRITE)
// 004ba7a3: ADD EDI,0x2
// 004ba7a6: CMP AL,0x0
// 004ba7a8: JNZ 0x004ba792
//   XREF to: 004ba792 (CONDITIONAL_JUMP)
// 004ba7aa: POP EDI
//   Label: LAB_004ba7aa
// 004ba7ab: LEA EBP,[ESP + 0x35c]
//   Label: LAB_004ba7ab
//   XREF to: Stack[-0x340] (DATA)
// 004ba7b2: XOR ECX,ECX
// 004ba7b4: MOV dword ptr [ESP + 0x680],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004ba7bb: MOV dword ptr [ESP + 0x67c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004ba7c2: CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   XREF to: 004b1c00 (UNCONDITIONAL_CALL)
// 004ba7c7: TEST EAX,EAX
// 004ba7c9: JNZ 0x004ba801
//   XREF to: 004ba801 (CONDITIONAL_JUMP)
// 004ba7cb: XOR EBP,EBP
// 004ba7cd: MOV EAX,EBP
// 004ba7cf: ADD ESP,0x68c
// 004ba7d5: POP EBP
// 004ba7d6: POP EDI
// 004ba7d7: POP ESI
// 004ba7d8: POP EBX
// 004ba7d9: RET
// 004ba7da: LEA EAX,[ESP + 0x35c]
//   Label: LAB_004ba7da
//   XREF to: Stack[-0x340] (DATA)
// 004ba7e1: PUSH EAX
// 004ba7e2: PUSH 0x628db7
//   XREF to: 00628db7 (DATA)
// 004ba7e7: PUSH EBX
// 004ba7e8: CALL engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
//   XREF to: 004b5030 (UNCONDITIONAL_CALL)
// 004ba7ed: ADD ESP,0xc
// 004ba7f0: TEST EAX,EAX
// 004ba7f2: JNZ 0x004ba7ab
//   XREF to: 004ba7ab (CONDITIONAL_JUMP)
// 004ba7f4: MOV EAX,EBP
// 004ba7f6: ADD ESP,0x68c
// 004ba7fc: POP EBP
// 004ba7fd: POP EDI
// 004ba7fe: POP ESI
// 004ba7ff: POP EBX
// 004ba800: RET
// 004ba801: LEA EAX,[ESP + 0x674]
//   Label: LAB_004ba801
//   XREF to: Stack[-0x28] (DATA)
// 004ba808: XOR EBX,EBX
// 004ba80a: PUSH EAX
// 004ba80b: MOV dword ptr [ESP + 0x678],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004ba812: MOV dword ptr [ESP + 0x67c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004ba819: CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   XREF to: 004b2890 (UNCONDITIONAL_CALL)
// 004ba81e: ADD ESP,0x4
// 004ba821: TEST EAX,EAX
// 004ba823: JZ 0x004ba895
//   XREF to: 004ba895 (CONDITIONAL_JUMP)
// 004ba825: LEA EAX,[ESP + 0x35c]
//   XREF to: Stack[-0x340] (DATA)
// 004ba82c: PUSH EAX
// 004ba82d: LEA EAX,[ESP + 0x678]
//   XREF to: Stack[-0x28] (DATA)
// 004ba834: PUSH EAX
// 004ba835: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004ba83a: ADD ESP,0x8
// 004ba83d: TEST EAX,EAX
// 004ba83f: JL 0x004ba8d2
//   XREF to: 004ba8d2 (CONDITIONAL_JUMP)
// 004ba845: MOV EBX,EAX
// 004ba847: SHL EAX,0x2
// 004ba84a: SUB EAX,EBX
// 004ba84c: SHL EAX,0x3
// 004ba84f: MOV ESI,EAX
// 004ba851: SHL ESI,0x4
// 004ba854: SUB ESI,EAX
// 004ba856: MOV EAX,dword ptr [ESP + 0x678]
//   XREF to: Stack[-0x24] (READ)
// 004ba85d: ADD EAX,ESI
// 004ba85f: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004ba864: ADD EAX,0x104
// 004ba869: PUSH EAX
// 004ba86a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004ba86f: ADD ESP,0x8
// 004ba872: MOV EBX,EAX
// 004ba874: MOV EAX,dword ptr [ESP + 0x678]
//   XREF to: Stack[-0x24] (READ)
// 004ba87b: ADD EAX,ESI
// 004ba87d: TEST EBX,EBX
// 004ba87f: JNZ 0x004ba8b4
//   XREF to: 004ba8b4 (CONDITIONAL_JUMP)
// 004ba881: PUSH EAX
// 004ba882: PUSH 0x626884
//   XREF to: 00626884 (DATA)
// 004ba887: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004ba88c: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004ba88d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004ba892: ADD ESP,0xc
// 004ba895: LEA EAX,[ESP + 0x674]
//   Label: LAB_004ba895
//   XREF to: Stack[-0x28] (DATA)
// 004ba89c: PUSH EAX
// 004ba89d: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004ba8a2: ADD ESP,0x4
// 004ba8a5: XOR EBP,EBP
// 004ba8a7: MOV EAX,EBP
// 004ba8a9: ADD ESP,0x68c
// 004ba8af: POP EBP
// 004ba8b0: POP EDI
// 004ba8b1: POP ESI
// 004ba8b2: POP EBX
// 004ba8b3: RET
// 004ba8b4: LEA EBX,[EAX + 0x104]
//   Label: LAB_004ba8b4
// 004ba8ba: PUSH EBX
// 004ba8bb: PUSH EAX
// 004ba8bc: PUSH 0x6268a4
//   XREF to: 006268a4 (DATA)
// 004ba8c1: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004ba8c7: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004ba8c8: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004ba8cd: ADD ESP,0x10
// 004ba8d0: JMP 0x004ba895
//   XREF to: 004ba895 (UNCONDITIONAL_JUMP)
// 004ba8d2: LEA EAX,[ESP + 0x35c]
//   Label: LAB_004ba8d2
//   XREF to: Stack[-0x340] (DATA)
// 004ba8d9: PUSH EAX
// 004ba8da: PUSH EBX
// 004ba8db: MOV dword ptr [0x02d12bf0],EBX
//   XREF to: 02d12bf0 (WRITE)
// 004ba8e1: MOV dword ptr [0x02d12bf4],EBX
//   XREF to: 02d12bf4 (WRITE)
// 004ba8e7: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004ba8ec: ADD ESP,0x8
// 004ba8ef: TEST EAX,EAX
// 004ba8f1: JL 0x004ba8fb
//   XREF to: 004ba8fb (CONDITIONAL_JUMP)
// 004ba8f3: TEST AL,0x8
// 004ba8f5: JZ 0x004baaad
//   XREF to: 004baaad (CONDITIONAL_JUMP)
// 004ba8fb: MOV EAX,0x1
//   Label: LAB_004ba8fb
// 004ba900: TEST EAX,EAX
//   Label: LAB_004ba900
// 004ba902: JLE 0x004baade
//   XREF to: 004baade (CONDITIONAL_JUMP)
// 004ba908: MOV EDX,0xffffffff
// 004ba90d: MOV AH,byte ptr [0x02d12bf8]
//   XREF to: 02d12bf8 (READ)
// 004ba913: MOV dword ptr [ESP + 0x684],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004ba91a: TEST AH,AH
// 004ba91c: JZ 0x004ba93f
//   XREF to: 004ba93f (CONDITIONAL_JUMP)
// 004ba91e: PUSH 0x6268c6
//   XREF to: 006268c6 (DATA)
// 004ba923: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004ba929: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004ba92a: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004ba92f: ADD ESP,0x8
// 004ba932: CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   XREF to: 004b2770 (UNCONDITIONAL_CALL)
// 004ba937: TEST EAX,EAX
// 004ba939: JZ 0x004baa34
//   XREF to: 004baa34 (CONDITIONAL_JUMP)
// 004ba93f: MOV DL,byte ptr [0x02d12ac8]
//   Label: LAB_004ba93f
//   XREF to: 02d12ac8 (READ)
// 004ba945: LEA EDI,[ESP + 0x460]
//   XREF to: Stack[-0x23c] (DATA)
// 004ba94c: TEST DL,DL
// 004ba94e: JZ 0x004baaea
//   XREF to: 004baaea (CONDITIONAL_JUMP)
// 004ba954: LEA EAX,[ESP + 0x564]
//   Label: LAB_004ba954
//   XREF to: Stack[-0x138] (DATA)
// 004ba95b: PUSH EAX
// 004ba95c: LEA EAX,[ESP + 0x68c]
//   XREF to: Stack[-0x14] (DATA)
// 004ba963: PUSH EAX
// 004ba964: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004ba969: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004ba96e: ADD ESP,0xc
// 004ba971: PUSH 0x0
// 004ba973: PUSH 0x0
// 004ba975: LEA EAX,[ESP + 0x56c]
//   XREF to: Stack[-0x138] (DATA)
// 004ba97c: PUSH EAX
// 004ba97d: LEA EAX,[ESP + 0x694]
//   XREF to: Stack[-0x14] (DATA)
// 004ba984: PUSH EAX
// 004ba985: PUSH EDI
// 004ba986: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004ba98b: ADD ESP,0x14
// 004ba98e: MOV ESI,0x626096
//   XREF to: 00626096 (DATA)
// 004ba993: PUSH EDI
// 004ba994: SUB ECX,ECX
// 004ba996: DEC ECX
// 004ba997: MOV AL,0x0
// 004ba999: SCASB.REPNE ES:EDI
// 004ba99b: DEC EDI
// 004ba99c: MOV AL,byte ptr [ESI]
//   Label: LAB_004ba99c
//   XREF to: 00626096 (READ)
//   XREF to: 00626098 (READ)
// 004ba99e: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x23c] (DATA)
// 004ba9a0: CMP AL,0x0
// 004ba9a2: JZ 0x004ba9b4
//   XREF to: 004ba9b4 (CONDITIONAL_JUMP)
// 004ba9a4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00626097 (READ)
//   XREF to: 00626099 (READ)
// 004ba9a7: ADD ESI,0x2
// 004ba9aa: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x23b] (WRITE)
// 004ba9ad: ADD EDI,0x2
// 004ba9b0: CMP AL,0x0
// 004ba9b2: JNZ 0x004ba99c
//   XREF to: 004ba99c (CONDITIONAL_JUMP)
// 004ba9b4: POP EDI
//   Label: LAB_004ba9b4
// 004ba9b5: PUSH EBP
// 004ba9b6: PUSH 0x6268ec
//   XREF to: 006268ec (DATA)
// 004ba9bb: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004ba9c1: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004ba9c2: XOR ESI,ESI
// 004ba9c4: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004ba9c9: LEA EDI,[ESP + 0x46c]
//   XREF to: Stack[-0x23c] (DATA)
// 004ba9d0: ADD ESP,0xc
// 004ba9d3: PUSH 0x153
//   Label: LAB_004ba9d3
// 004ba9d8: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004ba9dd: PUSH 0x626909
//   XREF to: 00626909 (DATA)
// 004ba9e2: PUSH 0x0
// 004ba9e4: PUSH EDI
// 004ba9e5: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004ba9ea: MOV EBX,EAX
// 004ba9ec: ADD ESP,0x14
// 004ba9ef: TEST EAX,EAX
// 004ba9f1: JZ 0x004bab12
//   XREF to: 004bab12 (CONDITIONAL_JUMP)
// 004ba9f7: PUSH 0x400
// 004ba9fc: PUSH 0x0
// 004ba9fe: PUSH 0x0
// 004baa00: PUSH EAX
// 004baa01: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004baa06: ADD ESP,0x10
// 004baa09: MOV dword ptr [ESP + 0x67c],EBX
//   Label: LAB_004baa09
//   XREF to: Stack[-0x20] (WRITE)
// 004baa10: TEST EBX,EBX
// 004baa12: JNZ 0x004bab39
//   XREF to: 004bab39 (CONDITIONAL_JUMP)
// 004baa18: LEA EAX,[ESP + 0x460]
//   XREF to: Stack[-0x23c] (DATA)
// 004baa1f: PUSH EAX
// 004baa20: PUSH 0x62690d
//   XREF to: 0062690d (DATA)
// 004baa25: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004baa2b: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004baa2c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   Label: LAB_004baa2c
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004baa31: ADD ESP,0xc
// 004baa34: MOV EDI,dword ptr [ESP + 0x67c]
//   Label: LAB_004baa34
//   XREF to: Stack[-0x20] (READ)
// 004baa3b: TEST EDI,EDI
// 004baa3d: JZ 0x004baa5b
//   XREF to: 004baa5b (CONDITIONAL_JUMP)
// 004baa3f: PUSH 0xc4
// 004baa44: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004baa49: PUSH EDI
// 004baa4a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004baa4f: ADD ESP,0xc
// 004baa52: XOR EAX,EAX
// 004baa54: MOV dword ptr [ESP + 0x67c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004baa5b: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004baa5b
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004baa60: LEA EAX,[ESP + 0x674]
//   XREF to: Stack[-0x28] (DATA)
// 004baa67: PUSH EAX
// 004baa68: MOV EBX,dword ptr [ESP + 0x688]
//   XREF to: Stack[-0x18] (READ)
// 004baa6f: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   Label: LAB_004baa6f
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004baa74: ADD ESP,0x4
// 004baa77: TEST EBX,EBX
// 004baa79: JLE 0x004ba76c
//   XREF to: 004ba76c (CONDITIONAL_JUMP)
// 004baa7f: PUSH 0x628dbd
//   Label: LAB_004baa7f
//   XREF to: 00628dbd (DATA)
// 004baa84: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004baa8a: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004baa8b: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 004baa90: ADD ESP,0x8
// 004baa93: TEST EAX,EAX
// 004baa95: JNZ 0x004badf0
//   XREF to: 004badf0 (CONDITIONAL_JUMP)
// 004baa9b: MOV EBP,0x1
// 004baaa0: MOV EAX,EBP
// 004baaa2: ADD ESP,0x68c
// 004baaa8: POP EBP
// 004baaa9: POP EDI
// 004baaaa: POP ESI
// 004baaab: POP EBX
// 004baaac: RET
// 004baaad: LEA EAX,[ESP + 0x35c]
//   Label: LAB_004baaad
//   XREF to: Stack[-0x340] (DATA)
// 004baab4: PUSH EAX
// 004baab5: PUSH 0x62654c
//   XREF to: 0062654c (DATA)
// 004baaba: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x69c] (DATA)
// 004baabe: PUSH EAX
// 004baabf: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004baac4: ADD ESP,0xc
// 004baac7: PUSH 0x2d12bf4
//   XREF to: 02d12bf4 (DATA)
// 004baacc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x69c] (DATA)
// 004baad0: PUSH EAX
// 004baad1: CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
//   XREF to: 004b2f90 (UNCONDITIONAL_CALL)
// 004baad6: ADD ESP,0x8
// 004baad9: JMP 0x004ba900
//   XREF to: 004ba900 (UNCONDITIONAL_JUMP)
// 004baade: MOV EBX,EAX
//   Label: LAB_004baade
// 004baae0: LEA EAX,[ESP + 0x674]
//   XREF to: Stack[-0x28] (DATA)
// 004baae7: PUSH EAX
// 004baae8: JMP 0x004baa6f
//   XREF to: 004baa6f (UNCONDITIONAL_JUMP)
// 004baaea: MOV EBX,0x626060
//   Label: LAB_004baaea
//   XREF to: 00626060 (DATA)
// 004baaef: MOV ESI,0xdd
// 004baaf4: PUSH 0x626075
//   XREF to: 00626075 (DATA)
// 004baaf9: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004baaff: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004bab05: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bab0a: ADD ESP,0x4
// 004bab0d: JMP 0x004ba954
//   XREF to: 004ba954 (UNCONDITIONAL_JUMP)
// 004bab12: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004bab12
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004bab17: CMP dword ptr [EAX],0x6
// 004bab1a: JNZ 0x004bab32
//   XREF to: 004bab32 (CONDITIONAL_JUMP)
// 004bab1c: PUSH 0x1f4
// 004bab21: INC ESI
// 004bab22: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004bab29: CMP ESI,0xa
// 004bab2c: JL 0x004ba9d3
//   XREF to: 004ba9d3 (CONDITIONAL_JUMP)
// 004bab32: XOR EBX,EBX
//   Label: LAB_004bab32
// 004bab34: JMP 0x004baa09
//   XREF to: 004baa09 (UNCONDITIONAL_JUMP)
// 004bab39: LEA EAX,[ESP + 0x67c]
//   Label: LAB_004bab39
//   XREF to: Stack[-0x20] (DATA)
// 004bab40: PUSH EAX
// 004bab41: LEA EAX,[ESP + 0x678]
//   XREF to: Stack[-0x28] (DATA)
// 004bab48: PUSH EAX
// 004bab49: CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   XREF to: 004b2a60 (UNCONDITIONAL_CALL)
// 004bab4e: ADD ESP,0x8
// 004bab51: TEST EAX,EAX
// 004bab53: JZ 0x004babfc
//   XREF to: 004babfc (CONDITIONAL_JUMP)
// 004bab59: PUSH EBP
// 004bab5a: LEA EAX,[ESP + 0x678]
//   XREF to: Stack[-0x28] (DATA)
// 004bab61: PUSH EAX
// 004bab62: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004bab67: ADD ESP,0x8
// 004bab6a: MOV EDI,EAX
// 004bab6c: TEST EAX,EAX
// 004bab6e: JL 0x004bac56
//   XREF to: 004bac56 (CONDITIONAL_JUMP)
// 004bab74: MOV ESI,dword ptr [ESP + 0x67c]
//   XREF to: Stack[-0x20] (READ)
// 004bab7b: TEST ESI,ESI
// 004bab7d: JZ 0x004bab9b
//   XREF to: 004bab9b (CONDITIONAL_JUMP)
// 004bab7f: PUSH 0xc4
// 004bab84: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bab89: PUSH ESI
// 004bab8a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bab8f: ADD ESP,0xc
// 004bab92: XOR EAX,EAX
// 004bab94: MOV dword ptr [ESP + 0x67c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004bab9b: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_004bab9b
// 004baba2: SUB EAX,EDI
// 004baba4: SHL EAX,0x3
// 004baba7: MOV ESI,EAX
// 004baba9: SHL ESI,0x4
// 004babac: SUB ESI,EAX
// 004babae: MOV EAX,dword ptr [ESP + 0x678]
//   XREF to: Stack[-0x24] (READ)
// 004babb5: ADD EAX,ESI
// 004babb7: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004babbc: ADD EAX,0x104
// 004babc1: PUSH EAX
// 004babc2: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004babc7: ADD ESP,0x8
// 004babca: MOV EBX,EAX
// 004babcc: MOV EAX,dword ptr [ESP + 0x678]
//   XREF to: Stack[-0x24] (READ)
// 004babd3: ADD EAX,ESI
// 004babd5: TEST EBX,EBX
// 004babd7: JNZ 0x004bac2c
//   XREF to: 004bac2c (CONDITIONAL_JUMP)
// 004babd9: PUSH EAX
// 004babda: PUSH 0x62691e
//   XREF to: 0062691e (DATA)
// 004babdf: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004babe5: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004babe6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004babeb: ADD ESP,0xc
// 004babee: XOR EBX,EBX
// 004babf0: MOV dword ptr [ESP + 0x684],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004babf7: JMP 0x004baa34
//   XREF to: 004baa34 (UNCONDITIONAL_JUMP)
// 004babfc: MOV ECX,dword ptr [ESP + 0x67c]
//   Label: LAB_004babfc
//   XREF to: Stack[-0x20] (READ)
// 004bac03: TEST ECX,ECX
// 004bac05: JZ 0x004baa34
//   XREF to: 004baa34 (CONDITIONAL_JUMP)
// 004bac0b: PUSH 0xc4
// 004bac10: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bac15: PUSH ECX
// 004bac16: XOR ESI,ESI
// 004bac18: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bac1d: ADD ESP,0xc
// 004bac20: MOV dword ptr [ESP + 0x67c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004bac27: JMP 0x004baa5b
//   XREF to: 004baa5b (UNCONDITIONAL_JUMP)
// 004bac2c: LEA EBX,[EAX + 0x104]
//   Label: LAB_004bac2c
// 004bac32: PUSH EBX
// 004bac33: PUSH EAX
// 004bac34: PUSH 0x62693e
//   XREF to: 0062693e (DATA)
// 004bac39: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bac3f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bac40: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bac45: ADD ESP,0x10
// 004bac48: XOR EBX,EBX
// 004bac4a: MOV dword ptr [ESP + 0x684],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004bac51: JMP 0x004baa34
//   XREF to: 004baa34 (UNCONDITIONAL_JUMP)
// 004bac56: LEA EDI,[ESP + 0x1f4]
//   Label: LAB_004bac56
//   XREF to: Stack[-0x4a8] (DATA)
// 004bac5d: MOV ESI,EBP
// 004bac5f: PUSH EDI
// 004bac60: MOV AL,byte ptr [ESI]
//   Label: LAB_004bac60
//   XREF to: Stack[-0x340] (DATA)
// 004bac62: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x4a8] (DATA)
// 004bac64: CMP AL,0x0
// 004bac66: JZ 0x004bac78
//   XREF to: 004bac78 (CONDITIONAL_JUMP)
// 004bac68: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x33f] (READ)
// 004bac6b: ADD ESI,0x2
// 004bac6e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x4a7] (WRITE)
// 004bac71: ADD EDI,0x2
// 004bac74: CMP AL,0x0
// 004bac76: JNZ 0x004bac60
//   XREF to: 004bac60 (CONDITIONAL_JUMP)
// 004bac78: POP EDI
//   Label: LAB_004bac78
// 004bac79: MOV ESI,0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004bac7e: LEA EDI,[ESP + 0x2f8]
//   XREF to: Stack[-0x3a4] (DATA)
// 004bac85: PUSH EDI
// 004bac86: MOV AL,byte ptr [ESI]
//   Label: LAB_004bac86
//   XREF to: 02d12bd0 (READ)
//   XREF to: 02d12bd2 (READ)
// 004bac88: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x3a4] (DATA)
// 004bac8a: CMP AL,0x0
// 004bac8c: JZ 0x004bac9e
//   XREF to: 004bac9e (CONDITIONAL_JUMP)
// 004bac8e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02d12bd1 (READ)
//   XREF to: 02d12bd3 (READ)
// 004bac91: ADD ESI,0x2
// 004bac94: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x3a3] (WRITE)
// 004bac97: ADD EDI,0x2
// 004bac9a: CMP AL,0x0
// 004bac9c: JNZ 0x004bac86
//   XREF to: 004bac86 (CONDITIONAL_JUMP)
// 004bac9e: POP EDI
//   Label: LAB_004bac9e
// 004bac9f: LEA EAX,[ESP + 0x1f4]
//   XREF to: Stack[-0x4a8] (DATA)
// 004baca6: PUSH EAX
// 004baca7: LEA EAX,[ESP + 0x678]
//   XREF to: Stack[-0x28] (DATA)
// 004bacae: PUSH EAX
// 004bacaf: CALL engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
//   XREF to: 004b2d00 (UNCONDITIONAL_CALL)
// 004bacb4: ADD ESP,0x8
// 004bacb7: TEST EAX,EAX
// 004bacb9: JNZ 0x004bacfb
//   XREF to: 004bacfb (CONDITIONAL_JUMP)
// 004bacbb: MOV EDI,dword ptr [ESP + 0x67c]
//   XREF to: Stack[-0x20] (READ)
// 004bacc2: TEST EDI,EDI
// 004bacc4: JZ 0x004bace2
//   XREF to: 004bace2 (CONDITIONAL_JUMP)
// 004bacc6: PUSH 0xc4
// 004baccb: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bacd0: PUSH EDI
// 004bacd1: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bacd6: ADD ESP,0xc
// 004bacd9: XOR EAX,EAX
// 004bacdb: MOV dword ptr [ESP + 0x67c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004bace2: PUSH 0x626960
//   Label: LAB_004bace2
//   XREF to: 00626960 (DATA)
// 004bace7: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004baced: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bacee: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bacf3: ADD ESP,0x8
// 004bacf6: JMP 0x004baa34
//   XREF to: 004baa34 (UNCONDITIONAL_JUMP)
// 004bacfb: LEA EAX,[ESP + 0x67c]
//   Label: LAB_004bacfb
//   XREF to: Stack[-0x20] (DATA)
// 004bad02: PUSH EAX
// 004bad03: LEA EAX,[ESP + 0x678]
//   XREF to: Stack[-0x28] (DATA)
// 004bad0a: PUSH EAX
// 004bad0b: CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)
// 004bad10: ADD ESP,0x8
// 004bad13: TEST EAX,EAX
// 004bad15: JZ 0x004baa34
//   XREF to: 004baa34 (CONDITIONAL_JUMP)
// 004bad1b: MOV ECX,dword ptr [ESP + 0x67c]
//   XREF to: Stack[-0x20] (READ)
// 004bad22: TEST ECX,ECX
// 004bad24: JZ 0x004bad42
//   XREF to: 004bad42 (CONDITIONAL_JUMP)
// 004bad26: PUSH 0xc4
// 004bad2b: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004bad30: PUSH ECX
// 004bad31: XOR ESI,ESI
// 004bad33: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bad38: ADD ESP,0xc
// 004bad3b: MOV dword ptr [ESP + 0x67c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004bad42: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004bad42
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004bad47: PUSH EBP
// 004bad48: PUSH 0x6269ae
//   XREF to: 006269ae (DATA)
// 004bad4d: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bad53: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004bad54: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bad59: ADD ESP,0xc
// 004bad5c: PUSH EBP
// 004bad5d: MOV EAX,dword ptr [ESP + 0x684]
//   XREF to: Stack[-0x1c] (READ)
// 004bad64: PUSH EAX
// 004bad65: CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   XREF to: 004b3220 (UNCONDITIONAL_CALL)
// 004bad6a: ADD ESP,0x8
// 004bad6d: TEST EAX,EAX
// 004bad6f: JZ 0x004badcb
//   XREF to: 004badcb (CONDITIONAL_JUMP)
// 004bad71: LEA EAX,[ESP + 0x460]
//   Label: LAB_004bad71
//   XREF to: Stack[-0x23c] (DATA)
// 004bad78: PUSH EAX
// 004bad79: PUSH 0x6269bc
//   XREF to: 006269bc (DATA)
// 004bad7e: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bad84: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bad85: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bad8a: ADD ESP,0xc
// 004bad8d: PUSH EBP
// 004bad8e: PUSH 0x0
// 004bad90: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004bad95: ADD ESP,0x8
// 004bad98: MOV EBX,EAX
// 004bad9a: TEST EAX,EAX
// 004bad9c: JL 0x004badb2
//   XREF to: 004badb2 (CONDITIONAL_JUMP)
// 004bad9e: TEST AL,0x8
// 004bada0: JZ 0x004badb2
//   XREF to: 004badb2 (CONDITIONAL_JUMP)
// 004bada2: AND AL,0xf7
// 004bada4: PUSH EAX
// 004bada5: PUSH EBP
// 004bada6: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004badab: ADD ESP,0x8
// 004badae: TEST EAX,EAX
// 004badb0: JZ 0x004badde
//   XREF to: 004badde (CONDITIONAL_JUMP)
// 004badb2: TEST EBX,EBX
//   Label: LAB_004badb2
// 004badb4: JL 0x004badde
//   XREF to: 004badde (CONDITIONAL_JUMP)
// 004badb6: LEA EAX,[ESP + 0x674]
//   XREF to: Stack[-0x28] (DATA)
// 004badbd: PUSH EAX
// 004badbe: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004badc3: ADD ESP,0x4
// 004badc6: JMP 0x004baa7f
//   XREF to: 004baa7f (UNCONDITIONAL_JUMP)
// 004badcb: PUSH EBP
//   Label: LAB_004badcb
// 004badcc: MOV EDX,dword ptr [ESP + 0x684]
//   XREF to: Stack[-0x1c] (READ)
// 004badd3: PUSH EDX
// 004badd4: CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   XREF to: 004b35a0 (UNCONDITIONAL_CALL)
// 004badd9: ADD ESP,0x8
// 004baddc: JMP 0x004bad71
//   XREF to: 004bad71 (UNCONDITIONAL_JUMP)
// 004badde: PUSH EBP
//   Label: LAB_004badde
// 004baddf: PUSH 0x6269dd
//   XREF to: 006269dd (DATA)
// 004bade4: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004badea: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004badeb: JMP 0x004baa2c
//   XREF to: 004baa2c (UNCONDITIONAL_JUMP)
// 004badf0: MOV EAX,dword ptr [ESP + 0x6a0]
//   Label: LAB_004badf0
//   XREF to: Stack[0x4] (READ)
// 004badf7: MOV dword ptr [EAX + 0x13880c],0x1
// 004bae01: PUSH 0x0
// 004bae03: MOV EBX,dword ptr [EAX + 0x138810]
// 004bae09: LEA EAX,[ESP + 0x360]
//   XREF to: Stack[-0x340] (DATA)
// 004bae10: PUSH EAX
// 004bae11: MOV ECX,dword ptr [ESP + 0x6a8]
//   XREF to: Stack[0x4] (READ)
// 004bae18: PUSH ECX
// 004bae19: CALL dword ptr [EBX]
// 004bae1b: ADD ESP,0xc
// 004bae1e: MOV EAX,dword ptr [ESP + 0x6a0]
// 004bae25: MOV dword ptr [EAX + 0x13880c],0x0
// 004bae2f: LEA EAX,[ESP + 0x664]
// 004bae36: PUSH EAX
// 004bae37: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004bae3c: ADD ESP,0x4
// 004bae3f: LEA EAX,[ESP + 0x664]
// 004bae46: PUSH EAX
// 004bae47: MOV EBX,dword ptr [ESP + 0x6a4]
// 004bae4e: PUSH EBX
// 004bae4f: CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)
// 004bae54: ADD ESP,0x8
// 004bae57: LEA EAX,[ESP + 0x35c]
// 004bae5e: PUSH EAX
// 004bae5f: LEA EAX,[ESP + 0x668]
// 004bae66: PUSH EAX
// 004bae67: PUSH EBX
// 004bae68: CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
// 004bae6d: ADD ESP,0xc
// 004bae70: TEST EAX,EAX
// 004bae72: JL 0x004bae96
//   XREF to: 004bae96 (CONDITIONAL_JUMP)
// 004bae74: PUSH EAX
// 004bae75: LEA EAX,[ESP + 0x668]
// 004bae7c: PUSH EAX
// 004bae7d: CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
// 004bae82: ADD ESP,0x8
// 004bae85: LEA EAX,[ESP + 0x664]
// 004bae8c: PUSH EAX
// 004bae8d: PUSH EBX
// 004bae8e: CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   XREF to: 004ba620 (UNCONDITIONAL_CALL)
// 004bae93: ADD ESP,0x8
// 004bae96: CMP dword ptr [0x00680cdc],0x0
//   Label: LAB_004bae96
//   XREF to: 00680cdc (READ)
// 004bae9d: JZ 0x004baed3
//   XREF to: 004baed3 (CONDITIONAL_JUMP)
// 004bae9f: PUSH 0x62759a
//   XREF to: 0062759a (DATA)
// 004baea4: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004baea9: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004baeaa: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004baeaf: ADD ESP,0x8
// 004baeb2: MOV EDX,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004baeb8: PUSH EDX
//   XREF to: 030e5090 (DATA)
// 004baeb9: CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   XREF to: 00550c80 (UNCONDITIONAL_CALL)
// 004baebe: ADD ESP,0x4
// 004baec1: MOV EAX,[0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004baec6: PUSH EAX
//   XREF to: 030e5090 (DATA)
// 004baec7: MOV EBX,dword ptr [EAX + 0x194]
//   XREF to: 030e5224 (READ)
// 004baecd: CALL dword ptr [EBX + 0x4]
// 004baed0: ADD ESP,0x4
// 004baed3: PUSH 0x0
//   Label: LAB_004baed3
// 004baed5: LEA EAX,[ESP + 0x668]
// 004baedc: PUSH EAX
// 004baedd: MOV EBP,0x1
// 004baee2: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004baee7: ADD ESP,0x8
// 004baeea: MOV EAX,EBP
// 004baeec: ADD ESP,0x68c
// 004baef2: POP EBP
// 004baef3: POP EDI
// 004baef4: POP ESI
// 004baef5: POP EBX
// 004baef6: RET
