// Name: engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
// Address: 004b3920
// Address Range: [[004b3920, 004b3f43]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920(CCheckOutItem * this_ptr, char * filename)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
          (CCheckOutItem *this_ptr,char *filename)

{
  char cVar1;
  char *filename_00;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  SVersionControlSession *pSVar9;
  char *pcVar10;
  CCheckOutItem *pCVar11;
  byte bVar12;
  CCheckOutItem *in_stack_00000010;
  CCheckOutItem *in_stack_00000014;
  CCheckOutItem *in_stack_00000018;
  FILE *in_stack_0000001c;
  FILE *in_stack_00000020;
  uint in_stack_00000024;
  int in_stack_00000038;
  CCheckOutItem *in_stack_0000003c;
  int in_stack_00000040;
  CCheckOutItem *in_stack_00000044;
  uint in_stack_00000048;
  char *in_stack_0000004c;
  CCheckOutItem *in_stack_00000050;
  CEditorTools *in_stack_fffffacc;
  char *in_stack_fffffad0;
  CCheckOutItem CStack_35c;
  char acStack_10c [4];
  char acStack_108 [232];
  byte local_20 [12];
  int local_14;
  
  filename_00 = filename;
  bVar12 = 0;
  local_20._4_4_ = (CCheckOutItem *)0x0;
  iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar3 == 0) {
    return -1;
  }
  local_20._0_4_ = 0;
  local_20._4_4_ = (CCheckOutItem *)0x0;
  iVar3 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890((CCheckOutList *)local_20);
  if (iVar3 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_20 + 4));
    return 0;
  }
  iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                    ((CCheckOutList *)(local_20 + 4),filename_00);
  if (-1 < iVar3) {
    iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                      ((char *)(local_14 + iVar3 * 0x168 + 0x104),
                       g_VersionControlSession.primary_username);
    iVar3 = unaff_EBP + iVar3 * 0x168;
    if (iVar5 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out",iVar3);
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s",iVar3,iVar3 + 0x104);
    }
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff0);
    return 0;
  }
  g_VersionControlSession.field1_0x20[0] = '\0';
  g_VersionControlSession.field1_0x20[1] = '\0';
  g_VersionControlSession.field1_0x20[2] = '\0';
  g_VersionControlSession.field1_0x20[3] = '\0';
  g_VersionControlSession.field1_0x20[4] = '\0';
  g_VersionControlSession.field1_0x20[5] = '\0';
  g_VersionControlSession.field1_0x20[6] = '\0';
  g_VersionControlSession.field1_0x20[7] = '\0';
  uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,filename_00);
  if (((int)uVar4 < 0) || ((uVar4 & 8) != 0)) {
    iVar3 = 1;
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffa8c,"A writable copy of %s exists.  Replace it?",filename_00);
    iVar3 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                      ((int *)&stack0xfffffa90,g_VersionControlSession.field1_0x20 + 4);
  }
  if (iVar3 < 1) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff4);
    return iVar3;
  }
  if (g_VersionControlSession.network_username[0] == '\0') {
LAB_004b39fc:
    if (g_VersionControlDirectory[0] == '\0') {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xdd;
      core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
    }
    engine_dosio_c_ensureTrailingSlash_FUN_00481f80
              (g_VersionControlDirectory,(char *)&this_ptr,acStack_10c);
    engine_dosio_c_makePath_FUN_00481f50
              (CStack_35c.value + 0x48,(char *)&filename,acStack_108,(char *)0x0,(char *)0x0);
    pcVar7 = "checkout.txt";
    iVar3 = -1;
    pcVar8 = CStack_35c.value + 0x48;
    do {
      pcVar10 = pcVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar8 + (uint)bVar12 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
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
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Marking %s as checked out...");
    iVar3 = 0;
    do {
      in_stack_00000010 =
           (CCheckOutItem *)
           shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (CStack_35c.value + 0x50,(char *)0x0,"r+t",
                      "..\\engine\\fileio.cpp",0x153);
      if (in_stack_00000010 != (CCheckOutItem *)0x0) {
        crt_stdio_c_setvbuf_FUN_00601490((FILE *)in_stack_00000010,(char *)0x0,0,0x400);
        goto LAB_004b3ac6;
      }
      piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
      if (*piVar6 != 6) break;
      iVar3 = iVar3 + 1;
      (*Sleep)(500);
    } while (iVar3 < 10);
    in_stack_00000010 = (CCheckOutItem *)0x0;
LAB_004b3ac6:
    if (in_stack_00000010 == (CCheckOutItem *)0x0) {
LAB_004b3ae9:
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(in_stack_fffffacc,in_stack_fffffad0);
    }
    else {
      iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                        ((CCheckOutList *)&filename,(FILE **)&stack0x00000010);
      if (iVar3 == 0) {
        if (in_stack_00000014 != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)in_stack_00000014,"..\\engine\\fileio.cpp",0xc4);
          in_stack_00000044 = (CCheckOutItem *)0x0;
          goto LAB_004b3b18;
        }
      }
      else {
        iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                          ((CCheckOutList *)&stack0x0000000c,filename_00);
        if (iVar3 < 0) {
          pCVar11 = &CStack_35c;
          pcVar8 = filename_00;
          do {
            cVar1 = *pcVar8;
            pCVar11->name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pCVar11->name[1] = cVar1;
            pCVar11 = (CCheckOutItem *)(pCVar11->name + 2);
          } while (cVar1 != '\0');
          pSVar9 = &g_VersionControlSession;
          pcVar8 = CStack_35c.value;
          do {
            cVar1 = pSVar9->primary_username[0];
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pSVar9->primary_username[1];
            pSVar9 = (SVersionControlSession *)(pSVar9->primary_username + 2);
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
          iVar3 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00
                            ((CCheckOutList *)&stack0x00000010,&CStack_35c);
          if (iVar3 == 0) {
            if (in_stack_0000001c != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        (in_stack_0000001c,"..\\engine\\fileio.cpp",0xc4);
              in_stack_00000040 = 0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
          }
          else {
            iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                              ((CCheckOutList *)&stack0x00000014,&stack0x0000001c);
            if (iVar3 != 0) {
              if (in_stack_00000020 != (FILE *)0x0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0
                          (in_stack_00000020,"..\\engine\\fileio.cpp",0xc4);
                in_stack_00000024 = 0;
              }
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Getting %s...");
              iVar3 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                                (in_stack_0000004c,filename_00);
              if (iVar3 == 0) {
                engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (in_stack_00000050,filename_00);
              }
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Clearing read-only bit for %s...");
              uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,filename_00);
              if (((((int)uVar4 < 0) || ((uVar4 & 8) == 0)) ||
                  (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                     (filename_00,(byte)uVar4 & 0xf7),
                  CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0)) && (-1 < (int)uVar4)) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860
                          ((CCheckOutList *)&stack0x00000038);
                return 1;
              }
              in_stack_fffffad0 = "Error turning off read-only bit for %s";
              in_stack_fffffacc = g_CEditorToolsPtr;
              goto LAB_004b3ae9;
            }
          }
        }
        else {
          if (in_stack_00000018 != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)in_stack_00000018,"..\\engine\\fileio.cpp",0xc4);
            in_stack_0000003c = (CCheckOutItem *)0x0;
          }
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                            ((char *)(in_stack_00000038 + iVar3 * 0x168 + 0x104),
                             g_VersionControlSession.primary_username);
          if (iVar3 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"You already have %s checked out");
            in_stack_00000048 = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"%s is currently checked out by %s");
            in_stack_00000048 = 0;
          }
        }
      }
    }
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar3 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar3 != 0) goto LAB_004b39fc;
  }
  if (in_stack_00000044 != (CCheckOutItem *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)in_stack_00000044,"..\\engine\\fileio.cpp",0xc4);
    in_stack_00000044 = (CCheckOutItem *)0x0;
  }
LAB_004b3b18:
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000040);
  return (int)in_stack_0000004c;
}
