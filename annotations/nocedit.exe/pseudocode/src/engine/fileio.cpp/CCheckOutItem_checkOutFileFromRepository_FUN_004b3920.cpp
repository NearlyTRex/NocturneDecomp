// Name: engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
// Address: 004b3920
// Address Range: [[004b3920, 004b3f43]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920(CCheckOutItem *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920(CCheckOutItem *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _FILE *stream_ptr;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  SVersionControlSession *pSVar7;
  char *pcVar8;
  CCheckOutItem *pCVar9;
  byte bVar10;
  char *pcVar11;
  int local_584 [125];
  CCheckOutItem local_390;
  char local_228 [260];
  char local_124 [256];
  CCheckOutList local_24;
  _FILE *local_1c;
  int local_18;
  char local_14 [4];
  
  bVar10 = 0;
  local_1c = (_FILE *)0x0;
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return -1;
  }
  local_24.count = 0;
  local_24.items = (CCheckOutItem *)0x0;
  iVar2 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_24);
  if (iVar2 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
    return 0;
  }
  iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_24,filename);
  if (-1 < iVar2) {
    iVar5 = _stricmp
                      (local_24.items[iVar2].value,g_VersionControlSession.primary_username);
    pCVar9 = local_24.items + iVar2;
    if (iVar5 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out",pCVar9);
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar9,pCVar9->value);
    }
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
    return 0;
  }
  g_VersionControlSession.overwrite_own_choice = 0;
  g_VersionControlSession.overwrite_writeable_choice = 0;
  uVar3 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,filename);
  if (((int)uVar3 < 0) || ((uVar3 & 8) != 0)) {
    iVar2 = 1;
  }
  else {
    _sprintf
              ((char *)local_584,"A writable copy of %s exists.  Replace it?",filename);
    iVar2 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                      (local_584,(char *)&g_VersionControlSession.overwrite_writeable_choice);
  }
  if (iVar2 < 1) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
    return iVar2;
  }
  local_18 = -1;
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar2 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar2 != 0) goto LAB_004b39fc;
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
  pcVar6 = "checkout.txt";
  iVar2 = -1;
  pcVar11 = local_228;
  do {
    pcVar8 = pcVar11;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar11 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Marking %s as checked out...");
  iVar2 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_228,(char *)0x0,"r+t","..\\engine\\fileio.cpp",0x153)
    ;
    if (stream_ptr != (_FILE *)0x0) {
      _setvbuf(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b3ac6;
    }
    piVar4 = (int *)_errno();
    if (*piVar4 != 6) break;
    iVar2 = iVar2 + 1;
    (*g_SleepFunc)(500);
  } while (iVar2 < 10);
  stream_ptr = (_FILE *)0x0;
LAB_004b3ac6:
  local_1c = stream_ptr;
  if (stream_ptr == (_FILE *)0x0) {
    filename = local_228;
    pcVar11 = "Can't access %s.";
LAB_004b3ae9:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar11,filename);
  }
  else {
    iVar2 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_24,&local_1c);
    if (iVar2 == 0) {
      if (local_1c != (_FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
        local_1c = (_FILE *)0x0;
        goto LAB_004b3b18;
      }
    }
    else {
      iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_24,filename);
      if (iVar2 < 0) {
        pCVar9 = &local_390;
        pcVar11 = filename;
        do {
          cVar1 = *pcVar11;
          pCVar9->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pCVar9->name[1] = cVar1;
          pCVar9 = (CCheckOutItem *)(pCVar9->name + 2);
        } while (cVar1 != '\0');
        pSVar7 = &g_VersionControlSession;
        pcVar11 = local_390.value;
        do {
          cVar1 = pSVar7->primary_username[0];
          *pcVar11 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pSVar7->primary_username[1];
          pSVar7 = (SVersionControlSession *)(pSVar7->primary_username + 2);
          pcVar11[1] = cVar1;
          pcVar11 = pcVar11 + 2;
        } while (cVar1 != '\0');
        iVar2 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(&local_24,&local_390);
        if (iVar2 == 0) {
          if (local_1c != (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
            local_1c = (_FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
        }
        else {
          iVar2 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_24,&local_1c);
          if (iVar2 != 0) {
            if (local_1c != (_FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
              local_1c = (_FILE *)0x0;
            }
            engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Getting %s...");
            iVar2 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                              (this_ptr->name,filename);
            if (iVar2 == 0) {
              engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                        (this_ptr,filename);
            }
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Clearing read-only bit for %s...");
            uVar3 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,filename);
            if (((int)uVar3 < 0) || ((uVar3 & 8) == 0)) {
LAB_004b3f0c:
              if (-1 < (int)uVar3) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
                return 1;
              }
            }
            else {
              iVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(filename,(byte)uVar3 & 0xf7);
              if (iVar2 != 0) goto LAB_004b3f0c;
            }
            pcVar11 = "Error turning off read-only bit for %s";
            goto LAB_004b3ae9;
          }
        }
      }
      else {
        if (local_1c != (_FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
          local_1c = (_FILE *)0x0;
        }
        iVar5 = _stricmp
                          (local_24.items[iVar2].value,g_VersionControlSession.primary_username);
        pCVar9 = local_24.items + iVar2;
        if (iVar5 == 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"You already have %s checked out",pCVar9);
          local_18 = 0;
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar9,pCVar9->value);
          local_18 = 0;
        }
      }
    }
  }
LAB_004b3af1:
  if (local_1c != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\fileio.cpp",0xc4);
    local_1c = (_FILE *)0x0;
  }
LAB_004b3b18:
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  iVar2 = local_18;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_24);
  return iVar2;
}
