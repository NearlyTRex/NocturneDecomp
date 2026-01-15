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
  bool bVar2;
  int iVar3;
  uint uVar4;
  FILE *stream_ptr;
  int *piVar5;
  int iVar6;
  undefined3 extraout_var;
  char *pcVar7;
  SVersionControlSession *pSVar8;
  char *pcVar9;
  CCheckOutItem *pCVar10;
  byte bVar11;
  char *pcVar12;
  int local_584 [125];
  CCheckOutItem local_390;
  char local_228 [260];
  char local_124 [256];
  CCheckOutList local_24;
  FILE *local_1c;
  int local_18;
  char local_14 [4];
  
  bVar11 = 0;
  local_1c = (FILE *)0x0;
  iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar3 == 0) {
    return -1;
  }
  local_24.count = 0;
  local_24.items = (CCheckOutItem *)0x0;
  iVar3 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_24);
  if (iVar3 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
    return 0;
  }
  iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_24,filename);
  if (-1 < iVar3) {
    iVar6 = crt_string_c_stricmp_FUN_005fe7f0
                      (local_24.items[iVar3].value,g_VersionControlSession.primary_username);
    pCVar10 = local_24.items + iVar3;
    if (iVar6 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out",pCVar10);
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar10,pCVar10->value);
    }
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
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
  uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,filename);
  if (((int)uVar4 < 0) || ((uVar4 & 8) != 0)) {
    iVar3 = 1;
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)local_584,"A writable copy of %s exists.  Replace it?",filename)
    ;
    iVar3 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                      (local_584,g_VersionControlSession.field1_0x20 + 4);
  }
  if (iVar3 < 1) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
    return iVar3;
  }
  local_18 = -1;
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar3 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar3 != 0) goto LAB_004b39fc;
    goto LAB_004b3af1;
  }
LAB_004b39fc:
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_14,local_124);
  engine_dosio_c_makePath_FUN_00481f50(local_228,local_14,local_124,(char *)0x0,(char *)0x0);
  pcVar7 = "checkout.txt";
  iVar3 = -1;
  pcVar12 = local_228;
  do {
    pcVar9 = pcVar12;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar12 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Marking %s as checked out...");
  iVar3 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_228,(char *)0x0,"r+t","..\\engine\\fileio.cpp",0x153)
    ;
    if (stream_ptr != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b3ac6;
    }
    piVar5 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar5 != 6) break;
    iVar3 = iVar3 + 1;
    (*Sleep)(500);
  } while (iVar3 < 10);
  stream_ptr = (FILE *)0x0;
LAB_004b3ac6:
  local_1c = stream_ptr;
  if (stream_ptr == (FILE *)0x0) {
    filename = local_228;
    pcVar12 = "Can't access %s.";
LAB_004b3ae9:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar12,filename);
  }
  else {
    iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_24,&local_1c);
    if (iVar3 == 0) {
      if (local_1c != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
        local_1c = (FILE *)0x0;
        goto LAB_004b3b18;
      }
    }
    else {
      iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_24,filename);
      if (iVar3 < 0) {
        pCVar10 = &local_390;
        pcVar12 = filename;
        do {
          cVar1 = *pcVar12;
          pCVar10->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pCVar10->name[1] = cVar1;
          pCVar10 = (CCheckOutItem *)(pCVar10->name + 2);
        } while (cVar1 != '\0');
        pSVar8 = &g_VersionControlSession;
        pcVar12 = local_390.value;
        do {
          cVar1 = pSVar8->primary_username[0];
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pSVar8->primary_username[1];
          pSVar8 = (SVersionControlSession *)(pSVar8->primary_username + 2);
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
        iVar3 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(&local_24,&local_390);
        if (iVar3 == 0) {
          if (local_1c != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
            local_1c = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
        }
        else {
          iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_24,&local_1c);
          if (iVar3 != 0) {
            if (local_1c != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
              local_1c = (FILE *)0x0;
            }
            engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Getting %s...");
            iVar3 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                              (this_ptr->name,filename);
            if (iVar3 == 0) {
              engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                        (this_ptr,filename);
            }
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Clearing read-only bit for %s...");
            uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,filename);
            if (((int)uVar4 < 0) || ((uVar4 & 8) == 0)) {
LAB_004b3f0c:
              if (-1 < (int)uVar4) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
                return 1;
              }
            }
            else {
              bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(filename,(byte)uVar4 & 0xf7);
              if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0) goto LAB_004b3f0c;
            }
            pcVar12 = "Error turning off read-only bit for %s";
            goto LAB_004b3ae9;
          }
        }
      }
      else {
        if (local_1c != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
          local_1c = (FILE *)0x0;
        }
        iVar6 = crt_string_c_stricmp_FUN_005fe7f0
                          (local_24.items[iVar3].value,g_VersionControlSession.primary_username);
        pCVar10 = local_24.items + iVar3;
        if (iVar6 == 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"You already have %s checked out",pCVar10);
          local_18 = 0;
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar10,pCVar10->value);
          local_18 = 0;
        }
      }
    }
  }
LAB_004b3af1:
  if (local_1c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
    local_1c = (FILE *)0x0;
  }
LAB_004b3b18:
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  iVar3 = local_18;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
  return iVar3;
}
