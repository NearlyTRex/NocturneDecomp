// Name: engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
// Address: 004b35a0
// Address Range: [[004b35a0, 004b391c]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem *this_ptr,void *unused_param)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem *this_ptr,void *unused_param)

{
  char cVar2;
  int iVar2;
  _FILE *stream_ptr;
  int *piVar3;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar7;
  byte bVar7;
  char local_224 [260];
  char local_120 [256];
  CCheckOutList local_20;
  _FILE *local_18;
  char local_14 [4];
  char cVar1;
  char *pcVar6;
  
  bVar7 = 0;
  local_18 = (_FILE *)0x0;
  if (g_VersionControlSession.primary_username[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x402;
    core_main_c_displayErrorAndQuit_FUN_00506f10("removeCheckOutBookkeeping - don't know user name!");
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar2 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar2 == 0) goto LAB_004b36da;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Marking %s as no longer checked out",unused_param);
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_14,local_120);
  engine_dosio_c_makePath_FUN_00481f50(local_224,local_14,local_120,(char *)0x0,(char *)0x0);
  pcVar4 = "checkout.txt";
  iVar3 = -1;
  pcVar5 = local_224;
  do {
    pcVar5 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5;
  } while (cVar1 != '\0');
  pcVar7 = pcVar5 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  iVar3 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_224,(char *)0x0,"r+t","..\\engine\\fileio.cpp",0x153)
    ;
    if (stream_ptr != (_FILE *)0x0) {
      _setvbuf(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b36b4;
    }
    piVar3 = _errno();
    if (*piVar3 != 6) break;
    iVar3 = iVar3 + 1;
    (*g_SleepFunc)(500);
  } while (iVar3 < 10);
  stream_ptr = (_FILE *)0x0;
LAB_004b36b4:
  local_18 = stream_ptr;
  if (stream_ptr == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't access %s.",local_224);
  }
  else {
    local_20.count = 0;
    local_20.items = (CCheckOutItem *)0x0;
    iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(&local_20,&local_18);
    if (iVar3 == 0) {
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_20);
    }
    else {
      iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_20,unused_param);
      if (iVar3 < 0) {
        if (local_18 != (_FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0xc4);
          local_18 = (_FILE *)0x0;
        }
        engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
        shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                  (g_CEditorToolsPtr,"Tried to undo checkout on %s, but you didn't have the file checked out!\nThis should never happen.\nPlease leave this on your screen and show this to Fletch.",unused_param);
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_20);
        return 1;
      }
      iVar3 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(&local_20,iVar3);
      if (iVar3 == 0) {
        if (local_18 != (_FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0xc4);
          local_18 = (_FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
      }
      else {
        iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(&local_20,&local_18);
        if (iVar3 != 0) {
          if (local_18 != (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0xc4);
            local_18 = (_FILE *)0x0;
          }
          engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_20);
          return 1;
        }
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_20);
    }
  }
LAB_004b36da:
  if (local_18 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0xc4);
    local_18 = (_FILE *)0x0;
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}
